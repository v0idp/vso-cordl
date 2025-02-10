#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Canvas)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Canvas_WillRenderCanvases;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Canvas);
MARK_REF_PTR_T(::UnityEngine::Canvas_WillRenderCanvases);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas/WillRenderCanvases
class CORDL_TYPE Canvas_WillRenderCanvases : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x315ad18, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x315ac90, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas_WillRenderCanvases() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas_WillRenderCanvases", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas_WillRenderCanvases(Canvas_WillRenderCanvases const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Canvas_WillRenderCanvases, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Canvas
class CORDL_TYPE Canvas : public ::UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = ::UnityEngine::Canvas_WillRenderCanvases;

/// @brief Field <externBeginRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externBeginRenderOverlays_k__BackingField, put=setStaticF__externBeginRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externBeginRenderOverlays_k__BackingField;

/// @brief Field <externEndRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externEndRenderOverlays_k__BackingField, put=setStaticF__externEndRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externEndRenderOverlays_k__BackingField;

/// @brief Field <externRenderOverlaysBefore>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__externRenderOverlaysBefore_k__BackingField, put=setStaticF__externRenderOverlaysBefore_k__BackingField)) ::System::Action_2<int32_t,int32_t>*  _externRenderOverlaysBefore_k__BackingField;

 __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels)) ::UnityEngine::AdditionalCanvasShaderChannels  additionalShaderChannels;

 __declspec(property(get=get_isRootCanvas)) bool  isRootCanvas;

 __declspec(property(get=get_overrideSorting, put=set_overrideSorting)) bool  overrideSorting;

 __declspec(property(get=get_pixelPerfect, put=set_pixelPerfect)) bool  pixelPerfect;

 __declspec(property(get=get_pixelRect)) ::UnityEngine::Rect  pixelRect;

/// @brief Field preWillRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preWillRenderCanvases, put=setStaticF_preWillRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  preWillRenderCanvases;

 __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit)) float_t  referencePixelsPerUnit;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::UnityEngine::RenderMode  renderMode;

 __declspec(property(get=get_renderOrder)) int32_t  renderOrder;

 __declspec(property(get=get_renderingDisplaySize)) ::UnityEngine::Vector2  renderingDisplaySize;

 __declspec(property(get=get_rootCanvas)) ::UnityW<::UnityEngine::Canvas>  rootCanvas;

 __declspec(property(get=get_scaleFactor, put=set_scaleFactor)) float_t  scaleFactor;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

 __declspec(property(get=get_targetDisplay)) int32_t  targetDisplay;

/// @brief Field willRenderCanvases, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_willRenderCanvases, put=setStaticF_willRenderCanvases)) ::UnityEngine::Canvas_WillRenderCanvases*  willRenderCanvases;

 __declspec(property(get=get_worldCamera, put=set_worldCamera)) ::UnityW<::UnityEngine::Camera>  worldCamera;

/// @brief Method BeginRenderExtraOverlays, addr 0x315ab3c, size 0x6c, virtual false, abstract: false, final false
static inline void BeginRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method EndRenderExtraOverlays, addr 0x315ac1c, size 0x6c, virtual false, abstract: false, final false
static inline void EndRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method ForceUpdateCanvases, addr 0x315aa64, size 0x10, virtual false, abstract: false, final false
static inline void ForceUpdateCanvases() ;

/// @brief Method GetDefaultCanvasMaterial, addr 0x315aa14, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial, addr 0x315aa3c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetETC1SupportedCanvasMaterial() ;

static inline ::UnityEngine::Canvas* New_ctor() ;

/// @brief Method RenderExtraOverlaysBefore, addr 0x315aba8, size 0x74, virtual false, abstract: false, final false
static inline void RenderExtraOverlaysBefore(int32_t  displayIndex, int32_t  sortingOrder) ;

/// @brief Method SendPreWillRenderCanvases, addr 0x315aa74, size 0x64, virtual false, abstract: false, final false
static inline void SendPreWillRenderCanvases() ;

/// @brief Method SendWillRenderCanvases, addr 0x315aad8, size 0x64, virtual false, abstract: false, final false
static inline void SendWillRenderCanvases() ;

/// @brief Method SetExternalCanvasEnabled, addr 0x315a958, size 0x3c, virtual false, abstract: false, final false
static inline void SetExternalCanvasEnabled(bool  enabled) ;

/// @brief Method .ctor, addr 0x315ac88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_preWillRenderCanvases, addr 0x3159e88, size 0xb8, virtual false, abstract: false, final false
static inline void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method add_willRenderCanvases, addr 0x3159ff8, size 0xbc, virtual false, abstract: false, final false
static inline void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline ::System::Action_1<int32_t>* getStaticF__externBeginRenderOverlays_k__BackingField() ;

