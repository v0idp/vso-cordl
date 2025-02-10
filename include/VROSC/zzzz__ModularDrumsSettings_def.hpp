#pragma once
// IWYU pragma private; include "VROSC/ModularDrumsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ModularDrumsSettings)
// Forward declare root types
namespace VROSC {
class ModularDrumsSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ModularDrumsSettings);
// Dependencies VROSC.InstrumentSettings
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumsSettings
class CORDL_TYPE ModularDrumsSettings : public ::VROSC::InstrumentSettings {
public:
// Declarations
 __declspec(property(get=get_Compression)) float_t  Compression;

 __declspec(property(get=get_DryVolume)) float_t  DryVolume;

 __declspec(property(get=get_ReverbAmount)) float_t  ReverbAmount;

 __declspec(property(get=get_ReverbLength)) float_t  ReverbLength;

/// @brief Field _compression, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__compression, put=__cordl_internal_set__compression)) float_t  _compression;

/// @brief Field _dryVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__dryVolume, put=__cordl_internal_set__dryVolume)) float_t  _dryVolume;

/// @brief Field _reverbAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__reverbAmount, put=__cordl_internal_set__reverbAmount)) float_t  _reverbAmount;

/// @brief Field _reverbLength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__reverbLength, put=__cordl_internal_set__reverbLength)) float_t  _reverbLength;

static inline ::VROSC::ModularDrumsSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__compression() const;

constexpr float_t& __cordl_internal_get__compression() ;

constexpr float_t const& __cordl_internal_get__dryVolume() const;

constexpr float_t& __cordl_internal_get__dryVolume() ;

constexpr float_t const& __cordl_internal_get__reverbAmount() const;

constexpr float_t& __cordl_internal_get__reverbAmount() ;

constexpr float_t const& __cordl_internal_get__reverbLength() const;

constexpr float_t& __cordl_internal_get__reverbLength() ;

constexpr void __cordl_internal_set__compression(float_t  value) ;

constexpr void __cordl_internal_set__dryVolume(float_t  value) ;

constexpr void __cordl_internal_set__reverbAmount(float_t  value) ;

constexpr void __cordl_internal_set__reverbLength(float_t  value) ;

/// @brief Method .ctor, addr 0x1710a68, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Compression, addr 0x1710a60, size 0x8, virtual false, abstract: false, final false
inline float_t get_Compression() ;

/// @brief Method get_DryVolume, addr 0x1710a58, size 0x8, virtual false, abstract: false, final false
inline float_t get_DryVolume() ;

/// @brief Method get_ReverbAmount, addr 0x1710a48, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReverbAmount() ;

/// @brief Method get_ReverbLength, addr 0x1710a50, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReverbLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumsSettings(ModularDrumsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumsSettings(ModularDrumsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{888};

/// @brief Field _reverbAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ____reverbAmount;

/// @brief Field _reverbLength, offset: 0x54, size: 0x4, def value: None
 float_t  ____reverbLength;

/// @brief Field _dryVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ____dryVolume;

/// @brief Field _compression, offset: 0x5c, size: 0x4, def value: None
 float_t  ____compression;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumsSettings, ____reverbAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsSettings, ____reverbLength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsSettings, ____dryVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsSettings, ____compression) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumsSettings, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ModularDrumsSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumsSettings*, "VROSC", "ModularDrumsSettings");
