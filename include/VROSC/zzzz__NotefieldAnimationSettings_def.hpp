#pragma once
// IWYU pragma private; include "VROSC/NotefieldAnimationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NotefieldAnimationSettings)
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NotefieldAnimationSettings_TimelineSettings;
}
// Forward declare root types
namespace VROSC {
class NotefieldAnimationSettings;
}
namespace VROSC {
class NotefieldAnimationSettings_TimelineSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NotefieldAnimationSettings);
MARK_REF_PTR_T(::VROSC::NotefieldAnimationSettings_TimelineSettings);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NotefieldAnimationSettings/TimelineSettings
class CORDL_TYPE NotefieldAnimationSettings_TimelineSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PositionDeviationAmount)) float_t  PositionDeviationAmount;

 __declspec(property(get=get_PositionDeviationCurve)) ::UnityEngine::AnimationCurve*  PositionDeviationCurve;

 __declspec(property(get=get_RotationDeviationAmount)) float_t  RotationDeviationAmount;

 __declspec(property(get=get_RotationDeviationCurve)) ::UnityEngine::AnimationCurve*  RotationDeviationCurve;

 __declspec(property(get=get_SizeCurve)) ::UnityEngine::AnimationCurve*  SizeCurve;

/// @brief Field _positionDeviationAmount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__positionDeviationAmount, put=__cordl_internal_set__positionDeviationAmount)) float_t  _positionDeviationAmount;

/// @brief Field _positionDeviationCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionDeviationCurve, put=__cordl_internal_set__positionDeviationCurve)) ::UnityEngine::AnimationCurve*  _positionDeviationCurve;

/// @brief Field _rotationDeviationAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationDeviationAmount, put=__cordl_internal_set__rotationDeviationAmount)) float_t  _rotationDeviationAmount;

/// @brief Field _rotationDeviationCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDeviationCurve, put=__cordl_internal_set__rotationDeviationCurve)) ::UnityEngine::AnimationCurve*  _rotationDeviationCurve;

/// @brief Field _sizeCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sizeCurve, put=__cordl_internal_set__sizeCurve)) ::UnityEngine::AnimationCurve*  _sizeCurve;

static inline ::VROSC::NotefieldAnimationSettings_TimelineSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__positionDeviationAmount() const;

constexpr float_t& __cordl_internal_get__positionDeviationAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__positionDeviationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__positionDeviationCurve() ;

constexpr float_t const& __cordl_internal_get__rotationDeviationAmount() const;

constexpr float_t& __cordl_internal_get__rotationDeviationAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationDeviationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationDeviationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__sizeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__sizeCurve() ;

constexpr void __cordl_internal_set__positionDeviationAmount(float_t  value) ;

constexpr void __cordl_internal_set__positionDeviationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rotationDeviationAmount(float_t  value) ;

constexpr void __cordl_internal_set__rotationDeviationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sizeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x1710f88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PositionDeviationAmount, addr 0x1710f78, size 0x8, virtual false, abstract: false, final false
inline float_t get_PositionDeviationAmount() ;

/// @brief Method get_PositionDeviationCurve, addr 0x1710f68, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_PositionDeviationCurve() ;

/// @brief Method get_RotationDeviationAmount, addr 0x1710f80, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationDeviationAmount() ;

/// @brief Method get_RotationDeviationCurve, addr 0x1710f70, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RotationDeviationCurve() ;

/// @brief Method get_SizeCurve, addr 0x1710f60, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_SizeCurve() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotefieldAnimationSettings_TimelineSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotefieldAnimationSettings_TimelineSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotefieldAnimationSettings_TimelineSettings(NotefieldAnimationSettings_TimelineSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotefieldAnimationSettings_TimelineSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotefieldAnimationSettings_TimelineSettings(NotefieldAnimationSettings_TimelineSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{889};

/// @brief Field _sizeCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____sizeCurve;

/// @brief Field _positionDeviationCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____positionDeviationCurve;

/// @brief Field _rotationDeviationCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationDeviationCurve;

/// @brief Field _positionDeviationAmount, offset: 0x28, size: 0x4, def value: None
 float_t  ____positionDeviationAmount;

