#pragma once
// IWYU pragma private; include "VROSC/LoadSessionUIPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoadSessionUIPopup)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoadSessionUIPopup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoadSessionUIPopup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoadSessionUIPopup
class CORDL_TYPE LoadSessionUIPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClose, put=__cordl_internal_set_OnClose)) ::System::Action*  OnClose;

/// @brief Field _closeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _loadingStateText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingStateText, put=__cordl_internal_set__loadingStateText)) ::UnityW<::TMPro::TextMeshPro>  _loadingStateText;

/// @brief Method Awake, addr 0x174f534, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x174f9c8, size 0x34, virtual false, abstract: false, final false
inline void Close() ;

static inline ::VROSC::LoadSessionUIPopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174f5f8, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x174f6bc, size 0xac, virtual false, abstract: false, final false
inline void SetActive(bool  isActive) ;

/// @brief Method UpdateDownloadingState, addr 0x174f900, size 0xc8, virtual false, abstract: false, final false
inline void UpdateDownloadingState(float_t  progress) ;

/// @brief Method UpdateLoadingState, addr 0x174f768, size 0xd0, virtual false, abstract: false, final false
inline void UpdateLoadingState(::VROSC::Error  error) ;

/// @brief Method UpdateLoadingState, addr 0x174f838, size 0xc8, virtual false, abstract: false, final false
inline void UpdateLoadingState(float_t  progress) ;

constexpr ::System::Action* const& __cordl_internal_get_OnClose() const;

constexpr ::System::Action*& __cordl_internal_get_OnClose() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__loadingStateText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__loadingStateText() ;

constexpr void __cordl_internal_set_OnClose(::System::Action*  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__loadingStateText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x174f9fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadSessionUIPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadSessionUIPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadSessionUIPopup(LoadSessionUIPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadSessionUIPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadSessionUIPopup(LoadSessionUIPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1150};

/// @brief Field _closeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _loadingStateText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____loadingStateText;

/// @brief Field OnClose, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnClose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoadSessionUIPopup, ____closeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoadSessionUIPopup, ____loadingStateText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoadSessionUIPopup, ___OnClose) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoadSessionUIPopup, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoadSessionUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoadSessionUIPopup*, "VROSC", "LoadSessionUIPopup");
