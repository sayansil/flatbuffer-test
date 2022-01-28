// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_
#define FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_

#include "flatbuffers/flatbuffers.h"

namespace Ecosystem {

struct Animal;
struct AnimalBuilder;

struct Animal FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AnimalBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_YEAR = 4,
    VT_MALE_POPULATION = 6,
    VT_FEMALE_POPULATION = 8,
    VT_MATABLE_MALE_POPULATION = 10,
    VT_MATABLE_FEMALE_POPULATION = 12,
    VT_CONCEIVING_PROBABILITY = 14,
    VT_MATING_PROBABILITY = 16,
    VT_MATING_AGE_START = 18,
    VT_MATING_AGE_END = 20,
    VT_MAX_AGE = 22,
    VT_MUTATION_PROBABILITY = 24,
    VT_OFFSPRINGS_FACTOR = 26,
    VT_AGE_FITNESS_ON_DEATH_RATIO = 28,
    VT_HEIGHT_ON_SPEED = 30,
    VT_HEIGHT_ON_STAMINA = 32,
    VT_HEIGHT_ON_VITALITY = 34,
    VT_WEIGHT_ON_SPEED = 36,
    VT_WEIGHT_ON_STAMINA = 38,
    VT_WEIGHT_ON_VITALITY = 40,
    VT_VITALITY_ON_APPETITE = 42,
    VT_VITALITY_ON_SPEED = 44,
    VT_STAMINA_ON_APPETITE = 46,
    VT_STAMINA_ON_SPEED = 48,
    VT_THEORETICAL_MAXIMUM_BASE_APPETITE = 50,
    VT_THEORETICAL_MAXIMUM_BASE_HEIGHT = 52,
    VT_THEORETICAL_MAXIMUM_BASE_SPEED = 54,
    VT_THEORETICAL_MAXIMUM_BASE_STAMINA = 56,
    VT_THEORETICAL_MAXIMUM_BASE_VITALITY = 58,
    VT_THEORETICAL_MAXIMUM_BASE_WEIGHT = 60,
    VT_THEORETICAL_MAXIMUM_HEIGHT = 62,
    VT_THEORETICAL_MAXIMUM_SPEED = 64,
    VT_THEORETICAL_MAXIMUM_WEIGHT = 66,
    VT_THEORETICAL_MAXIMUM_HEIGHT_MULTIPLIER = 68,
    VT_THEORETICAL_MAXIMUM_SPEED_MULTIPLIER = 70,
    VT_THEORETICAL_MAXIMUM_STAMINA_MULTIPLIER = 72,
    VT_THEORETICAL_MAXIMUM_VITALITY_MULTIPLIER = 74,
    VT_THEORETICAL_MAXIMUM_WEIGHT_MULTIPLIER = 76,
    VT_SLEEP_RESTORE_FACTOR = 78,
    VT_AVERAGE_GENERATION = 80,
    VT_AVERAGE_IMMUNITY = 82,
    VT_AVERAGE_AGE = 84,
    VT_AVERAGE_HEIGHT = 86,
    VT_AVERAGE_WEIGHT = 88,
    VT_AVERAGE_MAX_APPETITE_AT_AGE = 90,
    VT_AVERAGE_MAX_SPEED_AT_AGE = 92,
    VT_AVERAGE_MAX_STAMINA_AT_AGE = 94,
    VT_AVERAGE_MAX_VITALITY_AT_AGE = 96,
    VT_AVERAGE_STATIC_FITNESS = 98,
    VT_AVERAGE_AGE_DEATH_FACTOR = 100,
    VT_AVERAGE_FITNESS_DEATH_FACTOR = 102,
    VT_AVERAGE_DEATH_FACTOR = 104,
    VT_AVERAGE_VISION_RADIUS = 106
  };
  uint64_t year() const {
    return GetField<uint64_t>(VT_YEAR, 0);
  }
  bool KeyCompareLessThan(const Animal *o) const {
    return year() < o->year();
  }
  int KeyCompareWithValue(uint64_t val) const {
    return static_cast<int>(year() > val) - static_cast<int>(year() < val);
  }
  uint64_t male_population() const {
    return GetField<uint64_t>(VT_MALE_POPULATION, 0);
  }
  uint64_t female_population() const {
    return GetField<uint64_t>(VT_FEMALE_POPULATION, 0);
  }
  double matable_male_population() const {
    return GetField<double>(VT_MATABLE_MALE_POPULATION, 0.0);
  }
  double matable_female_population() const {
    return GetField<double>(VT_MATABLE_FEMALE_POPULATION, 0.0);
  }
  double conceiving_probability() const {
    return GetField<double>(VT_CONCEIVING_PROBABILITY, 0.0);
  }
  double mating_probability() const {
    return GetField<double>(VT_MATING_PROBABILITY, 0.0);
  }
  uint32_t mating_age_start() const {
    return GetField<uint32_t>(VT_MATING_AGE_START, 0);
  }
  uint32_t mating_age_end() const {
    return GetField<uint32_t>(VT_MATING_AGE_END, 0);
  }
  uint32_t max_age() const {
    return GetField<uint32_t>(VT_MAX_AGE, 0);
  }
  double mutation_probability() const {
    return GetField<double>(VT_MUTATION_PROBABILITY, 0.0);
  }
  double offsprings_factor() const {
    return GetField<double>(VT_OFFSPRINGS_FACTOR, 0.0);
  }
  double age_fitness_on_death_ratio() const {
    return GetField<double>(VT_AGE_FITNESS_ON_DEATH_RATIO, 0.0);
  }
  double height_on_speed() const {
    return GetField<double>(VT_HEIGHT_ON_SPEED, 0.0);
  }
  double height_on_stamina() const {
    return GetField<double>(VT_HEIGHT_ON_STAMINA, 0.0);
  }
  double height_on_vitality() const {
    return GetField<double>(VT_HEIGHT_ON_VITALITY, 0.0);
  }
  double weight_on_speed() const {
    return GetField<double>(VT_WEIGHT_ON_SPEED, 0.0);
  }
  double weight_on_stamina() const {
    return GetField<double>(VT_WEIGHT_ON_STAMINA, 0.0);
  }
  double weight_on_vitality() const {
    return GetField<double>(VT_WEIGHT_ON_VITALITY, 0.0);
  }
  double vitality_on_appetite() const {
    return GetField<double>(VT_VITALITY_ON_APPETITE, 0.0);
  }
  double vitality_on_speed() const {
    return GetField<double>(VT_VITALITY_ON_SPEED, 0.0);
  }
  double stamina_on_appetite() const {
    return GetField<double>(VT_STAMINA_ON_APPETITE, 0.0);
  }
  double stamina_on_speed() const {
    return GetField<double>(VT_STAMINA_ON_SPEED, 0.0);
  }
  double theoretical_maximum_base_appetite() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_APPETITE, 0.0);
  }
  double theoretical_maximum_base_height() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_HEIGHT, 0.0);
  }
  double theoretical_maximum_base_speed() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_SPEED, 0.0);
  }
  double theoretical_maximum_base_stamina() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_STAMINA, 0.0);
  }
  double theoretical_maximum_base_vitality() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_VITALITY, 0.0);
  }
  double theoretical_maximum_base_weight() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_BASE_WEIGHT, 0.0);
  }
  double theoretical_maximum_height() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_HEIGHT, 0.0);
  }
  double theoretical_maximum_speed() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_SPEED, 0.0);
  }
  double theoretical_maximum_weight() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_WEIGHT, 0.0);
  }
  double theoretical_maximum_height_multiplier() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_HEIGHT_MULTIPLIER, 0.0);
  }
  double theoretical_maximum_speed_multiplier() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_SPEED_MULTIPLIER, 0.0);
  }
  double theoretical_maximum_stamina_multiplier() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_STAMINA_MULTIPLIER, 0.0);
  }
  double theoretical_maximum_vitality_multiplier() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_VITALITY_MULTIPLIER, 0.0);
  }
  double theoretical_maximum_weight_multiplier() const {
    return GetField<double>(VT_THEORETICAL_MAXIMUM_WEIGHT_MULTIPLIER, 0.0);
  }
  double sleep_restore_factor() const {
    return GetField<double>(VT_SLEEP_RESTORE_FACTOR, 0.0);
  }
  uint64_t average_generation() const {
    return GetField<uint64_t>(VT_AVERAGE_GENERATION, 0);
  }
  double average_immunity() const {
    return GetField<double>(VT_AVERAGE_IMMUNITY, 0.0);
  }
  uint32_t average_age() const {
    return GetField<uint32_t>(VT_AVERAGE_AGE, 0);
  }
  double average_height() const {
    return GetField<double>(VT_AVERAGE_HEIGHT, 0.0);
  }
  double average_weight() const {
    return GetField<double>(VT_AVERAGE_WEIGHT, 0.0);
  }
  double average_max_appetite_at_age() const {
    return GetField<double>(VT_AVERAGE_MAX_APPETITE_AT_AGE, 0.0);
  }
  double average_max_speed_at_age() const {
    return GetField<double>(VT_AVERAGE_MAX_SPEED_AT_AGE, 0.0);
  }
  double average_max_stamina_at_age() const {
    return GetField<double>(VT_AVERAGE_MAX_STAMINA_AT_AGE, 0.0);
  }
  double average_max_vitality_at_age() const {
    return GetField<double>(VT_AVERAGE_MAX_VITALITY_AT_AGE, 0.0);
  }
  double average_static_fitness() const {
    return GetField<double>(VT_AVERAGE_STATIC_FITNESS, 0.0);
  }
  double average_age_death_factor() const {
    return GetField<double>(VT_AVERAGE_AGE_DEATH_FACTOR, 0.0);
  }
  double average_fitness_death_factor() const {
    return GetField<double>(VT_AVERAGE_FITNESS_DEATH_FACTOR, 0.0);
  }
  double average_death_factor() const {
    return GetField<double>(VT_AVERAGE_DEATH_FACTOR, 0.0);
  }
  double average_vision_radius() const {
    return GetField<double>(VT_AVERAGE_VISION_RADIUS, 0.0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_YEAR) &&
           VerifyField<uint64_t>(verifier, VT_MALE_POPULATION) &&
           VerifyField<uint64_t>(verifier, VT_FEMALE_POPULATION) &&
           VerifyField<double>(verifier, VT_MATABLE_MALE_POPULATION) &&
           VerifyField<double>(verifier, VT_MATABLE_FEMALE_POPULATION) &&
           VerifyField<double>(verifier, VT_CONCEIVING_PROBABILITY) &&
           VerifyField<double>(verifier, VT_MATING_PROBABILITY) &&
           VerifyField<uint32_t>(verifier, VT_MATING_AGE_START) &&
           VerifyField<uint32_t>(verifier, VT_MATING_AGE_END) &&
           VerifyField<uint32_t>(verifier, VT_MAX_AGE) &&
           VerifyField<double>(verifier, VT_MUTATION_PROBABILITY) &&
           VerifyField<double>(verifier, VT_OFFSPRINGS_FACTOR) &&
           VerifyField<double>(verifier, VT_AGE_FITNESS_ON_DEATH_RATIO) &&
           VerifyField<double>(verifier, VT_HEIGHT_ON_SPEED) &&
           VerifyField<double>(verifier, VT_HEIGHT_ON_STAMINA) &&
           VerifyField<double>(verifier, VT_HEIGHT_ON_VITALITY) &&
           VerifyField<double>(verifier, VT_WEIGHT_ON_SPEED) &&
           VerifyField<double>(verifier, VT_WEIGHT_ON_STAMINA) &&
           VerifyField<double>(verifier, VT_WEIGHT_ON_VITALITY) &&
           VerifyField<double>(verifier, VT_VITALITY_ON_APPETITE) &&
           VerifyField<double>(verifier, VT_VITALITY_ON_SPEED) &&
           VerifyField<double>(verifier, VT_STAMINA_ON_APPETITE) &&
           VerifyField<double>(verifier, VT_STAMINA_ON_SPEED) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_APPETITE) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_HEIGHT) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_SPEED) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_STAMINA) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_VITALITY) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_BASE_WEIGHT) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_HEIGHT) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_SPEED) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_WEIGHT) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_HEIGHT_MULTIPLIER) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_SPEED_MULTIPLIER) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_STAMINA_MULTIPLIER) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_VITALITY_MULTIPLIER) &&
           VerifyField<double>(verifier, VT_THEORETICAL_MAXIMUM_WEIGHT_MULTIPLIER) &&
           VerifyField<double>(verifier, VT_SLEEP_RESTORE_FACTOR) &&
           VerifyField<uint64_t>(verifier, VT_AVERAGE_GENERATION) &&
           VerifyField<double>(verifier, VT_AVERAGE_IMMUNITY) &&
           VerifyField<uint32_t>(verifier, VT_AVERAGE_AGE) &&
           VerifyField<double>(verifier, VT_AVERAGE_HEIGHT) &&
           VerifyField<double>(verifier, VT_AVERAGE_WEIGHT) &&
           VerifyField<double>(verifier, VT_AVERAGE_MAX_APPETITE_AT_AGE) &&
           VerifyField<double>(verifier, VT_AVERAGE_MAX_SPEED_AT_AGE) &&
           VerifyField<double>(verifier, VT_AVERAGE_MAX_STAMINA_AT_AGE) &&
           VerifyField<double>(verifier, VT_AVERAGE_MAX_VITALITY_AT_AGE) &&
           VerifyField<double>(verifier, VT_AVERAGE_STATIC_FITNESS) &&
           VerifyField<double>(verifier, VT_AVERAGE_AGE_DEATH_FACTOR) &&
           VerifyField<double>(verifier, VT_AVERAGE_FITNESS_DEATH_FACTOR) &&
           VerifyField<double>(verifier, VT_AVERAGE_DEATH_FACTOR) &&
           VerifyField<double>(verifier, VT_AVERAGE_VISION_RADIUS) &&
           verifier.EndTable();
  }
};

