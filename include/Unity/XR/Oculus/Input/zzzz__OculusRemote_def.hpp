#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusRemote.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
CORDL_MODULE_EXPORT(OculusRemote)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusRemote;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusRemote);
// Dependencies UnityEngine.InputSystem.InputDevice
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusRemote
class CORDL_TYPE OculusRemote : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief Field <back>k__BackingField, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__back_k__BackingField, put=__cordl_internal_set__back_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _back_k__BackingField;

/// @brief Field <start>k__BackingField, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__start_k__BackingField, put=__cordl_internal_set__start_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _start_k__BackingField;

/// @brief Field <touchpad>k__BackingField, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchpad_k__BackingField, put=__cordl_internal_set__touchpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _touchpad_k__BackingField;

 __declspec(property(get=get_back, put=set_back)) ::UnityEngine::InputSystem::Controls::ButtonControl*  back;

 __declspec(property(get=get_start, put=set_start)) ::UnityEngine::InputSystem::Controls::ButtonControl*  start;

 __declspec(property(get=get_touchpad, put=set_touchpad)) ::UnityEngine::InputSystem::Controls::Vector2Control*  touchpad;

/// @brief Method FinishSetup, addr 0x2f3f534, size 0xe8, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::Unity::XR::Oculus::Input::OculusRemote* New_ctor() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__back_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__back_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__start_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__start_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__touchpad_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField() ;

constexpr void __cordl_internal_set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__start_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// @brief Method .ctor, addr 0x2f3f61c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_back, addr 0x2f3f504, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_back() ;

/// @brief Method get_start, addr 0x2f3f514, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_start() ;

/// @brief Method get_touchpad, addr 0x2f3f524, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad() ;

/// @brief Method set_back, addr 0x2f3f50c, size 0x8, virtual false, abstract: false, final false
inline void set_back(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_start, addr 0x2f3f51c, size 0x8, virtual false, abstract: false, final false
inline void set_start(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_touchpad, addr 0x2f3f52c, size 0x8, virtual false, abstract: false, final false
inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OculusRemote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OculusRemote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusRemote(OculusRemote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusRemote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusRemote(OculusRemote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11392};

/// @brief Field <back>k__BackingField, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____back_k__BackingField;

/// @brief Field <start>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____start_k__BackingField;

/// @brief Field <touchpad>k__BackingField, offset: 0x198, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector2Control*  ____touchpad_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::OculusRemote, ____back_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusRemote, ____start_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusRemote, ____touchpad_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusRemote, 0x1a0>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusRemote);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusRemote*, "Unity.XR.Oculus.Input", "OculusRemote");
