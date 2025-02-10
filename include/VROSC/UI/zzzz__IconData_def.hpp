#pragma once
// IWYU pragma private; include "VROSC/UI/IconData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IconData)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace VROSC::UI {
class IconData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::IconData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.IconData
class CORDL_TYPE IconData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

/// @brief Field _colorized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__colorized, put=__cordl_internal_set__colorized)) bool  _colorized;

/// @brief Field _mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

static inline ::VROSC::UI::IconData* New_ctor() ;

/// @brief Method Resize, addr 0x17e8f8c, size 0x150, virtual false, abstract: false, final false
inline void Resize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  scale) ;

constexpr bool const& __cordl_internal_get__colorized() const;

constexpr bool& __cordl_internal_get__colorized() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr void __cordl_internal_set__colorized(bool  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x17e90dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Mesh, addr 0x17e8f84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconData(IconData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconData(IconData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1629};

/// @brief Field _mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _colorized, offset: 0x20, size: 0x1, def value: None
 bool  ____colorized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::IconData, ____mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::IconData, ____colorized) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::IconData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::IconData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::IconData*, "VROSC.UI", "IconData");
