#pragma once
// IWYU pragma private; include "VROSC/IconSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IconSwitcher)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace VROSC {
class IconSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IconSwitcher);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IconSwitcher
class CORDL_TYPE IconSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeMesh, put=__cordl_internal_set__activeMesh)) ::UnityW<::UnityEngine::GameObject>  _activeMesh;

/// @brief Field _isHovering, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHovering, put=__cordl_internal_set__isHovering)) bool  _isHovering;

/// @brief Field _normalMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalMesh, put=__cordl_internal_set__normalMesh)) ::UnityW<::UnityEngine::GameObject>  _normalMesh;

/// @brief Field _startsActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__startsActive, put=__cordl_internal_set__startsActive)) bool  _startsActive;

/// @brief Method Awake, addr 0x17402a8, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::IconSwitcher* New_ctor() ;

/// @brief Method SetActive, addr 0x17402b0, size 0x60, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeActive) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__activeMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__activeMesh() ;

constexpr bool const& __cordl_internal_get__isHovering() const;

constexpr bool& __cordl_internal_get__isHovering() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalMesh() ;

constexpr bool const& __cordl_internal_get__startsActive() const;

constexpr bool& __cordl_internal_get__startsActive() ;

constexpr void __cordl_internal_set__activeMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__isHovering(bool  value) ;

constexpr void __cordl_internal_set__normalMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__startsActive(bool  value) ;

/// @brief Method .ctor, addr 0x1740310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconSwitcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconSwitcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconSwitcher(IconSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconSwitcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconSwitcher(IconSwitcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1110};

/// @brief Field _startsActive, offset: 0x20, size: 0x1, def value: None
 bool  ____startsActive;

/// @brief Field _normalMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____normalMesh;

/// @brief Field _activeMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____activeMesh;

/// @brief Field _isHovering, offset: 0x38, size: 0x1, def value: None
 bool  ____isHovering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IconSwitcher, ____startsActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitcher, ____normalMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitcher, ____activeMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitcher, ____isHovering) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IconSwitcher, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IconSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IconSwitcher*, "VROSC", "IconSwitcher");
