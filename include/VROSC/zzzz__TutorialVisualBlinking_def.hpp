#pragma once
// IWYU pragma private; include "VROSC/TutorialVisualBlinking.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialVisualBlinking)
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace VROSC {
class TutorialVisualBlinking;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialVisualBlinking);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialVisualBlinking
class CORDL_TYPE TutorialVisualBlinking : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

/// @brief Field <Active>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field _getCurrentColor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__getCurrentColor, put=__cordl_internal_set__getCurrentColor)) ::System::Func_1<::UnityEngine::Color>*  _getCurrentColor;

/// @brief Field _getNormalColor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__getNormalColor, put=__cordl_internal_set__getNormalColor)) ::System::Func_1<::UnityEngine::Color>*  _getNormalColor;

/// @brief Field _hasPeaked, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPeaked, put=__cordl_internal_set__hasPeaked)) bool  _hasPeaked;

/// @brief Field _intensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__intensity, put=__cordl_internal_set__intensity)) float_t  _intensity;

/// @brief Field _offColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _onColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__onColor, put=__cordl_internal_set__onColor)) ::UnityEngine::Color  _onColor;

/// @brief Field _peak, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__peak, put=__cordl_internal_set__peak)) float_t  _peak;

/// @brief Field _startColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor, put=__cordl_internal_set__startColor)) ::UnityEngine::Color  _startColor;

/// @brief Field _startTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime, put=__cordl_internal_set__startTime)) float_t  _startTime;

/// @brief Field _stopping, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopping, put=__cordl_internal_set__stopping)) bool  _stopping;

/// @brief Field _stoppingBeginColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__stoppingBeginColor, put=__cordl_internal_set__stoppingBeginColor)) ::UnityEngine::Color  _stoppingBeginColor;

/// @brief Field _stoppingBeginTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__stoppingBeginTime, put=__cordl_internal_set__stoppingBeginTime)) float_t  _stoppingBeginTime;

/// @brief Field _stoppingEndTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__stoppingEndTime, put=__cordl_internal_set__stoppingEndTime)) float_t  _stoppingEndTime;

/// @brief Field _useNormalColorAsOffColor, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__useNormalColorAsOffColor, put=__cordl_internal_set__useNormalColorAsOffColor)) bool  _useNormalColorAsOffColor;

/// @brief Method GetColor, addr 0x16fed04, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

static inline ::VROSC::TutorialVisualBlinking* New_ctor() ;

/// @brief Method SetToBeginningColor, addr 0x16ff020, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Color SetToBeginningColor() ;

/// @brief Method SetToBlinkingColor, addr 0x16ff138, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Color SetToBlinkingColor() ;

/// @brief Method SetToStoppingColor, addr 0x16fef04, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::Color SetToStoppingColor() ;

/// @brief Method Setup, addr 0x16fec5c, size 0x8, virtual false, abstract: false, final false
inline void Setup(::System::Func_1<::UnityEngine::Color>*  getNormalColor, ::System::Func_1<::UnityEngine::Color>*  getCurrentColor) ;

/// @brief Method SharedStart, addr 0x16fee68, size 0x84, virtual false, abstract: false, final false
inline void SharedStart() ;

/// @brief Method Start, addr 0x16fed54, size 0x18, virtual false, abstract: false, final false
inline void Start(::UnityEngine::Color  onColor, float_t  intensity) ;

/// @brief Method Start, addr 0x16feeec, size 0x18, virtual false, abstract: false, final false
inline void Start(::UnityEngine::Color  onColor, ::UnityEngine::Color  offColor) ;

/// @brief Method Stop, addr 0x16fed88, size 0x64, virtual false, abstract: false, final false
inline void Stop(float_t  fadeOverSeconds) ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::System::Func_1<::UnityEngine::Color>* const& __cordl_internal_get__getCurrentColor() const;

constexpr ::System::Func_1<::UnityEngine::Color>*& __cordl_internal_get__getCurrentColor() ;

constexpr ::System::Func_1<::UnityEngine::Color>* const& __cordl_internal_get__getNormalColor() const;

