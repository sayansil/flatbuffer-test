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

// template <typename T>
// T getValue(nlohmann::json &attributes, const std::string &key, const JsonTypes &type)
// {
//     fmt::print("kind: {}", key);
//     if (type == JsonTypes::STRING)
//     {
//         fmt::print("type: {}", "STRING");
//         return attributes.find(key) != attributes.end() ? attributes[key].get<std::string>() : "";
//     }
//     else if (type == JsonTypes::DOUBLE)
//     {
//         fmt::print("type: {}", "DOUBLE");
//         return attributes.find(key) != attributes.end() ? attributes[key].get() : 0.0;
//     }
//     else if (type == JsonTypes::ULONG)
//     {
//         fmt::print("type: {}", "ULONG");
//         return attributes.find(key) != attributes.end() ? attributes[key].get() : 0;
//     }
//     else if (type == JsonTypes::BYTE)
//     {
//         fmt::print("type: {}", "BYTE");
//         return attributes.find(key) != attributes.end() ? attributes[key].get() : 0;
//     }
//     else
//     {
//         throw std::runtime_error("Invalid Json Type");
//     }
// }

const char *getValueAsStr(nlohmann::json &attributes, const std::string &key)
{
    return attributes.find(key) != attributes.end() ? attributes[key].get<std::string>().c_str() : "";
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
    Ecosystem::OrganismBuilder &organism_builder,
    nlohmann::json &attributes)
{
    organism_builder.add_kind(builder.CreateString(getValueAsStr(attributes, "kind")));
    organism_builder.add_kingdom(builder.CreateString(getValueAsStr(attributes, "kingdom")));
    organism_builder.add_chromosome_number(getValueAsUlong(attributes, "chromosome_number"));
    organism_builder.add_food_chain_rank(getValueAsUlong(attributes, "food_chain_rank"));
    organism_builder.add_is_asexual(Ecosystem::Reproduction(getValueAsByte(attributes, "is_asexual")));
    organism_builder.add_age_fitness_on_death_ratio(getValueAsDouble(attributes, "age_fitness_on_death_ratio"));
    organism_builder.add_conceiving_probability(getValueAsDouble(attributes, "conceiving_probability"));
    organism_builder.add_mating_probability(getValueAsDouble(attributes, "mating_probability"));
    organism_builder.add_mating_age_start(getValueAsDouble(attributes, "mating_age_start"));
    organism_builder.add_mating_age_end(getValueAsDouble(attributes, "mating_age_end"));
    organism_builder.add_max_age(getValueAsDouble(attributes, "max_age"));
    organism_builder.add_mutation_probability(getValueAsDouble(attributes, "mutation_probability"));
    organism_builder.add_offsprings_factor(getValueAsDouble(attributes, "offsprings_factor"));
    organism_builder.add_height_on_speed(getValueAsDouble(attributes, "height_on_speed"));
    organism_builder.add_height_on_stamina(getValueAsDouble(attributes, "height_on_stamina"));
    organism_builder.add_height_on_vitality(getValueAsDouble(attributes, "height_on_vitality"));
    organism_builder.add_weight_on_speed(getValueAsDouble(attributes, "weight_on_speed"));
    organism_builder.add_weight_on_stamina(getValueAsDouble(attributes, "weight_on_stamina"));
    organism_builder.add_weight_on_vitality(getValueAsDouble(attributes, "weight_on_vitality"));
    organism_builder.add_vitality_on_appetite(getValueAsDouble(attributes, "vitality_on_appetite"));
    organism_builder.add_vitality_on_speed(getValueAsDouble(attributes, "vitality_on_speed"));
    organism_builder.add_stamina_on_appetite(getValueAsDouble(attributes, "stamina_on_appetite"));
    organism_builder.add_stamina_on_speed(getValueAsDouble(attributes, "stamina_on_speed"));
    organism_builder.add_theoretical_maximum_base_appetite(getValueAsDouble(attributes, "theoretical_maximum_base_appetite"));
    organism_builder.add_theoretical_maximum_base_height(getValueAsDouble(attributes, "theoretical_maximum_base_height"));
    organism_builder.add_theoretical_maximum_base_speed(getValueAsDouble(attributes, "theoretical_maximum_base_speed"));
    organism_builder.add_theoretical_maximum_base_stamina(getValueAsDouble(attributes, "theoretical_maximum_base_stamina"));
    organism_builder.add_theoretical_maheximum_base_vitality(getValueAsDouble(attributes, "theoretical_maheximum_base_vitality"));
    organism_builder.add_theoretical_maximum_base_weight(getValueAsDouble(attributes, "theoretical_maximum_base_weight"));
    organism_builder.add_theoretical_maximum_height(getValueAsDouble(attributes, "theoretical_maximum_height"));
    organism_builder.add_theoretical_maximum_speed(getValueAsDouble(attributes, "theoretical_maximum_speed"));
    organism_builder.add_theoretical_maximum_weight(getValueAsDouble(attributes, "theoretical_maximum_weight"));
    organism_builder.add_theoretical_maximum_height_multiplier(getValueAsDouble(attributes, "theoretical_maximum_height_multiplier"));
    organism_builder.add_theoretical_maximum_speed_multiplier(getValueAsDouble(attributes, "theoretical_maximum_speed_multiplier"));
    organism_builder.add_theoretical_maximum_stamina_multiplier(getValueAsDouble(attributes, "theoretical_maximum_stamina_multiplier"));
    organism_builder.add_theoretical_maximum_vitality_multiplier(getValueAsDouble(attributes, "theoretical_maximum_vitality_multiplier"));
    organism_builder.add_theoretical_maximum_weight_multiplier(getValueAsDouble(attributes, "theoretical_maximum_weight_multiplier"));
    organism_builder.add_name(builder.CreateString(getValueAsStr(attributes, "name")));
    organism_builder.add_chromosome(builder.CreateString(getValueAsStr(attributes, "chromosome")));
    organism_builder.add_gender(Ecosystem::Gender(getValueAsByte(attributes, "gender")));
    organism_builder.add_generation(getValueAsUlong(attributes, "generation"));
    organism_builder.add_immunity(getValueAsDouble(attributes, "immunity"));
    organism_builder.add_base_appetite(getValueAsDouble(attributes, "base_appetite"));
    organism_builder.add_base_height(getValueAsDouble(attributes, "base_height"));
    organism_builder.add_base_speed(getValueAsDouble(attributes, "base_speed"));
    organism_builder.add_base_stamina(getValueAsDouble(attributes, "base_stamina"));
    organism_builder.add_base_vitality(getValueAsDouble(attributes, "base_vitality"));
    organism_builder.add_base_weight(getValueAsDouble(attributes, "base_weight"));
    organism_builder.add_height_multiplier(getValueAsDouble(attributes, "height_multiplier"));
    organism_builder.add_speed_multiplier(getValueAsDouble(attributes, "speed_multiplier"));
    organism_builder.add_stamina_multiplier(getValueAsDouble(attributes, "stamina_multiplier"));
    organism_builder.add_vitality_multiplier(getValueAsDouble(attributes, "vitality_multiplier"));
    organism_builder.add_weight_multiplier(getValueAsDouble(attributes, "weight_multiplier"));
    organism_builder.add_max_height(getValueAsDouble(attributes, "max_height"));
    organism_builder.add_max_weight(getValueAsDouble(attributes, "max_weight"));
    organism_builder.add_age(getValueAsUlong(attributes, "age"));
    organism_builder.add_height(getValueAsDouble(attributes, "height"));
    organism_builder.add_weight(getValueAsDouble(attributes, "weight"));
    organism_builder.add_age_death_factor(getValueAsDouble(attributes, "age_death_factor"));
    organism_builder.add_fitness_death_factor(getValueAsDouble(attributes, "fitness_death_factor"));
    organism_builder.add_death_factor(getValueAsDouble(attributes, "death_factor"));
    organism_builder.add_static_fitness(getValueAsDouble(attributes, "static_fitness"));
    organism_builder.add_max_appetite_at_age(getValueAsDouble(attributes, "max_appetite_at_age"));
    organism_builder.add_max_speed_at_age(getValueAsDouble(attributes, "max_speed_at_age"));
    organism_builder.add_max_stamina_at_age(getValueAsDouble(attributes, "max_stamina_at_age"));
    organism_builder.add_max_vitality_at_age(getValueAsDouble(attributes, "max_vitality_at_age"));
    organism_builder.add_vision_radius(getValueAsDouble(attributes, "vision_radius"));
    organism_builder.add_sleep_restore_factor(getValueAsDouble(attributes, "sleep_restore_factor"));

    return organism_builder.Finish();
}

