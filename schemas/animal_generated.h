// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_
#define FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_

#include "flatbuffers/flatbuffers.h"

namespace Ecosystem {

struct Organism;
struct OrganismBuilder;
struct OrganismT;

struct OrganismT : public flatbuffers::NativeTable {
  typedef Organism TableType;
  uint64_t chromosome_number = 12ULL;
  uint64_t food_chain_rank = 45ULL;
};

struct Organism FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OrganismT NativeTableType;
  typedef OrganismBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CHROMOSOME_NUMBER = 4,
    VT_FOOD_CHAIN_RANK = 6
  };
  uint64_t chromosome_number() const {
    return GetField<uint64_t>(VT_CHROMOSOME_NUMBER, 12ULL);
  }
  bool mutate_chromosome_number(uint64_t _chromosome_number = 12ULL) {
    return SetField<uint64_t>(VT_CHROMOSOME_NUMBER, _chromosome_number, 12ULL);
  }
  uint64_t food_chain_rank() const {
    return GetField<uint64_t>(VT_FOOD_CHAIN_RANK, 45ULL);
  }
  bool mutate_food_chain_rank(uint64_t _food_chain_rank = 45ULL) {
    return SetField<uint64_t>(VT_FOOD_CHAIN_RANK, _food_chain_rank, 45ULL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_CHROMOSOME_NUMBER) &&
           VerifyField<uint64_t>(verifier, VT_FOOD_CHAIN_RANK) &&
           verifier.EndTable();
  }
  OrganismT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(OrganismT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Organism> Pack(flatbuffers::FlatBufferBuilder &_fbb, const OrganismT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct OrganismBuilder {
  typedef Organism Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_chromosome_number(uint64_t chromosome_number) {
    fbb_.AddElement<uint64_t>(Organism::VT_CHROMOSOME_NUMBER, chromosome_number, 12ULL);
  }
  void add_food_chain_rank(uint64_t food_chain_rank) {
    fbb_.AddElement<uint64_t>(Organism::VT_FOOD_CHAIN_RANK, food_chain_rank, 45ULL);
  }
  explicit OrganismBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Organism> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Organism>(end);
    return o;
  }
};

inline flatbuffers::Offset<Organism> CreateOrganism(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t chromosome_number = 12ULL,
    uint64_t food_chain_rank = 45ULL) {
  OrganismBuilder builder_(_fbb);
  builder_.add_food_chain_rank(food_chain_rank);
  builder_.add_chromosome_number(chromosome_number);
  return builder_.Finish();
}

struct Organism::Traits {
  using type = Organism;
  static auto constexpr Create = CreateOrganism;
};

flatbuffers::Offset<Organism> CreateOrganism(flatbuffers::FlatBufferBuilder &_fbb, const OrganismT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline OrganismT *Organism::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::make_unique<OrganismT>();
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Organism::UnPackTo(OrganismT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = chromosome_number(); _o->chromosome_number = _e; }
  { auto _e = food_chain_rank(); _o->food_chain_rank = _e; }
}

inline flatbuffers::Offset<Organism> Organism::Pack(flatbuffers::FlatBufferBuilder &_fbb, const OrganismT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateOrganism(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Organism> CreateOrganism(flatbuffers::FlatBufferBuilder &_fbb, const OrganismT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OrganismT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _chromosome_number = _o->chromosome_number;
  auto _food_chain_rank = _o->food_chain_rank;
  return Ecosystem::CreateOrganism(
      _fbb,
      _chromosome_number,
      _food_chain_rank);
}

inline const Ecosystem::Organism *GetOrganism(const void *buf) {
  return flatbuffers::GetRoot<Ecosystem::Organism>(buf);
}

inline const Ecosystem::Organism *GetSizePrefixedOrganism(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Ecosystem::Organism>(buf);
}

inline Organism *GetMutableOrganism(void *buf) {
  return flatbuffers::GetMutableRoot<Organism>(buf);
}

inline Ecosystem::Organism *GetMutableSizePrefixedOrganism(void *buf) {
  return flatbuffers::GetMutableSizePrefixedRoot<Ecosystem::Organism>(buf);
}

inline bool VerifyOrganismBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Ecosystem::Organism>(nullptr);
}

inline bool VerifySizePrefixedOrganismBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Ecosystem::Organism>(nullptr);
}

inline void FinishOrganismBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Organism> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedOrganismBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Ecosystem::Organism> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<Ecosystem::OrganismT> UnPackOrganism(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Ecosystem::OrganismT>(GetOrganism(buf)->UnPack(res));
}

inline std::unique_ptr<Ecosystem::OrganismT> UnPackSizePrefixedOrganism(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Ecosystem::OrganismT>(GetSizePrefixedOrganism(buf)->UnPack(res));
}

}  // namespace Ecosystem

#endif  // FLATBUFFERS_GENERATED_ANIMAL_ECOSYSTEM_H_
