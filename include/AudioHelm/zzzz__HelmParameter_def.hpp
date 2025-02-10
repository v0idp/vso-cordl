#pragma once
// IWYU pragma private; include "AudioHelm/HelmParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__Param_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmParameter)
namespace AudioHelm {
class HelmController;
}
namespace AudioHelm {
struct HelmParameter_ScaleType;
}
namespace AudioHelm {
struct Param;
}
// Forward declare root types
namespace AudioHelm {
struct HelmParameter_ScaleType;
}
namespace AudioHelm {
class HelmParameter;
}
// Write type traits
MARK_VAL_T(::AudioHelm::HelmParameter_ScaleType);
MARK_REF_PTR_T(::AudioHelm::HelmParameter);
// Dependencies 
namespace AudioHelm {
// Is value type: true
// CS Name: AudioHelm.HelmParameter/ScaleType
struct CORDL_TYPE HelmParameter_ScaleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HelmParameter_ScaleType_Unwrapped
enum struct __HelmParameter_ScaleType_Unwrapped : int32_t {
__E_kByValue = static_cast<int32_t>(0x0),
__E_kByPercent = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HelmParameter_ScaleType_Unwrapped () const noexcept {
return static_cast<__HelmParameter_ScaleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HelmParameter_ScaleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HelmParameter_ScaleType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kByPercent value: I32(1)
static ::AudioHelm::HelmParameter_ScaleType const kByPercent;

/// @brief Field kByValue value: I32(0)
static ::AudioHelm::HelmParameter_ScaleType const kByValue;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmParameter_ScaleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmParameter_ScaleType, 0x4>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies AudioHelm.HelmParameter::ScaleType, AudioHelm.Param, System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmParameter
class CORDL_TYPE HelmParameter : public ::System::Object {
public:
// Declarations
using ScaleType = ::AudioHelm::HelmParameter_ScaleType;

/// @brief Field lastValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastValue, put=__cordl_internal_set_lastValue)) float_t  lastValue;

/// @brief Field maximumRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumRange, put=__cordl_internal_set_maximumRange)) float_t  maximumRange;

/// @brief Field minimumRange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumRange, put=__cordl_internal_set_minimumRange)) float_t  minimumRange;

 __declspec(property(get=get_paramValue, put=set_paramValue)) float_t  paramValue;

/// @brief Field paramValue_, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_paramValue_, put=__cordl_internal_set_paramValue_)) float_t  paramValue_;

 __declspec(property(get=get_parameter, put=set_parameter)) ::AudioHelm::Param  parameter;

/// @brief Field parameter_, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_parameter_, put=__cordl_internal_set_parameter_)) ::AudioHelm::Param  parameter_;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::AudioHelm::HelmController>  parent;

/// @brief Field scaleType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleType, put=__cordl_internal_set_scaleType)) ::AudioHelm::HelmParameter_ScaleType  scaleType;

/// @brief Method GetMaximumRange, addr 0x1820704, size 0x8, virtual false, abstract: false, final false
inline float_t GetMaximumRange() ;

/// @brief Method GetMinimumRange, addr 0x18206fc, size 0x8, virtual false, abstract: false, final false
inline float_t GetMinimumRange() ;

static inline ::AudioHelm::HelmParameter* New_ctor() ;

static inline ::AudioHelm::HelmParameter* New_ctor(::AudioHelm::HelmController*  par) ;

static inline ::AudioHelm::HelmParameter* New_ctor(::AudioHelm::HelmController*  par, ::AudioHelm::Param  param) ;

/// @brief Method UpdateMinMax, addr 0x1820560, size 0x80, virtual false, abstract: false, final false
inline void UpdateMinMax() ;

/// @brief Method UpdateNative, addr 0x18205e8, size 0xe0, virtual false, abstract: false, final false
inline void UpdateNative() ;

constexpr float_t const& __cordl_internal_get_lastValue() const;

constexpr float_t& __cordl_internal_get_lastValue() ;

constexpr float_t const& __cordl_internal_get_maximumRange() const;

constexpr float_t& __cordl_internal_get_maximumRange() ;

constexpr float_t const& __cordl_internal_get_minimumRange() const;

constexpr float_t& __cordl_internal_get_minimumRange() ;

constexpr float_t const& __cordl_internal_get_paramValue_() const;

constexpr float_t& __cordl_internal_get_paramValue_() ;

constexpr ::AudioHelm::Param const& __cordl_internal_get_parameter_() const;

constexpr ::AudioHelm::Param& __cordl_internal_get_parameter_() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_parent() ;

constexpr ::AudioHelm::HelmParameter_ScaleType const& __cordl_internal_get_scaleType() const;

constexpr ::AudioHelm::HelmParameter_ScaleType& __cordl_internal_get_scaleType() ;

constexpr void __cordl_internal_set_lastValue(float_t  value) ;

constexpr void __cordl_internal_set_maximumRange(float_t  value) ;

constexpr void __cordl_internal_set_minimumRange(float_t  value) ;

constexpr void __cordl_internal_set_paramValue_(float_t  value) ;

constexpr void __cordl_internal_set_parameter_(::AudioHelm::Param  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_scaleType(::AudioHelm::HelmParameter_ScaleType  value) ;

/// @brief Method .ctor, addr 0x18206c8, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181f560, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::AudioHelm::HelmController*  par) ;

/// @brief Method .ctor, addr 0x181f6a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::AudioHelm::HelmController*  par, ::AudioHelm::Param  param) ;

/// @brief Method get_paramValue, addr 0x18205e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_paramValue() ;

/// @brief Method get_parameter, addr 0x1820540, size 0x8, virtual false, abstract: false, final false
inline ::AudioHelm::Param get_parameter() ;

/// @brief Method set_paramValue, addr 0x181f374, size 0x18, virtual false, abstract: false, final false
inline void set_paramValue(float_t  value) ;

/// @brief Method set_parameter, addr 0x1820548, size 0x18, virtual false, abstract: false, final false
inline void set_parameter(::AudioHelm::Param  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmParameter(HelmParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmParameter(HelmParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1877};

/// @brief Field parameter_, offset: 0x10, size: 0x4, def value: None
 ::AudioHelm::Param  ___parameter_;

/// @brief Field scaleType, offset: 0x14, size: 0x4, def value: None
 ::AudioHelm::HelmParameter_ScaleType  ___scaleType;

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___parent;

/// @brief Field lastValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___lastValue;

/// @brief Field minimumRange, offset: 0x24, size: 0x4, def value: None
 float_t  ___minimumRange;

/// @brief Field maximumRange, offset: 0x28, size: 0x4, def value: None
 float_t  ___maximumRange;

/// @brief Field paramValue_, offset: 0x2c, size: 0x4, def value: None
 float_t  ___paramValue_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmParameter, ___parameter_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___scaleType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___lastValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___minimumRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___maximumRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmParameter, ___paramValue_) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmParameter, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmParameter_ScaleType, "AudioHelm", "HelmParameter/ScaleType");
NEED_NO_BOX(::AudioHelm::HelmParameter);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmParameter*, "AudioHelm", "HelmParameter");
