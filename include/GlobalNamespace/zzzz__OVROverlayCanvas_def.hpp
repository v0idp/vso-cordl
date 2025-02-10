#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRRayTransformer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvas)
namespace GlobalNamespace {
struct OVROverlayCanvas_CanvasShape;
}
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayCanvas_CanvasShape;
}
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
namespace GlobalNamespace {
class OVROverlayCanvas;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayCanvas_CanvasShape);
MARK_VAL_T(::GlobalNamespace::OVROverlayCanvas_DrawMode);
MARK_REF_PTR_T(::GlobalNamespace::OVROverlayCanvas);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayCanvas/DrawMode
struct CORDL_TYPE OVROverlayCanvas_DrawMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayCanvas_DrawMode_Unwrapped
enum struct __OVROverlayCanvas_DrawMode_Unwrapped : int32_t {
__E_Opaque = static_cast<int32_t>(0x0),
__E_OpaqueWithClip = static_cast<int32_t>(0x1),
__E_TransparentDefaultAlpha = static_cast<int32_t>(0x2),
__E_TransparentCorrectAlpha = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayCanvas_DrawMode_Unwrapped () const noexcept {
return static_cast<__OVROverlayCanvas_DrawMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_DrawMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVROverlayCanvas_DrawMode(int32_t  value__) noexcept;

/// @brief Field Opaque value: I32(0)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const Opaque;

/// @brief Field OpaqueWithClip value: I32(1)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const OpaqueWithClip;

/// @brief Field TransparentCorrectAlpha value: I32(3)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const TransparentCorrectAlpha;

/// @brief Field TransparentDefaultAlpha value: I32(2)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const TransparentDefaultAlpha;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_DrawMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayCanvas_DrawMode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayCanvas/CanvasShape
struct CORDL_TYPE OVROverlayCanvas_CanvasShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayCanvas_CanvasShape_Unwrapped
enum struct __OVROverlayCanvas_CanvasShape_Unwrapped : int32_t {
__E_Flat = static_cast<int32_t>(0x0),
__E_Curved = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayCanvas_CanvasShape_Unwrapped () const noexcept {
return static_cast<__OVROverlayCanvas_CanvasShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_CanvasShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVROverlayCanvas_CanvasShape(int32_t  value__) noexcept;

/// @brief Field Curved value: I32(1)
static ::GlobalNamespace::OVROverlayCanvas_CanvasShape const Curved;

/// @brief Field Flat value: I32(0)
static ::GlobalNamespace::OVROverlayCanvas_CanvasShape const Flat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_CanvasShape, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayCanvas_CanvasShape, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVROverlayCanvas::CanvasShape, OVROverlayCanvas::DrawMode, OVRRayTransformer, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVROverlayCanvas
class CORDL_TYPE OVROverlayCanvas : public ::GlobalNamespace::OVRRayTransformer {
public:
// Declarations
using CanvasShape = ::GlobalNamespace::OVROverlayCanvas_CanvasShape;

using DrawMode = ::GlobalNamespace::OVROverlayCanvas_DrawMode;

/// @brief Field _FrustumPlanes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FrustumPlanes, put=setStaticF__FrustumPlanes)) ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  _FrustumPlanes;

/// @brief Field _WorldCorners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WorldCorners, put=setStaticF__WorldCorners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _WorldCorners;

/// @brief Field _camera, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _canvas, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _hasRenderedFirstFrame, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRenderedFirstFrame, put=__cordl_internal_set__hasRenderedFirstFrame)) bool  _hasRenderedFirstFrame;

/// @brief Field _imposterMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterMaterial, put=__cordl_internal_set__imposterMaterial)) ::UnityW<::UnityEngine::Material>  _imposterMaterial;

/// @brief Field _imposterTextureOffset, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterTextureOffset, put=__cordl_internal_set__imposterTextureOffset)) ::UnityEngine::Vector2  _imposterTextureOffset;

/// @brief Field _imposterTextureScale, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__imposterTextureScale, put=__cordl_internal_set__imposterTextureScale)) ::UnityEngine::Vector2  _imposterTextureScale;

/// @brief Field _lastPixelHeight, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPixelHeight, put=__cordl_internal_set__lastPixelHeight)) float_t  _lastPixelHeight;

/// @brief Field _lastPixelWidth, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPixelWidth, put=__cordl_internal_set__lastPixelWidth)) float_t  _lastPixelWidth;

/// @brief Field _meshGenerator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshGenerator, put=__cordl_internal_set__meshGenerator)) ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  _meshGenerator;

/// @brief Field _meshRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshRenderer, put=__cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _meshRenderer;

/// @brief Field _opaqueImposterShader, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__opaqueImposterShader, put=__cordl_internal_set__opaqueImposterShader)) ::UnityW<::UnityEngine::Shader>  _opaqueImposterShader;

/// @brief Field _optimalResolutionHeight, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__optimalResolutionHeight, put=__cordl_internal_set__optimalResolutionHeight)) float_t  _optimalResolutionHeight;

/// @brief Field _optimalResolutionWidth, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__optimalResolutionWidth, put=__cordl_internal_set__optimalResolutionWidth)) float_t  _optimalResolutionWidth;

/// @brief Field _overlay, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlay, put=__cordl_internal_set__overlay)) ::UnityW<::GlobalNamespace::OVROverlay>  _overlay;

/// @brief Field _overlayEnabled, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__overlayEnabled, put=__cordl_internal_set__overlayEnabled)) bool  _overlayEnabled;

/// @brief Field _overrideCanvasShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideCanvasShader, put=__cordl_internal_set__overrideCanvasShader)) ::UnityW<::UnityEngine::Shader>  _overrideCanvasShader;

/// @brief Field _rectTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _renderTexture, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderTexture, put=__cordl_internal_set__renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  _renderTexture;

/// @brief Field _scaleViewport, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleViewport, put=__cordl_internal_set__scaleViewport)) bool  _scaleViewport;

/// @brief Field _transparentImposterShader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentImposterShader, put=__cordl_internal_set__transparentImposterShader)) ::UnityW<::UnityEngine::Shader>  _transparentImposterShader;

/// @brief Field curveRadius, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_curveRadius, put=__cordl_internal_set_curveRadius)) float_t  curveRadius;

/// @brief Field expensive, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_expensive, put=__cordl_internal_set_expensive)) bool  expensive;

/// @brief Field layer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field maxTextureSize, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTextureSize, put=__cordl_internal_set_maxTextureSize)) int32_t  maxTextureSize;

/// @brief Field opacity, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_opacity, put=__cordl_internal_set_opacity)) ::GlobalNamespace::OVROverlayCanvas_DrawMode  opacity;

 __declspec(property(get=get_overlayEnabled, put=set_overlayEnabled)) bool  overlayEnabled;

/// @brief Field overrideDefaultCanvasMaterial, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideDefaultCanvasMaterial, put=__cordl_internal_set_overrideDefaultCanvasMaterial)) bool  overrideDefaultCanvasMaterial;

/// @brief Field renderInterval, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderInterval, put=__cordl_internal_set_renderInterval)) int32_t  renderInterval;

/// @brief Field renderIntervalFrameOffset, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderIntervalFrameOffset, put=__cordl_internal_set_renderIntervalFrameOffset)) int32_t  renderIntervalFrameOffset;

/// @brief Field shape, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::GlobalNamespace::OVROverlayCanvas_CanvasShape  shape;

/// @brief Method ApplyViewportScale, addr 0x28d0150, size 0x67c, virtual false, abstract: false, final false
inline void ApplyViewportScale() ;

/// @brief Method InitializeRenderTexture, addr 0x28cf350, size 0x828, virtual false, abstract: false, final false
inline void InitializeRenderTexture() ;

/// @brief Method LateUpdate, addr 0x28d07cc, size 0x98, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LineCircleIntersection, addr 0x28d0b38, size 0xdc, virtual false, abstract: false, final false
static inline bool LineCircleIntersection(::UnityEngine::Vector2  p1, ::UnityEngine::Vector2  dp, ::UnityEngine::Vector2  center, float_t  radius, ::ByRef<float_t>  distance) ;

static inline ::GlobalNamespace::OVROverlayCanvas* New_ctor() ;

/// @brief Method OnDestroy, addr 0x28cfb80, size 0xb8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x28cfd14, size 0x98, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x28cfc38, size 0xdc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShouldRender, addr 0x28cfdac, size 0x35c, virtual true, abstract: false, final false
inline bool ShouldRender() ;

/// @brief Method Start, addr 0x28cee64, size 0x4ec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TransformRay, addr 0x28d0864, size 0x2d4, virtual true, abstract: false, final false
inline ::UnityEngine::Ray TransformRay(::UnityEngine::Ray  ray) ;

/// @brief Method Update, addr 0x28d0108, size 0x48, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr bool const& __cordl_internal_get__hasRenderedFirstFrame() const;

constexpr bool& __cordl_internal_get__hasRenderedFirstFrame() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__imposterMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__imposterMaterial() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__imposterTextureOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__imposterTextureOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__imposterTextureScale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__imposterTextureScale() ;

constexpr float_t const& __cordl_internal_get__lastPixelHeight() const;

constexpr float_t& __cordl_internal_get__lastPixelHeight() ;

constexpr float_t const& __cordl_internal_get__lastPixelWidth() const;

constexpr float_t& __cordl_internal_get__lastPixelWidth() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator> const& __cordl_internal_get__meshGenerator() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>& __cordl_internal_get__meshGenerator() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__opaqueImposterShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__opaqueImposterShader() ;

constexpr float_t const& __cordl_internal_get__optimalResolutionHeight() const;

constexpr float_t& __cordl_internal_get__optimalResolutionHeight() ;

constexpr float_t const& __cordl_internal_get__optimalResolutionWidth() const;

constexpr float_t& __cordl_internal_get__optimalResolutionWidth() ;

constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get__overlay() const;

constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get__overlay() ;

constexpr bool const& __cordl_internal_get__overlayEnabled() const;

constexpr bool& __cordl_internal_get__overlayEnabled() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__overrideCanvasShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__overrideCanvasShader() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__renderTexture() ;

constexpr bool const& __cordl_internal_get__scaleViewport() const;

constexpr bool& __cordl_internal_get__scaleViewport() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__transparentImposterShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__transparentImposterShader() ;

constexpr float_t const& __cordl_internal_get_curveRadius() const;

constexpr float_t& __cordl_internal_get_curveRadius() ;

constexpr bool const& __cordl_internal_get_expensive() const;

constexpr bool& __cordl_internal_get_expensive() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr int32_t const& __cordl_internal_get_maxTextureSize() const;

constexpr int32_t& __cordl_internal_get_maxTextureSize() ;

constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode const& __cordl_internal_get_opacity() const;

constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode& __cordl_internal_get_opacity() ;

constexpr bool const& __cordl_internal_get_overrideDefaultCanvasMaterial() const;

constexpr bool& __cordl_internal_get_overrideDefaultCanvasMaterial() ;

constexpr int32_t const& __cordl_internal_get_renderInterval() const;

constexpr int32_t& __cordl_internal_get_renderInterval() ;

constexpr int32_t const& __cordl_internal_get_renderIntervalFrameOffset() const;

constexpr int32_t& __cordl_internal_get_renderIntervalFrameOffset() ;

constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape const& __cordl_internal_get_shape() const;

constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape& __cordl_internal_get_shape() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__hasRenderedFirstFrame(bool  value) ;

constexpr void __cordl_internal_set__imposterMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__imposterTextureOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__imposterTextureScale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__lastPixelHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastPixelWidth(float_t  value) ;

constexpr void __cordl_internal_set__meshGenerator(::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  value) ;

constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__opaqueImposterShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__optimalResolutionHeight(float_t  value) ;

constexpr void __cordl_internal_set__optimalResolutionWidth(float_t  value) ;

constexpr void __cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay>  value) ;

constexpr void __cordl_internal_set__overlayEnabled(bool  value) ;

constexpr void __cordl_internal_set__overrideCanvasShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__scaleViewport(bool  value) ;

constexpr void __cordl_internal_set__transparentImposterShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_curveRadius(float_t  value) ;

constexpr void __cordl_internal_set_expensive(bool  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_maxTextureSize(int32_t  value) ;

constexpr void __cordl_internal_set_opacity(::GlobalNamespace::OVROverlayCanvas_DrawMode  value) ;

constexpr void __cordl_internal_set_overrideDefaultCanvasMaterial(bool  value) ;

constexpr void __cordl_internal_set_renderInterval(int32_t  value) ;

constexpr void __cordl_internal_set_renderIntervalFrameOffset(int32_t  value) ;

constexpr void __cordl_internal_set_shape(::GlobalNamespace::OVROverlayCanvas_CanvasShape  value) ;

/// @brief Method .ctor, addr 0x28d0c14, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*> getStaticF__FrustumPlanes() ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF__WorldCorners() ;

/// @brief Method get_overlayEnabled, addr 0x28ced68, size 0x8, virtual false, abstract: false, final false
inline bool get_overlayEnabled() ;

static inline void setStaticF__FrustumPlanes(::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  value) ;

static inline void setStaticF__WorldCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method set_overlayEnabled, addr 0x28ced70, size 0xf4, virtual false, abstract: false, final false
inline void set_overlayEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVROverlayCanvas(OVROverlayCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayCanvas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVROverlayCanvas(OVROverlayCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6185};

/// @brief Field _overrideCanvasShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____overrideCanvasShader;

/// @brief Field _transparentImposterShader, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____transparentImposterShader;

/// @brief Field _opaqueImposterShader, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____opaqueImposterShader;

/// @brief Field _rectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _canvas, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// @brief Field _camera, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _overlay, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlay>  ____overlay;

/// @brief Field _meshRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____meshRenderer;

/// @brief Field _meshGenerator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  ____meshGenerator;

/// @brief Field _renderTexture, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____renderTexture;

/// @brief Field _imposterMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____imposterMaterial;

/// @brief Field _optimalResolutionWidth, offset: 0x78, size: 0x4, def value: None
 float_t  ____optimalResolutionWidth;

/// @brief Field _optimalResolutionHeight, offset: 0x7c, size: 0x4, def value: None
 float_t  ____optimalResolutionHeight;

/// @brief Field _lastPixelWidth, offset: 0x80, size: 0x4, def value: None
 float_t  ____lastPixelWidth;

/// @brief Field _lastPixelHeight, offset: 0x84, size: 0x4, def value: None
 float_t  ____lastPixelHeight;

/// @brief Field _imposterTextureOffset, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____imposterTextureOffset;

/// @brief Field _imposterTextureScale, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____imposterTextureScale;

/// @brief Field _hasRenderedFirstFrame, offset: 0x98, size: 0x1, def value: None
 bool  ____hasRenderedFirstFrame;

/// @brief Field _scaleViewport, offset: 0x99, size: 0x1, def value: None
 bool  ____scaleViewport;

/// @brief Field maxTextureSize, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___maxTextureSize;

/// @brief Field renderInterval, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___renderInterval;

/// @brief Field renderIntervalFrameOffset, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___renderIntervalFrameOffset;

/// @brief Field expensive, offset: 0xa8, size: 0x1, def value: None
 bool  ___expensive;

/// @brief Field layer, offset: 0xac, size: 0x4, def value: None
 int32_t  ___layer;

/// @brief Field opacity, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlayCanvas_DrawMode  ___opacity;

/// @brief Field overrideDefaultCanvasMaterial, offset: 0xb4, size: 0x1, def value: None
 bool  ___overrideDefaultCanvasMaterial;

/// @brief Field shape, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::OVROverlayCanvas_CanvasShape  ___shape;

/// @brief Field curveRadius, offset: 0xbc, size: 0x4, def value: None
 float_t  ___curveRadius;

/// @brief Field _overlayEnabled, offset: 0xc0, size: 0x1, def value: None
 bool  ____overlayEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____overrideCanvasShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____transparentImposterShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____opaqueImposterShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____rectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____canvas) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____camera) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____overlay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____meshRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____meshGenerator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____renderTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____optimalResolutionWidth) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____optimalResolutionHeight) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____lastPixelWidth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____lastPixelHeight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterTextureOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____imposterTextureScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____hasRenderedFirstFrame) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____scaleViewport) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___maxTextureSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___renderInterval) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___renderIntervalFrameOffset) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___expensive) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___layer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___opacity) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___overrideDefaultCanvasMaterial) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___shape) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ___curveRadius) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas, ____overlayEnabled) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVROverlayCanvas, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayCanvas_CanvasShape, "", "OVROverlayCanvas/CanvasShape");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayCanvas_DrawMode, "", "OVROverlayCanvas/DrawMode");
NEED_NO_BOX(::GlobalNamespace::OVROverlayCanvas);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayCanvas*, "", "OVROverlayCanvas");