constexpr ::System::Func_1<::UnityEngine::Color>*& __cordl_internal_get__getNormalColor() ;

constexpr bool const& __cordl_internal_get__hasPeaked() const;

constexpr bool& __cordl_internal_get__hasPeaked() ;

constexpr float_t const& __cordl_internal_get__intensity() const;

constexpr float_t& __cordl_internal_get__intensity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__onColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__onColor() ;

constexpr float_t const& __cordl_internal_get__peak() const;

constexpr float_t& __cordl_internal_get__peak() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor() ;

constexpr float_t const& __cordl_internal_get__startTime() const;

constexpr float_t& __cordl_internal_get__startTime() ;

constexpr bool const& __cordl_internal_get__stopping() const;

constexpr bool& __cordl_internal_get__stopping() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__stoppingBeginColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__stoppingBeginColor() ;

constexpr float_t const& __cordl_internal_get__stoppingBeginTime() const;

constexpr float_t& __cordl_internal_get__stoppingBeginTime() ;

constexpr float_t const& __cordl_internal_get__stoppingEndTime() const;

constexpr float_t& __cordl_internal_get__stoppingEndTime() ;

constexpr bool const& __cordl_internal_get__useNormalColorAsOffColor() const;

constexpr bool& __cordl_internal_get__useNormalColorAsOffColor() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__getCurrentColor(::System::Func_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__getNormalColor(::System::Func_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__hasPeaked(bool  value) ;

constexpr void __cordl_internal_set__intensity(float_t  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__onColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__peak(float_t  value) ;

constexpr void __cordl_internal_set__startColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__startTime(float_t  value) ;

constexpr void __cordl_internal_set__stopping(bool  value) ;

constexpr void __cordl_internal_set__stoppingBeginColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__stoppingBeginTime(float_t  value) ;

constexpr void __cordl_internal_set__stoppingEndTime(float_t  value) ;

constexpr void __cordl_internal_set__useNormalColorAsOffColor(bool  value) ;

/// @brief Method .ctor, addr 0x16fee4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x16fee60, size 0x8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method set_Active, addr 0x16fee54, size 0xc, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialVisualBlinking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialVisualBlinking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialVisualBlinking(TutorialVisualBlinking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialVisualBlinking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialVisualBlinking(TutorialVisualBlinking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{841};

/// @brief Field <Active>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _onColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ____onColor;

/// @brief Field _offColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _useNormalColorAsOffColor, offset: 0x34, size: 0x1, def value: None
 bool  ____useNormalColorAsOffColor;

/// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
 float_t  ____intensity;

/// @brief Field _getNormalColor, offset: 0x40, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Color>*  ____getNormalColor;

/// @brief Field _getCurrentColor, offset: 0x48, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Color>*  ____getCurrentColor;

/// @brief Field _startColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor;

/// @brief Field _startTime, offset: 0x60, size: 0x4, def value: None
 float_t  ____startTime;

/// @brief Field _peak, offset: 0x64, size: 0x4, def value: None
 float_t  ____peak;

/// @brief Field _hasPeaked, offset: 0x68, size: 0x1, def value: None
 bool  ____hasPeaked;

/// @brief Field _stopping, offset: 0x69, size: 0x1, def value: None
 bool  ____stopping;

/// @brief Field _stoppingBeginTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ____stoppingBeginTime;

/// @brief Field _stoppingBeginColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____stoppingBeginColor;

/// @brief Field _stoppingEndTime, offset: 0x80, size: 0x4, def value: None
 float_t  ____stoppingEndTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____Active_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____onColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____offColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____useNormalColorAsOffColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____getNormalColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____getCurrentColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____startColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____startTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____peak) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____hasPeaked) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____stopping) == 0x69, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____stoppingBeginTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____stoppingBeginColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialVisualBlinking, ____stoppingEndTime) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialVisualBlinking, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialVisualBlinking);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialVisualBlinking*, "VROSC", "TutorialVisualBlinking");
