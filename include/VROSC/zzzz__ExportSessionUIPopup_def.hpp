#pragma once
// IWYU pragma private; include "VROSC/ExportSessionUIPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExportSessionUIPopup)
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
class ExportSessionUIPopup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ExportSessionUIPopup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ExportSessionUIPopup
class CORDL_TYPE ExportSessionUIPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClose, put=__cordl_internal_set_OnClose)) ::System::Action*  OnClose;

/// @brief Field _closeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _exportingStateText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__exportingStateText, put=__cordl_internal_set__exportingStateText)) ::UnityW<::TMPro::TextMeshPro>  _exportingStateText;

/// @brief Method AnnounceExportFailure, addr 0x174f360, size 0xd0, virtual false, abstract: false, final false
inline void AnnounceExportFailure(::VROSC::Error  error) ;

/// @brief Method AnnounceExportSuccess, addr 0x174f23c, size 0x124, virtual false, abstract: false, final false
inline void AnnounceExportSuccess() ;

/// @brief Method Awake, addr 0x174f008, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x174f4f8, size 0x34, virtual false, abstract: false, final false
inline void Close() ;

static inline ::VROSC::ExportSessionUIPopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174f0cc, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x174f190, size 0xac, virtual false, abstract: false, final false
inline void SetActive(bool  isActive) ;

/// @brief Method UpdateExportProgress, addr 0x174f430, size 0xc8, virtual false, abstract: false, final false
inline void UpdateExportProgress(float_t  progress) ;

constexpr ::System::Action* const& __cordl_internal_get_OnClose() const;

constexpr ::System::Action*& __cordl_internal_get_OnClose() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__exportingStateText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__exportingStateText() ;

constexpr void __cordl_internal_set_OnClose(::System::Action*  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__exportingStateText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x174f52c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExportSessionUIPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExportSessionUIPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExportSessionUIPopup(ExportSessionUIPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExportSessionUIPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExportSessionUIPopup(ExportSessionUIPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1149};

/// @brief Field _closeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _exportingStateText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____exportingStateText;

/// @brief Field OnClose, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnClose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ExportSessionUIPopup, ____closeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExportSessionUIPopup, ____exportingStateText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExportSessionUIPopup, ___OnClose) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ExportSessionUIPopup, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ExportSessionUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExportSessionUIPopup*, "VROSC", "ExportSessionUIPopup");
