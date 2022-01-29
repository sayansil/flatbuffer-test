#include <iostream>
#include <chitragupta_generated.h>
#include <flatbuffers/idl.h>
#include <fmt/core.h>

int main()
{
    flatbuffers::FlatBufferBuilder builder;
    Ecosystem::WorldBuilder world_builder(builder);

    Ecosystem::SpeciesBuilder species_builder1(builder);
    species_builder1.add_kind(builder.CreateString("animal"));
    
    std::vector<flatbuffers::Offset<Ecosystem::Species>> stdvecSpecies;
    stdvecSpecies.push_back(species_builder1.Finish());
    
    Ecosystem::SpeciesBuilder species_builder2(builder);
    species_builder2.add_kind(builder.CreateString("plant"));
    stdvecSpecies.push_back(species_builder2.Finish());

    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ecosystem::Species>>> species_vec = builder.CreateVector(stdvecSpecies.data(), stdvecSpecies.size());

    world_builder.add_species(species_vec);
    world_builder.add_year(builder.CreateString("2022"));
    flatbuffers::Offset<Ecosystem::World> world_offset = world_builder.Finish();
    builder.Finish(world_offset);

    uint8_t * buffer_pointer = builder.GetBufferPointer();
    int size = builder.GetSize();
    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", buffer_pointer[i]);
    fmt::print("\nsize: {} bytes \n", size);

    auto world_pointer = Ecosystem::GetWorld(buffer_pointer);
    fmt::print("Year: {}\n", world_pointer->year()->str());
    if(world_pointer->species())
    {
        fmt::print("world has species\n");
        auto species_vec = world_pointer->species();
        int species_num = species_vec->size();
        fmt::print("Species num: {}\n", species_num);
        auto species1 = species_vec->Get(0);
        fmt::print("kind: {}\n", species1->kind()->str());
        auto species2 = species_vec->Get(1);
        fmt::print("kind: {}\n", species2->kind()->str());
    }
    else
    {
        fmt::print("world does not have species\n");
    }
}
