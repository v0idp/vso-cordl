#pragma once
// IWYU pragma private; include "GlobalNamespace/ShiftKeyBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ShiftKeyBehaviour)
namespace GlobalNamespace {
class Key;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ShiftKeyBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShiftKeyBehaviour);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShiftKeyBehaviour
class CORDL_TYPE ShiftKeyBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Housing, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Housing, put=__cordl_internal_set_Housing)) ::UnityW<::UnityEngine::GameObject>  Housing;

/// @brief Field keyCap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyCap, put=__cordl_internal_set_keyCap)) ::UnityW<::UnityEngine::GameObject>  keyCap;

/// @brief Field keyCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyCollider, put=__cordl_internal_set_keyCollider)) ::UnityW<::UnityEngine::BoxCollider>  keyCollider;

/// @brief Field keyRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyRenderer, put=__cordl_internal_set_keyRenderer)) ::UnityW<::UnityEngine::Renderer>  keyRenderer;

/// @brief Field shiftKeyController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftKeyController, put=__cordl_internal_set_shiftKeyController)) ::UnityW<::GlobalNamespace::Key>  shiftKeyController;

/// @brief Method Awake, addr 0x16bac24, size 0x194, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ShiftKeyBehaviour* New_ctor() ;

/// @brief Method ShiftKeyPressed, addr 0x16badb8, size 0x44, virtual false, abstract: false, final false
inline void ShiftKeyPressed(::GlobalNamespace::Key*  key) ;

/// @brief Method ShiftVisibilityToggle, addr 0x16badfc, size 0x74, virtual false, abstract: false, final false
inline void ShiftVisibilityToggle(bool  state) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Housing() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Housing() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_keyCap() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_keyCap() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_keyCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_keyCollider() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_keyRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_keyRenderer() ;

constexpr ::UnityW<::GlobalNamespace::Key> const& __cordl_internal_get_shiftKeyController() const;

constexpr ::UnityW<::GlobalNamespace::Key>& __cordl_internal_get_shiftKeyController() ;

constexpr void __cordl_internal_set_Housing(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_keyCap(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_keyCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_keyRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_shiftKeyController(::UnityW<::GlobalNamespace::Key>  value) ;

/// @brief Method .ctor, addr 0x16bae70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShiftKeyBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShiftKeyBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShiftKeyBehaviour(ShiftKeyBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShiftKeyBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShiftKeyBehaviour(ShiftKeyBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15};

/// @brief Field Housing, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Housing;

/// @brief Field keyRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___keyRenderer;

/// @brief Field keyCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___keyCollider;

/// @brief Field keyCap, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___keyCap;

/// @brief Field shiftKeyController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Key>  ___shiftKeyController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShiftKeyBehaviour, ___Housing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShiftKeyBehaviour, ___keyRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShiftKeyBehaviour, ___keyCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShiftKeyBehaviour, ___keyCap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShiftKeyBehaviour, ___shiftKeyController) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShiftKeyBehaviour, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShiftKeyBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShiftKeyBehaviour*, "", "ShiftKeyBehaviour");
