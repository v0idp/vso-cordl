#pragma once
// IWYU pragma private; include "VROSC/CommunitySessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
CORDL_MODULE_EXPORT(CommunitySessionsPanelUI)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionUIData;
}
// Forward declare root types
namespace VROSC {
class CommunitySessionsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CommunitySessionsPanelUI);
// Dependencies VROSC.SessionsPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CommunitySessionsPanelUI
class CORDL_TYPE CommunitySessionsPanelUI : public ::VROSC::SessionsPanelUI {
public:
// Declarations
/// @brief Field _isFirstTimeOpen, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFirstTimeOpen, put=__cordl_internal_set__isFirstTimeOpen)) bool  _isFirstTimeOpen;

/// @brief Method Awake, addr 0x174b434, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CommunitySessionsDataLoadFailed, addr 0x174c234, size 0x258, virtual false, abstract: false, final false
inline void CommunitySessionsDataLoadFailed(::VROSC::Error  error) ;

/// @brief Method CommunitySessionsDataLoadSucceeded, addr 0x174b9fc, size 0x1d8, virtual false, abstract: false, final false
inline void CommunitySessionsDataLoadSucceeded(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionUIDatas) ;

static inline ::VROSC::CommunitySessionsPanelUI* New_ctor() ;

/// @brief Method OnDisable, addr 0x174bdf0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x174b580, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x174b680, size 0x2b4, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method UserLoggedIn, addr 0x174bfcc, size 0x1a0, virtual false, abstract: false, final false
inline void UserLoggedIn() ;

/// @brief Method <Refresh>b__3_0, addr 0x174c580, size 0x70, virtual false, abstract: false, final false
inline void _Refresh_b__3_0() ;

/// @brief Method <Refresh>b__3_1, addr 0x174c5f0, size 0x1d0, virtual false, abstract: false, final false
inline void _Refresh_b__3_1(::VROSC::Error  error) ;

/// @brief Method <UserLoggedIn>b__5_0, addr 0x174c7c0, size 0x70, virtual false, abstract: false, final false
inline void _UserLoggedIn_b__5_0() ;

constexpr bool const& __cordl_internal_get__isFirstTimeOpen() const;

constexpr bool& __cordl_internal_get__isFirstTimeOpen() ;

constexpr void __cordl_internal_set__isFirstTimeOpen(bool  value) ;

/// @brief Method .ctor, addr 0x174c48c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommunitySessionsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommunitySessionsPanelUI(CommunitySessionsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommunitySessionsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommunitySessionsPanelUI(CommunitySessionsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1142};

/// @brief Field _isFirstTimeOpen, offset: 0x99, size: 0x1, def value: None
 bool  ____isFirstTimeOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CommunitySessionsPanelUI, ____isFirstTimeOpen) == 0x99, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CommunitySessionsPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CommunitySessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CommunitySessionsPanelUI*, "VROSC", "CommunitySessionsPanelUI");
