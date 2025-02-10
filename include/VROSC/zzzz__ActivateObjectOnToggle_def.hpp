#pragma once
// IWYU pragma private; include "VROSC/ActivateObjectOnToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActivateObjectOnToggle)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class ActivateObjectOnToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ActivateObjectOnToggle);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ActivateObjectOnToggle
class CORDL_TYPE ActivateObjectOnToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _toggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::VROSC::UIToggle>  _toggle;

/// @brief Field _tooltip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltip, put=__cordl_internal_set__tooltip)) ::VROSC::TooltipData*  _tooltip;

/// @brief Method Awake, addr 0x177121c, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::ActivateObjectOnToggle* New_ctor() ;

/// @brief Method SetActive, addr 0x17713d0, size 0x28, virtual false, abstract: false, final false
inline void SetActive(::VROSC::InputDevice*  device, bool  shouldBeOn) ;

/// @brief Method Start, addr 0x17713b4, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggle() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__tooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__tooltip() ;

constexpr void __cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__tooltip(::VROSC::TooltipData*  value) ;

/// @brief Method .ctor, addr 0x17713f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActivateObjectOnToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActivateObjectOnToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivateObjectOnToggle(ActivateObjectOnToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivateObjectOnToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivateObjectOnToggle(ActivateObjectOnToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1248};

/// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggle;

/// @brief Field _tooltip, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____tooltip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ActivateObjectOnToggle, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ActivateObjectOnToggle, ____tooltip) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ActivateObjectOnToggle, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ActivateObjectOnToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ActivateObjectOnToggle*, "VROSC", "ActivateObjectOnToggle");
