#pragma once
// IWYU pragma private; include "AudioHelm/SetAnimationParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetAnimationParameter)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace AudioHelm {
class SetAnimationParameter;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SetAnimationParameter);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SetAnimationParameter
class CORDL_TYPE SetAnimationParameter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field parameter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameter, put=__cordl_internal_set_parameter)) ::StringW  parameter;

static inline ::AudioHelm::SetAnimationParameter* New_ctor() ;

/// @brief Method SetValue, addr 0x181cd80, size 0x80, virtual false, abstract: false, final false
inline void SetValue() ;

/// @brief Method Start, addr 0x181ce00, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::StringW const& __cordl_internal_get_parameter() const;

constexpr ::StringW& __cordl_internal_get_parameter() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_parameter(::StringW  value) ;

/// @brief Method .ctor, addr 0x181ce04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetAnimationParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetAnimationParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetAnimationParameter(SetAnimationParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetAnimationParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetAnimationParameter(SetAnimationParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1863};

/// @brief Field parameter, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___parameter;

/// @brief Field animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SetAnimationParameter, ___parameter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SetAnimationParameter, ___animator) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SetAnimationParameter, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SetAnimationParameter);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SetAnimationParameter*, "AudioHelm", "SetAnimationParameter");