flatbuffers::Offset<Ecosystem::Species> createSpecies(
    flatbuffers::FlatBufferBuilder &builder,
    Ecosystem::SpeciesBuilder &species_builder,
    const std::string &kingdom,
    const std::string &kind,
    const int &num_organisms)
{
    std::vector<flatbuffers::Offset<Ecosystem::Organism>> stdvecOrganisms;
    Ecosystem::OrganismBuilder organism_builder(builder);
    nlohmann::json attributes;

    attributes["kind"] = kind;
    attributes["kingdom"] = kingdom;

    for (int i = 0; i < num_organisms; i++)
    {
        attributes["name"] = fmt::format("name_{}_{}", kind, i);
        stdvecOrganisms.push_back(createOrganism(builder, organism_builder, attributes));
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

    stdvecSpecies.push_back(createSpecies(builder, species_builder, "animal", "deer", 2));
    stdvecSpecies.push_back(createSpecies(builder, species_builder, "animal", "lion", 1));
    stdvecSpecies.push_back(createSpecies(builder, species_builder, "plant", "bamboo", 3));

    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ecosystem::Species>>> species_vec = builder.CreateVector(stdvecSpecies.data(), stdvecSpecies.size());

    world_builder.add_species(species_vec);
    world_builder.add_year(builder.CreateString("2022"));
    builder.Finish(world_builder.Finish());
}

int main()
{
    flatbuffers::FlatBufferBuilder builder;
    createWorld(builder);
    fmt::print("\nsize: {} bytes \n", builder.GetSize());

    auto world_pointer = Ecosystem::GetWorld(builder.GetBufferPointer());

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
    flatbuffers::IterateFlatBuffer(builder.GetBufferPointer(), Ecosystem::WorldTypeTable(), &visitor);
    nlohmann::json json_data = nlohmann::json::parse(visitor.s);
    fmt::print("Parsed JSON:\n{}\n", json_data.dump());
}