/// @brief Field _rotationDeviationAmount, offset: 0x2c, size: 0x4, def value: None
 float_t  ____rotationDeviationAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotefieldAnimationSettings_TimelineSettings, ____sizeCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings_TimelineSettings, ____positionDeviationCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings_TimelineSettings, ____rotationDeviationCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings_TimelineSettings, ____positionDeviationAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings_TimelineSettings, ____rotationDeviationAmount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotefieldAnimationSettings_TimelineSettings, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.ScriptableObject, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NotefieldAnimationSettings
class CORDL_TYPE NotefieldAnimationSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using TimelineSettings = ::VROSC::NotefieldAnimationSettings_TimelineSettings;

 __declspec(property(get=get_Creation)) ::VROSC::NotefieldAnimationSettings_TimelineSettings*  Creation;

 __declspec(property(get=get_Destruction)) ::VROSC::NotefieldAnimationSettings_TimelineSettings*  Destruction;

 __declspec(property(get=get_UseZDirection)) bool  UseZDirection;

/// @brief Field _animateionEndCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animateionEndCurve, put=__cordl_internal_set__animateionEndCurve)) ::UnityEngine::AnimationCurve*  _animateionEndCurve;

/// @brief Field _animationStartCurve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationStartCurve, put=__cordl_internal_set__animationStartCurve)) ::UnityEngine::AnimationCurve*  _animationStartCurve;

/// @brief Field _creation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__creation, put=__cordl_internal_set__creation)) ::VROSC::NotefieldAnimationSettings_TimelineSettings*  _creation;

/// @brief Field _destruction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__destruction, put=__cordl_internal_set__destruction)) ::VROSC::NotefieldAnimationSettings_TimelineSettings*  _destruction;

/// @brief Field _positionDeviationAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__positionDeviationAmount, put=__cordl_internal_set__positionDeviationAmount)) float_t  _positionDeviationAmount;

/// @brief Field _positionDeviationCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionDeviationCurve, put=__cordl_internal_set__positionDeviationCurve)) ::UnityEngine::AnimationCurve*  _positionDeviationCurve;

/// @brief Field _rotationDeviationAmount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationDeviationAmount, put=__cordl_internal_set__rotationDeviationAmount)) float_t  _rotationDeviationAmount;

/// @brief Field _rotationDeviationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationDeviationCurve, put=__cordl_internal_set__rotationDeviationCurve)) ::UnityEngine::AnimationCurve*  _rotationDeviationCurve;

/// @brief Field _sizeCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sizeCurve, put=__cordl_internal_set__sizeCurve)) ::UnityEngine::AnimationCurve*  _sizeCurve;

/// @brief Field _useZDirection, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__useZDirection, put=__cordl_internal_set__useZDirection)) bool  _useZDirection;

/// @brief Field previewScale, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_previewScale, put=__cordl_internal_set_previewScale)) ::VROSC::Scale  previewScale;

/// @brief Field previewX, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previewX, put=__cordl_internal_set_previewX)) int32_t  previewX;

/// @brief Field previewY, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_previewY, put=__cordl_internal_set_previewY)) int32_t  previewY;

/// @brief Field previewZ, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_previewZ, put=__cordl_internal_set_previewZ)) int32_t  previewZ;

/// @brief Method CreatePreviewNoteboard, addr 0x1710b30, size 0x41c, virtual false, abstract: false, final false
inline void CreatePreviewNoteboard(::VROSC::NoteBoardNoteController*  noteboardController) ;

/// @brief Method GetAnimationValue, addr 0x1710aa8, size 0x88, virtual false, abstract: false, final false
inline float_t GetAnimationValue(float_t  note, float_t  time) ;

static inline ::VROSC::NotefieldAnimationSettings* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animateionEndCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animateionEndCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationStartCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationStartCurve() ;

constexpr ::VROSC::NotefieldAnimationSettings_TimelineSettings* const& __cordl_internal_get__creation() const;

constexpr ::VROSC::NotefieldAnimationSettings_TimelineSettings*& __cordl_internal_get__creation() ;

constexpr ::VROSC::NotefieldAnimationSettings_TimelineSettings* const& __cordl_internal_get__destruction() const;

constexpr ::VROSC::NotefieldAnimationSettings_TimelineSettings*& __cordl_internal_get__destruction() ;

constexpr float_t const& __cordl_internal_get__positionDeviationAmount() const;

constexpr float_t& __cordl_internal_get__positionDeviationAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__positionDeviationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__positionDeviationCurve() ;

constexpr float_t const& __cordl_internal_get__rotationDeviationAmount() const;

