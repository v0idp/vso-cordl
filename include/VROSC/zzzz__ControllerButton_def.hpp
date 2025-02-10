#pragma once
// IWYU pragma private; include "VROSC/ControllerButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ControllerComponent_def.hpp"
CORDL_MODULE_EXPORT(ControllerButton)
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class ControllerButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerButton);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, VROSC.ControllerComponent
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerButton
class CORDL_TYPE ControllerButton : public ::VROSC::ControllerComponent {
public:
// Declarations
/// @brief Field _grip, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__grip, put=__cordl_internal_set__grip)) bool  _grip;

/// @brief Field _inputDevice, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevice, put=__cordl_internal_set__inputDevice)) ::UnityW<::VROSC::InputDevice>  _inputDevice;

/// @brief Field _pressedPostionOffset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__pressedPostionOffset, put=__cordl_internal_set__pressedPostionOffset)) ::UnityEngine::Vector3  _pressedPostionOffset;

/// @brief Field _pressedRotaionOffset, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__pressedRotaionOffset, put=__cordl_internal_set__pressedRotaionOffset)) ::UnityEngine::Vector3  _pressedRotaionOffset;

/// @brief Field _startPosition, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _startRotation, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__startRotation, put=__cordl_internal_set__startRotation)) ::UnityEngine::Quaternion  _startRotation;

/// @brief Field _trigger, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__trigger, put=__cordl_internal_set__trigger)) bool  _trigger;

/// @brief Method Awake, addr 0x17321d4, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x1732224, size 0x208, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::ControllerButton* New_ctor() ;

constexpr bool const& __cordl_internal_get__grip() const;

constexpr bool& __cordl_internal_get__grip() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__inputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__inputDevice() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pressedPostionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pressedPostionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__pressedRotaionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__pressedRotaionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation() ;

constexpr bool const& __cordl_internal_get__trigger() const;

constexpr bool& __cordl_internal_get__trigger() ;

constexpr void __cordl_internal_set__grip(bool  value) ;

constexpr void __cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__pressedPostionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pressedRotaionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__trigger(bool  value) ;

/// @brief Method .ctor, addr 0x173242c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerButton(ControllerButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerButton(ControllerButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1064};

/// @brief Field _pressedPostionOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pressedPostionOffset;

/// @brief Field _pressedRotaionOffset, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____pressedRotaionOffset;

/// @brief Field _inputDevice, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____inputDevice;

/// @brief Field _trigger, offset: 0x70, size: 0x1, def value: None
 bool  ____trigger;

/// @brief Field _grip, offset: 0x71, size: 0x1, def value: None
 bool  ____grip;

/// @brief Field _startPosition, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _startRotation, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____startRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerButton, ____pressedPostionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____pressedRotaionOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____inputDevice) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____trigger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____grip) == 0x71, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____startPosition) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerButton, ____startRotation) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerButton, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerButton*, "VROSC", "ControllerButton");
