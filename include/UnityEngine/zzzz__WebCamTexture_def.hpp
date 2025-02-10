#pragma once
// IWYU pragma private; include "UnityEngine/WebCamTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebCamTexture)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct WebCamDevice;
}
// Forward declare root types
namespace UnityEngine {
class WebCamTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WebCamTexture);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WebCamTexture
class CORDL_TYPE WebCamTexture : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Method GetPixels32, addr 0x2f5939c, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32() ;

/// @brief Method GetPixels32, addr 0x2f593dc, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method Internal_CreateWebCamTexture, addr 0x2f5927c, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_CreateWebCamTexture(::UnityEngine::WebCamTexture*  self, ::StringW  scriptingDevice, int32_t  requestedWidth, int32_t  requestedHeight, int32_t  maxFramerate) ;

static inline ::UnityEngine::WebCamTexture* New_ctor(::StringW  deviceName, int32_t  requestedWidth, int32_t  requestedHeight, int32_t  requestedFPS) ;

/// @brief Method Play, addr 0x2f592e8, size 0x3c, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x2f59324, size 0x3c, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method .ctor, addr 0x2f591cc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  deviceName, int32_t  requestedWidth, int32_t  requestedHeight, int32_t  requestedFPS) ;

/// @brief Method get_devices, addr 0x2f591a4, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::WebCamDevice,::Array<::UnityEngine::WebCamDevice>*> get_devices() ;

/// @brief Method get_isPlaying, addr 0x2f59360, size 0x3c, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebCamTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebCamTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCamTexture(WebCamTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCamTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCamTexture(WebCamTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WebCamTexture, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::WebCamTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WebCamTexture*, "UnityEngine", "WebCamTexture");
