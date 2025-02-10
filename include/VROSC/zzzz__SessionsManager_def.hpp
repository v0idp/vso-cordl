#pragma once
// IWYU pragma private; include "VROSC/SessionsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
namespace UnityEngine {
class AudioClip;
}
namespace VROSC {
class CloudSessionsDataController;
}
namespace VROSC {
class CommunitySessionsDataController;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class LocalSessionsDataController;
}
namespace VROSC {
class OldSavesHandler;
}
namespace VROSC {
class SaveLoadManager;
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
class SessionsDataController;
}
namespace VROSC {
struct SessionsManager__ExportSession_d__70;
}
namespace VROSC {
class SessionsManager__SaveSessionAs_d__69;
}
namespace VROSC {
class SessionsManager__SaveSession_d__68;
}
namespace VROSC {
class SessionsManager___c;
}
namespace VROSC {
class SessionsManager___c__DisplayClass58_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass59_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass60_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass68_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass68_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass69_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass70_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass71_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass71_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass78_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass78_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass79_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass79_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass80_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass80_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass81_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass81_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass82_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass83_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass85_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass90_0;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class SessionsManager;
}
namespace VROSC {
class SessionsManager__SaveSessionAs_d__69;
}
namespace VROSC {
class SessionsManager__SaveSession_d__68;
}
namespace VROSC {
class SessionsManager___c;
}
namespace VROSC {
class SessionsManager___c__DisplayClass58_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass59_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass60_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass68_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass68_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass69_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass70_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass71_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass71_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass78_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass78_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass79_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass79_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass80_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass80_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass81_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass81_1;
}
namespace VROSC {
class SessionsManager___c__DisplayClass82_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass83_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass85_0;
}
namespace VROSC {
class SessionsManager___c__DisplayClass90_0;
}
namespace VROSC {
struct SessionsManager__ExportSession_d__70;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsManager);
MARK_REF_PTR_T(::VROSC::SessionsManager__SaveSessionAs_d__69);
MARK_REF_PTR_T(::VROSC::SessionsManager__SaveSession_d__68);
MARK_REF_PTR_T(::VROSC::SessionsManager___c);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass58_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass59_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass60_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass68_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass68_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass69_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass70_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass71_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass71_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass78_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass78_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass79_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass79_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass80_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass80_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass81_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass81_1);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass82_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass83_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass85_0);
MARK_REF_PTR_T(::VROSC::SessionsManager___c__DisplayClass90_0);
MARK_VAL_T(::VROSC::SessionsManager__ExportSession_d__70);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c
class CORDL_TYPE SessionsManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::SessionsManager___c*  __9;

/// @brief Field <>9__67_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__67_0, put=setStaticF___9__67_0)) ::System::Action_1<::VROSC::Error>*  __9__67_0;

/// @brief Field <>9__70_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_0, put=setStaticF___9__70_0)) ::System::Action*  __9__70_0;

/// @brief Field <>9__70_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_11, put=setStaticF___9__70_11)) ::System::Action*  __9__70_11;

/// @brief Field <>9__70_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_13, put=setStaticF___9__70_13)) ::System::Action*  __9__70_13;

/// @brief Field <>9__70_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_2, put=setStaticF___9__70_2)) ::System::Action*  __9__70_2;

/// @brief Field <>9__70_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_5, put=setStaticF___9__70_5)) ::System::Action_2<bool,float_t>*  __9__70_5;

/// @brief Field <>9__70_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_8, put=setStaticF___9__70_8)) ::System::Action_2<bool,float_t>*  __9__70_8;

static inline ::VROSC::SessionsManager___c* New_ctor() ;

/// @brief Method <ExportSession>b__70_0, addr 0x1860900, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_0() ;

/// @brief Method <ExportSession>b__70_11, addr 0x1860910, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_11() ;

/// @brief Method <ExportSession>b__70_13, addr 0x1860914, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_13() ;

/// @brief Method <ExportSession>b__70_2, addr 0x1860904, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_2() ;

/// @brief Method <ExportSession>b__70_5, addr 0x1860908, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_5(bool  unknownBoolValue, float_t  normalizeMultiplier) ;

/// @brief Method <ExportSession>b__70_8, addr 0x186090c, size 0x4, virtual false, abstract: false, final false
inline void _ExportSession_b__70_8(bool  unknownBoolValue, float_t  normalizeMultiplier) ;

