#pragma once
// IWYU pragma private; include "VROSC/WidgetSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WidgetSettings)
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
// Write type traits
MARK_VAL_T(::VROSC::WidgetSettings_Identifier);
MARK_REF_PTR_T(::VROSC::WidgetSettings);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.WidgetSettings/Identifier
struct CORDL_TYPE WidgetSettings_Identifier {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WidgetSettings_Identifier_Unwrapped
enum struct __WidgetSettings_Identifier_Unwrapped : int32_t {
__E_Organ = static_cast<int32_t>(0x0),
__E_Board = static_cast<int32_t>(0x1),
__E_Harp = static_cast<int32_t>(0x2),
__E_Clustr = static_cast<int32_t>(0x3),
__E_Wavemin = static_cast<int32_t>(0x4),
__E_Rimba = static_cast<int32_t>(0x5),
__E_Empads = static_cast<int32_t>(0x6),
__E_Effects = static_cast<int32_t>(0x7),
__E_Looper = static_cast<int32_t>(0x8),
__E_Microphone = static_cast<int32_t>(0x9),
__E_TapeRecorder = static_cast<int32_t>(0xa),
__E_Browser = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WidgetSettings_Identifier_Unwrapped () const noexcept {
return static_cast<__WidgetSettings_Identifier_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WidgetSettings_Identifier() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WidgetSettings_Identifier(int32_t  value__) noexcept;

/// @brief Field Board value: I32(1)
static ::VROSC::WidgetSettings_Identifier const Board;

/// @brief Field Browser value: I32(11)
static ::VROSC::WidgetSettings_Identifier const Browser;

/// @brief Field Clustr value: I32(3)
static ::VROSC::WidgetSettings_Identifier const Clustr;

/// @brief Field Effects value: I32(7)
static ::VROSC::WidgetSettings_Identifier const Effects;

/// @brief Field Empads value: I32(6)
static ::VROSC::WidgetSettings_Identifier const Empads;

/// @brief Field Harp value: I32(2)
static ::VROSC::WidgetSettings_Identifier const Harp;

/// @brief Field Looper value: I32(8)
static ::VROSC::WidgetSettings_Identifier const Looper;

/// @brief Field Microphone value: I32(9)
static ::VROSC::WidgetSettings_Identifier const Microphone;

/// @brief Field Organ value: I32(0)
static ::VROSC::WidgetSettings_Identifier const Organ;

/// @brief Field Rimba value: I32(5)
static ::VROSC::WidgetSettings_Identifier const Rimba;

/// @brief Field TapeRecorder value: I32(10)
static ::VROSC::WidgetSettings_Identifier const TapeRecorder;

/// @brief Field Wavemin value: I32(4)
static ::VROSC::WidgetSettings_Identifier const Wavemin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetSettings_Identifier, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetSettings_Identifier, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.ScriptableObject, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetSettings
class CORDL_TYPE WidgetSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Identifier = ::VROSC::WidgetSettings_Identifier;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_SpawnHeightModifier)) float_t  SpawnHeightModifier;

 __declspec(property(get=get_ID)) ::VROSC::WidgetSettings_Identifier  _cordl_ID;

/// @brief Field _displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _id, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::VROSC::WidgetSettings_Identifier  _id;

/// @brief Field _spawnHeightModifier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnHeightModifier, put=__cordl_internal_set__spawnHeightModifier)) float_t  _spawnHeightModifier;

static inline ::VROSC::WidgetSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr ::VROSC::WidgetSettings_Identifier const& __cordl_internal_get__id() const;

constexpr ::VROSC::WidgetSettings_Identifier& __cordl_internal_get__id() ;

constexpr float_t const& __cordl_internal_get__spawnHeightModifier() const;

constexpr float_t& __cordl_internal_get__spawnHeightModifier() ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__id(::VROSC::WidgetSettings_Identifier  value) ;

constexpr void __cordl_internal_set__spawnHeightModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x1710954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x171213c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_ID, addr 0x171212c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::WidgetSettings_Identifier get_ID() ;

/// @brief Method get_SpawnHeightModifier, addr 0x1712134, size 0x8, virtual false, abstract: false, final false
inline float_t get_SpawnHeightModifier() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetSettings(WidgetSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetSettings(WidgetSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{900};

/// @brief Field _spawnHeightModifier, offset: 0x18, size: 0x4, def value: None
 float_t  ____spawnHeightModifier;

/// @brief Field _id, offset: 0x1c, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  ____id;

/// @brief Field _displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetSettings, ____spawnHeightModifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetSettings, ____id) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetSettings, ____displayName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetSettings, 0x28>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetSettings_Identifier, "VROSC", "WidgetSettings/Identifier");
NEED_NO_BOX(::VROSC::WidgetSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetSettings*, "VROSC", "WidgetSettings");