struct AnimalBuilder {
  typedef Animal Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_year(uint64_t year) {
    fbb_.AddElement<uint64_t>(Animal::VT_YEAR, year, 0);
  }
  void add_male_population(uint64_t male_population) {
    fbb_.AddElement<uint64_t>(Animal::VT_MALE_POPULATION, male_population, 0);
  }
  void add_female_population(uint64_t female_population) {
    fbb_.AddElement<uint64_t>(Animal::VT_FEMALE_POPULATION, female_population, 0);
  }
  void add_matable_male_population(double matable_male_population) {
    fbb_.AddElement<double>(Animal::VT_MATABLE_MALE_POPULATION, matable_male_population, 0.0);
  }
  void add_matable_female_population(double matable_female_population) {
    fbb_.AddElement<double>(Animal::VT_MATABLE_FEMALE_POPULATION, matable_female_population, 0.0);
  }
  void add_conceiving_probability(double conceiving_probability) {
    fbb_.AddElement<double>(Animal::VT_CONCEIVING_PROBABILITY, conceiving_probability, 0.0);
  }
  void add_mating_probability(double mating_probability) {
    fbb_.AddElement<double>(Animal::VT_MATING_PROBABILITY, mating_probability, 0.0);
  }
  void add_mating_age_start(uint32_t mating_age_start) {
    fbb_.AddElement<uint32_t>(Animal::VT_MATING_AGE_START, mating_age_start, 0);
  }
  void add_mating_age_end(uint32_t mating_age_end) {
    fbb_.AddElement<uint32_t>(Animal::VT_MATING_AGE_END, mating_age_end, 0);
  }
  void add_max_age(uint32_t max_age) {
    fbb_.AddElement<uint32_t>(Animal::VT_MAX_AGE, max_age, 0);
  }
  void add_mutation_probability(double mutation_probability) {
    fbb_.AddElement<double>(Animal::VT_MUTATION_PROBABILITY, mutation_probability, 0.0);
  }
  void add_offsprings_factor(double offsprings_factor) {
    fbb_.AddElement<double>(Animal::VT_OFFSPRINGS_FACTOR, offsprings_factor, 0.0);
  }
  void add_age_fitness_on_death_ratio(double age_fitness_on_death_ratio) {
    fbb_.AddElement<double>(Animal::VT_AGE_FITNESS_ON_DEATH_RATIO, age_fitness_on_death_ratio, 0.0);
  }
  void add_height_on_speed(double height_on_speed) {
    fbb_.AddElement<double>(Animal::VT_HEIGHT_ON_SPEED, height_on_speed, 0.0);
  }
  void add_height_on_stamina(double height_on_stamina) {
    fbb_.AddElement<double>(Animal::VT_HEIGHT_ON_STAMINA, height_on_stamina, 0.0);
  }
  void add_height_on_vitality(double height_on_vitality) {
    fbb_.AddElement<double>(Animal::VT_HEIGHT_ON_VITALITY, height_on_vitality, 0.0);
  }
  void add_weight_on_speed(double weight_on_speed) {
    fbb_.AddElement<double>(Animal::VT_WEIGHT_ON_SPEED, weight_on_speed, 0.0);
  }
  void add_weight_on_stamina(double weight_on_stamina) {
    fbb_.AddElement<double>(Animal::VT_WEIGHT_ON_STAMINA, weight_on_stamina, 0.0);
  }
  void add_weight_on_vitality(double weight_on_vitality) {
    fbb_.AddElement<double>(Animal::VT_WEIGHT_ON_VITALITY, weight_on_vitality, 0.0);
  }
  void add_vitality_on_appetite(double vitality_on_appetite) {
    fbb_.AddElement<double>(Animal::VT_VITALITY_ON_APPETITE, vitality_on_appetite, 0.0);
  }
  void add_vitality_on_speed(double vitality_on_speed) {
    fbb_.AddElement<double>(Animal::VT_VITALITY_ON_SPEED, vitality_on_speed, 0.0);
  }
  void add_stamina_on_appetite(double stamina_on_appetite) {
    fbb_.AddElement<double>(Animal::VT_STAMINA_ON_APPETITE, stamina_on_appetite, 0.0);
  }
  void add_stamina_on_speed(double stamina_on_speed) {
    fbb_.AddElement<double>(Animal::VT_STAMINA_ON_SPEED, stamina_on_speed, 0.0);
  }
  void add_theoretical_maximum_base_appetite(double theoretical_maximum_base_appetite) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_APPETITE, theoretical_maximum_base_appetite, 0.0);
  }
  void add_theoretical_maximum_base_height(double theoretical_maximum_base_height) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_HEIGHT, theoretical_maximum_base_height, 0.0);
  }
  void add_theoretical_maximum_base_speed(double theoretical_maximum_base_speed) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_SPEED, theoretical_maximum_base_speed, 0.0);
  }
  void add_theoretical_maximum_base_stamina(double theoretical_maximum_base_stamina) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_STAMINA, theoretical_maximum_base_stamina, 0.0);
  }
  void add_theoretical_maximum_base_vitality(double theoretical_maximum_base_vitality) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_VITALITY, theoretical_maximum_base_vitality, 0.0);
  }
  void add_theoretical_maximum_base_weight(double theoretical_maximum_base_weight) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_BASE_WEIGHT, theoretical_maximum_base_weight, 0.0);
  }
  void add_theoretical_maximum_height(double theoretical_maximum_height) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_HEIGHT, theoretical_maximum_height, 0.0);
  }
  void add_theoretical_maximum_speed(double theoretical_maximum_speed) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_SPEED, theoretical_maximum_speed, 0.0);
  }
  void add_theoretical_maximum_weight(double theoretical_maximum_weight) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_WEIGHT, theoretical_maximum_weight, 0.0);
  }
  void add_theoretical_maximum_height_multiplier(double theoretical_maximum_height_multiplier) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_HEIGHT_MULTIPLIER, theoretical_maximum_height_multiplier, 0.0);
  }
  void add_theoretical_maximum_speed_multiplier(double theoretical_maximum_speed_multiplier) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_SPEED_MULTIPLIER, theoretical_maximum_speed_multiplier, 0.0);
  }
  void add_theoretical_maximum_stamina_multiplier(double theoretical_maximum_stamina_multiplier) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_STAMINA_MULTIPLIER, theoretical_maximum_stamina_multiplier, 0.0);
  }
  void add_theoretical_maximum_vitality_multiplier(double theoretical_maximum_vitality_multiplier) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_VITALITY_MULTIPLIER, theoretical_maximum_vitality_multiplier, 0.0);
  }
  void add_theoretical_maximum_weight_multiplier(double theoretical_maximum_weight_multiplier) {
    fbb_.AddElement<double>(Animal::VT_THEORETICAL_MAXIMUM_WEIGHT_MULTIPLIER, theoretical_maximum_weight_multiplier, 0.0);
  }
  void add_sleep_restore_factor(double sleep_restore_factor) {
    fbb_.AddElement<double>(Animal::VT_SLEEP_RESTORE_FACTOR, sleep_restore_factor, 0.0);
  }
  void add_average_generation(uint64_t average_generation) {
    fbb_.AddElement<uint64_t>(Animal::VT_AVERAGE_GENERATION, average_generation, 0);
  }
  void add_average_immunity(double average_immunity) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_IMMUNITY, average_immunity, 0.0);
  }
  void add_average_age(uint32_t average_age) {
    fbb_.AddElement<uint32_t>(Animal::VT_AVERAGE_AGE, average_age, 0);
  }
  void add_average_height(double average_height) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_HEIGHT, average_height, 0.0);
  }
  void add_average_weight(double average_weight) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_WEIGHT, average_weight, 0.0);
  }
  void add_average_max_appetite_at_age(double average_max_appetite_at_age) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_MAX_APPETITE_AT_AGE, average_max_appetite_at_age, 0.0);
  }
  void add_average_max_speed_at_age(double average_max_speed_at_age) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_MAX_SPEED_AT_AGE, average_max_speed_at_age, 0.0);
  }
  void add_average_max_stamina_at_age(double average_max_stamina_at_age) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_MAX_STAMINA_AT_AGE, average_max_stamina_at_age, 0.0);
  }
  void add_average_max_vitality_at_age(double average_max_vitality_at_age) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_MAX_VITALITY_AT_AGE, average_max_vitality_at_age, 0.0);
  }
  void add_average_static_fitness(double average_static_fitness) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_STATIC_FITNESS, average_static_fitness, 0.0);
  }
  void add_average_age_death_factor(double average_age_death_factor) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_AGE_DEATH_FACTOR, average_age_death_factor, 0.0);
  }
  void add_average_fitness_death_factor(double average_fitness_death_factor) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_FITNESS_DEATH_FACTOR, average_fitness_death_factor, 0.0);
  }
  void add_average_death_factor(double average_death_factor) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_DEATH_FACTOR, average_death_factor, 0.0);
  }
  void add_average_vision_radius(double average_vision_radius) {
    fbb_.AddElement<double>(Animal::VT_AVERAGE_VISION_RADIUS, average_vision_radius, 0.0);
  }
  explicit AnimalBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Animal> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Animal>(end);
    return o;
  }
};

