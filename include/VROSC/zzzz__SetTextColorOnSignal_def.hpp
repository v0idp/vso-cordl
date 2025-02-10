#pragma once
// IWYU pragma private; include "VROSC/SetTextColorOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SetTextColorOnSignal)
namespace UnityEngine {
class TextMesh;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SetTextColorOnSignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetTextColorOnSignal);
// Dependencies UnityEngine.Color, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetTextColorOnSignal
class CORDL_TYPE SetTextColorOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _currentBrightness, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentBrightness, put=__cordl_internal_set__currentBrightness)) float_t  _currentBrightness;

/// @brief Field _defaultColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultColor, put=__cordl_internal_set__defaultColor)) ::UnityEngine::Color  _defaultColor;

/// @brief Field _onSignalColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__onSignalColor, put=__cordl_internal_set__onSignalColor)) ::UnityEngine::Color  _onSignalColor;

/// @brief Field _oneBrightness, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__oneBrightness, put=__cordl_internal_set__oneBrightness)) float_t  _oneBrightness;

/// @brief Field _rampDownTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rampDownTime, put=__cordl_internal_set__rampDownTime)) float_t  _rampDownTime;

/// @brief Field _rampUpTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__rampUpTime, put=__cordl_internal_set__rampUpTime)) float_t  _rampUpTime;

/// @brief Field _targetBrightness, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetBrightness, put=__cordl_internal_set__targetBrightness)) float_t  _targetBrightness;

/// @brief Field _textMesh, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::UnityEngine::TextMesh>  _textMesh;

/// @brief Field _zeroBrightness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__zeroBrightness, put=__cordl_internal_set__zeroBrightness)) float_t  _zeroBrightness;

/// @brief Method Awake, addr 0x1728c0c, size 0x3c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::SetTextColorOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1728cb0, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1728d30, size 0x1c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1728ce8, size 0x24, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetColorAmount, addr 0x1728c48, size 0x68, virtual false, abstract: false, final false
inline void SetColorAmount(float_t  brightness) ;

/// @brief Method StayOn, addr 0x1728d0c, size 0x24, virtual false, abstract: false, final false
inline void StayOn(::VROSC::Signal*  signal) ;

/// @brief Method TurnOff, addr 0x1728d4c, size 0x1c, virtual false, abstract: false, final false
inline void TurnOff(::VROSC::Signal*  signal) ;

/// @brief Method TurnOn, addr 0x1728cb4, size 0x34, virtual false, abstract: false, final false
inline void TurnOn(::VROSC::Signal*  signal) ;

/// @brief Method Update, addr 0x1728d68, size 0xac, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__currentBrightness() const;

constexpr float_t& __cordl_internal_get__currentBrightness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__onSignalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__onSignalColor() ;

constexpr float_t const& __cordl_internal_get__oneBrightness() const;

constexpr float_t& __cordl_internal_get__oneBrightness() ;

constexpr float_t const& __cordl_internal_get__rampDownTime() const;

constexpr float_t& __cordl_internal_get__rampDownTime() ;

constexpr float_t const& __cordl_internal_get__rampUpTime() const;

constexpr float_t& __cordl_internal_get__rampUpTime() ;

constexpr float_t const& __cordl_internal_get__targetBrightness() const;

constexpr float_t& __cordl_internal_get__targetBrightness() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__textMesh() ;

constexpr float_t const& __cordl_internal_get__zeroBrightness() const;

constexpr float_t& __cordl_internal_get__zeroBrightness() ;

constexpr void __cordl_internal_set__currentBrightness(float_t  value) ;

constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__onSignalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__oneBrightness(float_t  value) ;

constexpr void __cordl_internal_set__rampDownTime(float_t  value) ;

constexpr void __cordl_internal_set__rampUpTime(float_t  value) ;

constexpr void __cordl_internal_set__targetBrightness(float_t  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::UnityEngine::TextMesh>  value) ;

constexpr void __cordl_internal_set__zeroBrightness(float_t  value) ;

/// @brief Method .ctor, addr 0x1728e14, size 0x550, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetTextColorOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetTextColorOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetTextColorOnSignal(SetTextColorOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetTextColorOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetTextColorOnSignal(SetTextColorOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1036};

/// @brief Field _textMesh, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____textMesh;

/// @brief Field _onSignalColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____onSignalColor;

/// @brief Field _zeroBrightness, offset: 0x60, size: 0x4, def value: None
 float_t  ____zeroBrightness;

/// @brief Field _oneBrightness, offset: 0x64, size: 0x4, def value: None
 float_t  ____oneBrightness;

/// @brief Field _rampUpTime, offset: 0x68, size: 0x4, def value: None
 float_t  ____rampUpTime;

/// @brief Field _rampDownTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ____rampDownTime;

/// @brief Field _targetBrightness, offset: 0x70, size: 0x4, def value: None
 float_t  ____targetBrightness;

/// @brief Field _currentBrightness, offset: 0x74, size: 0x4, def value: None
 float_t  ____currentBrightness;

/// @brief Field _defaultColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____defaultColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____textMesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____onSignalColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____zeroBrightness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____oneBrightness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____rampUpTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____rampDownTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____targetBrightness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____currentBrightness) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetTextColorOnSignal, ____defaultColor) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetTextColorOnSignal, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetTextColorOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetTextColorOnSignal*, "VROSC", "SetTextColorOnSignal");
