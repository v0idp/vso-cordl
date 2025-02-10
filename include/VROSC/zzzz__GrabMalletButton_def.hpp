#pragma once
// IWYU pragma private; include "VROSC/GrabMalletButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GrabMalletButton)
namespace VROSC {
class ClickData;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class GrabMalletButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GrabMalletButton);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GrabMalletButton
class CORDL_TYPE GrabMalletButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _grabBoth, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__grabBoth, put=__cordl_internal_set__grabBoth)) bool  _grabBoth;

/// @brief Field _grabSticksButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabSticksButton, put=__cordl_internal_set__grabSticksButton)) ::UnityW<::VROSC::UIButton>  _grabSticksButton;

/// @brief Method Awake, addr 0x1717f60, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GrabSticks, addr 0x1718110, size 0x150, virtual false, abstract: false, final false
inline void GrabSticks(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::GrabMalletButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1718038, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr bool const& __cordl_internal_get__grabBoth() const;

constexpr bool& __cordl_internal_get__grabBoth() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__grabSticksButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__grabSticksButton() ;

constexpr void __cordl_internal_set__grabBoth(bool  value) ;

constexpr void __cordl_internal_set__grabSticksButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x1718260, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabMalletButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabMalletButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabMalletButton(GrabMalletButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabMalletButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabMalletButton(GrabMalletButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{917};

/// @brief Field _grabSticksButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____grabSticksButton;

/// @brief Field _grabBoth, offset: 0x28, size: 0x1, def value: None
 bool  ____grabBoth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GrabMalletButton, ____grabSticksButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabMalletButton, ____grabBoth) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GrabMalletButton, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GrabMalletButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabMalletButton*, "VROSC", "GrabMalletButton");
