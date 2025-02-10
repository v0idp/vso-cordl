#pragma once
// IWYU pragma private; include "AudioHelm/SequenceGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SequenceGenerator)
namespace AudioHelm {
class HelmSequencer;
}
// Forward declare root types
namespace AudioHelm {
class SequenceGenerator;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SequenceGenerator);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SequenceGenerator
class CORDL_TYPE SequenceGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxDensity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDensity, put=__cordl_internal_set_maxDensity)) float_t  maxDensity;

/// @brief Field minDensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDensity, put=__cordl_internal_set_minDensity)) float_t  minDensity;

/// @brief Field minNote, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minNote, put=__cordl_internal_set_minNote)) int32_t  minNote;

/// @brief Field octaveSpan, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_octaveSpan, put=__cordl_internal_set_octaveSpan)) int32_t  octaveSpan;

/// @brief Field scale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::ArrayW<int32_t,::Array<int32_t>*>  scale;

/// @brief Field sequencer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequencer, put=__cordl_internal_set_sequencer)) ::UnityW<::AudioHelm::HelmSequencer>  sequencer;

/// @brief Method Generate, addr 0x181c558, size 0x134, virtual false, abstract: false, final false
inline void Generate() ;

/// @brief Method GenerateMelody, addr 0x181c550, size 0x4, virtual false, abstract: false, final false
inline void GenerateMelody() ;

/// @brief Method GenerateRhythm, addr 0x181c54c, size 0x4, virtual false, abstract: false, final false
inline void GenerateRhythm() ;

/// @brief Method GetKeyFromRandomWalk, addr 0x181c68c, size 0x48, virtual false, abstract: false, final false
inline int32_t GetKeyFromRandomWalk(int32_t  note) ;

/// @brief Method GetNextNote, addr 0x181c6d4, size 0x90, virtual false, abstract: false, final false
inline int32_t GetNextNote(int32_t  current, int32_t  max) ;

static inline ::AudioHelm::SequenceGenerator* New_ctor() ;

/// @brief Method Start, addr 0x181c554, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_maxDensity() const;

constexpr float_t& __cordl_internal_get_maxDensity() ;

constexpr float_t const& __cordl_internal_get_minDensity() const;

constexpr float_t& __cordl_internal_get_minDensity() ;

constexpr int32_t const& __cordl_internal_get_minNote() const;

constexpr int32_t& __cordl_internal_get_minNote() ;

constexpr int32_t const& __cordl_internal_get_octaveSpan() const;

constexpr int32_t& __cordl_internal_get_octaveSpan() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get_scale() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get_scale() ;

constexpr ::UnityW<::AudioHelm::HelmSequencer> const& __cordl_internal_get_sequencer() const;

constexpr ::UnityW<::AudioHelm::HelmSequencer>& __cordl_internal_get_sequencer() ;

constexpr void __cordl_internal_set_maxDensity(float_t  value) ;

constexpr void __cordl_internal_set_minDensity(float_t  value) ;

constexpr void __cordl_internal_set_minNote(int32_t  value) ;

constexpr void __cordl_internal_set_octaveSpan(int32_t  value) ;

constexpr void __cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set_sequencer(::UnityW<::AudioHelm::HelmSequencer>  value) ;

/// @brief Method .ctor, addr 0x181cce8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequenceGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequenceGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceGenerator(SequenceGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceGenerator(SequenceGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1862};

/// @brief Field sequencer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmSequencer>  ___sequencer;

/// @brief Field scale, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ___scale;

/// @brief Field minNote, offset: 0x30, size: 0x4, def value: None
 int32_t  ___minNote;

/// @brief Field octaveSpan, offset: 0x34, size: 0x4, def value: None
 int32_t  ___octaveSpan;

/// @brief Field minDensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___minDensity;

/// @brief Field maxDensity, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxDensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SequenceGenerator, ___sequencer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SequenceGenerator, ___scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SequenceGenerator, ___minNote) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SequenceGenerator, ___octaveSpan) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SequenceGenerator, ___minDensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SequenceGenerator, ___maxDensity) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SequenceGenerator, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SequenceGenerator*, "AudioHelm", "SequenceGenerator");
