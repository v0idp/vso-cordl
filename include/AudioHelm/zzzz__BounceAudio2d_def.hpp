#pragma once
// IWYU pragma private; include "AudioHelm/BounceAudio2d.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BounceAudio2d)
namespace AudioHelm {
class HelmController;
}
namespace UnityEngine {
class Collision2D;
}
// Forward declare root types
namespace AudioHelm {
class BounceAudio2d;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::BounceAudio2d);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.BounceAudio2d
class CORDL_TYPE BounceAudio2d : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxSize, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSize, put=__cordl_internal_set_maxSize)) float_t  maxSize;

/// @brief Field maxSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field minNote, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minNote, put=__cordl_internal_set_minNote)) int32_t  minNote;

/// @brief Field noteLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_noteLength, put=__cordl_internal_set_noteLength)) float_t  noteLength;

/// @brief Field scale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::ArrayW<int32_t,::Array<int32_t>*>  scale;

/// @brief Field synth, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_synth, put=__cordl_internal_set_synth)) ::UnityW<::AudioHelm::HelmController>  synth;

/// @brief Method GetCollisionStrength, addr 0x181993c, size 0x198, virtual false, abstract: false, final false
inline float_t GetCollisionStrength(::UnityEngine::Collision2D*  collision) ;

/// @brief Method GetNote, addr 0x1819ad4, size 0x104, virtual false, abstract: false, final false
inline int32_t GetNote() ;

static inline ::AudioHelm::BounceAudio2d* New_ctor() ;

/// @brief Method OnCollisionEnter2D, addr 0x1819bd8, size 0x118, virtual false, abstract: false, final false
inline void OnCollisionEnter2D(::UnityEngine::Collision2D*  collision) ;

constexpr float_t const& __cordl_internal_get_maxSize() const;

constexpr float_t& __cordl_internal_get_maxSize() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr int32_t const& __cordl_internal_get_minNote() const;

constexpr int32_t& __cordl_internal_get_minNote() ;

constexpr float_t const& __cordl_internal_get_noteLength() const;

constexpr float_t& __cordl_internal_get_noteLength() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get_scale() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get_scale() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_synth() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_synth() ;

constexpr void __cordl_internal_set_maxSize(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minNote(int32_t  value) ;

constexpr void __cordl_internal_set_noteLength(float_t  value) ;

constexpr void __cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set_synth(::UnityW<::AudioHelm::HelmController>  value) ;

/// @brief Method .ctor, addr 0x1819de4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BounceAudio2d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BounceAudio2d", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BounceAudio2d(BounceAudio2d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BounceAudio2d", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BounceAudio2d(BounceAudio2d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1845};

/// @brief Field synth, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___synth;

/// @brief Field scale, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ___scale;

/// @brief Field minNote, offset: 0x30, size: 0x4, def value: None
 int32_t  ___minNote;

/// @brief Field maxSize, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxSize;

/// @brief Field noteLength, offset: 0x38, size: 0x4, def value: None
 float_t  ___noteLength;

/// @brief Field maxSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::BounceAudio2d, ___synth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::BounceAudio2d, ___scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::BounceAudio2d, ___minNote) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::BounceAudio2d, ___maxSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::BounceAudio2d, ___noteLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::BounceAudio2d, ___maxSpeed) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::BounceAudio2d, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::BounceAudio2d);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::BounceAudio2d*, "AudioHelm", "BounceAudio2d");
