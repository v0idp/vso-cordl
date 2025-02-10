#pragma once
// IWYU pragma private; include "VROSC/MySharedSessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
CORDL_MODULE_EXPORT(MySharedSessionsPanelUI)
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
class MySharedSessionsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MySharedSessionsPanelUI);
// Dependencies VROSC.SessionsPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MySharedSessionsPanelUI
class CORDL_TYPE MySharedSessionsPanelUI : public ::VROSC::SessionsPanelUI {
public:
// Declarations
/// @brief Method Awake, addr 0x174d9a4, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CommunitySessionsDataLoadFailed, addr 0x174e19c, size 0x98, virtual false, abstract: false, final false
inline void CommunitySessionsDataLoadFailed(::VROSC::Error  error) ;

/// @brief Method CommunitySessionsDataLoadSucceeded, addr 0x174dc78, size 0x294, virtual false, abstract: false, final false
inline void CommunitySessionsDataLoadSucceeded(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionUIDatas) ;

static inline ::VROSC::MySharedSessionsPanelUI* New_ctor() ;

/// @brief Method OnDisable, addr 0x174df0c, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Refresh, addr 0x174d9d4, size 0x2a4, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method UserLoggedIn, addr 0x174dffc, size 0x1a0, virtual false, abstract: false, final false
inline void UserLoggedIn() ;

/// @brief Method <Refresh>b__1_0, addr 0x174e238, size 0x70, virtual false, abstract: false, final false
inline void _Refresh_b__1_0() ;

/// @brief Method <UserLoggedIn>b__3_0, addr 0x174e2a8, size 0x70, virtual false, abstract: false, final false
inline void _UserLoggedIn_b__3_0() ;

/// @brief Method .ctor, addr 0x174e234, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MySharedSessionsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MySharedSessionsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MySharedSessionsPanelUI(MySharedSessionsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MySharedSessionsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MySharedSessionsPanelUI(MySharedSessionsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MySharedSessionsPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MySharedSessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MySharedSessionsPanelUI*, "VROSC", "MySharedSessionsPanelUI");
