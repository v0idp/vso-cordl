#pragma once
// IWYU pragma private; include "VROSC/SwitchObjectOnHover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SwitchObjectOnHover)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class Interactable;
}
// Forward declare root types
namespace VROSC {
class SwitchObjectOnHover;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SwitchObjectOnHover);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SwitchObjectOnHover
class CORDL_TYPE SwitchObjectOnHover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _interactable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) ::UnityW<::VROSC::Interactable>  _interactable;

/// @brief Field _normal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__normal, put=__cordl_internal_set__normal)) ::UnityW<::UnityEngine::GameObject>  _normal;

/// @brief Field _onHover, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onHover, put=__cordl_internal_set__onHover)) ::UnityW<::UnityEngine::GameObject>  _onHover;

static inline ::VROSC::SwitchObjectOnHover* New_ctor() ;

/// @brief Method OnDisable, addr 0x1771ea8, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1771d14, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetHovering, addr 0x1771e2c, size 0x7c, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__interactable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__interactable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normal() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__onHover() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__onHover() ;

constexpr void __cordl_internal_set__interactable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__normal(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__onHover(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1771fc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SwitchObjectOnHover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SwitchObjectOnHover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchObjectOnHover(SwitchObjectOnHover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchObjectOnHover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchObjectOnHover(SwitchObjectOnHover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1253};

/// @brief Field _interactable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____interactable;

/// @brief Field _normal, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____normal;

/// @brief Field _onHover, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____onHover;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SwitchObjectOnHover, ____interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SwitchObjectOnHover, ____normal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SwitchObjectOnHover, ____onHover) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SwitchObjectOnHover, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SwitchObjectOnHover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SwitchObjectOnHover*, "VROSC", "SwitchObjectOnHover");
