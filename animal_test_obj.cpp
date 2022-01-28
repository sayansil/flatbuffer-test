#include <iostream>
#include <animal_generated.h>
#include <fmt/core.h>
#include <flatbuffers/idl.h>

int main()
{
    // create builders   
    flatbuffers::FlatBufferBuilder builder;
    Ecosystem::OrganismT org;
    org.food_chain_rank = 94;
    org.chromosome_number = 37;
    builder.Finish(Ecosystem::Organism::Pack(builder, &org));

    uint8_t * buffer_pointer = builder.GetBufferPointer();
    int size = builder.GetSize();
    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", buffer_pointer[i]);
    fmt::print("\nsize: {} bytes \n", size);

    Ecosystem::OrganismT obj;
    Ecosystem::GetOrganism(buffer_pointer)->UnPackTo(&obj);
    fmt::print("chromosome_number: {} food_chain_rank: {}\n", obj.chromosome_number, obj.food_chain_rank);

    obj.chromosome_number += 10;
    fmt::print("Modifying chromosome_number to {}\n", obj.chromosome_number);
    fmt::print("Buffer after modification:\n");
    
    flatbuffers::FlatBufferBuilder fbb1;
    fbb1.Finish(Ecosystem::Organism::Pack(fbb1, &obj));

    for(int i = 0; i < size; i++)
        fmt::print("{:#04x} ", fbb1.GetBufferPointer()[i]);
    fmt::print("\nsize: {} bytes \n", size);
} 
