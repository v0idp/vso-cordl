#pragma once
// IWYU pragma private; include "Oculus/Platform/Cowatching.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Cowatching)
namespace Oculus::Platform::Models {
class CowatchViewerList;
}
namespace Oculus::Platform::Models {
class CowatchViewerUpdate;
}
namespace Oculus::Platform::Models {
class CowatchingState;
}
namespace Oculus::Platform {
template<typename T>
class Message_1_Callback;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Cowatching;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Cowatching);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Cowatching
class CORDL_TYPE Cowatching : public ::System::Object {
public:
// Declarations
/// @brief Method GetNextCowatchViewerListPage, addr 0x287d320, size 0x1d8, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* GetNextCowatchViewerListPage(::Oculus::Platform::Models::CowatchViewerList*  list) ;

/// @brief Method GetPresenterData, addr 0x287c2cc, size 0x150, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::StringW>* GetPresenterData() ;

/// @brief Method GetViewersData, addr 0x287c41c, size 0x150, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchViewerList*>* GetViewersData() ;

/// @brief Method IsInSession, addr 0x287c56c, size 0x150, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CowatchingState*>* IsInSession() ;

/// @brief Method JoinSession, addr 0x287c6bc, size 0x13c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* JoinSession() ;

/// @brief Method LaunchInviteDialog, addr 0x287c7f8, size 0x13c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* LaunchInviteDialog() ;

/// @brief Method LeaveSession, addr 0x287c934, size 0x13c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* LeaveSession() ;

/// @brief Method RequestToPresent, addr 0x287ca70, size 0x13c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* RequestToPresent() ;

/// @brief Method ResignFromPresenting, addr 0x287cbac, size 0x13c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* ResignFromPresenting() ;

/// @brief Method SetApiNotReadyNotificationCallback, addr 0x287cf80, size 0x74, virtual false, abstract: false, final false
static inline void SetApiNotReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetApiReadyNotificationCallback, addr 0x287cff4, size 0x74, virtual false, abstract: false, final false
static inline void SetApiReadyNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetInSessionChangedNotificationCallback, addr 0x287d068, size 0x74, virtual false, abstract: false, final false
static inline void SetInSessionChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchingState*>*  callback) ;

/// @brief Method SetInitializedNotificationCallback, addr 0x287d0dc, size 0x74, virtual false, abstract: false, final false
static inline void SetInitializedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetPresenterData, addr 0x287cce8, size 0x154, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* SetPresenterData(::StringW  video_title, ::StringW  presenter_data) ;

/// @brief Method SetPresenterDataChangedNotificationCallback, addr 0x287d150, size 0x74, virtual false, abstract: false, final false
static inline void SetPresenterDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetSessionStartedNotificationCallback, addr 0x287d1c4, size 0x74, virtual false, abstract: false, final false
static inline void SetSessionStartedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetSessionStoppedNotificationCallback, addr 0x287d238, size 0x74, virtual false, abstract: false, final false
static inline void SetSessionStoppedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>*  callback) ;

/// @brief Method SetViewerData, addr 0x287ce3c, size 0x144, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request* SetViewerData(::StringW  viewer_data) ;

/// @brief Method SetViewersDataChangedNotificationCallback, addr 0x287d2ac, size 0x74, virtual false, abstract: false, final false
static inline void SetViewersDataChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::CowatchViewerUpdate*>*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cowatching() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cowatching", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cowatching(Cowatching && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cowatching", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cowatching(Cowatching const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10541};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Cowatching, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Cowatching);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Cowatching*, "Oculus.Platform", "Cowatching");
