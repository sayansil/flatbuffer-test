#include <iostream>
#include <chitragupta_generated.h>
#include <flatbuffers/idl.h>
#include <fmt/core.h>
#include <flatbuffers/minireflect.h>
#include <nlohmann/json.hpp>
#include <map>

enum class JsonTypes
{
    STRING,
    DOUBLE,
    ULONG,
    BYTE, // For Reproduction & Gender Enums
};

std::string getValueAsStr(nlohmann::json &attributes, const std::string &key)
{
    return attributes.find(key) != attributes.end() ? attributes[key].get<std::string>() : "";
}

uint64_t getValueAsUlong(nlohmann::json &attributes, const std::string &key)
{
    return attributes.find(key) != attributes.end() ? attributes[key].get<uint64_t>() : 0;
}

double getValueAsDouble(nlohmann::json &attributes, const std::string &key)
{
    return attributes.find(key) != attributes.end() ? attributes[key].get<double>() : 0.0;
}

int8_t getValueAsByte(nlohmann::json &attributes, const std::string &key)
{
    return attributes.find(key) != attributes.end() ? attributes[key].get<int8_t>() : 0;
}

flatbuffers::Offset<Ecosystem::Organism> createOrganism(
    flatbuffers::FlatBufferBuilder &builder,
    nlohmann::json &attributes)
{
    return Ecosystem::CreateOrganism(builder,
            builder.CreateString(getValueAsStr(attributes, "kind").c_str()),
            builder.CreateString(getValueAsStr(attributes, "kingdom").c_str()),
            getValueAsUlong(attributes, "chromosome_number"),
            getValueAsUlong(attributes, "food_chain_rank"),
            Ecosystem::Reproduction(getValueAsByte(attributes, "is_asexual")),
            getValueAsDouble(attributes, "age_fitness_on_death_ratio"),
            getValueAsDouble(attributes, "conceiving_probability"),
            getValueAsDouble(attributes, "mating_probability"),
            getValueAsDouble(attributes, "mating_age_start"),
            getValueAsDouble(attributes, "mating_age_end"),
            getValueAsDouble(attributes, "max_age"),
            getValueAsDouble(attributes, "mutation_probability"),
            getValueAsDouble(attributes, "offsprings_factor"),
            getValueAsDouble(attributes, "height_on_speed"),
            getValueAsDouble(attributes, "height_on_stamina"),
            getValueAsDouble(attributes, "height_on_vitality"),
            getValueAsDouble(attributes, "weight_on_speed"),
            getValueAsDouble(attributes, "weight_on_stamina"),
            getValueAsDouble(attributes, "weight_on_vitality"),
            getValueAsDouble(attributes, "vitality_on_appetite"),
            getValueAsDouble(attributes, "vitality_on_speed"),
            getValueAsDouble(attributes, "stamina_on_appetite"),
            getValueAsDouble(attributes, "stamina_on_speed"),
            getValueAsDouble(attributes, "theoretical_maximum_base_appetite"),
            getValueAsDouble(attributes, "theoretical_maximum_base_height"),
            getValueAsDouble(attributes, "theoretical_maximum_base_speed"),
            getValueAsDouble(attributes, "theoretical_maximum_base_stamina"),
            getValueAsDouble(attributes, "theoretical_maheximum_base_vitality"),
            getValueAsDouble(attributes, "theoretical_maximum_base_weight"),
            getValueAsDouble(attributes, "theoretical_maximum_height"),
            getValueAsDouble(attributes, "theoretical_maximum_speed"),
            getValueAsDouble(attributes, "theoretical_maximum_weight"),
            getValueAsDouble(attributes, "theoretical_maximum_height_multiplier"),
            getValueAsDouble(attributes, "theoretical_maximum_speed_multiplier"),
            getValueAsDouble(attributes, "theoretical_maximum_stamina_multiplier"),
            getValueAsDouble(attributes, "theoretical_maximum_vitality_multiplier"),
            getValueAsDouble(attributes, "theoretical_maximum_weight_multiplier"),
            builder.CreateString(getValueAsStr(attributes, "name").c_str()),
            builder.CreateString(getValueAsStr(attributes, "chromosome").c_str()),
            Ecosystem::Gender(getValueAsByte(attributes, "gender")),
            getValueAsUlong(attributes, "generation"),
            getValueAsDouble(attributes, "immunity"),
            getValueAsDouble(attributes, "base_appetite"),
            getValueAsDouble(attributes, "base_height"),
            getValueAsDouble(attributes, "base_speed"),
            getValueAsDouble(attributes, "base_stamina"),
            getValueAsDouble(attributes, "base_vitality"),
            getValueAsDouble(attributes, "base_weight"),
            getValueAsDouble(attributes, "height_multiplier"),
            getValueAsDouble(attributes, "speed_multiplier"),
            getValueAsDouble(attributes, "stamina_multiplier"),
            getValueAsDouble(attributes, "vitality_multiplier"),
            getValueAsDouble(attributes, "weight_multiplier"),
            getValueAsDouble(attributes, "max_height"),
            getValueAsDouble(attributes, "max_weight"),
            getValueAsUlong(attributes, "age"),
            getValueAsDouble(attributes, "height"),
            getValueAsDouble(attributes, "weight"),
            getValueAsDouble(attributes, "age_death_factor"),
            getValueAsDouble(attributes, "fitness_death_factor"),
            getValueAsDouble(attributes, "death_factor"),
            getValueAsDouble(attributes, "static_fitness"),
            getValueAsDouble(attributes, "max_appetite_at_age"),
            getValueAsDouble(attributes, "max_speed_at_age"),
            getValueAsDouble(attributes, "max_stamina_at_age"),
            getValueAsDouble(attributes, "max_vitality_at_age"),
            getValueAsDouble(attributes, "vision_radius"),
            getValueAsDouble(attributes, "sleep_restore_factor")
    );
}

