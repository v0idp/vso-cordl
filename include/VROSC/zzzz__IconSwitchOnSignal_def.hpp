#pragma once
// IWYU pragma private; include "VROSC/IconSwitchOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(IconSwitchOnSignal)
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class IconSwitchOnSignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IconSwitchOnSignal);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IconSwitchOnSignal
class CORDL_TYPE IconSwitchOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _activeMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeMesh, put=__cordl_internal_set__activeMesh)) ::UnityW<::UnityEngine::Mesh>  _activeMesh;

/// @brief Field _isHovering, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHovering, put=__cordl_internal_set__isHovering)) bool  _isHovering;

/// @brief Field _meshFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _normalMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalMesh, put=__cordl_internal_set__normalMesh)) ::UnityW<::UnityEngine::Mesh>  _normalMesh;

static inline ::VROSC::IconSwitchOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1740318, size 0x20, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x174036c, size 0x20, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method SetActive, addr 0x1740338, size 0x34, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeActive) ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__activeMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__activeMesh() ;

constexpr bool const& __cordl_internal_get__isHovering() const;

constexpr bool& __cordl_internal_get__isHovering() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__normalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__normalMesh() ;

constexpr void __cordl_internal_set__activeMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__isHovering(bool  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__normalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x174038c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconSwitchOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconSwitchOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconSwitchOnSignal(IconSwitchOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconSwitchOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconSwitchOnSignal(IconSwitchOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1111};

/// @brief Field _meshFilter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _normalMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____normalMesh;

/// @brief Field _activeMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____activeMesh;

/// @brief Field _isHovering, offset: 0x60, size: 0x1, def value: None
 bool  ____isHovering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IconSwitchOnSignal, ____meshFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitchOnSignal, ____normalMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitchOnSignal, ____activeMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconSwitchOnSignal, ____isHovering) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IconSwitchOnSignal, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IconSwitchOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IconSwitchOnSignal*, "VROSC", "IconSwitchOnSignal");
