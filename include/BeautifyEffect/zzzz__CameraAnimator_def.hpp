#pragma once
// IWYU pragma private; include "BeautifyEffect/CameraAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraAnimator)
// Forward declare root types
namespace BeautifyEffect {
class CameraAnimator;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::CameraAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.CameraAnimator
class CORDL_TYPE CameraAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::BeautifyEffect::CameraAnimator* New_ctor() ;

/// @brief Method Update, addr 0x180e148, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x180e18c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraAnimator(CameraAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraAnimator(CameraAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeautifyEffect::CameraAnimator, 0x20>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::CameraAnimator);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::CameraAnimator*, "BeautifyEffect", "CameraAnimator");
