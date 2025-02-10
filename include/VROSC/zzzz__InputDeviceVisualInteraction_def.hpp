#pragma once
// IWYU pragma private; include "VROSC/InputDeviceVisualInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputDeviceVisualInteraction)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace VROSC::UI {
class UIAdjustableMeshColoring;
}
namespace VROSC {
class ControllerShaderEffects;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InputVisualizer;
}
namespace VROSC {
class UIWristBand;
}
// Forward declare root types
namespace VROSC {
class InputDeviceVisualInteraction;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputDeviceVisualInteraction);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputDeviceVisualInteraction
class CORDL_TYPE InputDeviceVisualInteraction : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controllerShaderEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerShaderEffect, put=__cordl_internal_set__controllerShaderEffect)) ::UnityW<::VROSC::ControllerShaderEffects>  _controllerShaderEffect;

/// @brief Field _downwardTiltAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__downwardTiltAngle, put=__cordl_internal_set__downwardTiltAngle)) float_t  _downwardTiltAngle;

/// @brief Field _fadeOwners, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeOwners, put=__cordl_internal_set__fadeOwners)) ::System::Collections::Generic::List_1<::System::Object*>*  _fadeOwners;

/// @brief Field _inactiveOwners, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactiveOwners, put=__cordl_internal_set__inactiveOwners)) ::System::Collections::Generic::List_1<::System::Object*>*  _inactiveOwners;

/// @brief Field _inputVisualizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputVisualizer, put=__cordl_internal_set__inputVisualizer)) ::UnityW<::VROSC::InputVisualizer>  _inputVisualizer;

/// @brief Field _interactionBar, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionBar, put=__cordl_internal_set__interactionBar)) ::UnityW<::VROSC::UIWristBand>  _interactionBar;

/// @brief Field _interactionColorMeshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionColorMeshes, put=__cordl_internal_set__interactionColorMeshes)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIAdjustableMeshColoring>>*  _interactionColorMeshes;

static inline ::VROSC::InputDeviceVisualInteraction* New_ctor() ;

/// @brief Method SetBarActive, addr 0x188e9a8, size 0x30, virtual false, abstract: false, final false
inline void SetBarActive(bool  active) ;

/// @brief Method SetBarValue, addr 0x188ef84, size 0x1c, virtual false, abstract: false, final false
inline void SetBarValue(float_t  value, ::VROSC::HandType  handType) ;

/// @brief Method SetControllerActive, addr 0x188f0f0, size 0x154, virtual false, abstract: false, final false
inline void SetControllerActive(::System::Object*  owner, bool  active) ;

/// @brief Method SetControllerFade, addr 0x188e9d8, size 0x190, virtual false, abstract: false, final false
inline void SetControllerFade(::System::Object*  owner, bool  fade) ;

/// @brief Method SetInteraction, addr 0x188ec28, size 0x17c, virtual false, abstract: false, final false
inline void SetInteraction(bool  interact, bool  fade) ;

/// @brief Method Setup, addr 0x188d430, size 0x34, virtual false, abstract: false, final false
inline void Setup(::VROSC::ControllerShaderEffects*  controllerShaderEffects) ;

constexpr ::UnityW<::VROSC::ControllerShaderEffects> const& __cordl_internal_get__controllerShaderEffect() const;

constexpr ::UnityW<::VROSC::ControllerShaderEffects>& __cordl_internal_get__controllerShaderEffect() ;

constexpr float_t const& __cordl_internal_get__downwardTiltAngle() const;

constexpr float_t& __cordl_internal_get__downwardTiltAngle() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__fadeOwners() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__fadeOwners() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__inactiveOwners() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__inactiveOwners() ;

constexpr ::UnityW<::VROSC::InputVisualizer> const& __cordl_internal_get__inputVisualizer() const;

constexpr ::UnityW<::VROSC::InputVisualizer>& __cordl_internal_get__inputVisualizer() ;

constexpr ::UnityW<::VROSC::UIWristBand> const& __cordl_internal_get__interactionBar() const;

constexpr ::UnityW<::VROSC::UIWristBand>& __cordl_internal_get__interactionBar() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIAdjustableMeshColoring>>* const& __cordl_internal_get__interactionColorMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIAdjustableMeshColoring>>*& __cordl_internal_get__interactionColorMeshes() ;

constexpr void __cordl_internal_set__controllerShaderEffect(::UnityW<::VROSC::ControllerShaderEffects>  value) ;

constexpr void __cordl_internal_set__downwardTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set__fadeOwners(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__inactiveOwners(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__inputVisualizer(::UnityW<::VROSC::InputVisualizer>  value) ;

constexpr void __cordl_internal_set__interactionBar(::UnityW<::VROSC::UIWristBand>  value) ;

constexpr void __cordl_internal_set__interactionColorMeshes(::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIAdjustableMeshColoring>>*  value) ;

/// @brief Method .ctor, addr 0x188f244, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceVisualInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceVisualInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDeviceVisualInteraction(InputDeviceVisualInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceVisualInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDeviceVisualInteraction(InputDeviceVisualInteraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{623};

/// @brief Field _interactionColorMeshes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UI::UIAdjustableMeshColoring>>*  ____interactionColorMeshes;

/// @brief Field _inputVisualizer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputVisualizer>  ____inputVisualizer;

/// @brief Field _interactionBar, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIWristBand>  ____interactionBar;

/// @brief Field _downwardTiltAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ____downwardTiltAngle;

/// @brief Field _fadeOwners, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____fadeOwners;

/// @brief Field _inactiveOwners, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____inactiveOwners;

/// @brief Field _controllerShaderEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerShaderEffects>  ____controllerShaderEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____interactionColorMeshes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____inputVisualizer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____interactionBar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____downwardTiltAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____fadeOwners) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____inactiveOwners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceVisualInteraction, ____controllerShaderEffect) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputDeviceVisualInteraction, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputDeviceVisualInteraction);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDeviceVisualInteraction*, "VROSC", "InputDeviceVisualInteraction");