inline flatbuffers::Offset<Animal> CreateAnimal(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t year = 0,
    uint64_t male_population = 0,
    uint64_t female_population = 0,
    double matable_male_population = 0.0,
    double matable_female_population = 0.0,
    double conceiving_probability = 0.0,
    double mating_probability = 0.0,
    uint32_t mating_age_start = 0,
    uint32_t mating_age_end = 0,
    uint32_t max_age = 0,
    double mutation_probability = 0.0,
    double offsprings_factor = 0.0,
    double age_fitness_on_death_ratio = 0.0,
    double height_on_speed = 0.0,
    double height_on_stamina = 0.0,
    double height_on_vitality = 0.0,
    double weight_on_speed = 0.0,
    double weight_on_stamina = 0.0,
    double weight_on_vitality = 0.0,
    double vitality_on_appetite = 0.0,
    double vitality_on_speed = 0.0,
    double stamina_on_appetite = 0.0,
    double stamina_on_speed = 0.0,
    double theoretical_maximum_base_appetite = 0.0,
    double theoretical_maximum_base_height = 0.0,
    double theoretical_maximum_base_speed = 0.0,
    double theoretical_maximum_base_stamina = 0.0,
    double theoretical_maximum_base_vitality = 0.0,
    double theoretical_maximum_base_weight = 0.0,
    double theoretical_maximum_height = 0.0,
    double theoretical_maximum_speed = 0.0,
    double theoretical_maximum_weight = 0.0,
    double theoretical_maximum_height_multiplier = 0.0,
    double theoretical_maximum_speed_multiplier = 0.0,
    double theoretical_maximum_stamina_multiplier = 0.0,
    double theoretical_maximum_vitality_multiplier = 0.0,
    double theoretical_maximum_weight_multiplier = 0.0,
    double sleep_restore_factor = 0.0,
    uint64_t average_generation = 0,
    double average_immunity = 0.0,
    uint32_t average_age = 0,
    double average_height = 0.0,
    double average_weight = 0.0,
    double average_max_appetite_at_age = 0.0,
    double average_max_speed_at_age = 0.0,
    double average_max_stamina_at_age = 0.0,
    double average_max_vitality_at_age = 0.0,
    double average_static_fitness = 0.0,
    double average_age_death_factor = 0.0,
    double average_fitness_death_factor = 0.0,
    double average_death_factor = 0.0,
    double average_vision_radius = 0.0) {
  AnimalBuilder builder_(_fbb);
  builder_.add_average_vision_radius(average_vision_radius);
  builder_.add_average_death_factor(average_death_factor);
  builder_.add_average_fitness_death_factor(average_fitness_death_factor);
  builder_.add_average_age_death_factor(average_age_death_factor);
  builder_.add_average_static_fitness(average_static_fitness);
  builder_.add_average_max_vitality_at_age(average_max_vitality_at_age);
  builder_.add_average_max_stamina_at_age(average_max_stamina_at_age);
  builder_.add_average_max_speed_at_age(average_max_speed_at_age);
  builder_.add_average_max_appetite_at_age(average_max_appetite_at_age);
  builder_.add_average_weight(average_weight);
  builder_.add_average_height(average_height);
  builder_.add_average_immunity(average_immunity);
  builder_.add_average_generation(average_generation);
  builder_.add_sleep_restore_factor(sleep_restore_factor);
  builder_.add_theoretical_maximum_weight_multiplier(theoretical_maximum_weight_multiplier);
  builder_.add_theoretical_maximum_vitality_multiplier(theoretical_maximum_vitality_multiplier);
  builder_.add_theoretical_maximum_stamina_multiplier(theoretical_maximum_stamina_multiplier);
  builder_.add_theoretical_maximum_speed_multiplier(theoretical_maximum_speed_multiplier);
  builder_.add_theoretical_maximum_height_multiplier(theoretical_maximum_height_multiplier);
  builder_.add_theoretical_maximum_weight(theoretical_maximum_weight);
  builder_.add_theoretical_maximum_speed(theoretical_maximum_speed);
  builder_.add_theoretical_maximum_height(theoretical_maximum_height);
  builder_.add_theoretical_maximum_base_weight(theoretical_maximum_base_weight);
  builder_.add_theoretical_maximum_base_vitality(theoretical_maximum_base_vitality);
  builder_.add_theoretical_maximum_base_stamina(theoretical_maximum_base_stamina);
  builder_.add_theoretical_maximum_base_speed(theoretical_maximum_base_speed);
  builder_.add_theoretical_maximum_base_height(theoretical_maximum_base_height);
  builder_.add_theoretical_maximum_base_appetite(theoretical_maximum_base_appetite);
  builder_.add_stamina_on_speed(stamina_on_speed);
  builder_.add_stamina_on_appetite(stamina_on_appetite);
  builder_.add_vitality_on_speed(vitality_on_speed);
  builder_.add_vitality_on_appetite(vitality_on_appetite);
  builder_.add_weight_on_vitality(weight_on_vitality);
  builder_.add_weight_on_stamina(weight_on_stamina);
  builder_.add_weight_on_speed(weight_on_speed);
  builder_.add_height_on_vitality(height_on_vitality);
  builder_.add_height_on_stamina(height_on_stamina);
  builder_.add_height_on_speed(height_on_speed);
  builder_.add_age_fitness_on_death_ratio(age_fitness_on_death_ratio);
  builder_.add_offsprings_factor(offsprings_factor);
  builder_.add_mutation_probability(mutation_probability);
  builder_.add_mating_probability(mating_probability);
  builder_.add_conceiving_probability(conceiving_probability);
  builder_.add_matable_female_population(matable_female_population);
  builder_.add_matable_male_population(matable_male_population);
  builder_.add_female_population(female_population);
  builder_.add_male_population(male_population);
  builder_.add_year(year);
  builder_.add_average_age(average_age);
  builder_.add_max_age(max_age);
  builder_.add_mating_age_end(mating_age_end);
  builder_.add_mating_age_start(mating_age_start);
  return builder_.Finish();
}

struct Animal::Traits {
  using type = Animal;
  static auto constexpr Create = CreateAnimal;
};

inline const Ecosystem::Animal *GetAnimal(const void *buf) {
  return flatbuffers::GetRoot<Ecosystem::Animal>(buf);
}

inline const Ecosystem::Animal *GetSizePrefixedAnimal(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Ecosystem::Animal>(buf);
}

inline bool VerifyAnimalBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Ecosystem::Animal>(nullptr);
}

inline bool VerifySizePrefixedAnimalBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Ecosystem::Animal>(nullptr);
}

inline void FinishAnimalBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Animal> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAnimalBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Animal> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Ecosystem

#endif  // FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_
