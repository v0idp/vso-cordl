#pragma once
// IWYU pragma private; include "VROSC/IconMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IconMesh)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace VROSC::UI {
class IconData;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class IconMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IconMesh);
// Dependencies VROSC.AdjustableMesh
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IconMesh
class CORDL_TYPE IconMesh : public ::VROSC::AdjustableMesh {
public:
// Declarations
 __declspec(property(get=get_Original)) ::UnityW<::UnityEngine::Mesh>  Original;

/// @brief Field _alwaysUpdate, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpdate, put=__cordl_internal_set__alwaysUpdate)) bool  _alwaysUpdate;

/// @brief Field _data, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::UI::IconData>  _data;

/// @brief Field _lastHeight, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _scale, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) float_t  _scale;

/// @brief Method LoadMesh, addr 0x17aa2e0, size 0x20, virtual true, abstract: false, final false
inline void LoadMesh(bool  force) ;

static inline ::VROSC::IconMesh* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17aa51c, size 0x64, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17aa2b8, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetIcon, addr 0x17aa2cc, size 0x14, virtual false, abstract: false, final false
inline void SetIcon(::VROSC::UI::IconData*  data) ;

/// @brief Method SetMeshSize, addr 0x17aa414, size 0x90, virtual false, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Rect  rect) ;

/// @brief Method Update, addr 0x17aa4a4, size 0x8, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMesh, addr 0x17aa300, size 0x114, virtual false, abstract: false, final false
inline void UpdateMesh(bool  force) ;

/// @brief Method UpdateMeshAppearance, addr 0x17aa4ac, size 0x70, virtual true, abstract: false, final false
inline void UpdateMeshAppearance(float_t  appearAmount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr bool const& __cordl_internal_get__alwaysUpdate() const;

constexpr bool& __cordl_internal_get__alwaysUpdate() ;

constexpr ::UnityW<::VROSC::UI::IconData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::UI::IconData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr float_t const& __cordl_internal_get__scale() const;

constexpr float_t& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__alwaysUpdate(bool  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::UI::IconData>  value) ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__scale(float_t  value) ;

/// @brief Method .ctor, addr 0x17aa580, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Original, addr 0x17aa238, size 0x80, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Original() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconMesh(IconMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconMesh(IconMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1411};

/// @brief Field _data, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::IconData>  ____data;

/// @brief Field _alwaysUpdate, offset: 0x98, size: 0x1, def value: None
 bool  ____alwaysUpdate;

/// @brief Field _scale, offset: 0x9c, size: 0x4, def value: None
 float_t  ____scale;

/// @brief Field _lastHeight, offset: 0xa0, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0xa4, size: 0x4, def value: None
 float_t  ____lastWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IconMesh, ____data) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconMesh, ____alwaysUpdate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconMesh, ____scale) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconMesh, ____lastHeight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::IconMesh, ____lastWidth) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IconMesh, 0xa8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IconMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IconMesh*, "VROSC", "IconMesh");
