#pragma once
// IWYU pragma private; include "VROSC/ControllerStick.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerStick)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class ControllerStick;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerStick);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerStick
class CORDL_TYPE ControllerStick : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _limits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__limits, put=__cordl_internal_set__limits)) float_t  _limits;

/// @brief Field _startRotation, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__startRotation, put=__cordl_internal_set__startRotation)) ::UnityEngine::Quaternion  _startRotation;

/// @brief Method EvaluateThumbstickInput, addr 0x1733d40, size 0x170, virtual false, abstract: false, final false
inline void EvaluateThumbstickInput(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  vector) ;

static inline ::VROSC::ControllerStick* New_ctor() ;

/// @brief Method OnDisable, addr 0x1733c48, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1733b2c, size 0x11c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr float_t const& __cordl_internal_get__limits() const;

constexpr float_t& __cordl_internal_get__limits() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation() ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__limits(float_t  value) ;

constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x1733eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerStick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerStick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerStick(ControllerStick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerStick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerStick(ControllerStick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1072};

/// @brief Field _limits, offset: 0x20, size: 0x4, def value: None
 float_t  ____limits;

/// @brief Field _device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _startRotation, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____startRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerStick, ____limits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerStick, ____device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerStick, ____startRotation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerStick, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerStick);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerStick*, "VROSC", "ControllerStick");
