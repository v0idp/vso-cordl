#pragma once
// IWYU pragma private; include "BeautifyEffect/SphereAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SphereAnimator)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace BeautifyEffect {
class SphereAnimator;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::SphereAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.SphereAnimator
class CORDL_TYPE SphereAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Method FixedUpdate, addr 0x180f8fc, size 0xf4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::BeautifyEffect::SphereAnimator* New_ctor() ;

/// @brief Method Start, addr 0x180f8ac, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x180f9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereAnimator(SphereAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereAnimator(SphereAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1837};

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::SphereAnimator, ___rb) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::SphereAnimator, 0x28>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::SphereAnimator);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::SphereAnimator*, "BeautifyEffect", "SphereAnimator");
