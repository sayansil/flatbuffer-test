#include <iostream>
#include <animal_generated.h>
#include <fmt/core.h>
#include <flatbuffers/idl.h>

int main()
{
    // create builders   
    flatbuffers::FlatBufferBuilder builder;
    Ecosystem::OrganismBuilder ram_builder(builder);
    
    // set values as needed
    ram_builder.add_food_chain_rank(6);
    ram_builder.add_chromosome_number(4);
    
    flatbuffers::Offset<Ecosystem::Organism> ram = ram_builder.Finish();
    
    builder.Finish(ram);

    uint8_t * buffer_pointer = builder.GetBufferPointer();
    int size = builder.GetSize();
    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", buffer_pointer[i]);
    fmt::print("\nsize: {} bytes \n", size);
    
    // Call GetOrganism to get const pointer if no changes need to be made
    Ecosystem::Organism* ram_pointer = Ecosystem::GetMutableOrganism(buffer_pointer);
    
    fmt::print("chromosome_number: {} food_chain_rank: {}\n", ram_pointer->chromosome_number(), ram_pointer->food_chain_rank());
    ram_pointer->mutate_chromosome_number(9);
    fmt::print("chromosome_number: {} food_chain_rank: {}\n", ram_pointer->chromosome_number(), ram_pointer->food_chain_rank());
}
