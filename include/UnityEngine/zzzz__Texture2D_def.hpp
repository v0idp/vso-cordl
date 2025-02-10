#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture2D);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2D
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Apply, addr 0x2f74e20, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x2f74d94, size 0x8c, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x2f7379c, size 0x54, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method CreateExternalTexture, addr 0x2f74788, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateExternalTexture(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  mipChain, bool  linear, ::System::IntPtr  nativeTex) ;

/// @brief Method GetPixel, addr 0x2f74a54, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y) ;

/// @brief Method GetPixelBilinear, addr 0x2f74ac0, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl, addr 0x2f73a38, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t  image, int32_t  mip, float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl_Injected, addr 0x2f73ac0, size 0x74, virtual false, abstract: false, final false
inline void GetPixelBilinearImpl_Injected(int32_t  image, int32_t  mip, float_t  u, float_t  v, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// @brief Method GetPixelImpl, addr 0x2f7393c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0x2f739c4, size 0x74, virtual false, abstract: false, final false
inline void GetPixelImpl_Injected(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixels, addr 0x2f75164, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels() ;

/// @brief Method GetPixels, addr 0x2f750d8, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  miplevel) ;

/// @brief Method GetPixels, addr 0x2f73ef8, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetPixels32, addr 0x2f73f6c, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32(int32_t  miplevel) ;

/// @brief Method GetRawImageDataSize, addr 0x2f73de8, size 0x3c, virtual false, abstract: false, final false
inline uint64_t GetRawImageDataSize() ;

/// @brief Method GetRawTextureData, addr 0x2f73ebc, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method GetWritableImageData, addr 0x2f73da4, size 0x44, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method Internal_Create, addr 0x2f7366c, size 0xf4, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl, addr 0x2f735d0, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method LoadRawTextureData, addr 0x2f74c70, size 0x124, virtual false, abstract: false, final false
inline void LoadRawTextureData(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method LoadRawTextureData, addr 0x2f74b28, size 0x148, virtual false, abstract: false, final false
inline void LoadRawTextureData(::System::IntPtr  data, int32_t  size) ;

/// @brief Method LoadRawTextureDataImpl, addr 0x2f73d0c, size 0x54, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImpl(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LoadRawTextureDataImplArray, addr 0x2f73d60, size 0x44, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method ReadPixels, addr 0x2f75034, size 0x8, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY) ;

/// @brief Method ReadPixels, addr 0x2f74f94, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl, addr 0x2f73ba0, size 0x74, virtual false, abstract: false, final false
inline void ReadPixelsImpl(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl_Injected, addr 0x2f73c14, size 0x6c, virtual false, abstract: false, final false
inline void ReadPixelsImpl_Injected(::ByRef<::UnityEngine::Rect>  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method Reinitialize, addr 0x2f74e2c, size 0x8c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height) ;

/// @brief Method Reinitialize, addr 0x2f74eb8, size 0x6c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeImpl, addr 0x2f737f0, size 0x54, virtual false, abstract: false, final false
inline bool ReinitializeImpl(int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeWithTextureFormatImpl, addr 0x2f73b34, size 0x6c, virtual false, abstract: false, final false
inline bool ReinitializeWithTextureFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method Resize, addr 0x2f74f24, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height) ;

/// @brief Method Resize, addr 0x2f74f28, size 0x6c, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method SetAllPixels32, addr 0x2f73e68, size 0x54, virtual false, abstract: false, final false
inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixel, addr 0x2f74894, size 0x9c, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl, addr 0x2f73844, size 0x84, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x2f738c8, size 0x74, virtual false, abstract: false, final false
inline void SetPixelImpl_Injected(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::ByRef<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0x2f749f8, size 0x5c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x2f749f0, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x2f74930, size 0xc0, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x2f75090, size 0x48, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method SetPixels32, addr 0x2f7503c, size 0x54, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixelsImpl, addr 0x2f73c80, size 0x8c, virtual false, abstract: false, final false
inline void SetPixelsImpl(int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method UpdateExternalTexture, addr 0x2f73e24, size 0x44, virtual false, abstract: false, final false
inline void UpdateExternalTexture(::System::IntPtr  nativeTex) ;

/// @brief Method ValidateFormat, addr 0x2f74090, size 0x12c, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x2f73fb0, size 0xe0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x2f746ec, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x2f742b0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x2f742fc, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x2f741bc, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method .ctor, addr 0x2f74630, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x2f74570, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x2f74544, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x2f743a0, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method get_format, addr 0x2f7356c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_isReadable, addr 0x2f73760, size 0x3c, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_whiteTexture, addr 0x2f735a8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2D(Texture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2D(Texture2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8497};

/// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMax{static_cast<int32_t>(0x7f)};

/// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMin{static_cast<int32_t>(0xffffff80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2D, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
