#pragma once
// IWYU pragma private; include "AudioHelm/SetHelmParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetHelmParameter)
namespace AudioHelm {
class HelmController;
}
// Forward declare root types
namespace AudioHelm {
class SetHelmParameter;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SetHelmParameter);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SetHelmParameter
class CORDL_TYPE SetHelmParameter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::AudioHelm::HelmController>  controller;

/// @brief Field parameterIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_parameterIndex, put=__cordl_internal_set_parameterIndex)) int32_t  parameterIndex;

static inline ::AudioHelm::SetHelmParameter* New_ctor() ;

/// @brief Method SetPercent, addr 0x181ce0c, size 0x80, virtual false, abstract: false, final false
inline void SetPercent() ;

/// @brief Method Start, addr 0x181cf8c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_controller() ;

constexpr int32_t const& __cordl_internal_get_parameterIndex() const;

constexpr int32_t& __cordl_internal_get_parameterIndex() ;

constexpr void __cordl_internal_set_controller(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set_parameterIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x181cf90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetHelmParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetHelmParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetHelmParameter(SetHelmParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetHelmParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetHelmParameter(SetHelmParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1864};

/// @brief Field parameterIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___parameterIndex;

/// @brief Field controller, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SetHelmParameter, ___parameterIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SetHelmParameter, ___controller) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SetHelmParameter, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SetHelmParameter);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SetHelmParameter*, "AudioHelm", "SetHelmParameter");
