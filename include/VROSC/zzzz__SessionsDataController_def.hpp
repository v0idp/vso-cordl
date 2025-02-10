#pragma once
// IWYU pragma private; include "VROSC/SessionsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsDataController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SessionSaveData;
}
namespace VROSC {
class SessionUIData;
}
namespace VROSC {
struct Session_PreviewSource;
}
namespace VROSC {
class Session;
}
namespace VROSC {
class SessionsDataModel;
}
// Forward declare root types
namespace VROSC {
class SessionsDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsDataController);
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsDataController
class CORDL_TYPE SessionsDataController : public ::VROSC::BaseDataController {
public:
// Declarations
 __declspec(property(get=get_SessionsDataModel)) ::VROSC::SessionsDataModel*  SessionsDataModel;

/// @brief Field _tempSession, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempSession, put=__cordl_internal_set__tempSession)) ::VROSC::Session*  _tempSession;

/// @brief Method CreateSession, addr 0x185974c, size 0x70, virtual false, abstract: false, final false
inline ::StringW CreateSession(::VROSC::SessionSaveData*  sessionSaveData, ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::StringW,::StringW>*>*  contributors, ::StringW  platformName, int32_t  trackCount) ;

/// @brief Method CreateSession, addr 0x1859ba8, size 0x118, virtual false, abstract: false, final false
inline ::StringW CreateSession(::VROSC::SessionSaveData*  sessionSaveData, ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::StringW,::StringW>*>*  contributors, ::StringW  userId, ::StringW  userName, ::StringW  platformName, int32_t  trackCount) ;

/// @brief Method CreateSession, addr 0x18597bc, size 0x3ec, virtual false, abstract: false, final false
inline void CreateSession(::StringW  sessionId, ::VROSC::SessionSaveData*  sessionSaveData, ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::StringW,::StringW>*>*  contributors, ::StringW  platformName, int32_t  trackCount) ;

/// @brief Method Finalize, addr 0x18595ec, size 0x160, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GenerateNewSessionId, addr 0x185ad98, size 0x38, virtual true, abstract: false, final false
inline ::StringW GenerateNewSessionId() ;

/// @brief Method GetSession, addr 0x185acec, size 0xac, virtual true, abstract: false, final false
inline ::VROSC::Session* GetSession(::StringW  sessionId) ;

/// @brief Method GetSessionAuthorId, addr 0x185a2e4, size 0x128, virtual false, abstract: false, final false
inline ::StringW GetSessionAuthorId(::StringW  sessionId) ;

/// @brief Method GetSessionContributors, addr 0x185a480, size 0x31c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Tuple_3<::StringW,::StringW,::StringW>*>* GetSessionContributors(::StringW  sessionId) ;

/// @brief Method GetSessionDisplayName, addr 0x185a40c, size 0x74, virtual false, abstract: false, final false
inline ::StringW GetSessionDisplayName(::StringW  sessionId) ;

/// @brief Method GetSessionHasPositionalData, addr 0x185aa70, size 0xd4, virtual false, abstract: false, final false
inline bool GetSessionHasPositionalData(::StringW  sessionId) ;

/// @brief Method GetSessionHasPreview, addr 0x185a8e0, size 0x108, virtual false, abstract: false, final false
inline bool GetSessionHasPreview(::StringW  sessionId) ;

/// @brief Method GetSessionPreviewNormalizeMultiplier, addr 0x185ac20, size 0xcc, virtual false, abstract: false, final false
inline float_t GetSessionPreviewNormalizeMultiplier(::StringW  sessionId) ;

/// @brief Method GetSessionUIData, addr 0x185a7d4, size 0x38, virtual true, abstract: false, final false
inline ::VROSC::SessionUIData* GetSessionUIData(::StringW  sessionId) ;

/// @brief Method GetSessionVersion, addr 0x185a218, size 0xcc, virtual false, abstract: false, final false
inline int32_t GetSessionVersion(::StringW  sessionId) ;

/// @brief Method GetSessionsIds, addr 0x1859d4c, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetSessionsIds() ;

/// @brief Method GetSessionsUIData, addr 0x185a79c, size 0x38, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetSessionsUIData() ;

/// @brief Method HasSession, addr 0x1858368, size 0x68, virtual false, abstract: false, final false
inline bool HasSession(::StringW  sessionId) ;

/// @brief Method HasSessionWithDisplayName, addr 0x1859dc4, size 0x1ec, virtual false, abstract: false, final false
inline bool HasSessionWithDisplayName(::StringW  displayName) ;

/// @brief Method HasSessionWithDisplayNameAndAuthor, addr 0x1859fb0, size 0x268, virtual false, abstract: false, final false
inline bool HasSessionWithDisplayNameAndAuthor(::StringW  displayName, ::StringW  authorId) ;

/// @brief Method IsSessionPreviewOgg, addr 0x185ab44, size 0xdc, virtual false, abstract: false, final false
inline bool IsSessionPreviewOgg(::StringW  sessionId) ;

static inline ::VROSC::SessionsDataController* New_ctor() ;

/// @brief Method RemoveSession, addr 0x1859d14, size 0x38, virtual true, abstract: false, final false
inline void RemoveSession(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SetHasPositionalData, addr 0x185a9e8, size 0x88, virtual false, abstract: false, final false
inline void SetHasPositionalData(::StringW  sessionId, bool  hasPositionalData) ;

/// @brief Method SetHasPreview, addr 0x185a80c, size 0xc0, virtual false, abstract: false, final false
inline void SetHasPreview(::StringW  sessionId, bool  hasPreview, float_t  multiplier, ::VROSC::Session_PreviewSource  previewSource) ;

/// @brief Method UserLoggedOut, addr 0x185add0, size 0x4, virtual true, abstract: false, final false
inline void UserLoggedOut() ;

constexpr ::VROSC::Session* const& __cordl_internal_get__tempSession() const;

constexpr ::VROSC::Session*& __cordl_internal_get__tempSession() ;

constexpr void __cordl_internal_set__tempSession(::VROSC::Session*  value) ;

/// @brief Method .ctor, addr 0x1857f00, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SessionsDataModel, addr 0x1857ae4, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::SessionsDataModel* get_SessionsDataModel() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsDataController(SessionsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsDataController(SessionsDataController const& ) = delete;

/// @brief Field NewSessionName offset 0xffffffff size 0x8
static constexpr ::ConstString  NewSessionName{u"Save"};

/// @brief Field SessionsVersion offset 0xffffffff size 0x4
static constexpr int32_t  SessionsVersion{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{473};

/// @brief Field _tempSession, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Session*  ____tempSession;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsDataController, ____tempSession) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsDataController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsDataController*, "VROSC", "SessionsDataController");
