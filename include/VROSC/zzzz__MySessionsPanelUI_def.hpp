#pragma once
// IWYU pragma private; include "VROSC/MySessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
CORDL_MODULE_EXPORT(MySessionsPanelUI)
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
class MySessionsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MySessionsPanelUI);
// Dependencies VROSC.SessionsPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MySessionsPanelUI
class CORDL_TYPE MySessionsPanelUI : public ::VROSC::SessionsPanelUI {
public:
// Declarations
/// @brief Method CloudSessionsDataLoadFailed, addr 0x174d82c, size 0x98, virtual false, abstract: false, final false
inline void CloudSessionsDataLoadFailed(::VROSC::Error  error) ;

/// @brief Method CloudSessionsDataLoadSucceeded, addr 0x174d4c8, size 0x64, virtual false, abstract: false, final false
inline void CloudSessionsDataLoadSucceeded(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionUIDatas) ;

static inline ::VROSC::MySessionsPanelUI* New_ctor() ;

/// @brief Method OnDisable, addr 0x174d52c, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Refresh, addr 0x174d204, size 0x2c4, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method UserLoggedIn, addr 0x174d61c, size 0x1a0, virtual false, abstract: false, final false
inline void UserLoggedIn() ;

/// @brief Method UserLoggedOut, addr 0x174d7bc, size 0x70, virtual true, abstract: false, final false
inline void UserLoggedOut() ;

/// @brief Method <Refresh>b__0_0, addr 0x174d8c8, size 0x6c, virtual false, abstract: false, final false
inline void _Refresh_b__0_0() ;

/// @brief Method <UserLoggedIn>b__2_0, addr 0x174d934, size 0x70, virtual false, abstract: false, final false
inline void _UserLoggedIn_b__2_0() ;

/// @brief Method .ctor, addr 0x174d8c4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MySessionsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MySessionsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MySessionsPanelUI(MySessionsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MySessionsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MySessionsPanelUI(MySessionsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MySessionsPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MySessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MySessionsPanelUI*, "VROSC", "MySessionsPanelUI");
