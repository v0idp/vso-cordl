#pragma once
// IWYU pragma private; include "AudioHelm/ToggleParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__Param_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ToggleParameter)
namespace AudioHelm {
class HelmController;
}
// Forward declare root types
namespace AudioHelm {
class ToggleParameter;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::ToggleParameter);
// Dependencies AudioHelm.Param, UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.ToggleParameter
class CORDL_TYPE ToggleParameter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::AudioHelm::HelmController>  controller;

/// @brief Field isOn, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field offValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_offValue, put=__cordl_internal_set_offValue)) float_t  offValue;

/// @brief Field onValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_onValue, put=__cordl_internal_set_onValue)) float_t  onValue;

/// @brief Field param, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_param, put=__cordl_internal_set_param)) ::AudioHelm::Param  param;

static inline ::AudioHelm::ToggleParameter* New_ctor() ;

/// @brief Method Start, addr 0x181d27c, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Toggle, addr 0x181d2a8, size 0x44, virtual false, abstract: false, final false
inline void Toggle() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_controller() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr float_t const& __cordl_internal_get_offValue() const;

constexpr float_t& __cordl_internal_get_offValue() ;

constexpr float_t const& __cordl_internal_get_onValue() const;

constexpr float_t& __cordl_internal_get_onValue() ;

constexpr ::AudioHelm::Param const& __cordl_internal_get_param() const;

constexpr ::AudioHelm::Param& __cordl_internal_get_param() ;

constexpr void __cordl_internal_set_controller(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_offValue(float_t  value) ;

constexpr void __cordl_internal_set_onValue(float_t  value) ;

constexpr void __cordl_internal_set_param(::AudioHelm::Param  value) ;

/// @brief Method .ctor, addr 0x181d2ec, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleParameter(ToggleParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleParameter(ToggleParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1867};

/// @brief Field controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___controller;

/// @brief Field param, offset: 0x28, size: 0x4, def value: None
 ::AudioHelm::Param  ___param;

/// @brief Field onValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ___onValue;

/// @brief Field offValue, offset: 0x30, size: 0x4, def value: None
 float_t  ___offValue;

/// @brief Field isOn, offset: 0x34, size: 0x1, def value: None
 bool  ___isOn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::ToggleParameter, ___controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ToggleParameter, ___param) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ToggleParameter, ___onValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ToggleParameter, ___offValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ToggleParameter, ___isOn) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::ToggleParameter, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::ToggleParameter);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::ToggleParameter*, "AudioHelm", "ToggleParameter");
