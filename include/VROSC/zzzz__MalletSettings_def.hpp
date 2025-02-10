#pragma once
// IWYU pragma private; include "VROSC/MalletSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MalletSettings)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class Mallet;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class MalletSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MalletSettings);
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MalletSettings
class CORDL_TYPE MalletSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_DefaultColor)) ::UnityEngine::Color  DefaultColor;

 __declspec(property(get=get_DefaultMalletLength)) float_t  DefaultMalletLength;

 __declspec(property(get=get_DefualtMalletAngle)) float_t  DefualtMalletAngle;

 __declspec(property(get=get_HitExtendsDisableTime)) float_t  HitExtendsDisableTime;

 __declspec(property(get=get_LaserAutoDimWhenHoldingMallets)) bool  LaserAutoDimWhenHoldingMallets;

 __declspec(property(get=get_LaserDisableTime)) float_t  LaserDisableTime;

 __declspec(property(get=get_LaserEnableTime)) float_t  LaserEnableTime;

 __declspec(property(get=get_MinMaxMalletAngle)) ::VROSC::MinMaxFloat*  MinMaxMalletAngle;

 __declspec(property(get=get_MinMaxMalletLength)) ::VROSC::MinMaxFloat*  MinMaxMalletLength;

/// @brief Field _autoDimLaser, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoDimLaser, put=__cordl_internal_set__autoDimLaser)) bool  _autoDimLaser;

/// @brief Field _defaultColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultColor, put=__cordl_internal_set__defaultColor)) ::UnityEngine::Color  _defaultColor;

/// @brief Field _defualtMalletAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defualtMalletAngle, put=__cordl_internal_set__defualtMalletAngle)) float_t  _defualtMalletAngle;

/// @brief Field _defualtMalletLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__defualtMalletLength, put=__cordl_internal_set__defualtMalletLength)) float_t  _defualtMalletLength;

/// @brief Field _hitExtendsDisableTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__hitExtendsDisableTime, put=__cordl_internal_set__hitExtendsDisableTime)) float_t  _hitExtendsDisableTime;

/// @brief Field _laserDisableTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__laserDisableTime, put=__cordl_internal_set__laserDisableTime)) float_t  _laserDisableTime;

/// @brief Field _laserEnableTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__laserEnableTime, put=__cordl_internal_set__laserEnableTime)) float_t  _laserEnableTime;

/// @brief Field _malletPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletPrefab, put=__cordl_internal_set__malletPrefab)) ::UnityW<::VROSC::Mallet>  _malletPrefab;

/// @brief Field _minMaxMalletAngle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__minMaxMalletAngle, put=__cordl_internal_set__minMaxMalletAngle)) ::VROSC::MinMaxFloat*  _minMaxMalletAngle;

/// @brief Field _minMaxMalletLength, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__minMaxMalletLength, put=__cordl_internal_set__minMaxMalletLength)) ::VROSC::MinMaxFloat*  _minMaxMalletLength;

/// @brief Method CreateMallet, addr 0x17196f0, size 0xe4, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Mallet> CreateMallet(::VROSC::InputDevice*  inputDevice) ;

static inline ::VROSC::MalletSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__autoDimLaser() const;

constexpr bool& __cordl_internal_get__autoDimLaser() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor() ;

constexpr float_t const& __cordl_internal_get__defualtMalletAngle() const;

constexpr float_t& __cordl_internal_get__defualtMalletAngle() ;

constexpr float_t const& __cordl_internal_get__defualtMalletLength() const;

constexpr float_t& __cordl_internal_get__defualtMalletLength() ;

constexpr float_t const& __cordl_internal_get__hitExtendsDisableTime() const;

constexpr float_t& __cordl_internal_get__hitExtendsDisableTime() ;

constexpr float_t const& __cordl_internal_get__laserDisableTime() const;

constexpr float_t& __cordl_internal_get__laserDisableTime() ;

constexpr float_t const& __cordl_internal_get__laserEnableTime() const;

constexpr float_t& __cordl_internal_get__laserEnableTime() ;

constexpr ::UnityW<::VROSC::Mallet> const& __cordl_internal_get__malletPrefab() const;

constexpr ::UnityW<::VROSC::Mallet>& __cordl_internal_get__malletPrefab() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__minMaxMalletAngle() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__minMaxMalletAngle() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__minMaxMalletLength() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__minMaxMalletLength() ;

constexpr void __cordl_internal_set__autoDimLaser(bool  value) ;

constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__defualtMalletAngle(float_t  value) ;

constexpr void __cordl_internal_set__defualtMalletLength(float_t  value) ;

constexpr void __cordl_internal_set__hitExtendsDisableTime(float_t  value) ;

constexpr void __cordl_internal_set__laserDisableTime(float_t  value) ;

constexpr void __cordl_internal_set__laserEnableTime(float_t  value) ;

constexpr void __cordl_internal_set__malletPrefab(::UnityW<::VROSC::Mallet>  value) ;

constexpr void __cordl_internal_set__minMaxMalletAngle(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__minMaxMalletLength(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x171a270, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultColor, addr 0x171a264, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DefaultColor() ;

/// @brief Method get_DefaultMalletLength, addr 0x171a22c, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefaultMalletLength() ;

/// @brief Method get_DefualtMalletAngle, addr 0x171a224, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefualtMalletAngle() ;

/// @brief Method get_HitExtendsDisableTime, addr 0x171a25c, size 0x8, virtual false, abstract: false, final false
inline float_t get_HitExtendsDisableTime() ;

/// @brief Method get_LaserAutoDimWhenHoldingMallets, addr 0x171a234, size 0x8, virtual false, abstract: false, final false
inline bool get_LaserAutoDimWhenHoldingMallets() ;

/// @brief Method get_LaserDisableTime, addr 0x171a254, size 0x8, virtual false, abstract: false, final false
inline float_t get_LaserDisableTime() ;

/// @brief Method get_LaserEnableTime, addr 0x171a24c, size 0x8, virtual false, abstract: false, final false
inline float_t get_LaserEnableTime() ;

/// @brief Method get_MinMaxMalletAngle, addr 0x171a23c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_MinMaxMalletAngle() ;

/// @brief Method get_MinMaxMalletLength, addr 0x171a244, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_MinMaxMalletLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletSettings(MalletSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletSettings(MalletSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{923};

/// @brief Field _minMaxMalletAngle, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____minMaxMalletAngle;

/// @brief Field _minMaxMalletLength, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____minMaxMalletLength;

/// @brief Field _autoDimLaser, offset: 0x28, size: 0x1, def value: None
 bool  ____autoDimLaser;

/// @brief Field _defualtMalletAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ____defualtMalletAngle;

/// @brief Field _defualtMalletLength, offset: 0x30, size: 0x4, def value: None
 float_t  ____defualtMalletLength;

/// @brief Field _laserEnableTime, offset: 0x34, size: 0x4, def value: None
 float_t  ____laserEnableTime;

/// @brief Field _laserDisableTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____laserDisableTime;

/// @brief Field _hitExtendsDisableTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ____hitExtendsDisableTime;

/// @brief Field _malletPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Mallet>  ____malletPrefab;

/// @brief Field _defaultColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____defaultColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MalletSettings, ____minMaxMalletAngle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____minMaxMalletLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____autoDimLaser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____defualtMalletAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____defualtMalletLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____laserEnableTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____laserDisableTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____hitExtendsDisableTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____malletPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletSettings, ____defaultColor) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MalletSettings, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MalletSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletSettings*, "VROSC", "MalletSettings");
