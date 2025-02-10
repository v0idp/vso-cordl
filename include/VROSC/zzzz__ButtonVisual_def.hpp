#pragma once
// IWYU pragma private; include "VROSC/ButtonVisual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ButtonVisual)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace VROSC {
class ButtonVisual;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ButtonVisual);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ButtonVisual
class CORDL_TYPE ButtonVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _active, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _activeMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeMesh, put=__cordl_internal_set__activeMesh)) ::UnityW<::UnityEngine::Mesh>  _activeMesh;

/// @brief Field _activeTextColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeTextColor, put=__cordl_internal_set__activeTextColor)) ::UnityEngine::Color  _activeTextColor;

/// @brief Field _hoverColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _inActiveTextColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__inActiveTextColor, put=__cordl_internal_set__inActiveTextColor)) ::UnityEngine::Color  _inActiveTextColor;

/// @brief Field _inactiveMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactiveMesh, put=__cordl_internal_set__inactiveMesh)) ::UnityW<::UnityEngine::Mesh>  _inactiveMesh;

/// @brief Field _meshFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _text, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Method AutoFind, addr 0x1749b80, size 0xe4, virtual false, abstract: false, final false
inline void AutoFind() ;

static inline ::VROSC::ButtonVisual* New_ctor() ;

/// @brief Method SetActive, addr 0x1749a60, size 0x120, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetHovering, addr 0x1749970, size 0xf0, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

/// @brief Method SetText, addr 0x1749958, size 0x18, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__activeMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__activeMesh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeTextColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inActiveTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inActiveTextColor() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__inactiveMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__inactiveMesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__activeMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__activeTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__inActiveTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__inactiveMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x1749c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonVisual", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonVisual(ButtonVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonVisual", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonVisual(ButtonVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1133};

/// @brief Field _meshFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _activeMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____activeMesh;

/// @brief Field _inactiveMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____inactiveMesh;

/// @brief Field _text, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _activeTextColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeTextColor;

/// @brief Field _inActiveTextColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____inActiveTextColor;

/// @brief Field _hoverColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// @brief Field _active, offset: 0x70, size: 0x1, def value: None
 bool  ____active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ButtonVisual, ____meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____activeMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____inactiveMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____text) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____activeTextColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____inActiveTextColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____hoverColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonVisual, ____active) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ButtonVisual, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ButtonVisual);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ButtonVisual*, "VROSC", "ButtonVisual");
