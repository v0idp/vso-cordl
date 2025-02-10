#pragma once
// IWYU pragma private; include "Vuplex/Demos/CameraRotator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(CameraRotator)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Vuplex::Demos {
class CameraRotator;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::Demos::CameraRotator);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CameraRotator
class CORDL_TYPE CameraRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field InstructionMessage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstructionMessage, put=__cordl_internal_set_InstructionMessage)) ::UnityW<::UnityEngine::GameObject>  InstructionMessage;

/// @brief Field _legacyInputManagerDisabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__legacyInputManagerDisabled, put=__cordl_internal_set__legacyInputManagerDisabled)) bool  _legacyInputManagerDisabled;

/// @brief Field _rotationFromMouse, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationFromMouse, put=__cordl_internal_set__rotationFromMouse)) ::UnityEngine::Vector2  _rotationFromMouse;

static inline ::Vuplex::Demos::CameraRotator* New_ctor() ;

/// @brief Method Start, addr 0x16c6ec4, size 0xe8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x16c6fac, size 0x274, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_InstructionMessage() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_InstructionMessage() ;

constexpr bool const& __cordl_internal_get__legacyInputManagerDisabled() const;

constexpr bool& __cordl_internal_get__legacyInputManagerDisabled() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__rotationFromMouse() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__rotationFromMouse() ;

constexpr void __cordl_internal_set_InstructionMessage(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__legacyInputManagerDisabled(bool  value) ;

constexpr void __cordl_internal_set__rotationFromMouse(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x16c7220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraRotator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraRotator(CameraRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraRotator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraRotator(CameraRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{78};

/// @brief Field InstructionMessage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___InstructionMessage;

/// @brief Field _legacyInputManagerDisabled, offset: 0x28, size: 0x1, def value: None
 bool  ____legacyInputManagerDisabled;

/// @brief Field _rotationFromMouse, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____rotationFromMouse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CameraRotator, ___InstructionMessage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CameraRotator, ____legacyInputManagerDisabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CameraRotator, ____rotationFromMouse) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CameraRotator, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::Demos
NEED_NO_BOX(::Vuplex::Demos::CameraRotator);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CameraRotator*, "Vuplex.Demos", "CameraRotator");
