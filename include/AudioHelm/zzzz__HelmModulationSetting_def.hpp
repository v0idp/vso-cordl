#pragma once
// IWYU pragma private; include "AudioHelm/HelmModulationSetting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HelmModulationSetting)
// Forward declare root types
namespace AudioHelm {
class HelmModulationSetting;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmModulationSetting);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmModulationSetting
class CORDL_TYPE HelmModulationSetting : public ::System::Object {
public:
// Declarations
/// @brief Field amount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_amount, put=__cordl_internal_set_amount)) float_t  amount;

/// @brief Field destination, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::StringW  destination;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::StringW  source;

static inline ::AudioHelm::HelmModulationSetting* New_ctor() ;

constexpr float_t const& __cordl_internal_get_amount() const;

constexpr float_t& __cordl_internal_get_amount() ;

constexpr ::StringW const& __cordl_internal_get_destination() const;

constexpr ::StringW& __cordl_internal_get_destination() ;

constexpr ::StringW const& __cordl_internal_get_source() const;

constexpr ::StringW& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_amount(float_t  value) ;

constexpr void __cordl_internal_set_destination(::StringW  value) ;

constexpr void __cordl_internal_set_source(::StringW  value) ;

/// @brief Method .ctor, addr 0x1820870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmModulationSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmModulationSetting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmModulationSetting(HelmModulationSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmModulationSetting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmModulationSetting(HelmModulationSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1879};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___source;

/// @brief Field destination, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___destination;

/// @brief Field amount, offset: 0x20, size: 0x4, def value: None
 float_t  ___amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmModulationSetting, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmModulationSetting, ___destination) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmModulationSetting, ___amount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmModulationSetting, 0x28>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmModulationSetting);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmModulationSetting*, "AudioHelm", "HelmModulationSetting");
