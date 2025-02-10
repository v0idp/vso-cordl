#pragma once
// IWYU pragma private; include "VROSC/NotefieldColorSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotefieldColorSettings)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct NotefieldColorSettings_Coloring;
}
namespace VROSC {
struct NotefieldColorSettings_SpreadType;
}
// Forward declare root types
namespace VROSC {
struct NotefieldColorSettings_Coloring;
}
namespace VROSC {
struct NotefieldColorSettings_SpreadType;
}
namespace VROSC {
class NotefieldColorSettings;
}
// Write type traits
MARK_VAL_T(::VROSC::NotefieldColorSettings_Coloring);
MARK_VAL_T(::VROSC::NotefieldColorSettings_SpreadType);
MARK_REF_PTR_T(::VROSC::NotefieldColorSettings);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NotefieldColorSettings/Coloring
struct CORDL_TYPE NotefieldColorSettings_Coloring {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NotefieldColorSettings_Coloring_Unwrapped
enum struct __NotefieldColorSettings_Coloring_Unwrapped : int32_t {
__E_AsPlayed = static_cast<int32_t>(0x0),
__E_AlwaysX = static_cast<int32_t>(0x1),
__E_AlwaysY = static_cast<int32_t>(0x2),
__E_AlwaysZ = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotefieldColorSettings_Coloring_Unwrapped () const noexcept {
return static_cast<__NotefieldColorSettings_Coloring_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NotefieldColorSettings_Coloring() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotefieldColorSettings_Coloring(int32_t  value__) noexcept;

/// @brief Field AlwaysX value: I32(1)
static ::VROSC::NotefieldColorSettings_Coloring const AlwaysX;

/// @brief Field AlwaysY value: I32(2)
static ::VROSC::NotefieldColorSettings_Coloring const AlwaysY;

/// @brief Field AlwaysZ value: I32(3)
static ::VROSC::NotefieldColorSettings_Coloring const AlwaysZ;

/// @brief Field AsPlayed value: I32(0)
static ::VROSC::NotefieldColorSettings_Coloring const AsPlayed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotefieldColorSettings_Coloring, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotefieldColorSettings_Coloring, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NotefieldColorSettings/SpreadType
struct CORDL_TYPE NotefieldColorSettings_SpreadType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NotefieldColorSettings_SpreadType_Unwrapped
enum struct __NotefieldColorSettings_SpreadType_Unwrapped : int32_t {
__E_AllAxises = static_cast<int32_t>(0x0),
__E_Same = static_cast<int32_t>(0x1),
__E_Inverted = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotefieldColorSettings_SpreadType_Unwrapped () const noexcept {
return static_cast<__NotefieldColorSettings_SpreadType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NotefieldColorSettings_SpreadType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotefieldColorSettings_SpreadType(int32_t  value__) noexcept;

/// @brief Field AllAxises value: I32(0)
static ::VROSC::NotefieldColorSettings_SpreadType const AllAxises;

/// @brief Field Inverted value: I32(2)
static ::VROSC::NotefieldColorSettings_SpreadType const Inverted;

/// @brief Field Same value: I32(1)
static ::VROSC::NotefieldColorSettings_SpreadType const Same;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotefieldColorSettings_SpreadType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotefieldColorSettings_SpreadType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject, UnityEngine.Vector3, VROSC.NotefieldColorSettings::Coloring, VROSC.NotefieldColorSettings::SpreadType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NotefieldColorSettings
class CORDL_TYPE NotefieldColorSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Coloring = ::VROSC::NotefieldColorSettings_Coloring;

using SpreadType = ::VROSC::NotefieldColorSettings_SpreadType;

 __declspec(property(get=get_FallSpeed)) float_t  FallSpeed;

 __declspec(property(get=get_HoverFallSpeed)) float_t  HoverFallSpeed;

 __declspec(property(get=get_HoverScale)) float_t  HoverScale;

 __declspec(property(get=get_HoverTransmitCurve)) ::UnityEngine::AnimationCurve*  HoverTransmitCurve;

 __declspec(property(get=get_NoteColoring)) ::VROSC::NotefieldColorSettings_Coloring  NoteColoring;

 __declspec(property(get=get_OctaveColor)) ::UnityEngine::Color  OctaveColor;

 __declspec(property(get=get_RestingEvenColor)) ::UnityEngine::Color  RestingEvenColor;

 __declspec(property(get=get_RestingOddColor)) ::UnityEngine::Color  RestingOddColor;

 __declspec(property(get=get_Spread)) ::VROSC::NotefieldColorSettings_SpreadType  Spread;

 __declspec(property(get=get_TransmitFadeCurve)) ::UnityEngine::AnimationCurve*  TransmitFadeCurve;

 __declspec(property(get=get_TransmitLength)) int32_t  TransmitLength;

/// @brief Field _additiveScale, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get__additiveScale, put=__cordl_internal_set__additiveScale)) bool  _additiveScale;

/// @brief Field _coloring, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__coloring, put=__cordl_internal_set__coloring)) ::VROSC::NotefieldColorSettings_Coloring  _coloring;

/// @brief Field _fallSpeed, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallSpeed, put=__cordl_internal_set__fallSpeed)) float_t  _fallSpeed;

/// @brief Field _hoverFallSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverFallSpeed, put=__cordl_internal_set__hoverFallSpeed)) float_t  _hoverFallSpeed;

/// @brief Field _hoverScale, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverScale, put=__cordl_internal_set__hoverScale)) float_t  _hoverScale;

/// @brief Field _hoverTransmitCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverTransmitCurve, put=__cordl_internal_set__hoverTransmitCurve)) ::UnityEngine::AnimationCurve*  _hoverTransmitCurve;

/// @brief Field _noteScale, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__noteScale, put=__cordl_internal_set__noteScale)) float_t  _noteScale;

/// @brief Field _octaveColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__octaveColor, put=__cordl_internal_set__octaveColor)) ::UnityEngine::Color  _octaveColor;

/// @brief Field _playPower, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__playPower, put=__cordl_internal_set__playPower)) ::UnityEngine::Vector3  _playPower;

/// @brief Field _restingEvenColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingEvenColor, put=__cordl_internal_set__restingEvenColor)) ::UnityEngine::Color  _restingEvenColor;

/// @brief Field _restingOddColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingOddColor, put=__cordl_internal_set__restingOddColor)) ::UnityEngine::Color  _restingOddColor;

/// @brief Field _smallestUniformScale, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__smallestUniformScale, put=__cordl_internal_set__smallestUniformScale)) bool  _smallestUniformScale;

/// @brief Field _spread, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__spread, put=__cordl_internal_set__spread)) ::VROSC::NotefieldColorSettings_SpreadType  _spread;

/// @brief Field _transmitFadeCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__transmitFadeCurve, put=__cordl_internal_set__transmitFadeCurve)) ::UnityEngine::AnimationCurve*  _transmitFadeCurve;

/// @brief Field _transmitLength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__transmitLength, put=__cordl_internal_set__transmitLength)) int32_t  _transmitLength;

/// @brief Field _uniformScale, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__uniformScale, put=__cordl_internal_set__uniformScale)) bool  _uniformScale;

/// @brief Method GetBaseScale, addr 0x171114c, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetBaseScale(::UnityEngine::Vector3  baseScale) ;

/// @brief Method GetScale, addr 0x1710ff4, size 0x158, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetScale(::UnityEngine::Vector3  baseScale, float_t  hoveringAmount, ::UnityEngine::Vector3  playPower) ;

static inline ::VROSC::NotefieldColorSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__additiveScale() const;

constexpr bool& __cordl_internal_get__additiveScale() ;

constexpr ::VROSC::NotefieldColorSettings_Coloring const& __cordl_internal_get__coloring() const;

constexpr ::VROSC::NotefieldColorSettings_Coloring& __cordl_internal_get__coloring() ;

constexpr float_t const& __cordl_internal_get__fallSpeed() const;

constexpr float_t& __cordl_internal_get__fallSpeed() ;

constexpr float_t const& __cordl_internal_get__hoverFallSpeed() const;

constexpr float_t& __cordl_internal_get__hoverFallSpeed() ;

constexpr float_t const& __cordl_internal_get__hoverScale() const;

constexpr float_t& __cordl_internal_get__hoverScale() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__hoverTransmitCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hoverTransmitCurve() ;

constexpr float_t const& __cordl_internal_get__noteScale() const;

constexpr float_t& __cordl_internal_get__noteScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__octaveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__octaveColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__playPower() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__playPower() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingEvenColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingEvenColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingOddColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingOddColor() ;

constexpr bool const& __cordl_internal_get__smallestUniformScale() const;

constexpr bool& __cordl_internal_get__smallestUniformScale() ;

constexpr ::VROSC::NotefieldColorSettings_SpreadType const& __cordl_internal_get__spread() const;

constexpr ::VROSC::NotefieldColorSettings_SpreadType& __cordl_internal_get__spread() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__transmitFadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__transmitFadeCurve() ;

constexpr int32_t const& __cordl_internal_get__transmitLength() const;

constexpr int32_t& __cordl_internal_get__transmitLength() ;

constexpr bool const& __cordl_internal_get__uniformScale() const;

constexpr bool& __cordl_internal_get__uniformScale() ;

constexpr void __cordl_internal_set__additiveScale(bool  value) ;

constexpr void __cordl_internal_set__coloring(::VROSC::NotefieldColorSettings_Coloring  value) ;

constexpr void __cordl_internal_set__fallSpeed(float_t  value) ;

constexpr void __cordl_internal_set__hoverFallSpeed(float_t  value) ;

constexpr void __cordl_internal_set__hoverScale(float_t  value) ;

constexpr void __cordl_internal_set__hoverTransmitCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__noteScale(float_t  value) ;

constexpr void __cordl_internal_set__octaveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playPower(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__restingEvenColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__restingOddColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__smallestUniformScale(bool  value) ;

constexpr void __cordl_internal_set__spread(::VROSC::NotefieldColorSettings_SpreadType  value) ;

constexpr void __cordl_internal_set__transmitFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__transmitLength(int32_t  value) ;

constexpr void __cordl_internal_set__uniformScale(bool  value) ;

/// @brief Method .ctor, addr 0x171118c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FallSpeed, addr 0x1710fcc, size 0x8, virtual false, abstract: false, final false
inline float_t get_FallSpeed() ;

/// @brief Method get_HoverFallSpeed, addr 0x1710fe4, size 0x8, virtual false, abstract: false, final false
inline float_t get_HoverFallSpeed() ;

/// @brief Method get_HoverScale, addr 0x1710fec, size 0x8, virtual false, abstract: false, final false
inline float_t get_HoverScale() ;

/// @brief Method get_HoverTransmitCurve, addr 0x1710fdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_HoverTransmitCurve() ;

/// @brief Method get_NoteColoring, addr 0x1710fc4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NotefieldColorSettings_Coloring get_NoteColoring() ;

/// @brief Method get_OctaveColor, addr 0x1710fa8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_OctaveColor() ;

/// @brief Method get_RestingEvenColor, addr 0x1710f90, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_RestingEvenColor() ;

/// @brief Method get_RestingOddColor, addr 0x1710f9c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_RestingOddColor() ;

/// @brief Method get_Spread, addr 0x1710fd4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NotefieldColorSettings_SpreadType get_Spread() ;

/// @brief Method get_TransmitFadeCurve, addr 0x1710fbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_TransmitFadeCurve() ;

/// @brief Method get_TransmitLength, addr 0x1710fb4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TransmitLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotefieldColorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotefieldColorSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotefieldColorSettings(NotefieldColorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotefieldColorSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotefieldColorSettings(NotefieldColorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{893};

/// @brief Field _restingEvenColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingEvenColor;

/// @brief Field _restingOddColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingOddColor;

/// @brief Field _octaveColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____octaveColor;

/// @brief Field _transmitLength, offset: 0x48, size: 0x4, def value: None
 int32_t  ____transmitLength;

/// @brief Field _transmitFadeCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____transmitFadeCurve;

/// @brief Field _coloring, offset: 0x58, size: 0x4, def value: None
 ::VROSC::NotefieldColorSettings_Coloring  ____coloring;

/// @brief Field _fallSpeed, offset: 0x5c, size: 0x4, def value: None
 float_t  ____fallSpeed;

/// @brief Field _spread, offset: 0x60, size: 0x4, def value: None
 ::VROSC::NotefieldColorSettings_SpreadType  ____spread;

/// @brief Field _hoverScale, offset: 0x64, size: 0x4, def value: None
 float_t  ____hoverScale;

/// @brief Field _hoverTransmitCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____hoverTransmitCurve;

/// @brief Field _hoverFallSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ____hoverFallSpeed;

/// @brief Field _noteScale, offset: 0x74, size: 0x4, def value: None
 float_t  ____noteScale;

/// @brief Field _playPower, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____playPower;

/// @brief Field _uniformScale, offset: 0x84, size: 0x1, def value: None
 bool  ____uniformScale;

/// @brief Field _smallestUniformScale, offset: 0x85, size: 0x1, def value: None
 bool  ____smallestUniformScale;

/// @brief Field _additiveScale, offset: 0x86, size: 0x1, def value: None
 bool  ____additiveScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotefieldColorSettings, ____restingEvenColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____restingOddColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____octaveColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____transmitLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____transmitFadeCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____coloring) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____fallSpeed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____spread) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____hoverScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____hoverTransmitCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____hoverFallSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____noteScale) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____playPower) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____uniformScale) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____smallestUniformScale) == 0x85, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldColorSettings, ____additiveScale) == 0x86, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotefieldColorSettings, 0x88>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings_Coloring, "VROSC", "NotefieldColorSettings/Coloring");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings_SpreadType, "VROSC", "NotefieldColorSettings/SpreadType");
NEED_NO_BOX(::VROSC::NotefieldColorSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldColorSettings*, "VROSC", "NotefieldColorSettings");
