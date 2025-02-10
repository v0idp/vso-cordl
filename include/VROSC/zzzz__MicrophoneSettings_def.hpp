#pragma once
// IWYU pragma private; include "VROSC/MicrophoneSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MicrophoneSettings)
// Forward declare root types
namespace VROSC {
class MicrophoneSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneSettings);
// Dependencies VROSC.ToolSettings
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneSettings
class CORDL_TYPE MicrophoneSettings : public ::VROSC::ToolSettings {
public:
// Declarations
/// @brief Field Reverb, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Reverb, put=__cordl_internal_set_Reverb)) float_t  Reverb;

/// @brief Field ReverbMaxValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbMaxValue, put=__cordl_internal_set_ReverbMaxValue)) float_t  ReverbMaxValue;

/// @brief Field UseProximity, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseProximity, put=__cordl_internal_set_UseProximity)) bool  UseProximity;

/// @brief Field Volume, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

/// @brief Field VolumeMaxValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_VolumeMaxValue, put=__cordl_internal_set_VolumeMaxValue)) float_t  VolumeMaxValue;

static inline ::VROSC::MicrophoneSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Reverb() const;

constexpr float_t& __cordl_internal_get_Reverb() ;

constexpr float_t const& __cordl_internal_get_ReverbMaxValue() const;

constexpr float_t& __cordl_internal_get_ReverbMaxValue() ;

constexpr bool const& __cordl_internal_get_UseProximity() const;

constexpr bool& __cordl_internal_get_UseProximity() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr float_t const& __cordl_internal_get_VolumeMaxValue() const;

constexpr float_t& __cordl_internal_get_VolumeMaxValue() ;

constexpr void __cordl_internal_set_Reverb(float_t  value) ;

constexpr void __cordl_internal_set_ReverbMaxValue(float_t  value) ;

constexpr void __cordl_internal_set_UseProximity(bool  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

constexpr void __cordl_internal_set_VolumeMaxValue(float_t  value) ;

/// @brief Method .ctor, addr 0x1710a34, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneSettings(MicrophoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneSettings(MicrophoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{887};

/// @brief Field VolumeMaxValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___VolumeMaxValue;

/// @brief Field Volume, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field ReverbMaxValue, offset: 0x30, size: 0x4, def value: None
 float_t  ___ReverbMaxValue;

/// @brief Field Reverb, offset: 0x34, size: 0x4, def value: None
 float_t  ___Reverb;

/// @brief Field UseProximity, offset: 0x38, size: 0x1, def value: None
 bool  ___UseProximity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneSettings, ___VolumeMaxValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneSettings, ___Volume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneSettings, ___ReverbMaxValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneSettings, ___Reverb) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneSettings, ___UseProximity) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneSettings, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneSettings*, "VROSC", "MicrophoneSettings");
