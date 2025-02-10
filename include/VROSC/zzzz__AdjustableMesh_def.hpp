#pragma once
// IWYU pragma private; include "VROSC/AdjustableMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__AdjustableMeshUvs_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMesh)
namespace System {
class Action;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class AdjustableMeshColors;
}
namespace VROSC {
class AdjustableMeshUvs;
}
namespace VROSC {
class AdjustableMeshVerts;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class AdjustableMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMesh);
// Dependencies UnityEngine.MonoBehaviour, VROSC.AdjustableMeshUvs::Channel, VROSC.AnimatedAppear::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMesh
class CORDL_TYPE AdjustableMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Colors, put=set_Colors)) ::VROSC::AdjustableMeshColors*  Colors;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_MultiplyOriginalVertexColor)) float_t  MultiplyOriginalVertexColor;

/// @brief Field OnMeshCreation, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMeshCreation, put=__cordl_internal_set_OnMeshCreation)) ::System::Action*  OnMeshCreation;

/// @brief Field OnMeshVisible, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMeshVisible, put=__cordl_internal_set_OnMeshVisible)) ::System::Action*  OnMeshVisible;

 __declspec(property(get=get_Original)) ::UnityW<::UnityEngine::Mesh>  Original;

 __declspec(property(get=get_RectTransform)) ::UnityW<::UnityEngine::RectTransform>  RectTransform;

 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::MeshRenderer>  Renderer;

 __declspec(property(get=get_UVs, put=set_UVs)) ::VROSC::AdjustableMeshUvs*  UVs;

 __declspec(property(get=get_Verts, put=set_Verts)) ::VROSC::AdjustableMeshVerts*  Verts;

/// @brief Field <Colors>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Colors_k__BackingField, put=__cordl_internal_set__Colors_k__BackingField)) ::VROSC::AdjustableMeshColors*  _Colors_k__BackingField;

/// @brief Field <UVs>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__UVs_k__BackingField, put=__cordl_internal_set__UVs_k__BackingField)) ::VROSC::AdjustableMeshUvs*  _UVs_k__BackingField;

/// @brief Field <Verts>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Verts_k__BackingField, put=__cordl_internal_set__Verts_k__BackingField)) ::VROSC::AdjustableMeshVerts*  _Verts_k__BackingField;

/// @brief Field _appearAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__appearAmount, put=__cordl_internal_set__appearAmount)) float_t  _appearAmount;

/// @brief Field _appearFlashAmount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__appearFlashAmount, put=__cordl_internal_set__appearFlashAmount)) float_t  _appearFlashAmount;

/// @brief Field _appearMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__appearMode, put=__cordl_internal_set__appearMode)) ::VROSC::AnimatedAppear_Mode  _appearMode;

/// @brief Field _floatColors, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__floatColors, put=__cordl_internal_set__floatColors)) bool  _floatColors;

/// @brief Field _instantiatedMesh, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__instantiatedMesh, put=__cordl_internal_set__instantiatedMesh)) ::UnityW<::UnityEngine::Mesh>  _instantiatedMesh;

/// @brief Field _meshFilter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _meshRenderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshRenderer, put=__cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _meshRenderer;

/// @brief Field _multiplyOriginalVertexColor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__multiplyOriginalVertexColor, put=__cordl_internal_set__multiplyOriginalVertexColor)) float_t  _multiplyOriginalVertexColor;

/// @brief Field _original, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__original, put=__cordl_internal_set__original)) ::UnityW<::UnityEngine::Mesh>  _original;

/// @brief Field _rectTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _useFlash, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__useFlash, put=__cordl_internal_set__useFlash)) bool  _useFlash;

/// @brief Field _uvChannel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__uvChannel, put=__cordl_internal_set__uvChannel)) ::VROSC::AdjustableMeshUvs_Channel  _uvChannel;

/// @brief Method AddUIColoring, addr 0x17a6acc, size 0x64, virtual false, abstract: false, final false
inline void AddUIColoring() ;

/// @brief Method Awake, addr 0x17a6424, size 0xc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearMesh, addr 0x17a6668, size 0x90, virtual false, abstract: false, final false
inline void ClearMesh() ;

