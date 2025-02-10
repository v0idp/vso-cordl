#pragma once
// IWYU pragma private; include "VROSC/SaveLoadManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveLoadManager)
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AudioClip;
}
namespace VROSC {
class CloudStateManager;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class SaveLoadManager__DeleteFiles_d__47;
}
namespace VROSC {
struct SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51;
}
namespace VROSC {
struct SaveLoadManager__LoadDefaultSession_d__29;
}
namespace VROSC {
struct SaveLoadManager__LoadSessionFromCloudSuccess_d__42;
}
namespace VROSC {
struct SaveLoadManager__LoadSessionPreview_d__39;
}
namespace VROSC {
struct SaveLoadManager__LoadSession_d__32;
}
namespace VROSC {
struct SaveLoadManager__LoadTemplateSession_d__30;
}
namespace VROSC {
struct SaveLoadManager__LoadUserSession_d__31;
}
namespace VROSC {
struct SaveLoadManager__Load_d__24;
}
namespace VROSC {
struct SaveLoadManager__SaveSession_d__36;
}
namespace VROSC {
struct SaveLoadManager__Save_d__27;
}
namespace VROSC {
struct SaveLoadManager__UpdateOldSaveFiles_d__37;
}
namespace VROSC {
class SaveLoadManager___c;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass32_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass35_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass36_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass37_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass38_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass38_1;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass39_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass42_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass51_0;
}
namespace VROSC {
class ZipFileWriter;
}
// Forward declare root types
namespace VROSC {
class SaveLoadManager;
}
namespace VROSC {
class SaveLoadManager__DeleteFiles_d__47;
}
namespace VROSC {
class SaveLoadManager___c;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass32_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass35_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass36_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass37_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass38_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass38_1;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass39_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass42_0;
}
namespace VROSC {
class SaveLoadManager___c__DisplayClass51_0;
}
namespace VROSC {
struct SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51;
}
namespace VROSC {
struct SaveLoadManager__LoadDefaultSession_d__29;
}
namespace VROSC {
struct SaveLoadManager__LoadSessionFromCloudSuccess_d__42;
}
namespace VROSC {
struct SaveLoadManager__LoadSessionPreview_d__39;
}
namespace VROSC {
struct SaveLoadManager__LoadSession_d__32;
}
namespace VROSC {
struct SaveLoadManager__LoadTemplateSession_d__30;
}
namespace VROSC {
struct SaveLoadManager__LoadUserSession_d__31;
}
namespace VROSC {
struct SaveLoadManager__Load_d__24;
}
namespace VROSC {
struct SaveLoadManager__SaveSession_d__36;
}
namespace VROSC {
struct SaveLoadManager__Save_d__27;
}
namespace VROSC {
struct SaveLoadManager__UpdateOldSaveFiles_d__37;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SaveLoadManager);
MARK_REF_PTR_T(::VROSC::SaveLoadManager__DeleteFiles_d__47);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass32_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass35_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass36_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass37_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass38_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass38_1);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass39_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass42_0);
MARK_REF_PTR_T(::VROSC::SaveLoadManager___c__DisplayClass51_0);
MARK_VAL_T(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadDefaultSession_d__29);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadSessionPreview_d__39);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadSession_d__32);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadTemplateSession_d__30);
MARK_VAL_T(::VROSC::SaveLoadManager__LoadUserSession_d__31);
MARK_VAL_T(::VROSC::SaveLoadManager__Load_d__24);
MARK_VAL_T(::VROSC::SaveLoadManager__SaveSession_d__36);
MARK_VAL_T(::VROSC::SaveLoadManager__Save_d__27);
MARK_VAL_T(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c
class CORDL_TYPE SaveLoadManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::SaveLoadManager___c*  __9;

/// @brief Field <>9__38_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_0, put=setStaticF___9__38_0)) ::System::Action_1<::StringW>*  __9__38_0;

/// @brief Field <>9__38_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_1, put=setStaticF___9__38_1)) ::System::Action_2<::StringW,::VROSC::Error>*  __9__38_1;

static inline ::VROSC::SaveLoadManager___c* New_ctor() ;

/// @brief Method <DeleteSession>b__38_0, addr 0x184d9fc, size 0x4, virtual false, abstract: false, final false
inline void _DeleteSession_b__38_0(::StringW  s) ;

/// @brief Method <DeleteSession>b__38_1, addr 0x184da00, size 0x68, virtual false, abstract: false, final false
inline void _DeleteSession_b__38_1(::StringW  s, ::VROSC::Error  e) ;

/// @brief Method .ctor, addr 0x184d9f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::SaveLoadManager___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__38_0() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF___9__38_1() ;

static inline void setStaticF___9(::VROSC::SaveLoadManager___c*  value) ;

static inline void setStaticF___9__38_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__38_1(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c(SaveLoadManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c(SaveLoadManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass32_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field isDefaultSession, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultSession, put=__cordl_internal_set_isDefaultSession)) bool  isDefaultSession;

/// @brief Field sessionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::SaveLoadManager___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <LoadSession>b__0, addr 0x184da70, size 0x70, virtual false, abstract: false, final false
inline void _LoadSession_b__0() ;

/// @brief Method <LoadSession>b__1, addr 0x184dae0, size 0x84, virtual false, abstract: false, final false
inline void _LoadSession_b__1(::VROSC::Error  error) ;

constexpr bool const& __cordl_internal_get_isDefaultSession() const;

constexpr bool& __cordl_internal_get_isDefaultSession() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set_isDefaultSession(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x184da68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass32_0(SaveLoadManager___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass32_0(SaveLoadManager___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{422};

/// @brief Field sessionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field isDefaultSession, offset: 0x18, size: 0x1, def value: None
 bool  ___isDefaultSession;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass32_0, ___sessionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass32_0, ___isDefaultSession) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass32_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass35_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onComplete, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action_1<::VROSC::Error>*  onComplete;

static inline ::VROSC::SaveLoadManager___c__DisplayClass35_0* New_ctor() ;

/// @brief Method <DeleteTemplateSession>b__0, addr 0x184db64, size 0x20, virtual false, abstract: false, final false
inline void _DeleteTemplateSession_b__0(::StringW  s) ;

/// @brief Method <DeleteTemplateSession>b__1, addr 0x184db84, size 0x24, virtual false, abstract: false, final false
inline void _DeleteTemplateSession_b__1(::StringW  s, ::VROSC::Error  error) ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onComplete() ;

constexpr void __cordl_internal_set_onComplete(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x184bf7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass35_0(SaveLoadManager___c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass35_0(SaveLoadManager___c__DisplayClass35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{423};

/// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass35_0, ___onComplete) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass36_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field hasPreview, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPreview, put=__cordl_internal_set_hasPreview)) bool  hasPreview;

/// @brief Field isCloud, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCloud, put=__cordl_internal_set_isCloud)) bool  isCloud;

/// @brief Field isCommunity, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCommunity, put=__cordl_internal_set_isCommunity)) bool  isCommunity;

/// @brief Field sessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SaveLoadManager___c__DisplayClass36_0* New_ctor() ;

/// @brief Method <SaveSession>b__0, addr 0x184dbb0, size 0x390, virtual false, abstract: false, final false
inline void _SaveSession_b__0() ;

/// @brief Method <SaveSession>b__1, addr 0x184df40, size 0x80, virtual false, abstract: false, final false
inline void _SaveSession_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::SaveLoadManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SaveLoadManager>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_hasPreview() const;

constexpr bool& __cordl_internal_get_hasPreview() ;

constexpr bool const& __cordl_internal_get_isCloud() const;

constexpr bool& __cordl_internal_get_isCloud() ;

constexpr bool const& __cordl_internal_get_isCommunity() const;

constexpr bool& __cordl_internal_get_isCommunity() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value) ;

constexpr void __cordl_internal_set_hasPreview(bool  value) ;

constexpr void __cordl_internal_set_isCloud(bool  value) ;

constexpr void __cordl_internal_set_isCommunity(bool  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x184dba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass36_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass36_0(SaveLoadManager___c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass36_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass36_0(SaveLoadManager___c__DisplayClass36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{424};

/// @brief Field isCloud, offset: 0x10, size: 0x1, def value: None
 bool  ___isCloud;

/// @brief Field isCommunity, offset: 0x11, size: 0x1, def value: None
 bool  ___isCommunity;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  _____4__this;

/// @brief Field sessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field hasPreview, offset: 0x28, size: 0x1, def value: None
 bool  ___hasPreview;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass36_0, ___isCloud) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass36_0, ___isCommunity) == 0x11, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass36_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass36_0, ___sessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass36_0, ___hasPreview) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass36_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass37_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field origin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::StringW  origin;

/// @brief Field sessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SaveLoadManager___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <UpdateOldSaveFiles>b__0, addr 0x184dfc8, size 0x40, virtual false, abstract: false, final false
inline void _UpdateOldSaveFiles_b__0() ;

/// @brief Method <UpdateOldSaveFiles>b__1, addr 0x184e008, size 0x24, virtual false, abstract: false, final false
inline void _UpdateOldSaveFiles_b__1(::VROSC::Error  error) ;

constexpr ::System::Action_2<::StringW,::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_2<::StringW,::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_origin() const;

constexpr ::StringW& __cordl_internal_get_origin() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set_onFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_origin(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x184dfc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass37_0(SaveLoadManager___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass37_0(SaveLoadManager___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{425};

/// @brief Field origin, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___origin;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onSuccess;

/// @brief Field sessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::StringW,::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass37_0, ___origin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass37_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass37_0, ___sessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass37_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass37_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass38_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sessionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SaveLoadManager___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <DeleteSession>b__2, addr 0x184e02c, size 0x10c, virtual false, abstract: false, final false
inline void _DeleteSession_b__2(::StringW  s) ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x184c440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass38_0(SaveLoadManager___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass38_0(SaveLoadManager___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{426};

/// @brief Field sessionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass38_0, ___sessionId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass38_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass38_1
class CORDL_TYPE SaveLoadManager___c__DisplayClass38_1 : public ::System::Object {
public:
// Declarations
/// @brief Field s, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) ::StringW  s;

static inline ::VROSC::SaveLoadManager___c__DisplayClass38_1* New_ctor() ;

/// @brief Method <DeleteSession>b__3, addr 0x184e140, size 0x6c, virtual false, abstract: false, final false
inline void _DeleteSession_b__3() ;

/// @brief Method <DeleteSession>b__4, addr 0x184e1ac, size 0xd4, virtual false, abstract: false, final false
inline void _DeleteSession_b__4(::VROSC::Error  error) ;

constexpr ::StringW const& __cordl_internal_get_s() const;

constexpr ::StringW& __cordl_internal_get_s() ;

constexpr void __cordl_internal_set_s(::StringW  value) ;

/// @brief Method .ctor, addr 0x184e138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass38_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass38_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass38_1(SaveLoadManager___c__DisplayClass38_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass38_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass38_1(SaveLoadManager___c__DisplayClass38_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{427};

/// @brief Field s, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___s;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass38_1, ___s) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass38_1, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass39_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sessionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SaveLoadManager___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <LoadSessionPreview>b__0, addr 0x184e288, size 0x80, virtual false, abstract: false, final false
inline void _LoadSessionPreview_b__0(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method <LoadSessionPreview>b__1, addr 0x184e308, size 0x80, virtual false, abstract: false, final false
inline void _LoadSessionPreview_b__1(::VROSC::Error  error) ;

/// @brief Method <LoadSessionPreview>b__2, addr 0x184e388, size 0x80, virtual false, abstract: false, final false
inline void _LoadSessionPreview_b__2(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method <LoadSessionPreview>b__3, addr 0x184e408, size 0x80, virtual false, abstract: false, final false
inline void _LoadSessionPreview_b__3(::VROSC::Error  error) ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x184e280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass39_0(SaveLoadManager___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass39_0(SaveLoadManager___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{428};

/// @brief Field sessionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass39_0, ___sessionId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass39_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass42_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass42_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field origin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::StringW  origin;

/// @brief Field sessionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SaveLoadManager___c__DisplayClass42_0* New_ctor() ;

/// @brief Method <LoadSessionFromCloudSuccess>b__0, addr 0x184e490, size 0x80, virtual false, abstract: false, final false
inline void _LoadSessionFromCloudSuccess_b__0() ;

/// @brief Method <LoadSessionFromCloudSuccess>b__1, addr 0x184e510, size 0x90, virtual false, abstract: false, final false
inline void _LoadSessionFromCloudSuccess_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::SaveLoadManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SaveLoadManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_origin() const;

constexpr ::StringW& __cordl_internal_get_origin() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value) ;

constexpr void __cordl_internal_set_origin(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x184e488, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass42_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass42_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass42_0(SaveLoadManager___c__DisplayClass42_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass42_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass42_0(SaveLoadManager___c__DisplayClass42_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{429};

/// @brief Field sessionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  _____4__this;

/// @brief Field origin, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___origin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass42_0, ___sessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass42_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass42_0, ___origin) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass42_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<>c__DisplayClass51_0
class CORDL_TYPE SaveLoadManager___c__DisplayClass51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sessionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

static inline ::VROSC::SaveLoadManager___c__DisplayClass51_0* New_ctor() ;

/// @brief Method <DownloadPreviewFromCloudSuccess>b__0, addr 0x184e5a8, size 0x80, virtual false, abstract: false, final false
inline void _DownloadPreviewFromCloudSuccess_b__0(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method <DownloadPreviewFromCloudSuccess>b__1, addr 0x184e628, size 0x80, virtual false, abstract: false, final false
inline void _DownloadPreviewFromCloudSuccess_b__1(::VROSC::Error  error) ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x184e5a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager___c__DisplayClass51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager___c__DisplayClass51_0(SaveLoadManager___c__DisplayClass51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager___c__DisplayClass51_0(SaveLoadManager___c__DisplayClass51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{430};

/// @brief Field sessionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager___c__DisplayClass51_0, ___sessionName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager___c__DisplayClass51_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager/<DeleteFiles>d__47
class CORDL_TYPE SaveLoadManager__DeleteFiles_d__47 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field <hasDeleted>5__2, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasDeleted_5__2, put=__cordl_internal_set__hasDeleted_5__2)) bool  _hasDeleted_5__2;

/// @brief Field sessionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionName, put=__cordl_internal_set_sessionName)) ::StringW  sessionName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x184e6ac, size 0x28c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::SaveLoadManager__DeleteFiles_d__47* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x184e938, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x184e940, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x184e978, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x184e6a8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::SaveLoadManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::SaveLoadManager>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__hasDeleted_5__2() const;

constexpr bool& __cordl_internal_get__hasDeleted_5__2() ;

constexpr ::StringW const& __cordl_internal_get_sessionName() const;

constexpr ::StringW& __cordl_internal_get_sessionName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::SaveLoadManager>  value) ;

constexpr void __cordl_internal_set__hasDeleted_5__2(bool  value) ;

constexpr void __cordl_internal_set_sessionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x184cf7c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__DeleteFiles_d__47() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager__DeleteFiles_d__47", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager__DeleteFiles_d__47(SaveLoadManager__DeleteFiles_d__47 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager__DeleteFiles_d__47", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager__DeleteFiles_d__47(SaveLoadManager__DeleteFiles_d__47 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{431};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sessionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  _____4__this;

/// @brief Field <hasDeleted>5__2, offset: 0x30, size: 0x1, def value: None
 bool  ____hasDeleted_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__DeleteFiles_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DeleteFiles_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DeleteFiles_d__47, ___sessionName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DeleteFiles_d__47, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DeleteFiles_d__47, ____hasDeleted_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__DeleteFiles_d__47, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<DownloadPreviewFromCloudSuccess>d__51
struct CORDL_TYPE SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184e980, size 0x268, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184ebe8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionName, bool  isOgg, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field sessionName, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field isOgg, offset: 0x30, size: 0x1, def value: None
 bool  isOgg;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, sessionName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, isOgg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, VROSC.Error
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<Load>d__24
struct CORDL_TYPE SaveLoadManager__Load_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184ebf4, size 0x5e8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184f1dc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__Load_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "_returnError_5__2", ty: "::VROSC::Error", modifiers: "", def_value: None }, CppParam { name: "_result_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_reader_5__4", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr SaveLoadManager__Load_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  path, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::VROSC::Error  _returnError_5__2, ::StringW  _result_5__3, ::System::IO::StreamReader*  _reader_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{433};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <returnError>5__2, offset: 0x40, size: 0x4, def value: None
 ::VROSC::Error  _returnError_5__2;

/// @brief Field <result>5__3, offset: 0x48, size: 0x8, def value: None
 ::StringW  _result_5__3;

/// @brief Field <reader>5__4, offset: 0x50, size: 0x8, def value: None
 ::System::IO::StreamReader*  _reader_5__4;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, _returnError_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, _result_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, _reader_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Load_d__24, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__Load_d__24, 0x60>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadDefaultSession>d__29
struct CORDL_TYPE SaveLoadManager__LoadDefaultSession_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184f1e8, size 0x69c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184f884, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadDefaultSession_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadDefaultSession_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field <webRequest>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, _webRequest_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadDefaultSession_d__29, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadSession>d__32
struct CORDL_TYPE SaveLoadManager__LoadSession_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184f890, size 0x30c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184fc88, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadSession_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isDefaultSession", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadSession_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  sessionName, bool  isDefaultSession, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  origin, ::StringW  destination, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field sessionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field isDefaultSession, offset: 0x28, size: 0x1, def value: None
 bool  isDefaultSession;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field origin, offset: 0x38, size: 0x8, def value: None
 ::StringW  origin;

/// @brief Field destination, offset: 0x40, size: 0x8, def value: None
 ::StringW  destination;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, sessionName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, isDefaultSession) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, origin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, destination) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSession_d__32, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadSession_d__32, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadSessionFromCloudSuccess>d__42
struct CORDL_TYPE SaveLoadManager__LoadSessionFromCloudSuccess_d__42 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184fcf0, size 0x4d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18501c0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadSessionFromCloudSuccess_d__42() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadSessionFromCloudSuccess_d__42(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionId, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field sessionId, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, sessionId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadSessionPreview>d__39
struct CORDL_TYPE SaveLoadManager__LoadSessionPreview_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18501cc, size 0x404, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18505d0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadSessionPreview_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inCloud", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadSessionPreview_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  sessionId, bool  inCloud, bool  isCommunity, bool  isOgg, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  userId, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{437};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field sessionId, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field inCloud, offset: 0x30, size: 0x1, def value: None
 bool  inCloud;

/// @brief Field isCommunity, offset: 0x31, size: 0x1, def value: None
 bool  isCommunity;

/// @brief Field isOgg, offset: 0x32, size: 0x1, def value: None
 bool  isOgg;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field userId, offset: 0x40, size: 0x8, def value: None
 ::StringW  userId;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, sessionId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, inCloud) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, isCommunity) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, isOgg) == 0x32, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, userId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadSessionPreview_d__39, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadTemplateSession>d__30
struct CORDL_TYPE SaveLoadManager__LoadTemplateSession_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18505dc, size 0x234, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1850810, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadTemplateSession_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadTemplateSession_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadTemplateSession_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadTemplateSession_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadTemplateSession_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadTemplateSession_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadTemplateSession_d__30, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<LoadUserSession>d__31
struct CORDL_TYPE SaveLoadManager__LoadUserSession_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x185081c, size 0x41c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1850c38, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__LoadUserSession_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "fromCloud", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__LoadUserSession_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  fromCloud, bool  isCommunity, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  sessionName, ::StringW  userId, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field fromCloud, offset: 0x28, size: 0x1, def value: None
 bool  fromCloud;

/// @brief Field isCommunity, offset: 0x29, size: 0x1, def value: None
 bool  isCommunity;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field sessionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field userId, offset: 0x40, size: 0x8, def value: None
 ::StringW  userId;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, fromCloud) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, isCommunity) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, sessionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, userId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__LoadUserSession_d__31, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__LoadUserSession_d__31, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<Save>d__27
struct CORDL_TYPE SaveLoadManager__Save_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1850c44, size 0x510, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1851154, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__Save_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_sw_5__2", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__Save_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  path, ::StringW  data, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action*  onSuccess, ::System::IO::StreamWriter*  _sw_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <sw>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _sw_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, _sw_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__Save_d__27, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__Save_d__27, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<SaveSession>d__36
struct CORDL_TYPE SaveLoadManager__SaveSession_d__36 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1851160, size 0x3c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1851614, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__SaveSession_d__36() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "isCloud", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isCommunity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasPreview", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__SaveSession_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isCloud, bool  isCommunity, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::StringW  sessionId, bool  hasPreview, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field isCloud, offset: 0x28, size: 0x1, def value: None
 bool  isCloud;

/// @brief Field isCommunity, offset: 0x29, size: 0x1, def value: None
 bool  isCommunity;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field sessionId, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field hasPreview, offset: 0x40, size: 0x1, def value: None
 bool  hasPreview;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, isCloud) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, isCommunity) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, sessionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, hasPreview) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__SaveSession_d__36, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__SaveSession_d__36, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SaveLoadManager/<UpdateOldSaveFiles>d__37
struct CORDL_TYPE SaveLoadManager__UpdateOldSaveFiles_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1851620, size 0x3c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18519e8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager__UpdateOldSaveFiles_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_2<::StringW,::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::SaveLoadManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SaveLoadManager__UpdateOldSaveFiles_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<::StringW>*  onSuccess, ::StringW  sessionId, ::System::Action_2<::StringW,::VROSC::Error>*  onFailure, ::UnityW<::VROSC::SaveLoadManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  onSuccess;

/// @brief Field sessionId, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::StringW,::VROSC::Error>*  onFailure;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  __4__this;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, sessionId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveLoadManager
class CORDL_TYPE SaveLoadManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DeleteFiles_d__47 = ::VROSC::SaveLoadManager__DeleteFiles_d__47;

using _DownloadPreviewFromCloudSuccess_d__51 = ::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51;

using _LoadDefaultSession_d__29 = ::VROSC::SaveLoadManager__LoadDefaultSession_d__29;

using _LoadSessionFromCloudSuccess_d__42 = ::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42;

using _LoadSessionPreview_d__39 = ::VROSC::SaveLoadManager__LoadSessionPreview_d__39;

using _LoadSession_d__32 = ::VROSC::SaveLoadManager__LoadSession_d__32;

using _LoadTemplateSession_d__30 = ::VROSC::SaveLoadManager__LoadTemplateSession_d__30;

using _LoadUserSession_d__31 = ::VROSC::SaveLoadManager__LoadUserSession_d__31;

using _Load_d__24 = ::VROSC::SaveLoadManager__Load_d__24;

using _SaveSession_d__36 = ::VROSC::SaveLoadManager__SaveSession_d__36;

using _Save_d__27 = ::VROSC::SaveLoadManager__Save_d__27;

using _UpdateOldSaveFiles_d__37 = ::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37;

using __c = ::VROSC::SaveLoadManager___c;

using __c__DisplayClass32_0 = ::VROSC::SaveLoadManager___c__DisplayClass32_0;

using __c__DisplayClass35_0 = ::VROSC::SaveLoadManager___c__DisplayClass35_0;

using __c__DisplayClass36_0 = ::VROSC::SaveLoadManager___c__DisplayClass36_0;

using __c__DisplayClass37_0 = ::VROSC::SaveLoadManager___c__DisplayClass37_0;

using __c__DisplayClass38_0 = ::VROSC::SaveLoadManager___c__DisplayClass38_0;

using __c__DisplayClass38_1 = ::VROSC::SaveLoadManager___c__DisplayClass38_1;

using __c__DisplayClass39_0 = ::VROSC::SaveLoadManager___c__DisplayClass39_0;

using __c__DisplayClass42_0 = ::VROSC::SaveLoadManager___c__DisplayClass42_0;

using __c__DisplayClass51_0 = ::VROSC::SaveLoadManager___c__DisplayClass51_0;

/// @brief Field OnDeleteSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionFailure, put=setStaticF_OnDeleteSessionFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnDeleteSessionFailure;

/// @brief Field OnDeleteSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionSuccess, put=setStaticF_OnDeleteSessionSuccess)) ::System::Action_1<::StringW>*  OnDeleteSessionSuccess;

/// @brief Field OnLoadPreviewFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadPreviewFailure, put=setStaticF_OnLoadPreviewFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnLoadPreviewFailure;

/// @brief Field OnLoadPreviewSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadPreviewSuccess, put=setStaticF_OnLoadPreviewSuccess)) ::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  OnLoadPreviewSuccess;

/// @brief Field OnLoadSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadSessionFailure, put=setStaticF_OnLoadSessionFailure)) ::System::Action_3<::StringW,bool,::VROSC::Error>*  OnLoadSessionFailure;

/// @brief Field OnLoadSessionStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadSessionStart, put=setStaticF_OnLoadSessionStart)) ::System::Action*  OnLoadSessionStart;

/// @brief Field OnLoadSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadSessionSuccess, put=setStaticF_OnLoadSessionSuccess)) ::System::Action_2<::StringW,bool>*  OnLoadSessionSuccess;

/// @brief Field OnSaveSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSessionFailure, put=setStaticF_OnSaveSessionFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnSaveSessionFailure;

/// @brief Field OnSaveSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSessionSuccess, put=setStaticF_OnSaveSessionSuccess)) ::System::Action_1<::StringW>*  OnSaveSessionSuccess;

/// @brief Field OnSaveTemplateFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveTemplateFailure, put=setStaticF_OnSaveTemplateFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnSaveTemplateFailure;

/// @brief Field OnSaveTemplateSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveTemplateSuccess, put=setStaticF_OnSaveTemplateSuccess)) ::System::Action_1<::StringW>*  OnSaveTemplateSuccess;

 __declspec(property(get=get_ZipFileWriter)) ::VROSC::ZipFileWriter*  ZipFileWriter;

/// @brief Field _cloudStateManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudStateManager, put=__cordl_internal_set__cloudStateManager)) ::UnityW<::VROSC::CloudStateManager>  _cloudStateManager;

/// @brief Field _zipFileWriter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipFileWriter, put=__cordl_internal_set__zipFileWriter)) ::VROSC::ZipFileWriter*  _zipFileWriter;

/// @brief Method Awake, addr 0x184afe8, size 0x1ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteFiles, addr 0x184cf10, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DeleteFiles(::StringW  sessionName) ;

/// @brief Method DeleteModelFile, addr 0x184b814, size 0x30, virtual false, abstract: false, final false
inline void DeleteModelFile(::StringW  dataModelKey) ;

/// @brief Method DeleteSession, addr 0x184c04c, size 0x3f4, virtual false, abstract: false, final false
inline void DeleteSession(::StringW  sessionId, bool  inCloud, bool  isCommunity, bool  isOgg, bool  isTemplate) ;

/// @brief Method DeleteSessionFromCloudFailure, addr 0x184d598, size 0x208, virtual false, abstract: false, final false
inline void DeleteSessionFromCloudFailure(::StringW  sessionName, ::VROSC::Error  error) ;

/// @brief Method DeleteSessionFromCloudSuccess, addr 0x184d1bc, size 0x270, virtual false, abstract: false, final false
inline void DeleteSessionFromCloudSuccess(::StringW  sessionName) ;

/// @brief Method DeleteTemplateSession, addr 0x184be60, size 0x11c, virtual false, abstract: false, final false
inline void DeleteTemplateSession(::System::Action_1<::VROSC::Error>*  onComplete) ;

/// @brief Method DownloadPreviewFromCloudFailure, addr 0x184d840, size 0x80, virtual false, abstract: false, final false
inline void DownloadPreviewFromCloudFailure(::StringW  sessionName, ::VROSC::Error  error) ;

/// @brief Method DownloadPreviewFromCloudSuccess, addr 0x184d7a0, size 0xa0, virtual false, abstract: false, final false
inline void DownloadPreviewFromCloudSuccess(::StringW  sessionName, bool  isOgg) ;

/// @brief Method GetSavePath, addr 0x184b450, size 0xf4, virtual false, abstract: false, final false
inline ::StringW GetSavePath(::StringW  postfix) ;

/// @brief Method GetSessionSavePath, addr 0x184b5e8, size 0x104, virtual false, abstract: false, final false
inline ::StringW GetSessionSavePath(::StringW  sessionId, ::StringW  postfix) ;

/// @brief Method Load, addr 0x184b544, size 0xa4, virtual false, abstract: false, final false
inline void Load(::StringW  path, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadDefaultSession, addr 0x184b844, size 0x8c, virtual false, abstract: false, final false
inline void LoadDefaultSession() ;

/// @brief Method LoadFromSession, addr 0x184218c, size 0x2c, virtual false, abstract: false, final false
inline void LoadFromSession(::StringW  sessionId, ::StringW  dataModelKey, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadModel, addr 0x184b424, size 0x2c, virtual false, abstract: false, final false
inline void LoadModel(::StringW  dataModelKey, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadSession, addr 0x184ba24, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadSession(::StringW  origin, ::StringW  destination, ::StringW  sessionName, bool  isDefaultSession) ;

/// @brief Method LoadSessionFromCloudFailure, addr 0x184c5b8, size 0x208, virtual false, abstract: false, final false
inline void LoadSessionFromCloudFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method LoadSessionFromCloudForTemplateFailure, addr 0x184ca94, size 0x204, virtual false, abstract: false, final false
inline void LoadSessionFromCloudForTemplateFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method LoadSessionFromCloudForTemplateSuccess, addr 0x184c7c0, size 0x2d4, virtual false, abstract: false, final false
inline void LoadSessionFromCloudForTemplateSuccess(::StringW  sessionId) ;

/// @brief Method LoadSessionFromCloudSuccess, addr 0x184c520, size 0x98, virtual false, abstract: false, final false
inline void LoadSessionFromCloudSuccess(::StringW  sessionId) ;

/// @brief Method LoadSessionPreview, addr 0x184c448, size 0xd8, virtual false, abstract: false, final false
inline void LoadSessionPreview(::StringW  sessionId, ::StringW  userId, bool  inCloud, bool  isCommunity, bool  isOgg) ;

/// @brief Method LoadTemplateSession, addr 0x184b8d0, size 0x90, virtual false, abstract: false, final false
inline void LoadTemplateSession() ;

/// @brief Method LoadUserSession, addr 0x184b960, size 0xc4, virtual false, abstract: false, final false
inline void LoadUserSession(::StringW  sessionName, ::StringW  userId, bool  fromCloud, bool  isCommunity) ;

static inline ::VROSC::SaveLoadManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x184b194, size 0x1ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PrepareFoldersForSessionSave, addr 0x184bb18, size 0xbc, virtual false, abstract: false, final false
inline void PrepareFoldersForSessionSave(::StringW  sessionId) ;

/// @brief Method Save, addr 0x184b720, size 0xb4, virtual false, abstract: false, final false
inline void Save(::StringW  path, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveModel, addr 0x184b6ec, size 0x34, virtual false, abstract: false, final false
inline void SaveModel(::StringW  dataModelKey, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveModelToSession, addr 0x184b7d4, size 0x40, virtual false, abstract: false, final false
inline void SaveModelToSession(::StringW  dataModelKey, ::StringW  sessionId, ::StringW  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSession, addr 0x184bf84, size 0xc8, virtual false, abstract: false, final false
inline void SaveSession(::StringW  sessionId, bool  isCloud, bool  isCommunity, bool  hasPreview) ;

/// @brief Method SaveSessionToCloudFailure, addr 0x184cfa4, size 0x218, virtual false, abstract: false, final false
inline void SaveSessionToCloudFailure(::StringW  sessionName, ::VROSC::Error  error) ;

/// @brief Method SaveSessionToCloudSuccess, addr 0x184cc98, size 0x278, virtual false, abstract: false, final false
inline void SaveSessionToCloudSuccess(::StringW  sessionId) ;

/// @brief Method SaveTemplateSession, addr 0x184bbd4, size 0x28c, virtual false, abstract: false, final false
inline void SaveTemplateSession(::StringW  sessionId, ::StringW  userId, bool  fromCloud) ;

/// @brief Method Update, addr 0x184b340, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateOldSaveFiles, addr 0x184a49c, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateOldSaveFiles(::StringW  sessionId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_2<::StringW,::VROSC::Error>*  onFailure) ;

constexpr ::UnityW<::VROSC::CloudStateManager> const& __cordl_internal_get__cloudStateManager() const;

constexpr ::UnityW<::VROSC::CloudStateManager>& __cordl_internal_get__cloudStateManager() ;

constexpr ::VROSC::ZipFileWriter* const& __cordl_internal_get__zipFileWriter() const;

constexpr ::VROSC::ZipFileWriter*& __cordl_internal_get__zipFileWriter() ;

constexpr void __cordl_internal_set__cloudStateManager(::UnityW<::VROSC::CloudStateManager>  value) ;

constexpr void __cordl_internal_set__zipFileWriter(::VROSC::ZipFileWriter*  value) ;

/// @brief Method .ctor, addr 0x184d8c0, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnDeleteSessionFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnDeleteSessionSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnLoadPreviewFailure() ;

static inline ::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>* getStaticF_OnLoadPreviewSuccess() ;

static inline ::System::Action_3<::StringW,bool,::VROSC::Error>* getStaticF_OnLoadSessionFailure() ;

static inline ::System::Action* getStaticF_OnLoadSessionStart() ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_OnLoadSessionSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnSaveSessionFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnSaveSessionSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnSaveTemplateFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnSaveTemplateSuccess() ;

/// @brief Method get_ZipFileWriter, addr 0x184afe0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::ZipFileWriter* get_ZipFileWriter() ;

static inline void setStaticF_OnDeleteSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnDeleteSessionSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnLoadPreviewFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnLoadPreviewSuccess(::System::Action_2<::StringW,::UnityW<::UnityEngine::AudioClip>>*  value) ;

static inline void setStaticF_OnLoadSessionFailure(::System::Action_3<::StringW,bool,::VROSC::Error>*  value) ;

static inline void setStaticF_OnLoadSessionStart(::System::Action*  value) ;

static inline void setStaticF_OnLoadSessionSuccess(::System::Action_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnSaveSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnSaveSessionSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnSaveTemplateFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnSaveTemplateSuccess(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveLoadManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveLoadManager(SaveLoadManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveLoadManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveLoadManager(SaveLoadManager const& ) = delete;

/// @brief Field DefaultSessionName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultSessionName{u"DefaultSession"};

/// @brief Field SaveExt offset 0xffffffff size 0x8
static constexpr ::ConstString  SaveExt{u"sav"};

/// @brief Field SavePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  SavePrefix{u"VI_SAVE"};

/// @brief Field TemplateSessionName offset 0xffffffff size 0x8
static constexpr ::ConstString  TemplateSessionName{u"TemplateSession"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{443};

/// @brief Field _cloudStateManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::CloudStateManager>  ____cloudStateManager;

/// @brief Field _zipFileWriter, offset: 0x28, size: 0x8, def value: None
 ::VROSC::ZipFileWriter*  ____zipFileWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveLoadManager, ____cloudStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveLoadManager, ____zipFileWriter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveLoadManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SaveLoadManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager*, "VROSC", "SaveLoadManager");
NEED_NO_BOX(::VROSC::SaveLoadManager__DeleteFiles_d__47);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__DeleteFiles_d__47*, "VROSC", "SaveLoadManager/<DeleteFiles>d__47");
NEED_NO_BOX(::VROSC::SaveLoadManager___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c*, "VROSC", "SaveLoadManager/<>c");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass32_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass32_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass35_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass35_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass36_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass36_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass37_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass37_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass38_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass38_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass38_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass38_1*, "VROSC", "SaveLoadManager/<>c__DisplayClass38_1");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass39_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass39_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass42_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass42_0");
NEED_NO_BOX(::VROSC::SaveLoadManager___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager___c__DisplayClass51_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass51_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__DownloadPreviewFromCloudSuccess_d__51, "VROSC", "SaveLoadManager/<DownloadPreviewFromCloudSuccess>d__51");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadDefaultSession_d__29, "VROSC", "SaveLoadManager/<LoadDefaultSession>d__29");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadSessionFromCloudSuccess_d__42, "VROSC", "SaveLoadManager/<LoadSessionFromCloudSuccess>d__42");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadSessionPreview_d__39, "VROSC", "SaveLoadManager/<LoadSessionPreview>d__39");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadSession_d__32, "VROSC", "SaveLoadManager/<LoadSession>d__32");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadTemplateSession_d__30, "VROSC", "SaveLoadManager/<LoadTemplateSession>d__30");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__LoadUserSession_d__31, "VROSC", "SaveLoadManager/<LoadUserSession>d__31");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__Load_d__24, "VROSC", "SaveLoadManager/<Load>d__24");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__SaveSession_d__36, "VROSC", "SaveLoadManager/<SaveSession>d__36");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__Save_d__27, "VROSC", "SaveLoadManager/<Save>d__27");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager__UpdateOldSaveFiles_d__37, "VROSC", "SaveLoadManager/<UpdateOldSaveFiles>d__37");
