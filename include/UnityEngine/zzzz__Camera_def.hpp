#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct CameraClearFlags;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct RenderingPath;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct StereoTargetEyeMask;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Camera_MonoOrStereoscopicEye;
}
namespace UnityEngine {
struct Camera_StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Camera_CameraCallback;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Camera_MonoOrStereoscopicEye);
MARK_VAL_T(::UnityEngine::Camera_StereoscopicEye);
MARK_REF_PTR_T(::UnityEngine::Camera);
MARK_REF_PTR_T(::UnityEngine::Camera_CameraCallback);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/StereoscopicEye
struct CORDL_TYPE Camera_StereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_StereoscopicEye_Unwrapped
enum struct __Camera_StereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_StereoscopicEye_Unwrapped () const noexcept {
return static_cast<__Camera_StereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_StereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Camera_StereoscopicEye(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::UnityEngine::Camera_StereoscopicEye const Left;

/// @brief Field Right value: I32(1)
static ::UnityEngine::Camera_StereoscopicEye const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_StereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_StereoscopicEye, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Camera/MonoOrStereoscopicEye
struct CORDL_TYPE Camera_MonoOrStereoscopicEye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_MonoOrStereoscopicEye_Unwrapped
enum struct __Camera_MonoOrStereoscopicEye_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Mono = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_MonoOrStereoscopicEye_Unwrapped () const noexcept {
return static_cast<__Camera_MonoOrStereoscopicEye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_MonoOrStereoscopicEye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Camera_MonoOrStereoscopicEye(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Left;

/// @brief Field Mono value: I32(2)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Mono;

/// @brief Field Right value: I32(1)
static ::UnityEngine::Camera_MonoOrStereoscopicEye const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Camera_MonoOrStereoscopicEye, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_MonoOrStereoscopicEye, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera/CameraCallback
class CORDL_TYPE Camera_CameraCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2f60ddc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Camera*  cam) ;

static inline ::UnityEngine::Camera_CameraCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2f60d40, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera_CameraCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera_CameraCallback(Camera_CameraCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera_CameraCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera_CameraCallback(Camera_CameraCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera_CameraCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Camera
class CORDL_TYPE Camera : public ::UnityEngine::Behaviour {
public:
// Declarations
using CameraCallback = ::UnityEngine::Camera_CameraCallback;

using MonoOrStereoscopicEye = ::UnityEngine::Camera_MonoOrStereoscopicEye;

using StereoscopicEye = ::UnityEngine::Camera_StereoscopicEye;

 __declspec(property(get=get_actualRenderingPath)) ::UnityEngine::RenderingPath  actualRenderingPath;

 __declspec(property(put=set_allowHDR)) bool  allowHDR;

 __declspec(property(put=set_allowMSAA)) bool  allowMSAA;

 __declspec(property(get=get_aspect, put=set_aspect)) float_t  aspect;

 __declspec(property(get=get_backgroundColor, put=set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(get=get_clearFlags, put=set_clearFlags)) ::UnityEngine::CameraClearFlags  clearFlags;

 __declspec(property(get=get_cullingMask, put=set_cullingMask)) int32_t  cullingMask;

 __declspec(property(get=get_depth, put=set_depth)) float_t  depth;

 __declspec(property(get=get_depthTextureMode, put=set_depthTextureMode)) ::UnityEngine::DepthTextureMode  depthTextureMode;

 __declspec(property(get=get_eventMask)) int32_t  eventMask;

 __declspec(property(get=get_farClipPlane, put=set_farClipPlane)) float_t  farClipPlane;

 __declspec(property(get=get_fieldOfView, put=set_fieldOfView)) float_t  fieldOfView;

 __declspec(property(get=get_nearClipPlane, put=set_nearClipPlane)) float_t  nearClipPlane;

/// @brief Field onPostRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPostRender, put=setStaticF_onPostRender)) ::UnityEngine::Camera_CameraCallback*  onPostRender;

/// @brief Field onPreCull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreCull, put=setStaticF_onPreCull)) ::UnityEngine::Camera_CameraCallback*  onPreCull;

/// @brief Field onPreRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreRender, put=setStaticF_onPreRender)) ::UnityEngine::Camera_CameraCallback*  onPreRender;

 __declspec(property(get=get_orthographic, put=set_orthographic)) bool  orthographic;

 __declspec(property(get=get_orthographicSize, put=set_orthographicSize)) float_t  orthographicSize;

 __declspec(property(get=get_pixelHeight)) int32_t  pixelHeight;

 __declspec(property(get=get_pixelRect, put=set_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_pixelWidth)) int32_t  pixelWidth;

 __declspec(property(get=get_projectionMatrix, put=set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

 __declspec(property(get=get_rect, put=set_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(put=set_renderingPath)) ::UnityEngine::RenderingPath  renderingPath;

 __declspec(property(get=get_stereoEnabled)) bool  stereoEnabled;

 __declspec(property(get=get_stereoTargetEye, put=set_stereoTargetEye)) ::UnityEngine::StereoTargetEyeMask  stereoTargetEye;

 __declspec(property(get=get_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_targetTexture, put=set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture>  targetTexture;

 __declspec(property(get=get_worldToCameraMatrix)) ::UnityEngine::Matrix4x4  worldToCameraMatrix;

/// @brief Method AddCommandBuffer, addr 0x2f60994, size 0x134, virtual false, abstract: false, final false
inline void AddCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method AddCommandBufferImpl, addr 0x2f608ec, size 0x54, virtual false, abstract: false, final false
inline void AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CopyFrom, addr 0x2f608a8, size 0x44, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::Camera*  other) ;

/// @brief Method FireOnPostRender, addr 0x2f60cd4, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPostRender(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreCull, addr 0x2f60bfc, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreCull(::UnityEngine::Camera*  cam) ;

/// @brief Method FireOnPreRender, addr 0x2f60c68, size 0x6c, virtual false, abstract: false, final false
static inline void FireOnPreRender(::UnityEngine::Camera*  cam) ;

/// @brief Method GetAllCameras, addr 0x2f60704, size 0xd8, virtual false, abstract: false, final false
static inline int32_t GetAllCameras(::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>  cameras) ;

/// @brief Method GetAllCamerasCount, addr 0x2f605d8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasCount() ;

/// @brief Method GetAllCamerasImpl, addr 0x2f60600, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetAllCamerasImpl(::ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>  cam) ;

/// @brief Method GetStereoProjectionMatrix, addr 0x2f60508, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoProjectionMatrix_Injected, addr 0x2f60584, size 0x54, virtual false, abstract: false, final false
inline void GetStereoProjectionMatrix_Injected(::UnityEngine::Camera_StereoscopicEye  eye, ::ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetStereoViewMatrix, addr 0x2f60438, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye  eye) ;

/// @brief Method GetStereoViewMatrix_Injected, addr 0x2f604b4, size 0x54, virtual false, abstract: false, final false
inline void GetStereoViewMatrix_Injected(::UnityEngine::Camera_StereoscopicEye  eye, ::ByRef<::UnityEngine::Matrix4x4>  ret) ;

static inline ::UnityEngine::Camera* New_ctor() ;

/// @brief Method RemoveCommandBuffer, addr 0x2f60ac8, size 0x134, virtual false, abstract: false, final false
inline void RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method RemoveCommandBufferImpl, addr 0x2f60940, size 0x54, virtual false, abstract: false, final false
inline void RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method Render, addr 0x2f607dc, size 0x3c, virtual false, abstract: false, final false
inline void Render() ;

/// @brief Method RenderWithShader, addr 0x2f60818, size 0x54, virtual false, abstract: false, final false
inline void RenderWithShader(::UnityEngine::Shader*  shader, ::StringW  replacementTag) ;

/// @brief Method ScreenPointToRay, addr 0x2f601dc, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay, addr 0x2f602e8, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ScreenPointToRay, addr 0x2f602b0, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenPointToRay_Injected, addr 0x2f60254, size 0x5c, virtual false, abstract: false, final false
inline void ScreenPointToRay_Injected(::ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Ray>  ret) ;

/// @brief Method ScreenToViewportPoint, addr 0x2f5ffd0, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToViewportPoint_Injected, addr 0x2f60038, size 0x54, virtual false, abstract: false, final false
inline void ScreenToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method ScreenToWorldPoint, addr 0x2f5ffc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ScreenToWorldPoint, addr 0x2f5fef4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ScreenToWorldPoint_Injected, addr 0x2f5ff64, size 0x5c, virtual false, abstract: false, final false
inline void ScreenToWorldPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method SetTargetBuffers, addr 0x2f5fb70, size 0x4, virtual false, abstract: false, final false
inline void SetTargetBuffers(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer) ;

/// @brief Method SetTargetBuffersImpl, addr 0x2f5fac4, size 0x58, virtual false, abstract: false, final false
inline void SetTargetBuffersImpl(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth) ;

/// @brief Method SetTargetBuffersImpl_Injected, addr 0x2f5fb1c, size 0x54, virtual false, abstract: false, final false
inline void SetTargetBuffersImpl_Injected(::ByRef<::UnityEngine::RenderBuffer>  color, ::ByRef<::UnityEngine::RenderBuffer>  depth) ;

/// @brief Method SetupCurrent, addr 0x2f6086c, size 0x3c, virtual false, abstract: false, final false
static inline void SetupCurrent(::UnityEngine::Camera*  cur) ;

/// @brief Method ViewportPointToRay, addr 0x2f6008c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay, addr 0x2f60198, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos) ;

/// @brief Method ViewportPointToRay, addr 0x2f60160, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Ray ViewportPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method ViewportPointToRay_Injected, addr 0x2f60104, size 0x5c, virtual false, abstract: false, final false
inline void ViewportPointToRay_Injected(::ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Ray>  ret) ;

/// @brief Method WorldToScreenPoint, addr 0x2f5ffc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position) ;

/// @brief Method WorldToScreenPoint, addr 0x2f5fd5c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToScreenPoint_Injected, addr 0x2f5fdcc, size 0x5c, virtual false, abstract: false, final false
inline void WorldToScreenPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method WorldToViewportPoint, addr 0x2f5fe28, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye) ;

/// @brief Method WorldToViewportPoint_Injected, addr 0x2f5fe98, size 0x5c, virtual false, abstract: false, final false
inline void WorldToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method .ctor, addr 0x2f5ef78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPostRender() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreCull() ;

static inline ::UnityEngine::Camera_CameraCallback* getStaticF_onPreRender() ;

/// @brief Method get_actualRenderingPath, addr 0x2f5f15c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderingPath get_actualRenderingPath() ;

/// @brief Method get_allCameras, addr 0x2f60664, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Camera>,::Array<::UnityW<::UnityEngine::Camera>>*> get_allCameras() ;

/// @brief Method get_allCamerasCount, addr 0x2f6063c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_allCamerasCount() ;

/// @brief Method get_aspect, addr 0x2f5f3b0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_aspect() ;

/// @brief Method get_backgroundColor, addr 0x2f5f4f4, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_backgroundColor() ;

/// @brief Method get_backgroundColor_Injected, addr 0x2f5f54c, size 0x44, virtual false, abstract: false, final false
inline void get_backgroundColor_Injected(::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_clearFlags, addr 0x2f5f628, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::CameraClearFlags get_clearFlags() ;

/// @brief Method get_cullingMask, addr 0x2f5f438, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_cullingMask() ;

/// @brief Method get_current, addr 0x2f60354, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_current() ;

/// @brief Method get_depth, addr 0x2f5f328, size 0x3c, virtual false, abstract: false, final false
inline float_t get_depth() ;

/// @brief Method get_depthTextureMode, addr 0x2f5f6a8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::DepthTextureMode get_depthTextureMode() ;

/// @brief Method get_eventMask, addr 0x2f5f4b8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_eventMask() ;

/// @brief Method get_farClipPlane, addr 0x2f5f008, size 0x3c, virtual false, abstract: false, final false
inline float_t get_farClipPlane() ;

/// @brief Method get_fieldOfView, addr 0x2f5f090, size 0x3c, virtual false, abstract: false, final false
inline float_t get_fieldOfView() ;

/// @brief Method get_main, addr 0x2f6032c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> get_main() ;

/// @brief Method get_nearClipPlane, addr 0x2f5ef80, size 0x3c, virtual false, abstract: false, final false
inline float_t get_nearClipPlane() ;

/// @brief Method get_orthographic, addr 0x2f5f2a8, size 0x3c, virtual false, abstract: false, final false
inline bool get_orthographic() ;

/// @brief Method get_orthographicSize, addr 0x2f5f220, size 0x3c, virtual false, abstract: false, final false
inline float_t get_orthographicSize() ;

/// @brief Method get_pixelHeight, addr 0x2f5f9cc, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_pixelHeight() ;

/// @brief Method get_pixelRect, addr 0x2f5f85c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0x2f5f8b4, size 0x44, virtual false, abstract: false, final false
inline void get_pixelRect_Injected(::ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_pixelWidth, addr 0x2f5f990, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_pixelWidth() ;

/// @brief Method get_projectionMatrix, addr 0x2f5fc24, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_projectionMatrix() ;

/// @brief Method get_projectionMatrix_Injected, addr 0x2f5fc90, size 0x44, virtual false, abstract: false, final false
inline void get_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_rect, addr 0x2f5f728, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0x2f5f780, size 0x44, virtual false, abstract: false, final false
inline void get_rect_Injected(::ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_stereoEnabled, addr 0x2f6037c, size 0x3c, virtual false, abstract: false, final false
inline bool get_stereoEnabled() ;

/// @brief Method get_stereoTargetEye, addr 0x2f603b8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::StereoTargetEyeMask get_stereoTargetEye() ;

/// @brief Method get_targetDisplay, addr 0x2f5fa88, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_targetTexture, addr 0x2f5fa08, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture() ;

/// @brief Method get_worldToCameraMatrix, addr 0x2f5fb74, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToCameraMatrix() ;

/// @brief Method get_worldToCameraMatrix_Injected, addr 0x2f5fbe0, size 0x44, virtual false, abstract: false, final false
inline void get_worldToCameraMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret) ;

static inline void setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback*  value) ;

static inline void setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback*  value) ;

/// @brief Method set_allowHDR, addr 0x2f5f198, size 0x44, virtual false, abstract: false, final false
inline void set_allowHDR(bool  value) ;

/// @brief Method set_allowMSAA, addr 0x2f5f1dc, size 0x44, virtual false, abstract: false, final false
inline void set_allowMSAA(bool  value) ;

/// @brief Method set_aspect, addr 0x2f5f3ec, size 0x4c, virtual false, abstract: false, final false
inline void set_aspect(float_t  value) ;

/// @brief Method set_backgroundColor, addr 0x2f5f590, size 0x54, virtual false, abstract: false, final false
inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_backgroundColor_Injected, addr 0x2f5f5e4, size 0x44, virtual false, abstract: false, final false
inline void set_backgroundColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_clearFlags, addr 0x2f5f664, size 0x44, virtual false, abstract: false, final false
inline void set_clearFlags(::UnityEngine::CameraClearFlags  value) ;

/// @brief Method set_cullingMask, addr 0x2f5f474, size 0x44, virtual false, abstract: false, final false
inline void set_cullingMask(int32_t  value) ;

/// @brief Method set_depth, addr 0x2f5f364, size 0x4c, virtual false, abstract: false, final false
inline void set_depth(float_t  value) ;

/// @brief Method set_depthTextureMode, addr 0x2f5f6e4, size 0x44, virtual false, abstract: false, final false
inline void set_depthTextureMode(::UnityEngine::DepthTextureMode  value) ;

/// @brief Method set_farClipPlane, addr 0x2f5f044, size 0x4c, virtual false, abstract: false, final false
inline void set_farClipPlane(float_t  value) ;

/// @brief Method set_fieldOfView, addr 0x2f5f0cc, size 0x4c, virtual false, abstract: false, final false
inline void set_fieldOfView(float_t  value) ;

/// @brief Method set_nearClipPlane, addr 0x2f5efbc, size 0x4c, virtual false, abstract: false, final false
inline void set_nearClipPlane(float_t  value) ;

/// @brief Method set_orthographic, addr 0x2f5f2e4, size 0x44, virtual false, abstract: false, final false
inline void set_orthographic(bool  value) ;

/// @brief Method set_orthographicSize, addr 0x2f5f25c, size 0x4c, virtual false, abstract: false, final false
inline void set_orthographicSize(float_t  value) ;

/// @brief Method set_pixelRect, addr 0x2f5f8f8, size 0x54, virtual false, abstract: false, final false
inline void set_pixelRect(::UnityEngine::Rect  value) ;

/// @brief Method set_pixelRect_Injected, addr 0x2f5f94c, size 0x44, virtual false, abstract: false, final false
inline void set_pixelRect_Injected(::ByRef<::UnityEngine::Rect>  value) ;

/// @brief Method set_projectionMatrix, addr 0x2f5fcd4, size 0x44, virtual false, abstract: false, final false
inline void set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_projectionMatrix_Injected, addr 0x2f5fd18, size 0x44, virtual false, abstract: false, final false
inline void set_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_rect, addr 0x2f5f7c4, size 0x54, virtual false, abstract: false, final false
inline void set_rect(::UnityEngine::Rect  value) ;

/// @brief Method set_rect_Injected, addr 0x2f5f818, size 0x44, virtual false, abstract: false, final false
inline void set_rect_Injected(::ByRef<::UnityEngine::Rect>  value) ;

/// @brief Method set_renderingPath, addr 0x2f5f118, size 0x44, virtual false, abstract: false, final false
inline void set_renderingPath(::UnityEngine::RenderingPath  value) ;

/// @brief Method set_stereoTargetEye, addr 0x2f603f4, size 0x44, virtual false, abstract: false, final false
inline void set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask  value) ;

/// @brief Method set_targetTexture, addr 0x2f5fa44, size 0x44, virtual false, abstract: false, final false
inline void set_targetTexture(::UnityEngine::RenderTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Camera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Camera(Camera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Camera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Camera(Camera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8407};

/// @brief Field kMaxAperture offset 0xffffffff size 0x4
static constexpr float_t  kMaxAperture{static_cast<float_t>(32.0f)};

/// @brief Field kMaxBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMaxBladeCount{static_cast<int32_t>(0xb)};

/// @brief Field kMinAperture offset 0xffffffff size 0x4
static constexpr float_t  kMinAperture{static_cast<float_t>(0.7f)};

/// @brief Field kMinBladeCount offset 0xffffffff size 0x4
static constexpr int32_t  kMinBladeCount{static_cast<int32_t>(0x3)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Camera, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
NEED_NO_BOX(::UnityEngine::Camera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera*, "UnityEngine", "Camera");
NEED_NO_BOX(::UnityEngine::Camera_CameraCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera_CameraCallback*, "UnityEngine", "Camera/CameraCallback");
