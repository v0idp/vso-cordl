#pragma once
// IWYU pragma private; include "VROSC/Metronome.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Metronome)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
struct Metronome_Medium;
}
namespace VROSC {
struct Metronome_Mode;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
class UserPreferencesDataController;
}
// Forward declare root types
namespace VROSC {
struct Metronome_Medium;
}
namespace VROSC {
struct Metronome_Mode;
}
namespace VROSC {
class Metronome;
}
// Write type traits
MARK_VAL_T(::VROSC::Metronome_Medium);
MARK_VAL_T(::VROSC::Metronome_Mode);
MARK_REF_PTR_T(::VROSC::Metronome);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Metronome/Mode
struct CORDL_TYPE Metronome_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Metronome_Mode_Unwrapped
enum struct __Metronome_Mode_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Off = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Metronome_Mode_Unwrapped () const noexcept {
return static_cast<__Metronome_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Metronome_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Metronome_Mode(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(0)
static ::VROSC::Metronome_Mode const Auto;

/// @brief Field Off value: I32(2)
static ::VROSC::Metronome_Mode const Off;

/// @brief Field On value: I32(1)
static ::VROSC::Metronome_Mode const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Metronome_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Metronome_Mode, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Metronome/Medium
struct CORDL_TYPE Metronome_Medium {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Metronome_Medium_Unwrapped
enum struct __Metronome_Medium_Unwrapped : int32_t {
__E_Haptic = static_cast<int32_t>(0x0),
__E_Sound = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Metronome_Medium_Unwrapped () const noexcept {
return static_cast<__Metronome_Medium_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Metronome_Medium() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Metronome_Medium(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::VROSC::Metronome_Medium const Both;

/// @brief Field Haptic value: I32(0)
static ::VROSC::Metronome_Medium const Haptic;

/// @brief Field Sound value: I32(1)
static ::VROSC::Metronome_Medium const Sound;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Metronome_Medium, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Metronome_Medium, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.Metronome::Medium, VROSC.Metronome::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Metronome
class CORDL_TYPE Metronome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Medium = ::VROSC::Metronome_Medium;

using Mode = ::VROSC::Metronome_Mode;

/// @brief Field _hapticMetronome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticMetronome, put=__cordl_internal_set__hapticMetronome)) ::UnityW<::UnityEngine::GameObject>  _hapticMetronome;

/// @brief Field _medium, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__medium, put=__cordl_internal_set__medium)) ::VROSC::Metronome_Medium  _medium;

/// @brief Field _mode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::VROSC::Metronome_Mode  _mode;

/// @brief Field _preferencesController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__preferencesController, put=__cordl_internal_set__preferencesController)) ::VROSC::UserPreferencesDataController*  _preferencesController;

/// @brief Field _soundMetronome, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__soundMetronome, put=__cordl_internal_set__soundMetronome)) ::UnityW<::UnityEngine::GameObject>  _soundMetronome;

/// @brief Method Awake, addr 0x18bf08c, size 0x278, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DataLoaded, addr 0x18bf57c, size 0xb4, virtual false, abstract: false, final false
inline void DataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method LoopStationRecorderStateChanged, addr 0x18bf868, size 0xa0, virtual false, abstract: false, final false
inline void LoopStationRecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method LoopStationTrackRemoved, addr 0x18bf908, size 0x6c, virtual false, abstract: false, final false
inline void LoopStationTrackRemoved(int32_t  newTrackCount) ;

static inline ::VROSC::Metronome* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18bf304, size 0x278, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetHapticMetronomeActive, addr 0x18bf9f0, size 0x80, virtual false, abstract: false, final false
inline void SetHapticMetronomeActive(bool  active) ;

/// @brief Method SetMedium, addr 0x18bf7c8, size 0xa0, virtual false, abstract: false, final false
inline void SetMedium(::VROSC::Metronome_Medium  medium) ;

/// @brief Method SetMode, addr 0x18bf728, size 0xa0, virtual false, abstract: false, final false
inline void SetMode(::VROSC::Metronome_Mode  mode) ;

/// @brief Method UpdateMetronome, addr 0x18bf974, size 0x7c, virtual false, abstract: false, final false
inline void UpdateMetronome(double_t  bpm) ;

/// @brief Method UpdateMetronome, addr 0x18bf630, size 0xf8, virtual false, abstract: false, final false
inline void UpdateMetronome(double_t  bpm, int32_t  trackCount) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hapticMetronome() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hapticMetronome() ;

constexpr ::VROSC::Metronome_Medium const& __cordl_internal_get__medium() const;

constexpr ::VROSC::Metronome_Medium& __cordl_internal_get__medium() ;

constexpr ::VROSC::Metronome_Mode const& __cordl_internal_get__mode() const;

constexpr ::VROSC::Metronome_Mode& __cordl_internal_get__mode() ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get__preferencesController() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get__preferencesController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__soundMetronome() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__soundMetronome() ;

constexpr void __cordl_internal_set__hapticMetronome(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__medium(::VROSC::Metronome_Medium  value) ;

constexpr void __cordl_internal_set__mode(::VROSC::Metronome_Mode  value) ;

constexpr void __cordl_internal_set__preferencesController(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set__soundMetronome(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x18bfa70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Metronome() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Metronome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Metronome(Metronome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Metronome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Metronome(Metronome const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{758};

/// @brief Field _hapticMetronome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____hapticMetronome;

/// @brief Field _soundMetronome, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____soundMetronome;

/// @brief Field _preferencesController, offset: 0x30, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  ____preferencesController;

/// @brief Field _mode, offset: 0x38, size: 0x4, def value: None
 ::VROSC::Metronome_Mode  ____mode;

/// @brief Field _medium, offset: 0x3c, size: 0x4, def value: None
 ::VROSC::Metronome_Medium  ____medium;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Metronome, ____hapticMetronome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Metronome, ____soundMetronome) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Metronome, ____preferencesController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Metronome, ____mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Metronome, ____medium) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Metronome, 0x40>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Metronome_Medium, "VROSC", "Metronome/Medium");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Metronome_Mode, "VROSC", "Metronome/Mode");
NEED_NO_BOX(::VROSC::Metronome);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Metronome*, "VROSC", "Metronome");
