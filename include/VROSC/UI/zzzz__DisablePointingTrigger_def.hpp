#pragma once
// IWYU pragma private; include "VROSC/UI/DisablePointingTrigger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__PointingLaser_def.hpp"
CORDL_MODULE_EXPORT(DisablePointingTrigger)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace VROSC::UI {
class DisablePointingTrigger;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::DisablePointingTrigger);
// Dependencies UnityEngine.MonoBehaviour, VROSC.PointingLaser::DisablingReason
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.DisablePointingTrigger
class CORDL_TYPE DisablePointingTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _disablingReason, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__disablingReason, put=__cordl_internal_set__disablingReason)) ::VROSC::PointingLaser_DisablingReason  _disablingReason;

static inline ::VROSC::UI::DisablePointingTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x17e05c0, size 0xbc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x17e067c, size 0xbc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::VROSC::PointingLaser_DisablingReason const& __cordl_internal_get__disablingReason() const;

constexpr ::VROSC::PointingLaser_DisablingReason& __cordl_internal_get__disablingReason() ;

constexpr void __cordl_internal_set__disablingReason(::VROSC::PointingLaser_DisablingReason  value) ;

/// @brief Method .ctor, addr 0x17e0738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisablePointingTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisablePointingTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisablePointingTrigger(DisablePointingTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisablePointingTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisablePointingTrigger(DisablePointingTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1592};

/// @brief Field _disablingReason, offset: 0x20, size: 0x4, def value: None
 ::VROSC::PointingLaser_DisablingReason  ____disablingReason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::DisablePointingTrigger, ____disablingReason) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::DisablePointingTrigger, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::DisablePointingTrigger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::DisablePointingTrigger*, "VROSC.UI", "DisablePointingTrigger");