static inline ::System::Action_1<int32_t>* getStaticF__externEndRenderOverlays_k__BackingField() ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF__externRenderOverlaysBefore_k__BackingField() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_preWillRenderCanvases() ;

static inline ::UnityEngine::Canvas_WillRenderCanvases* getStaticF_willRenderCanvases() ;

/// @brief Method get_additionalShaderChannels, addr 0x315a650, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method get_externBeginRenderOverlays, addr 0x315a79c, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externBeginRenderOverlays() ;

/// @brief Method get_externEndRenderOverlays, addr 0x315a8c4, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externEndRenderOverlays() ;

/// @brief Method get_externRenderOverlaysBefore, addr 0x315a830, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_2<int32_t,int32_t>* get_externRenderOverlaysBefore() ;

/// @brief Method get_isRootCanvas, addr 0x315a1f0, size 0x3c, virtual false, abstract: false, final false
inline bool get_isRootCanvas() ;

/// @brief Method get_overrideSorting, addr 0x315a494, size 0x3c, virtual false, abstract: false, final false
inline bool get_overrideSorting() ;

/// @brief Method get_pixelPerfect, addr 0x315a3d8, size 0x3c, virtual false, abstract: false, final false
inline bool get_pixelPerfect() ;

/// @brief Method get_pixelRect, addr 0x315a22c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0x315a284, size 0x44, virtual false, abstract: false, final false
inline void get_pixelRect_Injected(::ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_referencePixelsPerUnit, addr 0x315a350, size 0x3c, virtual false, abstract: false, final false
inline float_t get_referencePixelsPerUnit() ;

/// @brief Method get_renderMode, addr 0x315a170, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderMode get_renderMode() ;

/// @brief Method get_renderOrder, addr 0x315a458, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_renderOrder() ;

/// @brief Method get_renderingDisplaySize, addr 0x315a70c, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_renderingDisplaySize_Injected, addr 0x315a758, size 0x44, virtual false, abstract: false, final false
inline void get_renderingDisplaySize_Injected(::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rootCanvas, addr 0x315a6d0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_rootCanvas() ;

/// @brief Method get_scaleFactor, addr 0x315a2c8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_sortingLayerID, addr 0x315a5d0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingOrder, addr 0x315a514, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_targetDisplay, addr 0x315a594, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_worldCamera, addr 0x315a994, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_worldCamera() ;

/// @brief Method remove_preWillRenderCanvases, addr 0x3159f40, size 0xb8, virtual false, abstract: false, final false
static inline void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method remove_willRenderCanvases, addr 0x315a0b4, size 0xbc, virtual false, abstract: false, final false
static inline void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

static inline void setStaticF_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value) ;

/// @brief Method set_additionalShaderChannels, addr 0x315a68c, size 0x44, virtual false, abstract: false, final false
inline void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// @brief Method set_externBeginRenderOverlays, addr 0x315a7e4, size 0x4c, virtual false, abstract: false, final false
static inline void set_externBeginRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externEndRenderOverlays, addr 0x315a90c, size 0x4c, virtual false, abstract: false, final false
static inline void set_externEndRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externRenderOverlaysBefore, addr 0x315a878, size 0x4c, virtual false, abstract: false, final false
static inline void set_externRenderOverlaysBefore(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_overrideSorting, addr 0x315a4d0, size 0x44, virtual false, abstract: false, final false
inline void set_overrideSorting(bool  value) ;

/// @brief Method set_pixelPerfect, addr 0x315a414, size 0x44, virtual false, abstract: false, final false
inline void set_pixelPerfect(bool  value) ;

/// @brief Method set_referencePixelsPerUnit, addr 0x315a38c, size 0x4c, virtual false, abstract: false, final false
inline void set_referencePixelsPerUnit(float_t  value) ;

/// @brief Method set_renderMode, addr 0x315a1ac, size 0x44, virtual false, abstract: false, final false
inline void set_renderMode(::UnityEngine::RenderMode  value) ;

/// @brief Method set_scaleFactor, addr 0x315a304, size 0x4c, virtual false, abstract: false, final false
inline void set_scaleFactor(float_t  value) ;

/// @brief Method set_sortingLayerID, addr 0x315a60c, size 0x44, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingOrder, addr 0x315a550, size 0x44, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

/// @brief Method set_worldCamera, addr 0x315a9d0, size 0x44, virtual false, abstract: false, final false
inline void set_worldCamera(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas(Canvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas(Canvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Canvas, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
NEED_NO_BOX(::UnityEngine::Canvas_WillRenderCanvases);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Canvas_WillRenderCanvases*, "UnityEngine", "Canvas/WillRenderCanvases");
