#pragma once
// IWYU pragma private; include "AudioHelm/VirtuosoHelmPatchSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VirtuosoHelmPatchSettings)
// Forward declare root types
namespace AudioHelm {
class VirtuosoHelmPatchSettings;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::VirtuosoHelmPatchSettings);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.VirtuosoHelmPatchSettings
class CORDL_TYPE VirtuosoHelmPatchSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DistortionNormalizeVolume, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_DistortionNormalizeVolume, put=__cordl_internal_set_DistortionNormalizeVolume)) bool  DistortionNormalizeVolume;

/// @brief Field PatchVolume, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PatchVolume, put=__cordl_internal_set_PatchVolume)) float_t  PatchVolume;

/// @brief Field UseLinkHands, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseLinkHands, put=__cordl_internal_set_UseLinkHands)) bool  UseLinkHands;

static inline ::AudioHelm::VirtuosoHelmPatchSettings* New_ctor(::AudioHelm::VirtuosoHelmPatchSettings*  other) ;

constexpr bool const& __cordl_internal_get_DistortionNormalizeVolume() const;

constexpr bool& __cordl_internal_get_DistortionNormalizeVolume() ;

constexpr float_t const& __cordl_internal_get_PatchVolume() const;

constexpr float_t& __cordl_internal_get_PatchVolume() ;

constexpr bool const& __cordl_internal_get_UseLinkHands() const;

constexpr bool& __cordl_internal_get_UseLinkHands() ;

constexpr void __cordl_internal_set_DistortionNormalizeVolume(bool  value) ;

constexpr void __cordl_internal_set_PatchVolume(float_t  value) ;

constexpr void __cordl_internal_set_UseLinkHands(bool  value) ;

/// @brief Method .ctor, addr 0x18222cc, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::AudioHelm::VirtuosoHelmPatchSettings*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtuosoHelmPatchSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtuosoHelmPatchSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtuosoHelmPatchSettings(VirtuosoHelmPatchSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtuosoHelmPatchSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtuosoHelmPatchSettings(VirtuosoHelmPatchSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1882};

/// @brief Field UseLinkHands, offset: 0x10, size: 0x1, def value: None
 bool  ___UseLinkHands;

/// @brief Field DistortionNormalizeVolume, offset: 0x11, size: 0x1, def value: None
 bool  ___DistortionNormalizeVolume;

/// @brief Field PatchVolume, offset: 0x14, size: 0x4, def value: None
 float_t  ___PatchVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::VirtuosoHelmPatchSettings, ___UseLinkHands) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::VirtuosoHelmPatchSettings, ___DistortionNormalizeVolume) == 0x11, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::VirtuosoHelmPatchSettings, ___PatchVolume) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::VirtuosoHelmPatchSettings, 0x18>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::VirtuosoHelmPatchSettings);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::VirtuosoHelmPatchSettings*, "AudioHelm", "VirtuosoHelmPatchSettings");
