#include <iostream>
#include <chitragupta_generated.h>
#include <flatbuffers/idl.h>
#include <fmt/core.h>

int main()
{
    flatbuffers::FlatBufferBuilder builder;


    // Creating a species object
    auto species1 = Ecosystem::CreateSpecies(builder);
    Ecosystem::SpeciesBuilder species_builder(builder);
    species_builder.add_kind(builder.CreateString("deer"));
    species_builder.Finish();

    std::vector<flatbuffers::Offset<Ecosystem::Species>> species_vec;
    species_vec.push_back(species1);

    Ecosystem::WorldBuilder world_builder(builder);
    world_builder.add_species(builder.CreateVector(species_vec));
    world_builder.add_year(builder.CreateString("2022"));

    auto world = Ecosystem::CreateWorld(builder);
    world_builder.Finish();
    builder.Finish(world);
    
    uint8_t * buffer_pointer = builder.GetBufferPointer();
    int size = builder.GetSize();
    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", buffer_pointer[i]);
    fmt::print("\nsize: {} bytes \n", size);

    auto world_pointer = Ecosystem::GetWorld(buffer_pointer);
    fmt::print("Year: {}\n", world_pointer->year()->str());
    if(world_pointer->species())
    {
        auto species_vec = world_pointer->species();
        int species_num = species_vec->size();
        fmt::print("Species num: {}\n", species_num);
    }
    else
    {
        fmt::print("world does not have species\n");
    }
}