flatbuffers::Offset<Ecosystem::Species> createSpecies(
    flatbuffers::FlatBufferBuilder &builder,
    const std::string &kingdom,
    const std::string &kind,
    const int &num_organisms)
{
    std::vector<flatbuffers::Offset<Ecosystem::Organism>> stdvecOrganisms;
    nlohmann::json attributes;

    attributes["kind"] = kind;
    attributes["kingdom"] = kingdom;

    for (int i = 0; i < num_organisms; i++)
    {
        attributes["name"] = fmt::format("name_{}_{}", kind, i);
        stdvecOrganisms.push_back(createOrganism(builder, attributes));
    }

    return Ecosystem::CreateSpecies(builder,
                                    builder.CreateString(kind.c_str()),  /* kind */
                                    builder.CreateString(kingdom.c_str()), /* kingdom */
                                    builder.CreateVectorOfSortedTables(stdvecOrganisms.data(), stdvecOrganisms.size())
                                    );
}

void createWorld(flatbuffers::FlatBufferBuilder &builder)
{

    /*
       While creating nested structures always CREATE everything first and only then ADD them to the buffer.
       You cannot call any "create" function after any "add" function.
       Inscribe these words on your heart and soul.
       Piece of gold: https://github.com/google/flatbuffers/issues/276
    */

    // Create everything first

    auto year = builder.CreateString("2022");
    std::vector<flatbuffers::Offset<Ecosystem::Species>> stdvecSpecies;

    stdvecSpecies.push_back(createSpecies(builder, "animal", "deer", 2));
    stdvecSpecies.push_back(createSpecies(builder, "animal", "lion", 1));
    stdvecSpecies.push_back(createSpecies(builder, "plant", "bamboo", 3));

    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ecosystem::Species>>> species_vec = builder.CreateVectorOfSortedTables(stdvecSpecies.data(), stdvecSpecies.size());

    // Creation ends addition begins

    Ecosystem::WorldBuilder world_builder(builder);

    //Ecosystem::SpeciesBuilder species_builder(builder);

    world_builder.add_year(year);
    world_builder.add_species(species_vec);
    builder.Finish(world_builder.Finish());
}

const Ecosystem::Species *lookUpSpecies(const Ecosystem::World *world_pointer, const std::string &kind)
{
    fmt::print("\nLooking for {}\n", kind);
    const Ecosystem::Species *species_pointer = world_pointer->species()->LookupByKey(kind.c_str());
    if (species_pointer)
    {
        fmt::print("Found {} of kingdom {}\n", species_pointer->kind()->c_str(), species_pointer->kingdom()->c_str());
    }
    else
    {
        fmt::print("species not found\n");
    }
    return species_pointer;
}

int main()
{
    flatbuffers::FlatBufferBuilder builder;
    createWorld(builder);
    fmt::print("\nsize: {} bytes \n", builder.GetSize());

    const Ecosystem::World *world_pointer = Ecosystem::GetWorld(builder.GetBufferPointer());

    fmt::print("Year: {}\n", world_pointer->year()->str());
    if (world_pointer->species())
    {
        fmt::print("world has species\n");
        fmt::print("Species num: {}\n", world_pointer->species()->size());
        for (int i = 0; i < world_pointer->species()->size(); i++)
        {
            const Ecosystem::Species *species_pointer = world_pointer->species()->Get(i);
            fmt::print("species kind: {}\n", species_pointer->kind()->str());
            fmt::print("species kingdom: {}\n", species_pointer->kingdom()->str());
        }

        auto x = lookUpSpecies(world_pointer, "deer");
        auto y = lookUpSpecies(world_pointer, "lion1");
        auto z = lookUpSpecies(world_pointer, "bamboo");

        assert(y == nullptr);
    }
    else
    {
        fmt::print("world does not have species\n");
    }

    flatbuffers::ToStringVisitor visitor("", true, "", true);
    flatbuffers::IterateFlatBuffer(builder.GetBufferPointer(), Ecosystem::WorldTypeTable(), &visitor);
    nlohmann::json json_data = nlohmann::json::parse(visitor.s);
    fmt::print("Parsed JSON:\n{}\n", json_data.dump(4));
}
