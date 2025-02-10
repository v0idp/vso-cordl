#pragma once
// IWYU pragma private; include "VROSC/FavoritesSessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
CORDL_MODULE_EXPORT(FavoritesSessionsPanelUI)
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
class FavoritesSessionsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FavoritesSessionsPanelUI);
// Dependencies VROSC.SessionsPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FavoritesSessionsPanelUI
class CORDL_TYPE FavoritesSessionsPanelUI : public ::VROSC::SessionsPanelUI {
public:
// Declarations
/// @brief Method Awake, addr 0x174c830, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FavoritesDataChanged, addr 0x174d0a8, size 0x6c, virtual false, abstract: false, final false
inline void FavoritesDataChanged() ;

/// @brief Method FavoritesDataLoadFailed, addr 0x174d114, size 0xec, virtual false, abstract: false, final false
inline void FavoritesDataLoadFailed(::VROSC::Error  error) ;

/// @brief Method FavoritesDataLoadSucceded, addr 0x174cbc0, size 0x128, virtual false, abstract: false, final false
inline void FavoritesDataLoadSucceded() ;

static inline ::VROSC::FavoritesSessionsPanelUI* New_ctor() ;

/// @brief Method OnDisable, addr 0x174cd74, size 0x190, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x174c860, size 0xec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Refresh, addr 0x174c94c, size 0x274, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method UpdateSessionList, addr 0x174cce8, size 0x8c, virtual false, abstract: false, final false
inline void UpdateSessionList(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionUIDatas) ;

/// @brief Method UserLoggedIn, addr 0x174cf04, size 0x1a4, virtual false, abstract: false, final false
inline void UserLoggedIn() ;

/// @brief Method .ctor, addr 0x174d200, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FavoritesSessionsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FavoritesSessionsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FavoritesSessionsPanelUI(FavoritesSessionsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FavoritesSessionsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FavoritesSessionsPanelUI(FavoritesSessionsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::FavoritesSessionsPanelUI, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FavoritesSessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FavoritesSessionsPanelUI*, "VROSC", "FavoritesSessionsPanelUI");
