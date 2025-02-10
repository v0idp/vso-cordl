#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/UnityAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAttributes)
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class UnityAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::UnityAttributes);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.UnityAttributes
class CORDL_TYPE UnityAttributes : public ::System::Object {
public:
// Declarations
/// @brief Field appInstallMode, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_appInstallMode, put=__cordl_internal_set_appInstallMode)) ::StringW  appInstallMode;

/// @brief Field appInstallStore, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_appInstallStore, put=__cordl_internal_set_appInstallStore)) ::StringW  appInstallStore;

/// @brief Field appName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_appName, put=__cordl_internal_set_appName)) ::StringW  appName;

/// @brief Field appVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_appVersion, put=__cordl_internal_set_appVersion)) ::StringW  appVersion;

/// @brief Field cpu, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cpu, put=__cordl_internal_set_cpu)) ::StringW  cpu;

/// @brief Field cpuCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cpuCount, put=__cordl_internal_set_cpuCount)) int32_t  cpuCount;

/// @brief Field cpuFrequency, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cpuFrequency, put=__cordl_internal_set_cpuFrequency)) int32_t  cpuFrequency;

/// @brief Field dpi, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_dpi, put=__cordl_internal_set_dpi)) int32_t  dpi;

/// @brief Field graphicsDeviceId, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphicsDeviceId, put=__cordl_internal_set_graphicsDeviceId)) int32_t  graphicsDeviceId;

/// @brief Field graphicsDeviceVendor, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphicsDeviceVendor, put=__cordl_internal_set_graphicsDeviceVendor)) ::StringW  graphicsDeviceVendor;

/// @brief Field graphicsDeviceVendorId, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphicsDeviceVendorId, put=__cordl_internal_set_graphicsDeviceVendorId)) int32_t  graphicsDeviceVendorId;

/// @brief Field graphicsName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphicsName, put=__cordl_internal_set_graphicsName)) ::StringW  graphicsName;

/// @brief Field graphicsShader, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphicsShader, put=__cordl_internal_set_graphicsShader)) int32_t  graphicsShader;

/// @brief Field graphicsVersion, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphicsVersion, put=__cordl_internal_set_graphicsVersion)) ::StringW  graphicsVersion;

/// @brief Field language, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_language, put=__cordl_internal_set_language)) ::StringW  language;

/// @brief Field maxTextureSize, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTextureSize, put=__cordl_internal_set_maxTextureSize)) int32_t  maxTextureSize;

/// @brief Field model, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_model, put=__cordl_internal_set_model)) ::StringW  model;

/// @brief Field osVersion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_osVersion, put=__cordl_internal_set_osVersion)) ::StringW  osVersion;

/// @brief Field ram, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ram, put=__cordl_internal_set_ram)) int32_t  ram;

/// @brief Field rootedJailbroken, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_rootedJailbroken, put=__cordl_internal_set_rootedJailbroken)) bool  rootedJailbroken;

/// @brief Field screen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_screen, put=__cordl_internal_set_screen)) ::StringW  screen;

/// @brief Field vram, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_vram, put=__cordl_internal_set_vram)) int32_t  vram;

/// @brief Method GetDeviceModel, addr 0x2eaa2c0, size 0x12c, virtual false, abstract: false, final false
inline ::StringW GetDeviceModel() ;

/// @brief Method GetISOCodeFromLangStruct, addr 0x2eaa3ec, size 0x230, virtual false, abstract: false, final false
inline ::StringW GetISOCodeFromLangStruct(::UnityEngine::SystemLanguage  systemLanguage) ;

static inline ::Unity::Services::RemoteConfig::UnityAttributes* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_appInstallMode() const;

constexpr ::StringW& __cordl_internal_get_appInstallMode() ;

constexpr ::StringW const& __cordl_internal_get_appInstallStore() const;

constexpr ::StringW& __cordl_internal_get_appInstallStore() ;

constexpr ::StringW const& __cordl_internal_get_appName() const;

constexpr ::StringW& __cordl_internal_get_appName() ;

constexpr ::StringW const& __cordl_internal_get_appVersion() const;

constexpr ::StringW& __cordl_internal_get_appVersion() ;

constexpr ::StringW const& __cordl_internal_get_cpu() const;

constexpr ::StringW& __cordl_internal_get_cpu() ;

constexpr int32_t const& __cordl_internal_get_cpuCount() const;

constexpr int32_t& __cordl_internal_get_cpuCount() ;

constexpr int32_t const& __cordl_internal_get_cpuFrequency() const;

constexpr int32_t& __cordl_internal_get_cpuFrequency() ;

constexpr int32_t const& __cordl_internal_get_dpi() const;

constexpr int32_t& __cordl_internal_get_dpi() ;

constexpr int32_t const& __cordl_internal_get_graphicsDeviceId() const;

constexpr int32_t& __cordl_internal_get_graphicsDeviceId() ;

constexpr ::StringW const& __cordl_internal_get_graphicsDeviceVendor() const;

constexpr ::StringW& __cordl_internal_get_graphicsDeviceVendor() ;

constexpr int32_t const& __cordl_internal_get_graphicsDeviceVendorId() const;

constexpr int32_t& __cordl_internal_get_graphicsDeviceVendorId() ;

constexpr ::StringW const& __cordl_internal_get_graphicsName() const;

constexpr ::StringW& __cordl_internal_get_graphicsName() ;

constexpr int32_t const& __cordl_internal_get_graphicsShader() const;

constexpr int32_t& __cordl_internal_get_graphicsShader() ;

constexpr ::StringW const& __cordl_internal_get_graphicsVersion() const;

constexpr ::StringW& __cordl_internal_get_graphicsVersion() ;

constexpr ::StringW const& __cordl_internal_get_language() const;

constexpr ::StringW& __cordl_internal_get_language() ;

constexpr int32_t const& __cordl_internal_get_maxTextureSize() const;

constexpr int32_t& __cordl_internal_get_maxTextureSize() ;

constexpr ::StringW const& __cordl_internal_get_model() const;

constexpr ::StringW& __cordl_internal_get_model() ;

constexpr ::StringW const& __cordl_internal_get_osVersion() const;

constexpr ::StringW& __cordl_internal_get_osVersion() ;

constexpr int32_t const& __cordl_internal_get_ram() const;

constexpr int32_t& __cordl_internal_get_ram() ;

constexpr bool const& __cordl_internal_get_rootedJailbroken() const;

constexpr bool& __cordl_internal_get_rootedJailbroken() ;

constexpr ::StringW const& __cordl_internal_get_screen() const;

constexpr ::StringW& __cordl_internal_get_screen() ;

constexpr int32_t const& __cordl_internal_get_vram() const;

constexpr int32_t& __cordl_internal_get_vram() ;

constexpr void __cordl_internal_set_appInstallMode(::StringW  value) ;

constexpr void __cordl_internal_set_appInstallStore(::StringW  value) ;

constexpr void __cordl_internal_set_appName(::StringW  value) ;

constexpr void __cordl_internal_set_appVersion(::StringW  value) ;

constexpr void __cordl_internal_set_cpu(::StringW  value) ;

constexpr void __cordl_internal_set_cpuCount(int32_t  value) ;

constexpr void __cordl_internal_set_cpuFrequency(int32_t  value) ;

constexpr void __cordl_internal_set_dpi(int32_t  value) ;

constexpr void __cordl_internal_set_graphicsDeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_graphicsDeviceVendor(::StringW  value) ;

constexpr void __cordl_internal_set_graphicsDeviceVendorId(int32_t  value) ;

constexpr void __cordl_internal_set_graphicsName(::StringW  value) ;

constexpr void __cordl_internal_set_graphicsShader(int32_t  value) ;

constexpr void __cordl_internal_set_graphicsVersion(::StringW  value) ;

constexpr void __cordl_internal_set_language(::StringW  value) ;

constexpr void __cordl_internal_set_maxTextureSize(int32_t  value) ;

constexpr void __cordl_internal_set_model(::StringW  value) ;

constexpr void __cordl_internal_set_osVersion(::StringW  value) ;

constexpr void __cordl_internal_set_ram(int32_t  value) ;

constexpr void __cordl_internal_set_rootedJailbroken(bool  value) ;

constexpr void __cordl_internal_set_screen(::StringW  value) ;

constexpr void __cordl_internal_set_vram(int32_t  value) ;

/// @brief Method .ctor, addr 0x2ea7888, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAttributes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAttributes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAttributes(UnityAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAttributes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAttributes(UnityAttributes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12222};

/// @brief Field osVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___osVersion;

/// @brief Field appVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___appVersion;

/// @brief Field rootedJailbroken, offset: 0x20, size: 0x1, def value: None
 bool  ___rootedJailbroken;

/// @brief Field model, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___model;

/// @brief Field cpu, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___cpu;

/// @brief Field cpuCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___cpuCount;

/// @brief Field cpuFrequency, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___cpuFrequency;

/// @brief Field ram, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ram;

/// @brief Field vram, offset: 0x44, size: 0x4, def value: None
 int32_t  ___vram;

/// @brief Field screen, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___screen;

/// @brief Field dpi, offset: 0x50, size: 0x4, def value: None
 int32_t  ___dpi;

/// @brief Field language, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___language;

/// @brief Field appName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___appName;

/// @brief Field appInstallMode, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___appInstallMode;

/// @brief Field appInstallStore, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___appInstallStore;

/// @brief Field graphicsDeviceId, offset: 0x78, size: 0x4, def value: None
 int32_t  ___graphicsDeviceId;

/// @brief Field graphicsDeviceVendorId, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___graphicsDeviceVendorId;

/// @brief Field graphicsName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___graphicsName;

/// @brief Field graphicsDeviceVendor, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___graphicsDeviceVendor;

/// @brief Field graphicsVersion, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___graphicsVersion;

/// @brief Field graphicsShader, offset: 0x98, size: 0x4, def value: None
 int32_t  ___graphicsShader;

/// @brief Field maxTextureSize, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___maxTextureSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___osVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___appVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___rootedJailbroken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___model) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___cpu) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___cpuCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___cpuFrequency) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___ram) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___vram) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___screen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___dpi) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___language) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___appName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___appInstallMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___appInstallStore) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsDeviceId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsDeviceVendorId) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsDeviceVendor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsVersion) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___graphicsShader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::UnityAttributes, ___maxTextureSize) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::UnityAttributes, 0xa0>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::UnityAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::UnityAttributes*, "Unity.Services.RemoteConfig", "UnityAttributes");