/// @brief Method GetMesh, addr 0x17a6294, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> GetMesh() ;

/// @brief Method GetMeshRenderer, addr 0x17a62c0, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshRenderer> GetMeshRenderer() ;

/// @brief Method GetRectTransform, addr 0x17a6358, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> GetRectTransform() ;

/// @brief Method LoadMesh, addr 0x17a64ec, size 0x17c, virtual true, abstract: false, final false
inline void LoadMesh(bool  force) ;

static inline ::VROSC::AdjustableMesh* New_ctor() ;

/// @brief Method OnDisable, addr 0x17a6924, size 0xf4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17a6430, size 0x38, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostLoadMesh, addr 0x17a66f8, size 0x130, virtual false, abstract: false, final false
inline void PostLoadMesh(bool  useOriginalAsUV) ;

/// @brief Method SetMesh, addr 0x17a6ab8, size 0x14, virtual false, abstract: false, final false
inline void SetMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method UpdateMeshAppearance, addr 0x17a6828, size 0xfc, virtual true, abstract: false, final false
inline void UpdateMeshAppearance(float_t  appearAmount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

/// @brief Method UseOriginalMesh, addr 0x17a6a18, size 0xa0, virtual false, abstract: false, final false
inline void UseOriginalMesh() ;

/// @brief Method Verify, addr 0x17a6468, size 0x84, virtual true, abstract: false, final false
inline void Verify() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMeshCreation() const;

constexpr ::System::Action*& __cordl_internal_get_OnMeshCreation() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMeshVisible() const;

constexpr ::System::Action*& __cordl_internal_get_OnMeshVisible() ;

constexpr ::VROSC::AdjustableMeshColors* const& __cordl_internal_get__Colors_k__BackingField() const;

constexpr ::VROSC::AdjustableMeshColors*& __cordl_internal_get__Colors_k__BackingField() ;

constexpr ::VROSC::AdjustableMeshUvs* const& __cordl_internal_get__UVs_k__BackingField() const;

constexpr ::VROSC::AdjustableMeshUvs*& __cordl_internal_get__UVs_k__BackingField() ;

constexpr ::VROSC::AdjustableMeshVerts* const& __cordl_internal_get__Verts_k__BackingField() const;

constexpr ::VROSC::AdjustableMeshVerts*& __cordl_internal_get__Verts_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__appearAmount() const;

constexpr float_t& __cordl_internal_get__appearAmount() ;

constexpr float_t const& __cordl_internal_get__appearFlashAmount() const;

constexpr float_t& __cordl_internal_get__appearFlashAmount() ;

constexpr ::VROSC::AnimatedAppear_Mode const& __cordl_internal_get__appearMode() const;

constexpr ::VROSC::AnimatedAppear_Mode& __cordl_internal_get__appearMode() ;

constexpr bool const& __cordl_internal_get__floatColors() const;

constexpr bool& __cordl_internal_get__floatColors() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__instantiatedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__instantiatedMesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer() ;

constexpr float_t const& __cordl_internal_get__multiplyOriginalVertexColor() const;

constexpr float_t& __cordl_internal_get__multiplyOriginalVertexColor() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__original() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__original() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__useFlash() const;

constexpr bool& __cordl_internal_get__useFlash() ;

constexpr ::VROSC::AdjustableMeshUvs_Channel const& __cordl_internal_get__uvChannel() const;

constexpr ::VROSC::AdjustableMeshUvs_Channel& __cordl_internal_get__uvChannel() ;

constexpr void __cordl_internal_set_OnMeshCreation(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnMeshVisible(::System::Action*  value) ;

constexpr void __cordl_internal_set__Colors_k__BackingField(::VROSC::AdjustableMeshColors*  value) ;

constexpr void __cordl_internal_set__UVs_k__BackingField(::VROSC::AdjustableMeshUvs*  value) ;

constexpr void __cordl_internal_set__Verts_k__BackingField(::VROSC::AdjustableMeshVerts*  value) ;

constexpr void __cordl_internal_set__appearAmount(float_t  value) ;

constexpr void __cordl_internal_set__appearFlashAmount(float_t  value) ;

constexpr void __cordl_internal_set__appearMode(::VROSC::AnimatedAppear_Mode  value) ;

constexpr void __cordl_internal_set__floatColors(bool  value) ;

constexpr void __cordl_internal_set__instantiatedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__multiplyOriginalVertexColor(float_t  value) ;

constexpr void __cordl_internal_set__original(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__useFlash(bool  value) ;

constexpr void __cordl_internal_set__uvChannel(::VROSC::AdjustableMeshUvs_Channel  value) ;

/// @brief Method .ctor, addr 0x17a6b30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Colors, addr 0x17a63fc, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AdjustableMeshColors* get_Colors() ;

/// @brief Method get_Mesh, addr 0x17a6274, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_MultiplyOriginalVertexColor, addr 0x17a63ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_MultiplyOriginalVertexColor() ;

/// @brief Method get_Original, addr 0x17a62b4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Original() ;

/// @brief Method get_RectTransform, addr 0x17a6354, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_RectTransform() ;

/// @brief Method get_Renderer, addr 0x17a62bc, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshRenderer> get_Renderer() ;

/// @brief Method get_UVs, addr 0x17a640c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AdjustableMeshUvs* get_UVs() ;

/// @brief Method get_Verts, addr 0x17a641c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AdjustableMeshVerts* get_Verts() ;

/// @brief Method set_Colors, addr 0x17a63f4, size 0x8, virtual false, abstract: false, final false
inline void set_Colors(::VROSC::AdjustableMeshColors*  value) ;

/// @brief Method set_UVs, addr 0x17a6404, size 0x8, virtual false, abstract: false, final false
inline void set_UVs(::VROSC::AdjustableMeshUvs*  value) ;

/// @brief Method set_Verts, addr 0x17a6414, size 0x8, virtual false, abstract: false, final false
inline void set_Verts(::VROSC::AdjustableMeshVerts*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMesh(AdjustableMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMesh(AdjustableMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1387};

/// @brief Field <Colors>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AdjustableMeshColors*  ____Colors_k__BackingField;

/// @brief Field <UVs>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::VROSC::AdjustableMeshUvs*  ____UVs_k__BackingField;

/// @brief Field <Verts>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AdjustableMeshVerts*  ____Verts_k__BackingField;

/// @brief Field _original, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____original;

/// @brief Field _uvChannel, offset: 0x40, size: 0x4, def value: None
 ::VROSC::AdjustableMeshUvs_Channel  ____uvChannel;

/// @brief Field _floatColors, offset: 0x44, size: 0x1, def value: None
 bool  ____floatColors;

/// @brief Field _multiplyOriginalVertexColor, offset: 0x48, size: 0x4, def value: None
 float_t  ____multiplyOriginalVertexColor;

/// @brief Field _appearFlashAmount, offset: 0x4c, size: 0x4, def value: None
 float_t  ____appearFlashAmount;

/// @brief Field _appearAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ____appearAmount;

/// @brief Field _appearMode, offset: 0x54, size: 0x4, def value: None
 ::VROSC::AnimatedAppear_Mode  ____appearMode;

/// @brief Field _useFlash, offset: 0x58, size: 0x1, def value: None
 bool  ____useFlash;

/// @brief Field _instantiatedMesh, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____instantiatedMesh;

/// @brief Field _meshFilter, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _meshRenderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____meshRenderer;

/// @brief Field _rectTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field OnMeshCreation, offset: 0x80, size: 0x8, def value: None
 ::System::Action*  ___OnMeshCreation;

/// @brief Field OnMeshVisible, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___OnMeshVisible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMesh, ____Colors_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____UVs_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____Verts_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____original) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____uvChannel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____floatColors) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____multiplyOriginalVertexColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____appearFlashAmount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____appearAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____appearMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____useFlash) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____instantiatedMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____meshFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____meshRenderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ____rectTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ___OnMeshCreation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMesh, ___OnMeshVisible) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMesh, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMesh*, "VROSC", "AdjustableMesh");
