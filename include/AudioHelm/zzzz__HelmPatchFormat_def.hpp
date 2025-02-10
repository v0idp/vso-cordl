#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatchFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelmPatchFormat)
namespace AudioHelm {
class HelmPatchSettings;
}
namespace AudioHelm {
class VirtuosoHelmPatchSettings;
}
// Forward declare root types
namespace AudioHelm {
class HelmPatchFormat;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmPatchFormat);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmPatchFormat
class CORDL_TYPE HelmPatchFormat : public ::System::Object {
public:
// Declarations
/// @brief Field author, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_author, put=__cordl_internal_set_author)) ::StringW  author;

/// @brief Field folder_name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_folder_name, put=__cordl_internal_set_folder_name)) ::StringW  folder_name;

/// @brief Field license, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_license, put=__cordl_internal_set_license)) ::StringW  license;

/// @brief Field patch_name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_patch_name, put=__cordl_internal_set_patch_name)) ::StringW  patch_name;

/// @brief Field settings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::AudioHelm::HelmPatchSettings*  settings;

/// @brief Field synth_version, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_synth_version, put=__cordl_internal_set_synth_version)) ::StringW  synth_version;

/// @brief Field virtuosoSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtuosoSettings, put=__cordl_internal_set_virtuosoSettings)) ::AudioHelm::VirtuosoHelmPatchSettings*  virtuosoSettings;

static inline ::AudioHelm::HelmPatchFormat* New_ctor(::AudioHelm::HelmPatchFormat*  other) ;

constexpr ::StringW const& __cordl_internal_get_author() const;

constexpr ::StringW& __cordl_internal_get_author() ;

constexpr ::StringW const& __cordl_internal_get_folder_name() const;

constexpr ::StringW& __cordl_internal_get_folder_name() ;

constexpr ::StringW const& __cordl_internal_get_license() const;

constexpr ::StringW& __cordl_internal_get_license() ;

constexpr ::StringW const& __cordl_internal_get_patch_name() const;

constexpr ::StringW& __cordl_internal_get_patch_name() ;

constexpr ::AudioHelm::HelmPatchSettings* const& __cordl_internal_get_settings() const;

constexpr ::AudioHelm::HelmPatchSettings*& __cordl_internal_get_settings() ;

constexpr ::StringW const& __cordl_internal_get_synth_version() const;

constexpr ::StringW& __cordl_internal_get_synth_version() ;

constexpr ::AudioHelm::VirtuosoHelmPatchSettings* const& __cordl_internal_get_virtuosoSettings() const;

constexpr ::AudioHelm::VirtuosoHelmPatchSettings*& __cordl_internal_get_virtuosoSettings() ;

constexpr void __cordl_internal_set_author(::StringW  value) ;

constexpr void __cordl_internal_set_folder_name(::StringW  value) ;

constexpr void __cordl_internal_set_license(::StringW  value) ;

constexpr void __cordl_internal_set_patch_name(::StringW  value) ;

constexpr void __cordl_internal_set_settings(::AudioHelm::HelmPatchSettings*  value) ;

constexpr void __cordl_internal_set_synth_version(::StringW  value) ;

constexpr void __cordl_internal_set_virtuosoSettings(::AudioHelm::VirtuosoHelmPatchSettings*  value) ;

/// @brief Method .ctor, addr 0x1822204, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::AudioHelm::HelmPatchFormat*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmPatchFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmPatchFormat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmPatchFormat(HelmPatchFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmPatchFormat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmPatchFormat(HelmPatchFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1881};

/// @brief Field license, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___license;

/// @brief Field synth_version, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___synth_version;

/// @brief Field patch_name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___patch_name;

/// @brief Field folder_name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___folder_name;

/// @brief Field author, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___author;

/// @brief Field virtuosoSettings, offset: 0x38, size: 0x8, def value: None
 ::AudioHelm::VirtuosoHelmPatchSettings*  ___virtuosoSettings;

/// @brief Field settings, offset: 0x40, size: 0x8, def value: None
 ::AudioHelm::HelmPatchSettings*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___license) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___synth_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___patch_name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___folder_name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___author) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___virtuosoSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchFormat, ___settings) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmPatchFormat, 0x48>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmPatchFormat);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmPatchFormat*, "AudioHelm", "HelmPatchFormat");