/// @brief Method <RemoveSessionAsTemplate>b__67_0, addr 0x1860820, size 0xe0, virtual false, abstract: false, final false
inline void _RemoveSessionAsTemplate_b__67_0(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x1860818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::SessionsManager___c* getStaticF___9() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__67_0() ;

static inline ::System::Action* getStaticF___9__70_0() ;

static inline ::System::Action* getStaticF___9__70_11() ;

static inline ::System::Action* getStaticF___9__70_13() ;

static inline ::System::Action* getStaticF___9__70_2() ;

static inline ::System::Action_2<bool,float_t>* getStaticF___9__70_5() ;

static inline ::System::Action_2<bool,float_t>* getStaticF___9__70_8() ;

static inline void setStaticF___9(::VROSC::SessionsManager___c*  value) ;

static inline void setStaticF___9__67_0(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF___9__70_0(::System::Action*  value) ;

static inline void setStaticF___9__70_11(::System::Action*  value) ;

static inline void setStaticF___9__70_13(::System::Action*  value) ;

static inline void setStaticF___9__70_2(::System::Action*  value) ;

static inline void setStaticF___9__70_5(::System::Action_2<bool,float_t>*  value) ;

static inline void setStaticF___9__70_8(::System::Action_2<bool,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c(SessionsManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c(SessionsManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass58_0
class CORDL_TYPE SessionsManager___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::SessionsManager___c__DisplayClass58_0* New_ctor() ;

/// @brief Method <LoadLocalSessions>b__0, addr 0x1860918, size 0xac, virtual false, abstract: false, final false
inline void _LoadLocalSessions_b__0() ;

/// @brief Method <LoadLocalSessions>b__1, addr 0x18609c4, size 0x8c, virtual false, abstract: false, final false
inline void _LoadLocalSessions_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x185c0e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass58_0(SessionsManager___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass58_0(SessionsManager___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{482};

/// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass58_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass58_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass58_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass58_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass59_0
class CORDL_TYPE SessionsManager___c__DisplayClass59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::SessionsManager___c__DisplayClass59_0* New_ctor() ;

/// @brief Method <LoadCloudSessions>b__0, addr 0x1860a50, size 0xac, virtual false, abstract: false, final false
inline void _LoadCloudSessions_b__0() ;

/// @brief Method <LoadCloudSessions>b__1, addr 0x1860afc, size 0x8c, virtual false, abstract: false, final false
inline void _LoadCloudSessions_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x185c200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass59_0(SessionsManager___c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass59_0(SessionsManager___c__DisplayClass59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{483};

/// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass59_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass59_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass59_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass59_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass60_0
class CORDL_TYPE SessionsManager___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::SessionsManager___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <LoadCommunitySessions>b__0, addr 0x1860b88, size 0xac, virtual false, abstract: false, final false
inline void _LoadCommunitySessions_b__0() ;

/// @brief Method <LoadCommunitySessions>b__1, addr 0x1860c34, size 0x98, virtual false, abstract: false, final false
inline void _LoadCommunitySessions_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x185c320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass60_0(SessionsManager___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass60_0(SessionsManager___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{484};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass60_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass60_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass60_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass60_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass68_0
class CORDL_TYPE SessionsManager___c__DisplayClass68_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field newSessionDataController, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSessionDataController, put=__cordl_internal_set_newSessionDataController)) ::VROSC::SessionsDataController*  newSessionDataController;

/// @brief Field sessionSaveData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionSaveData, put=__cordl_internal_set_sessionSaveData)) ::VROSC::SessionSaveData*  sessionSaveData;

static inline ::VROSC::SessionsManager___c__DisplayClass68_0* New_ctor() ;

/// @brief Method <SaveSession>b__2, addr 0x1860e50, size 0x120, virtual false, abstract: false, final false
inline void _SaveSession_b__2(::VROSC::Error  error) ;

/// @brief Method <SaveSession>g__localDelete|3, addr 0x1860cd4, size 0x17c, virtual false, abstract: false, final false
inline void _SaveSession_g__localDelete_3(::StringW  sessionId) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::VROSC::SessionsDataController* const& __cordl_internal_get_newSessionDataController() const;

constexpr ::VROSC::SessionsDataController*& __cordl_internal_get_newSessionDataController() ;

constexpr ::VROSC::SessionSaveData* const& __cordl_internal_get_sessionSaveData() const;

constexpr ::VROSC::SessionSaveData*& __cordl_internal_get_sessionSaveData() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_newSessionDataController(::VROSC::SessionsDataController*  value) ;

constexpr void __cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value) ;

/// @brief Method .ctor, addr 0x1860ccc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass68_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass68_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass68_0(SessionsManager___c__DisplayClass68_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass68_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass68_0(SessionsManager___c__DisplayClass68_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{485};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field newSessionDataController, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsDataController*  ___newSessionDataController;

/// @brief Field sessionSaveData, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SessionSaveData*  ___sessionSaveData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_0, ___newSessionDataController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_0, ___sessionSaveData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass68_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass68_1
class CORDL_TYPE SessionsManager___c__DisplayClass68_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass68_0*  CS$__8__locals1;

/// @brief Field areAnchorsReady, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_areAnchorsReady, put=__cordl_internal_set_areAnchorsReady)) bool  areAnchorsReady;

/// @brief Field newSessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSessionId, put=__cordl_internal_set_newSessionId)) ::StringW  newSessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass68_1* New_ctor() ;

/// @brief Method <SaveSession>b__0, addr 0x1860f78, size 0xc, virtual false, abstract: false, final false
inline void _SaveSession_b__0() ;

/// @brief Method <SaveSession>b__1, addr 0x1860f84, size 0x694, virtual false, abstract: false, final false
inline void _SaveSession_b__1() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass68_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass68_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr bool const& __cordl_internal_get_areAnchorsReady() const;

constexpr bool& __cordl_internal_get_areAnchorsReady() ;

constexpr ::StringW const& __cordl_internal_get_newSessionId() const;

constexpr ::StringW& __cordl_internal_get_newSessionId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass68_0*  value) ;

constexpr void __cordl_internal_set_areAnchorsReady(bool  value) ;

constexpr void __cordl_internal_set_newSessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1860f70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass68_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass68_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass68_1(SessionsManager___c__DisplayClass68_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass68_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass68_1(SessionsManager___c__DisplayClass68_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{486};

/// @brief Field areAnchorsReady, offset: 0x10, size: 0x1, def value: None
 bool  ___areAnchorsReady;

/// @brief Field newSessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___newSessionId;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass68_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_1, ___areAnchorsReady) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_1, ___newSessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass68_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass68_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass69_0
class CORDL_TYPE SessionsManager___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field areAnchorsReady, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_areAnchorsReady, put=__cordl_internal_set_areAnchorsReady)) bool  areAnchorsReady;

/// @brief Field sessionId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

/// @brief Field sessionSaveData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionSaveData, put=__cordl_internal_set_sessionSaveData)) ::VROSC::SessionSaveData*  sessionSaveData;

/// @brief Field sessionsDataController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionsDataController, put=__cordl_internal_set_sessionsDataController)) ::VROSC::SessionsDataController*  sessionsDataController;

static inline ::VROSC::SessionsManager___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <SaveSessionAs>b__0, addr 0x1861620, size 0xc, virtual false, abstract: false, final false
inline void _SaveSessionAs_b__0() ;

/// @brief Method <SaveSessionAs>b__1, addr 0x186162c, size 0x568, virtual false, abstract: false, final false
inline void _SaveSessionAs_b__1() ;

/// @brief Method <SaveSessionAs>b__2, addr 0x1861b94, size 0x110, virtual false, abstract: false, final false
inline void _SaveSessionAs_b__2(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_areAnchorsReady() const;

constexpr bool& __cordl_internal_get_areAnchorsReady() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr ::VROSC::SessionSaveData* const& __cordl_internal_get_sessionSaveData() const;

constexpr ::VROSC::SessionSaveData*& __cordl_internal_get_sessionSaveData() ;

constexpr ::VROSC::SessionsDataController* const& __cordl_internal_get_sessionsDataController() const;

constexpr ::VROSC::SessionsDataController*& __cordl_internal_get_sessionsDataController() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_areAnchorsReady(bool  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

constexpr void __cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value) ;

constexpr void __cordl_internal_set_sessionsDataController(::VROSC::SessionsDataController*  value) ;

/// @brief Method .ctor, addr 0x1861618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass69_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass69_0(SessionsManager___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass69_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass69_0(SessionsManager___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{487};

/// @brief Field areAnchorsReady, offset: 0x10, size: 0x1, def value: None
 bool  ___areAnchorsReady;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionSaveData, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SessionSaveData*  ___sessionSaveData;

/// @brief Field sessionsDataController, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SessionsDataController*  ___sessionsDataController;

/// @brief Field sessionId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass69_0, ___areAnchorsReady) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass69_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass69_0, ___sessionSaveData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass69_0, ___sessionsDataController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass69_0, ___sessionId) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass69_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass70_0
class CORDL_TYPE SessionsManager___c__DisplayClass70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field audioPreviewProgressWeight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioPreviewProgressWeight, put=__cordl_internal_set_audioPreviewProgressWeight)) float_t  audioPreviewProgressWeight;

/// @brief Field loopsProgressWeight, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopsProgressWeight, put=__cordl_internal_set_loopsProgressWeight)) float_t  loopsProgressWeight;

/// @brief Field onFailure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onProgress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProgress, put=__cordl_internal_set_onProgress)) ::System::Action_1<float_t>*  onProgress;

static inline ::VROSC::SessionsManager___c__DisplayClass70_0* New_ctor() ;

/// @brief Method <ExportSession>b__1, addr 0x1861cac, size 0x1c, virtual false, abstract: false, final false
inline void _ExportSession_b__1(::VROSC::Error  error) ;

/// @brief Method <ExportSession>b__10, addr 0x1861d68, size 0x28, virtual false, abstract: false, final false
inline void _ExportSession_b__10(float_t  progress) ;

/// @brief Method <ExportSession>b__12, addr 0x1861d90, size 0x1c, virtual false, abstract: false, final false
inline void _ExportSession_b__12(::VROSC::Error  error) ;

/// @brief Method <ExportSession>b__3, addr 0x1861cc8, size 0x1c, virtual false, abstract: false, final false
inline void _ExportSession_b__3(::VROSC::Error  error) ;

/// @brief Method <ExportSession>b__4, addr 0x1861ce4, size 0x24, virtual false, abstract: false, final false
inline void _ExportSession_b__4(float_t  progress) ;

/// @brief Method <ExportSession>b__6, addr 0x1861d08, size 0x1c, virtual false, abstract: false, final false
inline void _ExportSession_b__6(::VROSC::Error  error) ;

/// @brief Method <ExportSession>b__7, addr 0x1861d24, size 0x28, virtual false, abstract: false, final false
inline void _ExportSession_b__7(float_t  progress) ;

/// @brief Method <ExportSession>b__9, addr 0x1861d4c, size 0x1c, virtual false, abstract: false, final false
inline void _ExportSession_b__9(::VROSC::Error  error) ;

constexpr float_t const& __cordl_internal_get_audioPreviewProgressWeight() const;

constexpr float_t& __cordl_internal_get_audioPreviewProgressWeight() ;

constexpr float_t const& __cordl_internal_get_loopsProgressWeight() const;

constexpr float_t& __cordl_internal_get_loopsProgressWeight() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_onProgress() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_onProgress() ;

constexpr void __cordl_internal_set_audioPreviewProgressWeight(float_t  value) ;

constexpr void __cordl_internal_set_loopsProgressWeight(float_t  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onProgress(::System::Action_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1861ca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass70_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass70_0(SessionsManager___c__DisplayClass70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass70_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass70_0(SessionsManager___c__DisplayClass70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{488};

/// @brief Field onFailure, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field onProgress, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___onProgress;

/// @brief Field loopsProgressWeight, offset: 0x20, size: 0x4, def value: None
 float_t  ___loopsProgressWeight;

/// @brief Field audioPreviewProgressWeight, offset: 0x24, size: 0x4, def value: None
 float_t  ___audioPreviewProgressWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass70_0, ___onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass70_0, ___onProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass70_0, ___loopsProgressWeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass70_0, ___audioPreviewProgressWeight) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass70_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass71_0
class CORDL_TYPE SessionsManager___c__DisplayClass71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field sessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

/// @brief Field sessionsDataController, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionsDataController, put=__cordl_internal_set_sessionsDataController)) ::VROSC::SessionsDataController*  sessionsDataController;

static inline ::VROSC::SessionsManager___c__DisplayClass71_0* New_ctor() ;

/// @brief Method <DeleteSession>b__1, addr 0x1861dac, size 0x80, virtual false, abstract: false, final false
inline void _DeleteSession_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr ::VROSC::SessionsDataController* const& __cordl_internal_get_sessionsDataController() const;

constexpr ::VROSC::SessionsDataController*& __cordl_internal_get_sessionsDataController() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

constexpr void __cordl_internal_set_sessionsDataController(::VROSC::SessionsDataController*  value) ;

/// @brief Method .ctor, addr 0x185d8c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass71_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass71_0(SessionsManager___c__DisplayClass71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass71_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass71_0(SessionsManager___c__DisplayClass71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{489};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionsDataController, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsDataController*  ___sessionsDataController;

/// @brief Field sessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass71_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass71_0, ___sessionsDataController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass71_0, ___sessionId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass71_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass71_1
class CORDL_TYPE SessionsManager___c__DisplayClass71_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass71_0*  CS$__8__locals1;

/// @brief Field isOgg, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOgg, put=__cordl_internal_set_isOgg)) bool  isOgg;

static inline ::VROSC::SessionsManager___c__DisplayClass71_1* New_ctor() ;

/// @brief Method <DeleteSession>b__0, addr 0x1861e2c, size 0x3a8, virtual false, abstract: false, final false
inline void _DeleteSession_b__0() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass71_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass71_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr bool const& __cordl_internal_get_isOgg() const;

constexpr bool& __cordl_internal_get_isOgg() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass71_0*  value) ;

constexpr void __cordl_internal_set_isOgg(bool  value) ;

/// @brief Method .ctor, addr 0x185d8d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass71_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass71_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass71_1(SessionsManager___c__DisplayClass71_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass71_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass71_1(SessionsManager___c__DisplayClass71_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{490};

/// @brief Field isOgg, offset: 0x10, size: 0x1, def value: None
 bool  ___isOgg;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass71_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass71_1, ___isOgg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass71_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass71_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass78_0
class CORDL_TYPE SessionsManager___c__DisplayClass78_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::StringW>*  __9__2;

/// @brief Field <>9__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::StringW>*  __9__4;

/// @brief Field <>9__5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field <>9__6, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__6, put=__cordl_internal_set___9__6)) ::System::Action*  __9__6;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass78_0* New_ctor() ;

/// @brief Method <AddSessionUpVote>b__0, addr 0x18621d4, size 0x220, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__0() ;

/// @brief Method <AddSessionUpVote>b__1, addr 0x1862838, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__1(::VROSC::Error  error) ;

/// @brief Method <AddSessionUpVote>b__2, addr 0x18623f4, size 0x118, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__2(::StringW  sessionUpVotedId) ;

/// @brief Method <AddSessionUpVote>b__3, addr 0x186279c, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__3(::VROSC::Error  error) ;

/// @brief Method <AddSessionUpVote>b__4, addr 0x186250c, size 0x13c, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__4(::StringW  userUpVoteId) ;

/// @brief Method <AddSessionUpVote>b__5, addr 0x1862700, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__5(::VROSC::Error  error) ;

/// @brief Method <AddSessionUpVote>b__6, addr 0x1862650, size 0xb0, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__6() ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action* const& __cordl_internal_get___9__6() const;

constexpr ::System::Action*& __cordl_internal_get___9__6() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185dd18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass78_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass78_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass78_0(SessionsManager___c__DisplayClass78_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass78_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass78_0(SessionsManager___c__DisplayClass78_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{491};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__6, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__6;

/// @brief Field <>9__4, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__4;

/// @brief Field <>9__5, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

/// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__2;

/// @brief Field <>9__3, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____9__6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____9__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____9__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____9__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_0, _____9__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass78_0, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass78_1
class CORDL_TYPE SessionsManager___c__DisplayClass78_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass78_0*  CS$__8__locals1;

/// @brief Field userUpVoteId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_userUpVoteId, put=__cordl_internal_set_userUpVoteId)) ::StringW  userUpVoteId;

static inline ::VROSC::SessionsManager___c__DisplayClass78_1* New_ctor() ;

/// @brief Method <AddSessionUpVote>b__7, addr 0x18628d4, size 0xd0, virtual false, abstract: false, final false
inline void _AddSessionUpVote_b__7(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager___c__DisplayClass78_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass78_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_userUpVoteId() const;

constexpr ::StringW& __cordl_internal_get_userUpVoteId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass78_0*  value) ;

constexpr void __cordl_internal_set_userUpVoteId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1862648, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass78_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass78_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass78_1(SessionsManager___c__DisplayClass78_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass78_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass78_1(SessionsManager___c__DisplayClass78_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{492};

/// @brief Field userUpVoteId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___userUpVoteId;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass78_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_1, ___userUpVoteId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass78_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass78_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass79_0
class CORDL_TYPE SessionsManager___c__DisplayClass79_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action*  __9__4;

/// @brief Field <>9__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field <>9__6, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__6, put=__cordl_internal_set___9__6)) ::System::Action*  __9__6;

/// @brief Field <>9__7, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__7, put=__cordl_internal_set___9__7)) ::System::Action_1<::VROSC::Error>*  __9__7;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass79_0* New_ctor() ;

/// @brief Method <RemoveSessionUpVote>b__0, addr 0x18629a4, size 0x224, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__0() ;

/// @brief Method <RemoveSessionUpVote>b__1, addr 0x1862f54, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__1(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionUpVote>b__3, addr 0x1862eb8, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__3(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionUpVote>b__4, addr 0x1862bd0, size 0x10c, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__4() ;

/// @brief Method <RemoveSessionUpVote>b__5, addr 0x1862e1c, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__5(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionUpVote>b__6, addr 0x1862cdc, size 0xb0, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__6() ;

/// @brief Method <RemoveSessionUpVote>b__7, addr 0x1862d8c, size 0x90, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__7(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action* const& __cordl_internal_get___9__6() const;

constexpr ::System::Action*& __cordl_internal_get___9__6() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__7() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__7() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__7(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185de5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass79_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass79_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass79_0(SessionsManager___c__DisplayClass79_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass79_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass79_0(SessionsManager___c__DisplayClass79_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{493};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__6, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__6;

/// @brief Field <>9__7, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__7;

/// @brief Field <>9__4, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  _____9__4;

/// @brief Field <>9__5, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

/// @brief Field <>9__3, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____9__6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____9__7) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____9__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____9__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_0, _____9__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass79_0, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass79_1
class CORDL_TYPE SessionsManager___c__DisplayClass79_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass79_0*  CS$__8__locals1;

/// @brief Field upVoteId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_upVoteId, put=__cordl_internal_set_upVoteId)) ::StringW  upVoteId;

static inline ::VROSC::SessionsManager___c__DisplayClass79_1* New_ctor() ;

/// @brief Method <RemoveSessionUpVote>b__2, addr 0x1862ff0, size 0x120, virtual false, abstract: false, final false
inline void _RemoveSessionUpVote_b__2() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass79_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass79_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_upVoteId() const;

constexpr ::StringW& __cordl_internal_get_upVoteId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass79_0*  value) ;

constexpr void __cordl_internal_set_upVoteId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1862bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass79_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass79_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass79_1(SessionsManager___c__DisplayClass79_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass79_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass79_1(SessionsManager___c__DisplayClass79_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{494};

/// @brief Field upVoteId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___upVoteId;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass79_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_1, ___upVoteId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass79_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass79_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass80_0
class CORDL_TYPE SessionsManager___c__DisplayClass80_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_2<::StringW,::VROSC::Session*>*  __9__2;

/// @brief Field <>9__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::StringW>*  __9__4;

/// @brief Field <>9__5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field <>9__6, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__6, put=__cordl_internal_set___9__6)) ::System::Action*  __9__6;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass80_0* New_ctor() ;

/// @brief Method <AddSessionFavorite>b__0, addr 0x1863110, size 0x220, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__0() ;

/// @brief Method <AddSessionFavorite>b__1, addr 0x186379c, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__1(::VROSC::Error  error) ;

/// @brief Method <AddSessionFavorite>b__2, addr 0x1863330, size 0x120, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__2(::StringW  sessionFavoriteId, ::VROSC::Session*  favoritedSession) ;

/// @brief Method <AddSessionFavorite>b__3, addr 0x1863700, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__3(::VROSC::Error  error) ;

/// @brief Method <AddSessionFavorite>b__4, addr 0x1863450, size 0x13c, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__4(::StringW  userFavoriteId) ;

/// @brief Method <AddSessionFavorite>b__5, addr 0x1863664, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__5(::VROSC::Error  error) ;

/// @brief Method <AddSessionFavorite>b__6, addr 0x1863594, size 0xd0, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__6() ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_2<::StringW,::VROSC::Session*>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_2<::StringW,::VROSC::Session*>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action* const& __cordl_internal_get___9__6() const;

constexpr ::System::Action*& __cordl_internal_get___9__6() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_2<::StringW,::VROSC::Session*>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185dfa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass80_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass80_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass80_0(SessionsManager___c__DisplayClass80_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass80_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass80_0(SessionsManager___c__DisplayClass80_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{495};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__6, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__6;

/// @brief Field <>9__4, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__4;

/// @brief Field <>9__5, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

/// @brief Field <>9__2, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<::StringW,::VROSC::Session*>*  _____9__2;

/// @brief Field <>9__3, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____9__6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____9__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____9__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____9__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_0, _____9__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass80_0, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass80_1
class CORDL_TYPE SessionsManager___c__DisplayClass80_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass80_0*  CS$__8__locals1;

/// @brief Field userFavoriteId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_userFavoriteId, put=__cordl_internal_set_userFavoriteId)) ::StringW  userFavoriteId;

static inline ::VROSC::SessionsManager___c__DisplayClass80_1* New_ctor() ;

/// @brief Method <AddSessionFavorite>b__7, addr 0x1863838, size 0xd0, virtual false, abstract: false, final false
inline void _AddSessionFavorite_b__7(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager___c__DisplayClass80_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass80_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_userFavoriteId() const;

constexpr ::StringW& __cordl_internal_get_userFavoriteId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass80_0*  value) ;

constexpr void __cordl_internal_set_userFavoriteId(::StringW  value) ;

/// @brief Method .ctor, addr 0x186358c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass80_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass80_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass80_1(SessionsManager___c__DisplayClass80_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass80_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass80_1(SessionsManager___c__DisplayClass80_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{496};

/// @brief Field userFavoriteId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___userFavoriteId;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass80_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_1, ___userFavoriteId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass80_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass80_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass81_0
class CORDL_TYPE SessionsManager___c__DisplayClass81_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action*  __9__4;

/// @brief Field <>9__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field <>9__6, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__6, put=__cordl_internal_set___9__6)) ::System::Action*  __9__6;

/// @brief Field <>9__7, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__7, put=__cordl_internal_set___9__7)) ::System::Action_1<::VROSC::Error>*  __9__7;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass81_0* New_ctor() ;

/// @brief Method <RemoveSessionFavorite>b__0, addr 0x1863908, size 0x224, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__0() ;

/// @brief Method <RemoveSessionFavorite>b__1, addr 0x1863ed8, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__1(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionFavorite>b__3, addr 0x1863e3c, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__3(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionFavorite>b__4, addr 0x1863b34, size 0x10c, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__4() ;

/// @brief Method <RemoveSessionFavorite>b__5, addr 0x1863da0, size 0x9c, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__5(::VROSC::Error  error) ;

/// @brief Method <RemoveSessionFavorite>b__6, addr 0x1863c40, size 0xd0, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__6() ;

/// @brief Method <RemoveSessionFavorite>b__7, addr 0x1863d10, size 0x90, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__7(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action*& __cordl_internal_get___9__4() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action* const& __cordl_internal_get___9__6() const;

constexpr ::System::Action*& __cordl_internal_get___9__6() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__7() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__7() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__6(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__7(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185e0e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass81_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass81_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass81_0(SessionsManager___c__DisplayClass81_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass81_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass81_0(SessionsManager___c__DisplayClass81_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{497};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__6, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  _____9__6;

/// @brief Field <>9__7, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__7;

/// @brief Field <>9__4, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  _____9__4;

/// @brief Field <>9__5, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

/// @brief Field <>9__3, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____9__6) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____9__7) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____9__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____9__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_0, _____9__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass81_0, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass81_1
class CORDL_TYPE SessionsManager___c__DisplayClass81_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SessionsManager___c__DisplayClass81_0*  CS$__8__locals1;

/// @brief Field favoriteId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteId, put=__cordl_internal_set_favoriteId)) ::StringW  favoriteId;

static inline ::VROSC::SessionsManager___c__DisplayClass81_1* New_ctor() ;

/// @brief Method <RemoveSessionFavorite>b__2, addr 0x1863f74, size 0x120, virtual false, abstract: false, final false
inline void _RemoveSessionFavorite_b__2() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass81_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass81_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_favoriteId() const;

constexpr ::StringW& __cordl_internal_get_favoriteId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SessionsManager___c__DisplayClass81_0*  value) ;

constexpr void __cordl_internal_set_favoriteId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1863b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass81_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass81_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass81_1(SessionsManager___c__DisplayClass81_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass81_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass81_1(SessionsManager___c__DisplayClass81_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{498};

/// @brief Field favoriteId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___favoriteId;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass81_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_1, ___favoriteId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass81_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass81_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass82_0
class CORDL_TYPE SessionsManager___c__DisplayClass82_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::StringW>*  __9__2;

/// @brief Field <>9__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass82_0* New_ctor() ;

/// @brief Method <AddSessionDownload>b__0, addr 0x1864094, size 0x248, virtual false, abstract: false, final false
inline void _AddSessionDownload_b__0() ;

/// @brief Method <AddSessionDownload>b__1, addr 0x1864418, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionDownload_b__1(::VROSC::Error  error) ;

/// @brief Method <AddSessionDownload>b__2, addr 0x18642dc, size 0xac, virtual false, abstract: false, final false
inline void _AddSessionDownload_b__2(::StringW  downloadId) ;

/// @brief Method <AddSessionDownload>b__3, addr 0x1864388, size 0x90, virtual false, abstract: false, final false
inline void _AddSessionDownload_b__3(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185e228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass82_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass82_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass82_0(SessionsManager___c__DisplayClass82_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass82_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass82_0(SessionsManager___c__DisplayClass82_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{499};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__2;

/// @brief Field <>9__3, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, _____9__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass82_0, _____9__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass82_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass83_0
class CORDL_TYPE SessionsManager___c__DisplayClass83_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>9__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::StringW>*  __9__2;

/// @brief Field <>9__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass83_0* New_ctor() ;

/// @brief Method <AddSessionPreviewPlay>b__0, addr 0x18644b4, size 0x248, virtual false, abstract: false, final false
inline void _AddSessionPreviewPlay_b__0() ;

/// @brief Method <AddSessionPreviewPlay>b__1, addr 0x1864838, size 0x9c, virtual false, abstract: false, final false
inline void _AddSessionPreviewPlay_b__1(::VROSC::Error  error) ;

/// @brief Method <AddSessionPreviewPlay>b__2, addr 0x18646fc, size 0xac, virtual false, abstract: false, final false
inline void _AddSessionPreviewPlay_b__2(::StringW  previewPlayId) ;

/// @brief Method <AddSessionPreviewPlay>b__3, addr 0x18647a8, size 0x90, virtual false, abstract: false, final false
inline void _AddSessionPreviewPlay_b__3(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185e36c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass83_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass83_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass83_0(SessionsManager___c__DisplayClass83_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass83_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass83_0(SessionsManager___c__DisplayClass83_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{500};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__2;

/// @brief Field <>9__3, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, _____9__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass83_0, _____9__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass83_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass85_0
class CORDL_TYPE SessionsManager___c__DisplayClass85_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field isDefaultSession, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultSession, put=__cordl_internal_set_isDefaultSession)) bool  isDefaultSession;

/// @brief Field sessionId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass85_0* New_ctor() ;

/// @brief Method <LoadSessionDataSuccess>b__0, addr 0x18648d4, size 0x1d8, virtual false, abstract: false, final false
inline void _LoadSessionDataSuccess_b__0() ;

/// @brief Method <LoadSessionDataSuccess>b__1, addr 0x1864aac, size 0x84, virtual false, abstract: false, final false
inline void _LoadSessionDataSuccess_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_isDefaultSession() const;

constexpr bool& __cordl_internal_get_isDefaultSession() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_isDefaultSession(bool  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185e6d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass85_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass85_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass85_0(SessionsManager___c__DisplayClass85_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass85_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass85_0(SessionsManager___c__DisplayClass85_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{501};

/// @brief Field isDefaultSession, offset: 0x10, size: 0x1, def value: None
 bool  ___isDefaultSession;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass85_0, ___isDefaultSession) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass85_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass85_0, ___sessionId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass85_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<>c__DisplayClass90_0
class CORDL_TYPE SessionsManager___c__DisplayClass90_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SessionsManager___c__DisplayClass90_0* New_ctor() ;

/// @brief Method <SaveSessionSuccess>b__0, addr 0x1864b30, size 0xb8, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__0(::StringW  id) ;

/// @brief Method <SaveSessionSuccess>b__1, addr 0x1864be8, size 0x80, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__1(::VROSC::Error  error) ;

/// @brief Method <SaveSessionSuccess>b__2, addr 0x1864c68, size 0xb8, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__2(::StringW  id) ;

/// @brief Method <SaveSessionSuccess>b__3, addr 0x1864d20, size 0x80, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__3(::VROSC::Error  error) ;

/// @brief Method <SaveSessionSuccess>b__4, addr 0x1864da0, size 0xb8, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__4() ;

/// @brief Method <SaveSessionSuccess>b__5, addr 0x1864e58, size 0x80, virtual false, abstract: false, final false
inline void _SaveSessionSuccess_b__5(::VROSC::Error  error) ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x185f454, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager___c__DisplayClass90_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass90_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager___c__DisplayClass90_0(SessionsManager___c__DisplayClass90_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager___c__DisplayClass90_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager___c__DisplayClass90_0(SessionsManager___c__DisplayClass90_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{502};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass90_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager___c__DisplayClass90_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager___c__DisplayClass90_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsManager/<ExportSession>d__70
struct CORDL_TYPE SessionsManager__ExportSession_d__70 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1864ed8, size 0xc34, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1865d04, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager__ExportSession_d__70() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::SessionsManager*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::SessionsManager___c__DisplayClass70_0*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_exportName_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_zippedFilePathWithoutExtension_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SessionsManager__ExportSession_d__70(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress, ::VROSC::SessionsManager*  __4__this, ::VROSC::SessionsManager___c__DisplayClass70_0*  __8__1, ::System::Action*  onSuccess, ::StringW  _exportName_5__2, ::StringW  _zippedFilePathWithoutExtension_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onProgress, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<float_t>*  onProgress;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass70_0*  __8__1;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <exportName>5__2, offset: 0x50, size: 0x8, def value: None
 ::StringW  _exportName_5__2;

/// @brief Field <zippedFilePathWithoutExtension>5__3, offset: 0x58, size: 0x8, def value: None
 ::StringW  _zippedFilePathWithoutExtension_5__3;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, onProgress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, _exportName_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, _zippedFilePathWithoutExtension_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__ExportSession_d__70, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager__ExportSession_d__70, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<SaveSession>d__68
class CORDL_TYPE SessionsManager__SaveSession_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::SessionsManager___c__DisplayClass68_1*  __8__1;

/// @brief Field sessionSaveData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionSaveData, put=__cordl_internal_set_sessionSaveData)) ::VROSC::SessionSaveData*  sessionSaveData;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1865d14, size 0x600, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::SessionsManager__SaveSession_d__68* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1866368, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1866370, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18663a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1865d10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass68_1* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass68_1*& __cordl_internal_get___8__1() ;

constexpr ::VROSC::SessionSaveData* const& __cordl_internal_get_sessionSaveData() const;

constexpr ::VROSC::SessionSaveData*& __cordl_internal_get_sessionSaveData() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::SessionsManager___c__DisplayClass68_1*  value) ;

constexpr void __cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value) ;

/// @brief Method .ctor, addr 0x185d568, size 0x28, virtual false, abstract: false, final false
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
constexpr SessionsManager__SaveSession_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager__SaveSession_d__68", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager__SaveSession_d__68(SessionsManager__SaveSession_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager__SaveSession_d__68", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager__SaveSession_d__68(SessionsManager__SaveSession_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{504};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionSaveData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SessionSaveData*  ___sessionSaveData;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass68_1*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager__SaveSession_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSession_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSession_d__68, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSession_d__68, ___sessionSaveData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSession_d__68, _____8__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager__SaveSession_d__68, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager/<SaveSessionAs>d__69
class CORDL_TYPE SessionsManager__SaveSessionAs_d__69 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SessionsManager*  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::SessionsManager___c__DisplayClass69_0*  __8__1;

/// @brief Field sessionSaveData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionSaveData, put=__cordl_internal_set_sessionSaveData)) ::VROSC::SessionSaveData*  sessionSaveData;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18663b4, size 0x69c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::SessionsManager__SaveSessionAs_d__69* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1866a50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1866a58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1866a90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18663b0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::SessionsManager* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SessionsManager*& __cordl_internal_get___4__this() ;

constexpr ::VROSC::SessionsManager___c__DisplayClass69_0* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::SessionsManager___c__DisplayClass69_0*& __cordl_internal_get___8__1() ;

constexpr ::VROSC::SessionSaveData* const& __cordl_internal_get_sessionSaveData() const;

constexpr ::VROSC::SessionSaveData*& __cordl_internal_get_sessionSaveData() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::SessionsManager*  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::SessionsManager___c__DisplayClass69_0*  value) ;

constexpr void __cordl_internal_set_sessionSaveData(::VROSC::SessionSaveData*  value) ;

/// @brief Method .ctor, addr 0x185d5fc, size 0x28, virtual false, abstract: false, final false
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
constexpr SessionsManager__SaveSessionAs_d__69() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager__SaveSessionAs_d__69", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager__SaveSessionAs_d__69(SessionsManager__SaveSessionAs_d__69 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager__SaveSessionAs_d__69", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager__SaveSessionAs_d__69(SessionsManager__SaveSessionAs_d__69 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{505};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::SessionsManager*  _____4__this;

/// @brief Field sessionSaveData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SessionSaveData*  ___sessionSaveData;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::VROSC::SessionsManager___c__DisplayClass69_0*  _____8__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager__SaveSessionAs_d__69, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSessionAs_d__69, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSessionAs_d__69, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSessionAs_d__69, ___sessionSaveData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager__SaveSessionAs_d__69, _____8__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager__SaveSessionAs_d__69, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsManager
class CORDL_TYPE SessionsManager : public ::System::Object {
public:
// Declarations
using _ExportSession_d__70 = ::VROSC::SessionsManager__ExportSession_d__70;

using _SaveSessionAs_d__69 = ::VROSC::SessionsManager__SaveSessionAs_d__69;

using _SaveSession_d__68 = ::VROSC::SessionsManager__SaveSession_d__68;

using __c = ::VROSC::SessionsManager___c;

using __c__DisplayClass58_0 = ::VROSC::SessionsManager___c__DisplayClass58_0;

using __c__DisplayClass59_0 = ::VROSC::SessionsManager___c__DisplayClass59_0;

using __c__DisplayClass60_0 = ::VROSC::SessionsManager___c__DisplayClass60_0;

using __c__DisplayClass68_0 = ::VROSC::SessionsManager___c__DisplayClass68_0;

using __c__DisplayClass68_1 = ::VROSC::SessionsManager___c__DisplayClass68_1;

using __c__DisplayClass69_0 = ::VROSC::SessionsManager___c__DisplayClass69_0;

using __c__DisplayClass70_0 = ::VROSC::SessionsManager___c__DisplayClass70_0;

using __c__DisplayClass71_0 = ::VROSC::SessionsManager___c__DisplayClass71_0;

using __c__DisplayClass71_1 = ::VROSC::SessionsManager___c__DisplayClass71_1;

using __c__DisplayClass78_0 = ::VROSC::SessionsManager___c__DisplayClass78_0;

using __c__DisplayClass78_1 = ::VROSC::SessionsManager___c__DisplayClass78_1;

using __c__DisplayClass79_0 = ::VROSC::SessionsManager___c__DisplayClass79_0;

using __c__DisplayClass79_1 = ::VROSC::SessionsManager___c__DisplayClass79_1;

using __c__DisplayClass80_0 = ::VROSC::SessionsManager___c__DisplayClass80_0;

using __c__DisplayClass80_1 = ::VROSC::SessionsManager___c__DisplayClass80_1;

using __c__DisplayClass81_0 = ::VROSC::SessionsManager___c__DisplayClass81_0;

using __c__DisplayClass81_1 = ::VROSC::SessionsManager___c__DisplayClass81_1;

using __c__DisplayClass82_0 = ::VROSC::SessionsManager___c__DisplayClass82_0;

using __c__DisplayClass83_0 = ::VROSC::SessionsManager___c__DisplayClass83_0;

using __c__DisplayClass85_0 = ::VROSC::SessionsManager___c__DisplayClass85_0;

using __c__DisplayClass90_0 = ::VROSC::SessionsManager___c__DisplayClass90_0;

 __declspec(property(get=get_AreCloudSessionsLoaded)) bool  AreCloudSessionsLoaded;

 __declspec(property(get=get_AreCommunitySessionsLoaded)) bool  AreCommunitySessionsLoaded;

 __declspec(property(get=get_CurrentSessionDisplayName, put=set_CurrentSessionDisplayName)) ::StringW  CurrentSessionDisplayName;

 __declspec(property(get=get_HasLoadedSession)) bool  HasLoadedSession;

 __declspec(property(get=get_IsLoadedSessionMine)) bool  IsLoadedSessionMine;

 __declspec(property(get=get_IsSavingTemplate, put=set_IsSavingTemplate)) bool  IsSavingTemplate;

 __declspec(property(get=get_IsSessionDataValidated, put=set_IsSessionDataValidated)) bool  IsSessionDataValidated;

/// @brief Field OnCloudSessionsDataLoadFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCloudSessionsDataLoadFailure, put=setStaticF_OnCloudSessionsDataLoadFailure)) ::System::Action_1<::VROSC::Error>*  OnCloudSessionsDataLoadFailure;

/// @brief Field OnCloudSessionsDataLoadSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCloudSessionsDataLoadSuccess, put=setStaticF_OnCloudSessionsDataLoadSuccess)) ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  OnCloudSessionsDataLoadSuccess;

/// @brief Field OnCommunitySessionsDataLoadFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCommunitySessionsDataLoadFailure, put=setStaticF_OnCommunitySessionsDataLoadFailure)) ::System::Action_1<::VROSC::Error>*  OnCommunitySessionsDataLoadFailure;

/// @brief Field OnCommunitySessionsDataLoadSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCommunitySessionsDataLoadSuccess, put=setStaticF_OnCommunitySessionsDataLoadSuccess)) ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  OnCommunitySessionsDataLoadSuccess;

/// @brief Field OnDeleteSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionFailure, put=setStaticF_OnDeleteSessionFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnDeleteSessionFailure;

/// @brief Field OnDeleteSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDeleteSessionSuccess, put=setStaticF_OnDeleteSessionSuccess)) ::System::Action_1<::StringW>*  OnDeleteSessionSuccess;

/// @brief Field OnFavoritesChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnFavoritesChanged, put=setStaticF_OnFavoritesChanged)) ::System::Action*  OnFavoritesChanged;

/// @brief Field OnLoadPreviewFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadPreviewFailure, put=setStaticF_OnLoadPreviewFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnLoadPreviewFailure;

/// @brief Field OnLoadPreviewProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadPreviewProgress, put=setStaticF_OnLoadPreviewProgress)) ::System::Action_2<::StringW,float_t>*  OnLoadPreviewProgress;

/// @brief Field OnLoadPreviewSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadPreviewSuccess, put=setStaticF_OnLoadPreviewSuccess)) ::System::Action_3<::StringW,::UnityW<::UnityEngine::AudioClip>,float_t>*  OnLoadPreviewSuccess;

/// @brief Field OnLoadSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadSessionFailure, put=setStaticF_OnLoadSessionFailure)) ::System::Action_3<::StringW,bool,::VROSC::Error>*  OnLoadSessionFailure;

/// @brief Field OnLoadSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLoadSessionSuccess, put=setStaticF_OnLoadSessionSuccess)) ::System::Action_2<::StringW,bool>*  OnLoadSessionSuccess;

/// @brief Field OnLocalSessionsDataLoadFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLocalSessionsDataLoadFailure, put=setStaticF_OnLocalSessionsDataLoadFailure)) ::System::Action_1<::VROSC::Error>*  OnLocalSessionsDataLoadFailure;

/// @brief Field OnLocalSessionsDataLoadSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLocalSessionsDataLoadSuccess, put=setStaticF_OnLocalSessionsDataLoadSuccess)) ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  OnLocalSessionsDataLoadSuccess;

/// @brief Field OnSaveLoadSessionDataTransferProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveLoadSessionDataTransferProgress, put=setStaticF_OnSaveLoadSessionDataTransferProgress)) ::System::Action_2<::StringW,float_t>*  OnSaveLoadSessionDataTransferProgress;

/// @brief Field OnSavePreviewProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSavePreviewProgress, put=setStaticF_OnSavePreviewProgress)) ::System::Action_2<::StringW,float_t>*  OnSavePreviewProgress;

/// @brief Field OnSaveSessionFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSessionFailure, put=setStaticF_OnSaveSessionFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnSaveSessionFailure;

/// @brief Field OnSaveSessionSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveSessionSuccess, put=setStaticF_OnSaveSessionSuccess)) ::System::Action_1<::StringW>*  OnSaveSessionSuccess;

/// @brief Field OnSaveTemplateFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveTemplateFailure, put=setStaticF_OnSaveTemplateFailure)) ::System::Action_1<::VROSC::Error>*  OnSaveTemplateFailure;

/// @brief Field OnSaveTemplateSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveTemplateSuccess, put=setStaticF_OnSaveTemplateSuccess)) ::System::Action*  OnSaveTemplateSuccess;

/// @brief Field OnSessionsValidated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionsValidated, put=setStaticF_OnSessionsValidated)) ::System::Action*  OnSessionsValidated;

/// @brief Field OnUpdateSessionDataFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUpdateSessionDataFailure, put=setStaticF_OnUpdateSessionDataFailure)) ::System::Action_2<::StringW,::VROSC::Error>*  OnUpdateSessionDataFailure;

/// @brief Field OnUpdateSessionDataSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUpdateSessionDataSuccess, put=setStaticF_OnUpdateSessionDataSuccess)) ::System::Action_1<::StringW>*  OnUpdateSessionDataSuccess;

/// @brief Field <CurrentSessionDisplayName>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentSessionDisplayName_k__BackingField, put=__cordl_internal_set__CurrentSessionDisplayName_k__BackingField)) ::StringW  _CurrentSessionDisplayName_k__BackingField;

/// @brief Field <IsSavingTemplate>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSavingTemplate_k__BackingField, put=__cordl_internal_set__IsSavingTemplate_k__BackingField)) bool  _IsSavingTemplate_k__BackingField;

/// @brief Field <IsSessionDataValidated>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSessionDataValidated_k__BackingField, put=__cordl_internal_set__IsSessionDataValidated_k__BackingField)) bool  _IsSessionDataValidated_k__BackingField;

/// @brief Field _cloudSessionsDataController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudSessionsDataController, put=__cordl_internal_set__cloudSessionsDataController)) ::VROSC::CloudSessionsDataController*  _cloudSessionsDataController;

/// @brief Field _communitySessionsDataController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__communitySessionsDataController, put=__cordl_internal_set__communitySessionsDataController)) ::VROSC::CommunitySessionsDataController*  _communitySessionsDataController;

/// @brief Field _loadedSessionId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedSessionId, put=__cordl_internal_set__loadedSessionId)) ::StringW  _loadedSessionId;

/// @brief Field _localSessionsDataController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localSessionsDataController, put=__cordl_internal_set__localSessionsDataController)) ::VROSC::LocalSessionsDataController*  _localSessionsDataController;

/// @brief Field _oldSavesHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__oldSavesHandler, put=__cordl_internal_set__oldSavesHandler)) ::VROSC::OldSavesHandler*  _oldSavesHandler;

/// @brief Field _saveLoadManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveLoadManager, put=__cordl_internal_set__saveLoadManager)) ::UnityW<::VROSC::SaveLoadManager>  _saveLoadManager;

/// @brief Field _userDataControllers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__userDataControllers, put=__cordl_internal_set__userDataControllers)) ::VROSC::UserDataControllers*  _userDataControllers;

/// @brief Method AddFavoriteSessionToCommunityList, addr 0x185e374, size 0x1c, virtual false, abstract: false, final false
inline void AddFavoriteSessionToCommunityList(::VROSC::Session*  session) ;

/// @brief Method AddSessionDownload, addr 0x185e0ec, size 0x13c, virtual false, abstract: false, final false
inline void AddSessionDownload(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionFavorite, addr 0x185de64, size 0x13c, virtual false, abstract: false, final false
inline void AddSessionFavorite(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionPreviewPlay, addr 0x185e230, size 0x13c, virtual false, abstract: false, final false
inline void AddSessionPreviewPlay(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method AddSessionUpVote, addr 0x185dbdc, size 0x13c, virtual false, abstract: false, final false
inline void AddSessionUpVote(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method DeleteSession, addr 0x185d6dc, size 0x1ec, virtual false, abstract: false, final false
inline void DeleteSession(::StringW  sessionId, bool  sendToAnalytics) ;

/// @brief Method DeleteSessionFailure, addr 0x1860010, size 0x208, virtual false, abstract: false, final false
inline void DeleteSessionFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method DeleteSessionSuccess, addr 0x185fdd8, size 0x238, virtual false, abstract: false, final false
inline void DeleteSessionSuccess(::StringW  sessionId) ;

/// @brief Method ExportSession, addr 0x185d624, size 0xb8, virtual false, abstract: false, final false
inline void ExportSession(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Finalize, addr 0x185b71c, size 0x330, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetCloudSessionsUIData, addr 0x185bce4, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetCloudSessionsUIData() ;

/// @brief Method GetCommunitySessionsUIData, addr 0x185bd08, size 0x2c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetCommunitySessionsUIData(bool  onlyMine) ;

/// @brief Method GetLoadedSessionUIData, addr 0x185bc74, size 0x4c, virtual false, abstract: false, final false
inline ::VROSC::SessionUIData* GetLoadedSessionUIData() ;

/// @brief Method GetLocalSessionsUIData, addr 0x185bcc0, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* GetLocalSessionsUIData() ;

/// @brief Method GetSessionDataController, addr 0x185bb5c, size 0x118, virtual false, abstract: false, final false
inline ::VROSC::SessionsDataController* GetSessionDataController(::StringW  sessionId) ;

/// @brief Method GetSessionPreview, addr 0x185d918, size 0x1ac, virtual false, abstract: false, final false
inline void GetSessionPreview(::StringW  sessionId) ;

/// @brief Method GetSessionUIData, addr 0x185bb2c, size 0x30, virtual false, abstract: false, final false
inline ::VROSC::SessionUIData* GetSessionUIData(::StringW  sessionId) ;

/// @brief Method HasSessionWithDisplayName, addr 0x185db18, size 0xc4, virtual false, abstract: false, final false
inline bool HasSessionWithDisplayName(::StringW  displayName, bool  isCommunity) ;

/// @brief Method IsSessionMine, addr 0x185b288, size 0xd0, virtual false, abstract: false, final false
inline bool IsSessionMine(::StringW  sessionId) ;

/// @brief Method IsSessionSavedAsTemplate, addr 0x185b1b8, size 0x90, virtual false, abstract: false, final false
inline bool IsSessionSavedAsTemplate(::StringW  sessionId) ;

/// @brief Method LoadCloudSessions, addr 0x185c0e8, size 0x118, virtual false, abstract: false, final false
inline void LoadCloudSessions(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadCommunitySessions, addr 0x185c208, size 0x118, virtual false, abstract: false, final false
inline void LoadCommunitySessions(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadLocalSessions, addr 0x185bfc8, size 0x118, virtual false, abstract: false, final false
inline void LoadLocalSessions(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadSession, addr 0x185c768, size 0x57c, virtual false, abstract: false, final false
inline void LoadSession(::StringW  sessionId) ;

/// @brief Method LoadSessionDataFailure, addr 0x185e6e0, size 0x264, virtual false, abstract: false, final false
inline void LoadSessionDataFailure(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error) ;

/// @brief Method LoadSessionDataSuccess, addr 0x185e390, size 0x348, virtual false, abstract: false, final false
inline void LoadSessionDataSuccess(::StringW  sessionId, bool  isDefaultSession) ;

/// @brief Method LoadTemplateOrDefaultSession, addr 0x185c53c, size 0x22c, virtual false, abstract: false, final false
inline void LoadTemplateOrDefaultSession() ;

/// @brief Method LoadTemplateSessionIfExists, addr 0x185c328, size 0x214, virtual false, abstract: false, final false
inline bool LoadTemplateSessionIfExists() ;

static inline ::VROSC::SessionsManager* New_ctor(::VROSC::UserDataControllers*  userDataControllers, ::VROSC::SaveLoadManager*  saveLoadManager) ;

/// @brief Method PreviewDownloadProgress, addr 0x1860430, size 0x80, virtual false, abstract: false, final false
inline void PreviewDownloadProgress(::StringW  sessionId, float_t  progress) ;

/// @brief Method PreviewLoadFailure, addr 0x1860300, size 0x130, virtual false, abstract: false, final false
inline void PreviewLoadFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method PreviewLoadSuccess, addr 0x1860218, size 0xe8, virtual false, abstract: false, final false
inline void PreviewLoadSuccess(::StringW  sessionId, ::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method RemoveSessionAsTemplate, addr 0x185d414, size 0xe8, virtual false, abstract: false, final false
inline void RemoveSessionAsTemplate(::StringW  sessionId) ;

/// @brief Method RemoveSessionFavorite, addr 0x185dfa8, size 0x13c, virtual false, abstract: false, final false
inline void RemoveSessionFavorite(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method RemoveSessionUpVote, addr 0x185dd20, size 0x13c, virtual false, abstract: false, final false
inline void RemoveSessionUpVote(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSession, addr 0x185d4fc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SaveSession(::VROSC::SessionSaveData*  sessionSaveData) ;

/// @brief Method SaveSessionAs, addr 0x185d590, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SaveSessionAs(::VROSC::SessionSaveData*  sessionSaveData) ;

/// @brief Method SaveSessionAsTemplate, addr 0x185cce4, size 0x2b0, virtual false, abstract: false, final false
inline void SaveSessionAsTemplate(::StringW  sessionId) ;

/// @brief Method SaveSessionFailure, addr 0x185f45c, size 0x284, virtual false, abstract: false, final false
inline void SaveSessionFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SaveSessionSuccess, addr 0x185ee6c, size 0x5e8, virtual false, abstract: false, final false
inline void SaveSessionSuccess(::StringW  sessionId) ;

/// @brief Method SaveTemplateFailed, addr 0x185d21c, size 0x1f8, virtual false, abstract: false, final false
inline void SaveTemplateFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SaveTemplateSucceeded, addr 0x185cf94, size 0x288, virtual false, abstract: false, final false
inline void SaveTemplateSucceeded(::StringW  sessionId) ;

/// @brief Method SessionDownloadFailure, addr 0x185eb98, size 0x254, virtual false, abstract: false, final false
inline void SessionDownloadFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SessionDownloadProgress, addr 0x185edec, size 0x80, virtual false, abstract: false, final false
inline void SessionDownloadProgress(::StringW  sessionId, float_t  progress) ;

/// @brief Method SessionDownloadSuccess, addr 0x185e944, size 0x254, virtual false, abstract: false, final false
inline void SessionDownloadSuccess(::StringW  sessionId) ;

/// @brief Method SessionPreviewUploadProgress, addr 0x185fd58, size 0x80, virtual false, abstract: false, final false
inline void SessionPreviewUploadProgress(::StringW  sessionId, float_t  progress) ;

/// @brief Method SessionUploadFailure, addr 0x185f9dc, size 0x2fc, virtual false, abstract: false, final false
inline void SessionUploadFailure(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SessionUploadProgress, addr 0x185fcd8, size 0x80, virtual false, abstract: false, final false
inline void SessionUploadProgress(::StringW  sessionId, float_t  progress) ;

/// @brief Method SessionUploadSuccess, addr 0x185f6e0, size 0x2fc, virtual false, abstract: false, final false
inline void SessionUploadSuccess(::StringW  sessionId) ;

/// @brief Method SetPreview, addr 0x185dac4, size 0x54, virtual false, abstract: false, final false
inline void SetPreview(::StringW  sessionId, bool  hasPreview, float_t  previewMultiplier, ::VROSC::Session_PreviewSource  previewSource) ;

/// @brief Method UpdateSavedSessionsVersion, addr 0x185d8d8, size 0x40, virtual false, abstract: false, final false
inline void UpdateSavedSessionsVersion() ;

/// @brief Method ValidateSessionsFiles, addr 0x185ba4c, size 0xe0, virtual false, abstract: false, final false
inline void ValidateSessionsFiles() ;

/// @brief Method <ValidateSessionsFiles>b__52_0, addr 0x18604b0, size 0xe4, virtual false, abstract: false, final false
inline void _ValidateSessionsFiles_b__52_0() ;

/// @brief Method <ValidateSessionsFiles>b__52_1, addr 0x18606e0, size 0xdc, virtual false, abstract: false, final false
inline void _ValidateSessionsFiles_b__52_1(::VROSC::Error  error) ;

/// @brief Method <ValidateSessionsFiles>b__52_2, addr 0x1860594, size 0x70, virtual false, abstract: false, final false
inline void _ValidateSessionsFiles_b__52_2() ;

/// @brief Method <ValidateSessionsFiles>b__52_3, addr 0x1860604, size 0xdc, virtual false, abstract: false, final false
inline void _ValidateSessionsFiles_b__52_3(::VROSC::Error  error) ;

constexpr ::StringW const& __cordl_internal_get__CurrentSessionDisplayName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CurrentSessionDisplayName_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSavingTemplate_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSavingTemplate_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSessionDataValidated_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSessionDataValidated_k__BackingField() ;

constexpr ::VROSC::CloudSessionsDataController* const& __cordl_internal_get__cloudSessionsDataController() const;

constexpr ::VROSC::CloudSessionsDataController*& __cordl_internal_get__cloudSessionsDataController() ;

constexpr ::VROSC::CommunitySessionsDataController* const& __cordl_internal_get__communitySessionsDataController() const;

constexpr ::VROSC::CommunitySessionsDataController*& __cordl_internal_get__communitySessionsDataController() ;

constexpr ::StringW const& __cordl_internal_get__loadedSessionId() const;

constexpr ::StringW& __cordl_internal_get__loadedSessionId() ;

constexpr ::VROSC::LocalSessionsDataController* const& __cordl_internal_get__localSessionsDataController() const;

constexpr ::VROSC::LocalSessionsDataController*& __cordl_internal_get__localSessionsDataController() ;

constexpr ::VROSC::OldSavesHandler* const& __cordl_internal_get__oldSavesHandler() const;

constexpr ::VROSC::OldSavesHandler*& __cordl_internal_get__oldSavesHandler() ;

constexpr ::UnityW<::VROSC::SaveLoadManager> const& __cordl_internal_get__saveLoadManager() const;

constexpr ::UnityW<::VROSC::SaveLoadManager>& __cordl_internal_get__saveLoadManager() ;

constexpr ::VROSC::UserDataControllers* const& __cordl_internal_get__userDataControllers() const;

constexpr ::VROSC::UserDataControllers*& __cordl_internal_get__userDataControllers() ;

constexpr void __cordl_internal_set__CurrentSessionDisplayName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsSavingTemplate_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSessionDataValidated_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cloudSessionsDataController(::VROSC::CloudSessionsDataController*  value) ;

constexpr void __cordl_internal_set__communitySessionsDataController(::VROSC::CommunitySessionsDataController*  value) ;

constexpr void __cordl_internal_set__loadedSessionId(::StringW  value) ;

constexpr void __cordl_internal_set__localSessionsDataController(::VROSC::LocalSessionsDataController*  value) ;

constexpr void __cordl_internal_set__oldSavesHandler(::VROSC::OldSavesHandler*  value) ;

constexpr void __cordl_internal_set__saveLoadManager(::UnityW<::VROSC::SaveLoadManager>  value) ;

constexpr void __cordl_internal_set__userDataControllers(::VROSC::UserDataControllers*  value) ;

/// @brief Method .ctor, addr 0x185b3b4, size 0x368, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UserDataControllers*  userDataControllers, ::VROSC::SaveLoadManager*  saveLoadManager) ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnCloudSessionsDataLoadFailure() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>* getStaticF_OnCloudSessionsDataLoadSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnCommunitySessionsDataLoadFailure() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>* getStaticF_OnCommunitySessionsDataLoadSuccess() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnDeleteSessionFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnDeleteSessionSuccess() ;

static inline ::System::Action* getStaticF_OnFavoritesChanged() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnLoadPreviewFailure() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnLoadPreviewProgress() ;

static inline ::System::Action_3<::StringW,::UnityW<::UnityEngine::AudioClip>,float_t>* getStaticF_OnLoadPreviewSuccess() ;

static inline ::System::Action_3<::StringW,bool,::VROSC::Error>* getStaticF_OnLoadSessionFailure() ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_OnLoadSessionSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnLocalSessionsDataLoadFailure() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>* getStaticF_OnLocalSessionsDataLoadSuccess() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnSaveLoadSessionDataTransferProgress() ;

static inline ::System::Action_2<::StringW,float_t>* getStaticF_OnSavePreviewProgress() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnSaveSessionFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnSaveSessionSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnSaveTemplateFailure() ;

static inline ::System::Action* getStaticF_OnSaveTemplateSuccess() ;

static inline ::System::Action* getStaticF_OnSessionsValidated() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF_OnUpdateSessionDataFailure() ;

static inline ::System::Action_1<::StringW>* getStaticF_OnUpdateSessionDataSuccess() ;

/// @brief Method get_AreCloudSessionsLoaded, addr 0x185b368, size 0x1c, virtual false, abstract: false, final false
inline bool get_AreCloudSessionsLoaded() ;

/// @brief Method get_AreCommunitySessionsLoaded, addr 0x185b384, size 0x1c, virtual false, abstract: false, final false
inline bool get_AreCommunitySessionsLoaded() ;

/// @brief Method get_CurrentSessionDisplayName, addr 0x185b358, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CurrentSessionDisplayName() ;

/// @brief Method get_HasLoadedSession, addr 0x185b25c, size 0x24, virtual false, abstract: false, final false
inline bool get_HasLoadedSession() ;

/// @brief Method get_IsLoadedSessionMine, addr 0x185b280, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLoadedSessionMine() ;

/// @brief Method get_IsSavingTemplate, addr 0x185b3a0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSavingTemplate() ;

/// @brief Method get_IsSessionDataValidated, addr 0x185b248, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSessionDataValidated() ;

static inline void setStaticF_OnCloudSessionsDataLoadFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnCloudSessionsDataLoadSuccess(::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  value) ;

static inline void setStaticF_OnCommunitySessionsDataLoadFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnCommunitySessionsDataLoadSuccess(::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  value) ;

static inline void setStaticF_OnDeleteSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnDeleteSessionSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnFavoritesChanged(::System::Action*  value) ;

static inline void setStaticF_OnLoadPreviewFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnLoadPreviewProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnLoadPreviewSuccess(::System::Action_3<::StringW,::UnityW<::UnityEngine::AudioClip>,float_t>*  value) ;

static inline void setStaticF_OnLoadSessionFailure(::System::Action_3<::StringW,bool,::VROSC::Error>*  value) ;

static inline void setStaticF_OnLoadSessionSuccess(::System::Action_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnLocalSessionsDataLoadFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnLocalSessionsDataLoadSuccess(::System::Action_1<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>*  value) ;

static inline void setStaticF_OnSaveLoadSessionDataTransferProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnSavePreviewProgress(::System::Action_2<::StringW,float_t>*  value) ;

static inline void setStaticF_OnSaveSessionFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnSaveSessionSuccess(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_OnSaveTemplateFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnSaveTemplateSuccess(::System::Action*  value) ;

static inline void setStaticF_OnSessionsValidated(::System::Action*  value) ;

static inline void setStaticF_OnUpdateSessionDataFailure(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

static inline void setStaticF_OnUpdateSessionDataSuccess(::System::Action_1<::StringW>*  value) ;

/// @brief Method set_CurrentSessionDisplayName, addr 0x185b360, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentSessionDisplayName(::StringW  value) ;

/// @brief Method set_IsSavingTemplate, addr 0x185b3a8, size 0xc, virtual false, abstract: false, final false
inline void set_IsSavingTemplate(bool  value) ;

/// @brief Method set_IsSessionDataValidated, addr 0x185b250, size 0xc, virtual false, abstract: false, final false
inline void set_IsSessionDataValidated(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsManager(SessionsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsManager(SessionsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{506};

/// @brief Field _userDataControllers, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserDataControllers*  ____userDataControllers;

/// @brief Field _saveLoadManager, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  ____saveLoadManager;

/// @brief Field _oldSavesHandler, offset: 0x20, size: 0x8, def value: None
 ::VROSC::OldSavesHandler*  ____oldSavesHandler;

/// @brief Field _localSessionsDataController, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LocalSessionsDataController*  ____localSessionsDataController;

/// @brief Field _cloudSessionsDataController, offset: 0x30, size: 0x8, def value: None
 ::VROSC::CloudSessionsDataController*  ____cloudSessionsDataController;

/// @brief Field _communitySessionsDataController, offset: 0x38, size: 0x8, def value: None
 ::VROSC::CommunitySessionsDataController*  ____communitySessionsDataController;

/// @brief Field _loadedSessionId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____loadedSessionId;

/// @brief Field <IsSessionDataValidated>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsSessionDataValidated_k__BackingField;

/// @brief Field <CurrentSessionDisplayName>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____CurrentSessionDisplayName_k__BackingField;

/// @brief Field <IsSavingTemplate>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsSavingTemplate_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsManager, ____userDataControllers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____saveLoadManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____oldSavesHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____localSessionsDataController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____cloudSessionsDataController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____communitySessionsDataController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____loadedSessionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____IsSessionDataValidated_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____CurrentSessionDisplayName_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsManager, ____IsSavingTemplate_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsManager, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager*, "VROSC", "SessionsManager");
NEED_NO_BOX(::VROSC::SessionsManager__SaveSessionAs_d__69);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager__SaveSessionAs_d__69*, "VROSC", "SessionsManager/<SaveSessionAs>d__69");
NEED_NO_BOX(::VROSC::SessionsManager__SaveSession_d__68);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager__SaveSession_d__68*, "VROSC", "SessionsManager/<SaveSession>d__68");
NEED_NO_BOX(::VROSC::SessionsManager___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c*, "VROSC", "SessionsManager/<>c");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass58_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass58_0*, "VROSC", "SessionsManager/<>c__DisplayClass58_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass59_0*, "VROSC", "SessionsManager/<>c__DisplayClass59_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass60_0*, "VROSC", "SessionsManager/<>c__DisplayClass60_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass68_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass68_0*, "VROSC", "SessionsManager/<>c__DisplayClass68_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass68_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass68_1*, "VROSC", "SessionsManager/<>c__DisplayClass68_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass69_0*, "VROSC", "SessionsManager/<>c__DisplayClass69_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass70_0*, "VROSC", "SessionsManager/<>c__DisplayClass70_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass71_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass71_0*, "VROSC", "SessionsManager/<>c__DisplayClass71_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass71_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass71_1*, "VROSC", "SessionsManager/<>c__DisplayClass71_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass78_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass78_0*, "VROSC", "SessionsManager/<>c__DisplayClass78_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass78_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass78_1*, "VROSC", "SessionsManager/<>c__DisplayClass78_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass79_0*, "VROSC", "SessionsManager/<>c__DisplayClass79_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass79_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass79_1*, "VROSC", "SessionsManager/<>c__DisplayClass79_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass80_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass80_0*, "VROSC", "SessionsManager/<>c__DisplayClass80_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass80_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass80_1*, "VROSC", "SessionsManager/<>c__DisplayClass80_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass81_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass81_0*, "VROSC", "SessionsManager/<>c__DisplayClass81_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass81_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass81_1*, "VROSC", "SessionsManager/<>c__DisplayClass81_1");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass82_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass82_0*, "VROSC", "SessionsManager/<>c__DisplayClass82_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass83_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass83_0*, "VROSC", "SessionsManager/<>c__DisplayClass83_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass85_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass85_0*, "VROSC", "SessionsManager/<>c__DisplayClass85_0");
NEED_NO_BOX(::VROSC::SessionsManager___c__DisplayClass90_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager___c__DisplayClass90_0*, "VROSC", "SessionsManager/<>c__DisplayClass90_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager__ExportSession_d__70, "VROSC", "SessionsManager/<ExportSession>d__70");