constexpr float_t& __cordl_internal_get__rotationDeviationAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationDeviationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationDeviationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__sizeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__sizeCurve() ;

constexpr bool const& __cordl_internal_get__useZDirection() const;

constexpr bool& __cordl_internal_get__useZDirection() ;

constexpr ::VROSC::Scale const& __cordl_internal_get_previewScale() const;

constexpr ::VROSC::Scale& __cordl_internal_get_previewScale() ;

constexpr int32_t const& __cordl_internal_get_previewX() const;

constexpr int32_t& __cordl_internal_get_previewX() ;

constexpr int32_t const& __cordl_internal_get_previewY() const;

constexpr int32_t& __cordl_internal_get_previewY() ;

constexpr int32_t const& __cordl_internal_get_previewZ() const;

constexpr int32_t& __cordl_internal_get_previewZ() ;

constexpr void __cordl_internal_set__animateionEndCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__animationStartCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__creation(::VROSC::NotefieldAnimationSettings_TimelineSettings*  value) ;

constexpr void __cordl_internal_set__destruction(::VROSC::NotefieldAnimationSettings_TimelineSettings*  value) ;

constexpr void __cordl_internal_set__positionDeviationAmount(float_t  value) ;

constexpr void __cordl_internal_set__positionDeviationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rotationDeviationAmount(float_t  value) ;

constexpr void __cordl_internal_set__rotationDeviationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__sizeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__useZDirection(bool  value) ;

constexpr void __cordl_internal_set_previewScale(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set_previewX(int32_t  value) ;

constexpr void __cordl_internal_set_previewY(int32_t  value) ;

constexpr void __cordl_internal_set_previewZ(int32_t  value) ;

/// @brief Method .ctor, addr 0x1710f4c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Creation, addr 0x1710a90, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NotefieldAnimationSettings_TimelineSettings* get_Creation() ;

/// @brief Method get_Destruction, addr 0x1710a98, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NotefieldAnimationSettings_TimelineSettings* get_Destruction() ;

/// @brief Method get_UseZDirection, addr 0x1710aa0, size 0x8, virtual false, abstract: false, final false
inline bool get_UseZDirection() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotefieldAnimationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotefieldAnimationSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotefieldAnimationSettings(NotefieldAnimationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotefieldAnimationSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotefieldAnimationSettings(NotefieldAnimationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{890};

/// @brief Field _animationStartCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationStartCurve;

/// @brief Field _animateionEndCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animateionEndCurve;

/// @brief Field _creation, offset: 0x28, size: 0x8, def value: None
 ::VROSC::NotefieldAnimationSettings_TimelineSettings*  ____creation;

/// @brief Field _destruction, offset: 0x30, size: 0x8, def value: None
 ::VROSC::NotefieldAnimationSettings_TimelineSettings*  ____destruction;

/// @brief Field _sizeCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____sizeCurve;

/// @brief Field _positionDeviationCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____positionDeviationCurve;

/// @brief Field _rotationDeviationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationDeviationCurve;

/// @brief Field _positionDeviationAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ____positionDeviationAmount;

/// @brief Field _rotationDeviationAmount, offset: 0x54, size: 0x4, def value: None
 float_t  ____rotationDeviationAmount;

/// @brief Field _useZDirection, offset: 0x58, size: 0x1, def value: None
 bool  ____useZDirection;

/// @brief Field previewX, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___previewX;

/// @brief Field previewY, offset: 0x60, size: 0x4, def value: None
 int32_t  ___previewY;

/// @brief Field previewZ, offset: 0x64, size: 0x4, def value: None
 int32_t  ___previewZ;

/// @brief Field previewScale, offset: 0x68, size: 0x4, def value: None
 ::VROSC::Scale  ___previewScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____animationStartCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____animateionEndCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____creation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____destruction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____sizeCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____positionDeviationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____rotationDeviationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____positionDeviationAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____rotationDeviationAmount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ____useZDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ___previewX) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ___previewY) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ___previewZ) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::NotefieldAnimationSettings, ___previewScale) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NotefieldAnimationSettings, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NotefieldAnimationSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldAnimationSettings*, "VROSC", "NotefieldAnimationSettings");
NEED_NO_BOX(::VROSC::NotefieldAnimationSettings_TimelineSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NotefieldAnimationSettings_TimelineSettings*, "VROSC", "NotefieldAnimationSettings/TimelineSettings");
