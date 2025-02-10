#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
struct IntPtr;
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
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cubemap);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cubemap
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method CreateExternalTexture, addr 0x2f75be4, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t  width, ::UnityEngine::TextureFormat  format, bool  mipmap, ::System::IntPtr  nativeTex) ;

/// @brief Method GetPixels, addr 0x2f75414, size 0x48, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace  face) ;

/// @brief Method GetPixels, addr 0x2f753c0, size 0x54, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method Internal_Create, addr 0x2f7522c, size 0xd4, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// @brief Method Internal_CreateImpl, addr 0x2f751a8, size 0x84, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method SetPixels, addr 0x2f754b8, size 0x58, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, ::UnityEngine::CubemapFace  face) ;

/// @brief Method SetPixels, addr 0x2f7545c, size 0x5c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, ::UnityEngine::CubemapFace  face, int32_t  miplevel) ;

/// @brief Method SmoothEdges, addr 0x2f75380, size 0x40, virtual false, abstract: false, final false
inline void SmoothEdges() ;

/// @brief Method SmoothEdges, addr 0x2f7533c, size 0x44, virtual false, abstract: false, final false
inline void SmoothEdges(int32_t  smoothRegionWidthInPixels) ;

/// @brief Method ValidateFormat, addr 0x2f755dc, size 0x120, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width) ;

/// @brief Method ValidateFormat, addr 0x2f75510, size 0xcc, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width) ;

/// @brief Method ValidateIsNotCrunched, addr 0x2f758e8, size 0x54, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x2f756fc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x2f757c0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x2f75738, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x2f7580c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x2f75bcc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x2f75bd8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x2f75a98, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x2f75b2c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x2f7593c, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method get_format, addr 0x2f7516c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_isReadable, addr 0x2f75300, size 0x3c, virtual true, abstract: false, final false
inline bool get_isReadable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cubemap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cubemap(Cubemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cubemap(Cubemap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8498};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cubemap, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
