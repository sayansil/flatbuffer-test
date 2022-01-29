#include <iostream>
#include <chitragupta_generated.h>
#include <fmt/core.h>
#include <flatbuffers/minireflect.h>
#include <nlohmann/json.hpp>

int main()
{
    flatbuffers::FlatBufferBuilder builder;

    Ecosystem::WorldT world;
    world.year = "2022";
    
    world.species.push_back(std::make_unique<Ecosystem::SpeciesT>());
    world.species[0]->kind = "deer";
    world.species[0]->organism.push_back(std::make_unique<Ecosystem::OrganismT>());
    world.species[0]->organism[0]->kingdom = "animal";
    
    world.species.push_back(std::make_unique<Ecosystem::SpeciesT>());
    world.species[1]->kind = "bamboo";
    world.species[1]->organism.push_back(std::make_unique<Ecosystem::OrganismT>());
    world.species[1]->organism[0]->kingdom = "plant";

    builder.Finish(Ecosystem::World::Pack(builder, &world));

    uint8_t * buffer_pointer = builder.GetBufferPointer();
    int size = builder.GetSize();
    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", buffer_pointer[i]);
    fmt::print("\nsize: {} bytes \n", size);

    Ecosystem::WorldT world1;
    Ecosystem::GetWorld(buffer_pointer)->UnPackTo(&world1);
    fmt::print("Year: {}\n", world1.year);
    if(world1.species.size())
    {
        const auto &species_vec = world1.species;
        int species_num = species_vec.size();
        fmt::print("Species num: {}\n", species_num);
        for(const auto& species : species_vec)
        {
            fmt::print("species kind: {}\n", species->kind);
            for(const auto& organisms : species->organism)
            {
                fmt::print("kingdom: {}\n", organisms->kingdom);
            }
        }
    }
    else
    {
        fmt::print("world does not have species\n");
    }
    
    flatbuffers::ToStringVisitor visitor("", true, "", true);
    flatbuffers::IterateFlatBuffer(buffer_pointer, Ecosystem::WorldTypeTable(), &visitor);
    fmt::print("{}\n", visitor.s);

    nlohmann::json json_data = nlohmann::json::parse(visitor.s);
    fmt::print("Parsed JSON:\n{}\n", json_data.dump());
}
