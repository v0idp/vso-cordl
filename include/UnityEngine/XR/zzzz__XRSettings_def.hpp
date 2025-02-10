#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSettings)
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRSettings);
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRSettings
class CORDL_TYPE XRSettings : public ::System::Object {
public:
// Declarations
/// @brief Method get_enabled, addr 0x3199fb4, size 0x28, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_eyeTextureDesc, addr 0x319a0f0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc() ;

/// @brief Method get_eyeTextureDesc_Injected, addr 0x319a160, size 0x3c, virtual false, abstract: false, final false
static inline void get_eyeTextureDesc_Injected(::ByRef<::UnityEngine::RenderTextureDescriptor>  ret) ;

/// @brief Method get_eyeTextureHeight, addr 0x319a0c8, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureHeight() ;

/// @brief Method get_eyeTextureWidth, addr 0x319a0a0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_eyeTextureWidth() ;

/// @brief Method get_isDeviceActive, addr 0x3199fdc, size 0x28, virtual false, abstract: false, final false
static inline bool get_isDeviceActive() ;

/// @brief Method get_loadedDeviceName, addr 0x319a2d4, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_loadedDeviceName() ;

/// @brief Method get_renderViewportScale, addr 0x319a19c, size 0x28, virtual false, abstract: false, final false
static inline float_t get_renderViewportScale() ;

/// @brief Method get_renderViewportScaleInternal, addr 0x319a1c4, size 0x28, virtual false, abstract: false, final false
static inline float_t get_renderViewportScaleInternal() ;

/// @brief Method get_showDeviceView, addr 0x319a004, size 0x28, virtual false, abstract: false, final false
static inline bool get_showDeviceView() ;

/// @brief Method set_eyeTextureResolutionScale, addr 0x319a068, size 0x38, virtual false, abstract: false, final false
static inline void set_eyeTextureResolutionScale(float_t  value) ;

/// @brief Method set_renderViewportScale, addr 0x319a1ec, size 0xb0, virtual false, abstract: false, final false
static inline void set_renderViewportScale(float_t  value) ;

/// @brief Method set_renderViewportScaleInternal, addr 0x319a29c, size 0x38, virtual false, abstract: false, final false
static inline void set_renderViewportScaleInternal(float_t  value) ;

/// @brief Method set_showDeviceView, addr 0x319a02c, size 0x3c, virtual false, abstract: false, final false
static inline void set_showDeviceView(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSettings(XRSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSettings(XRSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRSettings, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
