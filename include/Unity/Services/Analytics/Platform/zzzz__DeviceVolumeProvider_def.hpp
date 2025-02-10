#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Platform/DeviceVolumeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DeviceVolumeProvider)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Analytics::Platform {
class DeviceVolumeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Platform::DeviceVolumeProvider);
// Dependencies System.Object
namespace Unity::Services::Analytics::Platform {
// Is value type: false
// CS Name: Unity.Services.Analytics.Platform.DeviceVolumeProvider
class CORDL_TYPE DeviceVolumeProvider : public ::System::Object {
public:
// Declarations
/// @brief Method GetDeviceVolume, addr 0x2e8e9a0, size 0x2d8, virtual false, abstract: false, final false
static inline ::System::Nullable_1<float_t> GetDeviceVolume() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceVolumeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceVolumeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceVolumeProvider(DeviceVolumeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceVolumeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceVolumeProvider(DeviceVolumeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Platform::DeviceVolumeProvider, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Platform
NEED_NO_BOX(::Unity::Services::Analytics::Platform::DeviceVolumeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Platform::DeviceVolumeProvider*, "Unity.Services.Analytics.Platform", "DeviceVolumeProvider");
