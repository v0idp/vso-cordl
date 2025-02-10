#pragma once
// IWYU pragma private; include "VROSC/SlideValueByController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Axis_def.hpp"
#include "VROSC/zzzz__IntChanger_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SlideValueByController)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class IntField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SlideValueByController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SlideValueByController);
// Dependencies UnityEngine.Vector3, VROSC.Axis, VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SlideValueByController
class CORDL_TYPE SlideValueByController : public ::VROSC::IntChanger {
public:
// Declarations
 __declspec(property(get=get_RequireOrigin)) bool  RequireOrigin;

/// @brief Field _affectingTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__affectingTransform, put=__cordl_internal_set__affectingTransform)) ::UnityW<::UnityEngine::Transform>  _affectingTransform;

/// @brief Field _sensitivity, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__sensitivity, put=__cordl_internal_set__sensitivity)) ::VROSC::IntField*  _sensitivity;

/// @brief Field _slideAxis, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideAxis, put=__cordl_internal_set__slideAxis)) ::VROSC::Axis  _slideAxis;

/// @brief Field _startPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _startValue, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue, put=__cordl_internal_set__startValue)) int32_t  _startValue;

static inline ::VROSC::SlideValueByController* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171b31c, size 0x54, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171b370, size 0xb4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetValueBySignal, addr 0x171b424, size 0xb4, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__affectingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__affectingTransform() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__sensitivity() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__sensitivity() ;

constexpr ::VROSC::Axis const& __cordl_internal_get__slideAxis() const;

constexpr ::VROSC::Axis& __cordl_internal_get__slideAxis() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr int32_t const& __cordl_internal_get__startValue() const;

constexpr int32_t& __cordl_internal_get__startValue() ;

constexpr void __cordl_internal_set__affectingTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sensitivity(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__slideAxis(::VROSC::Axis  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startValue(int32_t  value) ;

/// @brief Method .ctor, addr 0x171b4d8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RequireOrigin, addr 0x171b314, size 0x8, virtual true, abstract: false, final false
inline bool get_RequireOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlideValueByController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlideValueByController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SlideValueByController(SlideValueByController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlideValueByController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlideValueByController(SlideValueByController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{943};

/// @brief Field _slideAxis, offset: 0x54, size: 0x4, def value: None
 ::VROSC::Axis  ____slideAxis;

/// @brief Field _sensitivity, offset: 0x58, size: 0x8, def value: None
 ::VROSC::IntField*  ____sensitivity;

/// @brief Field _startPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _startValue, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____startValue;

/// @brief Field _affectingTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____affectingTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SlideValueByController, ____slideAxis) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::SlideValueByController, ____sensitivity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SlideValueByController, ____startPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SlideValueByController, ____startValue) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SlideValueByController, ____affectingTransform) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SlideValueByController, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SlideValueByController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SlideValueByController*, "VROSC", "SlideValueByController");
