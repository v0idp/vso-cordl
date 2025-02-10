#pragma once
// IWYU pragma private; include "UnityEngine/SystemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemInfo)
namespace System {
class Enum;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RenderingThreadingMode;
}
namespace UnityEngine {
struct DeviceType;
}
namespace UnityEngine {
struct OperatingSystemFamily;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SystemInfo);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetBatteryLevel, addr 0x2f908c8, size 0x28, virtual false, abstract: false, final false
static inline float_t GetBatteryLevel() ;

/// @brief Method GetCompatibleFormat, addr 0x2f912ac, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::FormatUsage  usage) ;

/// @brief Method GetDeviceModel, addr 0x2f90b48, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDeviceModel() ;

/// @brief Method GetDeviceType, addr 0x2f90be8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType GetDeviceType() ;

/// @brief Method GetDeviceUniqueIdentifier, addr 0x2f90af8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDeviceUniqueIdentifier() ;

/// @brief Method GetGraphicsDeviceID, addr 0x2f90d28, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceID() ;

/// @brief Method GetGraphicsDeviceName, addr 0x2f90c88, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceName() ;

/// @brief Method GetGraphicsDeviceType, addr 0x2f90dc8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType() ;

/// @brief Method GetGraphicsDeviceVendor, addr 0x2f90cd8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVendor() ;

/// @brief Method GetGraphicsDeviceVendorID, addr 0x2f90d78, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsDeviceVendorID() ;

/// @brief Method GetGraphicsDeviceVersion, addr 0x2f90e18, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsDeviceVersion() ;

/// @brief Method GetGraphicsFormat, addr 0x2f912f0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetGraphicsMemorySize, addr 0x2f90c38, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsMemorySize() ;

/// @brief Method GetGraphicsMultiThreaded, addr 0x2f90eb8, size 0x28, virtual false, abstract: false, final false
static inline bool GetGraphicsMultiThreaded() ;

/// @brief Method GetGraphicsShaderLevel, addr 0x2f90e68, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetGraphicsShaderLevel() ;

/// @brief Method GetMaxRenderTextureSize, addr 0x2f91240, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxRenderTextureSize() ;

/// @brief Method GetMaxTextureSize, addr 0x2f911f0, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetMaxTextureSize() ;

/// @brief Method GetOperatingSystem, addr 0x2f90918, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetOperatingSystem() ;

/// @brief Method GetOperatingSystemFamily, addr 0x2f90968, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily() ;

/// @brief Method GetPhysicalMemoryMB, addr 0x2f90aa8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetPhysicalMemoryMB() ;

/// @brief Method GetProcessorCount, addr 0x2f90a58, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorCount() ;

/// @brief Method GetProcessorFrequencyMHz, addr 0x2f90a08, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetProcessorFrequencyMHz() ;

/// @brief Method GetProcessorType, addr 0x2f909b8, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetProcessorType() ;

/// @brief Method GetRenderingThreadingMode, addr 0x2f90f08, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode GetRenderingThreadingMode() ;

/// @brief Method HasRenderTextureNative, addr 0x2f9107c, size 0x3c, virtual false, abstract: false, final false
static inline bool HasRenderTextureNative(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method IsFormatSupported, addr 0x2f91268, size 0x44, virtual false, abstract: false, final false
static inline bool IsFormatSupported(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::FormatUsage  usage) ;

/// @brief Method IsGyroAvailable, addr 0x2f90b98, size 0x28, virtual false, abstract: false, final false
static inline bool IsGyroAvailable() ;

/// @brief Method IsValidEnumValue, addr 0x2f90f30, size 0x78, virtual false, abstract: false, final false
static inline bool IsValidEnumValue(::System::Enum*  value) ;

/// @brief Method SupportsRenderTextureFormat, addr 0x2f90fa8, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method SupportsTextureFormat, addr 0x2f910b8, size 0xd4, virtual false, abstract: false, final false
static inline bool SupportsTextureFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method SupportsTextureFormatNative, addr 0x2f9118c, size 0x3c, virtual false, abstract: false, final false
static inline bool SupportsTextureFormatNative(::UnityEngine::TextureFormat  format) ;

/// @brief Method get_batteryLevel, addr 0x2f908a0, size 0x28, virtual false, abstract: false, final false
static inline float_t get_batteryLevel() ;

/// @brief Method get_deviceModel, addr 0x2f90b20, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_deviceModel() ;

/// @brief Method get_deviceType, addr 0x2f90bc0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::DeviceType get_deviceType() ;

/// @brief Method get_deviceUniqueIdentifier, addr 0x2f90ad0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_deviceUniqueIdentifier() ;

/// @brief Method get_graphicsDeviceID, addr 0x2f90d00, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceID() ;

/// @brief Method get_graphicsDeviceName, addr 0x2f90c60, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceName() ;

/// @brief Method get_graphicsDeviceType, addr 0x2f90da0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceVendor, addr 0x2f90cb0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVendor() ;

/// @brief Method get_graphicsDeviceVendorID, addr 0x2f90d50, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsDeviceVendorID() ;

/// @brief Method get_graphicsDeviceVersion, addr 0x2f90df0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_graphicsDeviceVersion() ;

/// @brief Method get_graphicsMemorySize, addr 0x2f90c10, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsMemorySize() ;

/// @brief Method get_graphicsMultiThreaded, addr 0x2f90e90, size 0x28, virtual false, abstract: false, final false
static inline bool get_graphicsMultiThreaded() ;

/// @brief Method get_graphicsShaderLevel, addr 0x2f90e40, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_graphicsShaderLevel() ;

/// @brief Method get_maxRenderTextureSize, addr 0x2f91218, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxRenderTextureSize() ;

/// @brief Method get_maxTextureSize, addr 0x2f911c8, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_maxTextureSize() ;

/// @brief Method get_operatingSystem, addr 0x2f908f0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_operatingSystem() ;

/// @brief Method get_operatingSystemFamily, addr 0x2f90940, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::OperatingSystemFamily get_operatingSystemFamily() ;

/// @brief Method get_processorCount, addr 0x2f90a30, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorCount() ;

/// @brief Method get_processorFrequency, addr 0x2f909e0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_processorFrequency() ;

/// @brief Method get_processorType, addr 0x2f90990, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_processorType() ;

/// @brief Method get_renderingThreadingMode, addr 0x2f90ee0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::RenderingThreadingMode get_renderingThreadingMode() ;

/// @brief Method get_supportsGyroscope, addr 0x2f90b70, size 0x28, virtual false, abstract: false, final false
static inline bool get_supportsGyroscope() ;

/// @brief Method get_systemMemorySize, addr 0x2f90a80, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_systemMemorySize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemInfo(SystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemInfo(SystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SystemInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemInfo*, "UnityEngine", "SystemInfo");
