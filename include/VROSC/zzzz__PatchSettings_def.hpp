#pragma once
// IWYU pragma private; include "VROSC/PatchSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PatchSettings)
namespace AudioHelm {
class HelmPatchFormat;
}
namespace AudioHelm {
struct Param;
}
namespace System {
class Object;
}
namespace VROSC {
struct PatchSettings_VirtuosoHelmParam;
}
// Forward declare root types
namespace VROSC {
struct PatchSettings_VirtuosoHelmParam;
}
namespace VROSC {
class PatchSettings;
}
// Write type traits
MARK_VAL_T(::VROSC::PatchSettings_VirtuosoHelmParam);
MARK_REF_PTR_T(::VROSC::PatchSettings);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PatchSettings/VirtuosoHelmParam
struct CORDL_TYPE PatchSettings_VirtuosoHelmParam {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PatchSettings_VirtuosoHelmParam_Unwrapped
enum struct __PatchSettings_VirtuosoHelmParam_Unwrapped : int32_t {
__E_LinkHands = static_cast<int32_t>(0x0),
__E_DistortionNormalizeVolume = static_cast<int32_t>(0x1),
__E_PatchVolume = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PatchSettings_VirtuosoHelmParam_Unwrapped () const noexcept {
return static_cast<__PatchSettings_VirtuosoHelmParam_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PatchSettings_VirtuosoHelmParam() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PatchSettings_VirtuosoHelmParam(int32_t  value__) noexcept;

/// @brief Field DistortionNormalizeVolume value: I32(1)
static ::VROSC::PatchSettings_VirtuosoHelmParam const DistortionNormalizeVolume;

/// @brief Field LinkHands value: I32(0)
static ::VROSC::PatchSettings_VirtuosoHelmParam const LinkHands;

/// @brief Field PatchVolume value: I32(2)
static ::VROSC::PatchSettings_VirtuosoHelmParam const PatchVolume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PatchSettings_VirtuosoHelmParam, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PatchSettings_VirtuosoHelmParam, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PatchSettings
class CORDL_TYPE PatchSettings : public ::System::Object {
public:
// Declarations
using VirtuosoHelmParam = ::VROSC::PatchSettings_VirtuosoHelmParam;

/// @brief Field Patch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Patch, put=__cordl_internal_set_Patch)) ::AudioHelm::HelmPatchFormat*  Patch;

/// @brief Method ConvertHelmPercentToVirtuoso, addr 0x17cb794, size 0x5c, virtual false, abstract: false, final false
inline float_t ConvertHelmPercentToVirtuoso(::AudioHelm::Param  parameter, float_t  percent) ;

/// @brief Method GetParameterPercent, addr 0x17cb7f0, size 0xb0, virtual false, abstract: false, final false
inline float_t GetParameterPercent(::AudioHelm::Param  parameter) ;

/// @brief Method GetParameterValue, addr 0x17cb8a0, size 0x74c, virtual false, abstract: false, final false
inline float_t GetParameterValue(::AudioHelm::Param  parameter) ;

/// @brief Method GetVirtuosoAdjustedPercentValue, addr 0x17c8acc, size 0x30, virtual false, abstract: false, final false
static inline float_t GetVirtuosoAdjustedPercentValue(::AudioHelm::Param  parameter, float_t  percent) ;

/// @brief Method GetVirtuosoParameterValue, addr 0x17cbfec, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* GetVirtuosoParameterValue(::VROSC::PatchSettings_VirtuosoHelmParam  helmParam) ;

static inline ::VROSC::PatchSettings* New_ctor() ;

static inline ::VROSC::PatchSettings* New_ctor(::AudioHelm::HelmPatchFormat*  patch) ;

/// @brief Method SetParameterPercent, addr 0x17ca91c, size 0xa0, virtual false, abstract: false, final false
inline void SetParameterPercent(::AudioHelm::Param  parameter, float_t  percent) ;

/// @brief Method SetParameterValue, addr 0x17c9efc, size 0xa20, virtual false, abstract: false, final false
inline void SetParameterValue(::AudioHelm::Param  parameter, float_t  newValue) ;

/// @brief Method SetVirtuosoParameterValue, addr 0x17cb64c, size 0x148, virtual false, abstract: false, final false
inline void SetVirtuosoParameterValue(::VROSC::PatchSettings_VirtuosoHelmParam  helmParam, ::System::Object*  value) ;

constexpr ::AudioHelm::HelmPatchFormat* const& __cordl_internal_get_Patch() const;

constexpr ::AudioHelm::HelmPatchFormat*& __cordl_internal_get_Patch() ;

constexpr void __cordl_internal_set_Patch(::AudioHelm::HelmPatchFormat*  value) ;

/// @brief Method .ctor, addr 0x17cb5b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17cb5bc, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::AudioHelm::HelmPatchFormat*  patch) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PatchSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PatchSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PatchSettings(PatchSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PatchSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PatchSettings(PatchSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{288};

/// @brief Field Patch, offset: 0x10, size: 0x8, def value: None
 ::AudioHelm::HelmPatchFormat*  ___Patch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PatchSettings, ___Patch) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PatchSettings, 0x18>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PatchSettings_VirtuosoHelmParam, "VROSC", "PatchSettings/VirtuosoHelmParam");
NEED_NO_BOX(::VROSC::PatchSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PatchSettings*, "VROSC", "PatchSettings");
