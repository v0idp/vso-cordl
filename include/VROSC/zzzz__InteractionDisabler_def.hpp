#pragma once
// IWYU pragma private; include "VROSC/InteractionDisabler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractionDisabler)
namespace VROSC {
class Interactable;
}
// Forward declare root types
namespace VROSC {
class InteractionDisabler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InteractionDisabler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InteractionDisabler
class CORDL_TYPE InteractionDisabler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _getInteractablesOnAwake, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__getInteractablesOnAwake, put=__cordl_internal_set__getInteractablesOnAwake)) bool  _getInteractablesOnAwake;

/// @brief Field _interactables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactables, put=__cordl_internal_set__interactables)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _interactables;

/// @brief Method Awake, addr 0x1890714, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetInChildren, addr 0x1890724, size 0x54, virtual false, abstract: false, final false
inline void GetInChildren() ;

static inline ::VROSC::InteractionDisabler* New_ctor() ;

/// @brief Method SetDisabled, addr 0x1890778, size 0x108, virtual false, abstract: false, final false
inline void SetDisabled(bool  disabled, bool  disableVisually) ;

constexpr bool const& __cordl_internal_get__getInteractablesOnAwake() const;

constexpr bool& __cordl_internal_get__getInteractablesOnAwake() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__interactables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__interactables() ;

constexpr void __cordl_internal_set__getInteractablesOnAwake(bool  value) ;

constexpr void __cordl_internal_set__interactables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

/// @brief Method .ctor, addr 0x1890880, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionDisabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionDisabler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionDisabler(InteractionDisabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionDisabler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionDisabler(InteractionDisabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{631};

/// @brief Field _interactables, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____interactables;

/// @brief Field _getInteractablesOnAwake, offset: 0x28, size: 0x1, def value: None
 bool  ____getInteractablesOnAwake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InteractionDisabler, ____interactables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InteractionDisabler, ____getInteractablesOnAwake) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InteractionDisabler, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InteractionDisabler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InteractionDisabler*, "VROSC", "InteractionDisabler");
