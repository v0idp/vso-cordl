#pragma once
// IWYU pragma private; include "VROSC/SoundMetronome.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoundMetronome)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace VROSC {
class SoundMetronome;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SoundMetronome);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SoundMetronome
class CORDL_TYPE SoundMetronome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _barSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__barSound, put=__cordl_internal_set__barSound)) ::UnityW<::UnityEngine::AudioSource>  _barSound;

/// @brief Field _beatScheduled, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__beatScheduled, put=__cordl_internal_set__beatScheduled)) bool  _beatScheduled;

/// @brief Field _beatSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatSound, put=__cordl_internal_set__beatSound)) ::UnityW<::UnityEngine::AudioSource>  _beatSound;

/// @brief Field _lastScheduledBeatTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastScheduledBeatTime, put=__cordl_internal_set__lastScheduledBeatTime)) double_t  _lastScheduledBeatTime;

/// @brief Field _updateMargin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateMargin, put=__cordl_internal_set__updateMargin)) double_t  _updateMargin;

static inline ::VROSC::SoundMetronome* New_ctor() ;

/// @brief Method OnEnable, addr 0x16f7b30, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x16f7bb4, size 0x104, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__barSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__barSound() ;

constexpr bool const& __cordl_internal_get__beatScheduled() const;

constexpr bool& __cordl_internal_get__beatScheduled() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__beatSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__beatSound() ;

constexpr double_t const& __cordl_internal_get__lastScheduledBeatTime() const;

constexpr double_t& __cordl_internal_get__lastScheduledBeatTime() ;

constexpr double_t const& __cordl_internal_get__updateMargin() const;

constexpr double_t& __cordl_internal_get__updateMargin() ;

constexpr void __cordl_internal_set__barSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__beatScheduled(bool  value) ;

constexpr void __cordl_internal_set__beatSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__lastScheduledBeatTime(double_t  value) ;

constexpr void __cordl_internal_set__updateMargin(double_t  value) ;

/// @brief Method .ctor, addr 0x16f7cb8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundMetronome() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundMetronome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundMetronome(SoundMetronome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundMetronome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundMetronome(SoundMetronome const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{796};

/// @brief Field _barSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____barSound;

/// @brief Field _beatSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____beatSound;

/// @brief Field _beatScheduled, offset: 0x30, size: 0x1, def value: None
 bool  ____beatScheduled;

/// @brief Field _lastScheduledBeatTime, offset: 0x38, size: 0x8, def value: None
 double_t  ____lastScheduledBeatTime;

/// @brief Field _updateMargin, offset: 0x40, size: 0x8, def value: None
 double_t  ____updateMargin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SoundMetronome, ____barSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SoundMetronome, ____beatSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SoundMetronome, ____beatScheduled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SoundMetronome, ____lastScheduledBeatTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SoundMetronome, ____updateMargin) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SoundMetronome, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SoundMetronome);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SoundMetronome*, "VROSC", "SoundMetronome");
