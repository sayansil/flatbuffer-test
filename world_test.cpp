#include <iostream>
#include <chitragupta_generated.h>
#include <flatbuffers/idl.h>
#include <fmt/core.h>
#include <flatbuffers/minireflect.h>
#include <nlohmann/json.hpp>

flatbuffers::Offset<Ecosystem::Organism> createOrganism(
    flatbuffers::FlatBufferBuilder &builder,
    Ecosystem::OrganismBuilder &organism_builder,
    const std::string &name)
{
    organism_builder.add_name(builder.CreateString(name.c_str()));
    organism_builder.add_is_asexual(Ecosystem::Reproduction::Asexual);
    return organism_builder.Finish();
}

flatbuffers::Offset<Ecosystem::Species> createSpecies(
    flatbuffers::FlatBufferBuilder &builder,
    Ecosystem::SpeciesBuilder &species_builder,
    const std::string &kingdom,
    const std::string &kind)
{
    std::vector<flatbuffers::Offset<Ecosystem::Organism>> stdvecOrganisms;
    Ecosystem::OrganismBuilder organism_builder(builder);

    for (int i = 0; i < 10; i++)
    {
        stdvecOrganisms.push_back(createOrganism(builder, organism_builder, fmt::format("name_{}_{}", kind, i)));
    }

    species_builder.add_kingdom(builder.CreateString(kingdom.c_str()));
    species_builder.add_kind(builder.CreateString(kind.c_str()));
    species_builder.add_organism(builder.CreateVector(stdvecOrganisms));

    return species_builder.Finish();
}

void createWorld(flatbuffers::FlatBufferBuilder &builder)
{
    Ecosystem::WorldBuilder world_builder(builder);

    std::vector<flatbuffers::Offset<Ecosystem::Species>> stdvecSpecies;
    Ecosystem::SpeciesBuilder species_builder(builder);

    stdvecSpecies.push_back(createSpecies(builder, species_builder, "animal", "deer"));
    stdvecSpecies.push_back(createSpecies(builder, species_builder, "animal", "lion"));
    stdvecSpecies.push_back(createSpecies(builder, species_builder, "plant", "bamboo"));

    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ecosystem::Species>>> species_vec = builder.CreateVector(stdvecSpecies.data(), stdvecSpecies.size());

    world_builder.add_species(species_vec);
    world_builder.add_year(builder.CreateString("2022"));
    builder.Finish(world_builder.Finish());
}

int main()
{
    flatbuffers::FlatBufferBuilder builder;
    createWorld(builder);

    uint8_t *buffer_pointer = builder.GetBufferPointer();
    auto world_pointer = Ecosystem::GetWorld(buffer_pointer);

    fmt::print("\nsize: {} bytes \n", builder.GetSize());
    fmt::print("Year: {}\n", world_pointer->year()->str());
    if (world_pointer->species())
    {
        fmt::print("world has species\n");
        fmt::print("Species num: {}\n", world_pointer->species()->size());
        for (int i = 0; i < world_pointer->species()->size(); i++)
        {
            auto species_pointer = world_pointer->species()->Get(i);
            fmt::print("species kind: {}\n", species_pointer->kind()->str());
            fmt::print("species kingdom: {}\n", species_pointer->kingdom()->str());
        }
    }
    else
    {
        fmt::print("world does not have species\n");
    }

    flatbuffers::ToStringVisitor visitor("", true, "", true);
    flatbuffers::IterateFlatBuffer(buffer_pointer, Ecosystem::WorldTypeTable(), &visitor);
    nlohmann::json json_data = nlohmann::json::parse(visitor.s);
    fmt::print("Parsed JSON:\n{}\n", json_data.dump());
}
