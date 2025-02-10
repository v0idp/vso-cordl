#pragma once
// IWYU pragma private; include "VROSC/SessionItemUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__PaginatedListItemUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionItemUI)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class PaginatedListDataHolder;
}
namespace VROSC {
struct SessionUIData_Type;
}
// Forward declare root types
namespace VROSC {
class SessionItemUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionItemUI);
// Dependencies VROSC.PaginatedListItemUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionItemUI
class CORDL_TYPE SessionItemUI : public ::VROSC::PaginatedListItemUI {
public:
// Declarations
/// @brief Field _authorLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__authorLabel, put=__cordl_internal_set__authorLabel)) ::UnityW<::TMPro::TextMeshPro>  _authorLabel;

/// @brief Field _cloudIcon, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudIcon, put=__cordl_internal_set__cloudIcon)) ::UnityW<::UnityEngine::GameObject>  _cloudIcon;

/// @brief Field _communityIcon, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__communityIcon, put=__cordl_internal_set__communityIcon)) ::UnityW<::UnityEngine::GameObject>  _communityIcon;

/// @brief Field _dateLabel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateLabel, put=__cordl_internal_set__dateLabel)) ::UnityW<::TMPro::TextMeshPro>  _dateLabel;

/// @brief Field _mySharedIcon, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__mySharedIcon, put=__cordl_internal_set__mySharedIcon)) ::UnityW<::UnityEngine::GameObject>  _mySharedIcon;

/// @brief Field _nameLabel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLabel, put=__cordl_internal_set__nameLabel)) ::UnityW<::TMPro::TextMeshPro>  _nameLabel;

/// @brief Field _roomIcon, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomIcon, put=__cordl_internal_set__roomIcon)) ::UnityW<::UnityEngine::GameObject>  _roomIcon;

/// @brief Field _saveAsDefaultIcon, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveAsDefaultIcon, put=__cordl_internal_set__saveAsDefaultIcon)) ::UnityW<::UnityEngine::GameObject>  _saveAsDefaultIcon;

/// @brief Method Awake, addr 0x1759ff0, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::SessionItemUI* New_ctor() ;

/// @brief Method SetNewData, addr 0x1759ff8, size 0x1fc, virtual true, abstract: false, final false
inline void SetNewData(::VROSC::PaginatedListDataHolder*  dataholder) ;

/// @brief Method SetUIData, addr 0x175a1f4, size 0xfc, virtual false, abstract: false, final false
inline void SetUIData(::StringW  displayName, ::StringW  authorName, ::StringW  dateText, ::VROSC::SessionUIData_Type  sessionType, bool  hasPositionalData, bool  isSavedAsDefault) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__authorLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__authorLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cloudIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cloudIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__communityIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__communityIcon() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__dateLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__dateLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mySharedIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mySharedIcon() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__nameLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__nameLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__roomIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__roomIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__saveAsDefaultIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__saveAsDefaultIcon() ;

constexpr void __cordl_internal_set__authorLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__cloudIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__communityIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dateLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__mySharedIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__nameLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__roomIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__saveAsDefaultIcon(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x175a2f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionItemUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionItemUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionItemUI(SessionItemUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionItemUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionItemUI(SessionItemUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1165};

/// @brief Field _nameLabel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____nameLabel;

/// @brief Field _authorLabel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____authorLabel;

/// @brief Field _dateLabel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____dateLabel;

/// @brief Field _cloudIcon, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cloudIcon;

/// @brief Field _mySharedIcon, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____mySharedIcon;

/// @brief Field _communityIcon, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____communityIcon;

/// @brief Field _roomIcon, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____roomIcon;

/// @brief Field _saveAsDefaultIcon, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____saveAsDefaultIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionItemUI, ____nameLabel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____authorLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____dateLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____cloudIcon) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____mySharedIcon) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____communityIcon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____roomIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemUI, ____saveAsDefaultIcon) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionItemUI, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionItemUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionItemUI*, "VROSC", "SessionItemUI");
