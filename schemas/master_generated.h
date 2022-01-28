// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MASTER_ECOSYSTEM_H_
#define FLATBUFFERS_GENERATED_MASTER_ECOSYSTEM_H_

#include "flatbuffers/flatbuffers.h"

namespace Ecosystem {

struct Master;
struct MasterBuilder;

enum class Gender : int8_t {
  Female = 0,
  Male = 1,
  MIN = Female,
  MAX = Male
};

inline const Gender (&EnumValuesGender())[2] {
  static const Gender values[] = {
    Gender::Female,
    Gender::Male
  };
  return values;
}

inline const char * const *EnumNamesGender() {
  static const char * const names[3] = {
    "Female",
    "Male",
    nullptr
  };
  return names;
}

inline const char *EnumNameGender(Gender e) {
  if (flatbuffers::IsOutRange(e, Gender::Female, Gender::Male)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesGender()[index];
}

struct Master FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MasterBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_KIND = 6,
    VT_CHROMOSOME = 8,
    VT_GENERATION = 10,
    VT_IMMUNITY = 12,
    VT_GENDER = 14,
    VT_AGE = 16,
    VT_HEIGHT = 18,
    VT_WEIGHT = 20,
    VT_STATIC_FITNESS = 22
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool KeyCompareLessThan(const Master *o) const {
    return *name() < *o->name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(name()->c_str(), val);
  }
  const flatbuffers::String *kind() const {
    return GetPointer<const flatbuffers::String *>(VT_KIND);
  }
  const flatbuffers::String *chromosome() const {
    return GetPointer<const flatbuffers::String *>(VT_CHROMOSOME);
  }
  uint64_t generation() const {
    return GetField<uint64_t>(VT_GENERATION, 1ULL);
  }
  double immunity() const {
    return GetField<double>(VT_IMMUNITY, 0.0);
  }
  Ecosystem::Gender gender() const {
    return static_cast<Ecosystem::Gender>(GetField<int8_t>(VT_GENDER, 1));
  }
  uint32_t age() const {
    return GetField<uint32_t>(VT_AGE, 0);
  }
  double height() const {
    return GetField<double>(VT_HEIGHT, 0.0);
  }
  double weight() const {
    return GetField<double>(VT_WEIGHT, 0.0);
  }
  double static_fitness() const {
    return GetField<double>(VT_STATIC_FITNESS, 0.0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffsetRequired(verifier, VT_KIND) &&
           verifier.VerifyString(kind()) &&
           VerifyOffsetRequired(verifier, VT_CHROMOSOME) &&
           verifier.VerifyString(chromosome()) &&
           VerifyField<uint64_t>(verifier, VT_GENERATION) &&
           VerifyField<double>(verifier, VT_IMMUNITY) &&
           VerifyField<int8_t>(verifier, VT_GENDER) &&
           VerifyField<uint32_t>(verifier, VT_AGE) &&
           VerifyField<double>(verifier, VT_HEIGHT) &&
           VerifyField<double>(verifier, VT_WEIGHT) &&
           VerifyField<double>(verifier, VT_STATIC_FITNESS) &&
           verifier.EndTable();
  }
};

struct MasterBuilder {
  typedef Master Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Master::VT_NAME, name);
  }
  void add_kind(flatbuffers::Offset<flatbuffers::String> kind) {
    fbb_.AddOffset(Master::VT_KIND, kind);
  }
  void add_chromosome(flatbuffers::Offset<flatbuffers::String> chromosome) {
    fbb_.AddOffset(Master::VT_CHROMOSOME, chromosome);
  }
  void add_generation(uint64_t generation) {
    fbb_.AddElement<uint64_t>(Master::VT_GENERATION, generation, 1ULL);
  }
  void add_immunity(double immunity) {
    fbb_.AddElement<double>(Master::VT_IMMUNITY, immunity, 0.0);
  }
  void add_gender(Ecosystem::Gender gender) {
    fbb_.AddElement<int8_t>(Master::VT_GENDER, static_cast<int8_t>(gender), 1);
  }
  void add_age(uint32_t age) {
    fbb_.AddElement<uint32_t>(Master::VT_AGE, age, 0);
  }
  void add_height(double height) {
    fbb_.AddElement<double>(Master::VT_HEIGHT, height, 0.0);
  }
  void add_weight(double weight) {
    fbb_.AddElement<double>(Master::VT_WEIGHT, weight, 0.0);
  }
  void add_static_fitness(double static_fitness) {
    fbb_.AddElement<double>(Master::VT_STATIC_FITNESS, static_fitness, 0.0);
  }
  explicit MasterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Master> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Master>(end);
    fbb_.Required(o, Master::VT_NAME);
    fbb_.Required(o, Master::VT_KIND);
    fbb_.Required(o, Master::VT_CHROMOSOME);
    return o;
  }
};

inline flatbuffers::Offset<Master> CreateMaster(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> kind = 0,
    flatbuffers::Offset<flatbuffers::String> chromosome = 0,
    uint64_t generation = 1ULL,
    double immunity = 0.0,
    Ecosystem::Gender gender = Ecosystem::Gender::Male,
    uint32_t age = 0,
    double height = 0.0,
    double weight = 0.0,
    double static_fitness = 0.0) {
  MasterBuilder builder_(_fbb);
  builder_.add_static_fitness(static_fitness);
  builder_.add_weight(weight);
  builder_.add_height(height);
  builder_.add_immunity(immunity);
  builder_.add_generation(generation);
  builder_.add_age(age);
  builder_.add_chromosome(chromosome);
  builder_.add_kind(kind);
  builder_.add_name(name);
  builder_.add_gender(gender);
  return builder_.Finish();
}

struct Master::Traits {
  using type = Master;
  static auto constexpr Create = CreateMaster;
};

inline flatbuffers::Offset<Master> CreateMasterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *kind = nullptr,
    const char *chromosome = nullptr,
    uint64_t generation = 1ULL,
    double immunity = 0.0,
    Ecosystem::Gender gender = Ecosystem::Gender::Male,
    uint32_t age = 0,
    double height = 0.0,
    double weight = 0.0,
    double static_fitness = 0.0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto kind__ = kind ? _fbb.CreateString(kind) : 0;
  auto chromosome__ = chromosome ? _fbb.CreateString(chromosome) : 0;
  return Ecosystem::CreateMaster(
      _fbb,
      name__,
      kind__,
      chromosome__,
      generation,
      immunity,
      gender,
      age,
      height,
      weight,
      static_fitness);
}

inline const Ecosystem::Master *GetMaster(const void *buf) {
  return flatbuffers::GetRoot<Ecosystem::Master>(buf);
}

inline const Ecosystem::Master *GetSizePrefixedMaster(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Ecosystem::Master>(buf);
}

inline bool VerifyMasterBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Ecosystem::Master>(nullptr);
}

inline bool VerifySizePrefixedMasterBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Ecosystem::Master>(nullptr);
}

inline void FinishMasterBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Master> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMasterBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Master> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Ecosystem

#endif  // FLATBUFFERS_GENERATED_MASTER_ECOSYSTEM_H_