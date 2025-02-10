#pragma once
// IWYU pragma private; include "VROSC/OldSavesHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OldSavesHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Action;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class LocalSessionsDataController;
}
namespace VROSC {
struct OldSavesHandler__Execute_d__3;
}
namespace VROSC {
struct OldSavesHandler__PackageSession_d__6;
}
namespace VROSC {
struct OldSavesHandler__UpdateSessionsFiles_d__5;
}
namespace VROSC {
class OldSavesHandler___c;
}
namespace VROSC {
class SaveLoadManager;
}
// Forward declare root types
namespace VROSC {
class OldSavesHandler;
}
namespace VROSC {
class OldSavesHandler___c;
}
namespace VROSC {
struct OldSavesHandler__Execute_d__3;
}
namespace VROSC {
struct OldSavesHandler__PackageSession_d__6;
}
namespace VROSC {
struct OldSavesHandler__UpdateSessionsFiles_d__5;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OldSavesHandler);
MARK_REF_PTR_T(::VROSC::OldSavesHandler___c);
MARK_VAL_T(::VROSC::OldSavesHandler__Execute_d__3);
MARK_VAL_T(::VROSC::OldSavesHandler__PackageSession_d__6);
MARK_VAL_T(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OldSavesHandler/<>c
class CORDL_TYPE OldSavesHandler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::OldSavesHandler___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Action_1<::StringW>*  __9__6_0;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Action_2<::StringW,::VROSC::Error>*  __9__6_1;

static inline ::VROSC::OldSavesHandler___c* New_ctor() ;

/// @brief Method <PackageSession>b__6_0, addr 0x1849e60, size 0x8c, virtual false, abstract: false, final false
inline void _PackageSession_b__6_0(::StringW  s) ;

/// @brief Method <PackageSession>b__6_1, addr 0x1849eec, size 0x8c, virtual false, abstract: false, final false
inline void _PackageSession_b__6_1(::StringW  s, ::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x1849e58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::OldSavesHandler___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__6_0() ;

static inline ::System::Action_2<::StringW,::VROSC::Error>* getStaticF___9__6_1() ;

static inline void setStaticF___9(::VROSC::OldSavesHandler___c*  value) ;

static inline void setStaticF___9__6_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__6_1(::System::Action_2<::StringW,::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OldSavesHandler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OldSavesHandler___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OldSavesHandler___c(OldSavesHandler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OldSavesHandler___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OldSavesHandler___c(OldSavesHandler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OldSavesHandler___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.OldSavesHandler/<Execute>d__3
struct CORDL_TYPE OldSavesHandler__Execute_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1849f78, size 0x1e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184a158, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OldSavesHandler__Execute_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr OldSavesHandler__Execute_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::OldSavesHandler*  __4__this;

/// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OldSavesHandler__Execute_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__Execute_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__Execute_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__Execute_d__3, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__Execute_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OldSavesHandler__Execute_d__3, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.OldSavesHandler/<PackageSession>d__6
struct CORDL_TYPE OldSavesHandler__PackageSession_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184a164, size 0x338, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184a584, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OldSavesHandler__PackageSession_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr OldSavesHandler__PackageSession_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::StringW  sessionName, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::OldSavesHandler*  __4__this;

/// @brief Field sessionName, offset: 0x28, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OldSavesHandler__PackageSession_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__PackageSession_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__PackageSession_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__PackageSession_d__6, sessionName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__PackageSession_d__6, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OldSavesHandler__PackageSession_d__6, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.OldSavesHandler/<UpdateSessionsFiles>d__5
struct CORDL_TYPE OldSavesHandler__UpdateSessionsFiles_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x184a5ec, size 0x98c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184af78, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OldSavesHandler__UpdateSessionsFiles_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::OldSavesHandler*", modifiers: "", def_value: None }, CppParam { name: "_sessionsToRemove_5__2", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Collections::Generic::List_1_Enumerator<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr OldSavesHandler__UpdateSessionsFiles_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::OldSavesHandler*  __4__this, ::System::Collections::Generic::List_1<::StringW>*  _sessionsToRemove_5__2, ::System::Collections::Generic::List_1_Enumerator<::StringW>  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::OldSavesHandler*  __4__this;

/// @brief Field <sessionsToRemove>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  _sessionsToRemove_5__2;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::StringW>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, _sessionsToRemove_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OldSavesHandler
class CORDL_TYPE OldSavesHandler : public ::System::Object {
public:
// Declarations
using _Execute_d__3 = ::VROSC::OldSavesHandler__Execute_d__3;

using _PackageSession_d__6 = ::VROSC::OldSavesHandler__PackageSession_d__6;

using _UpdateSessionsFiles_d__5 = ::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5;

using __c = ::VROSC::OldSavesHandler___c;

/// @brief Field _localSessionsDataController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localSessionsDataController, put=__cordl_internal_set__localSessionsDataController)) ::VROSC::LocalSessionsDataController*  _localSessionsDataController;

/// @brief Field _saveLoadManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveLoadManager, put=__cordl_internal_set__saveLoadManager)) ::UnityW<::VROSC::SaveLoadManager>  _saveLoadManager;

/// @brief Method Execute, addr 0x1849328, size 0x98, virtual false, abstract: false, final false
inline void Execute(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method FindUnresgisteredSessions, addr 0x18493c0, size 0x8a4, virtual false, abstract: false, final false
inline void FindUnresgisteredSessions() ;

static inline ::VROSC::OldSavesHandler* New_ctor(::VROSC::SaveLoadManager*  saveLoadManager, ::VROSC::LocalSessionsDataController*  localSessionsDataController) ;

/// @brief Method PackageSession, addr 0x1849d28, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* PackageSession(::StringW  sessionName) ;

/// @brief Method UpdateSessionsFiles, addr 0x1849c64, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateSessionsFiles() ;

constexpr ::VROSC::LocalSessionsDataController* const& __cordl_internal_get__localSessionsDataController() const;

constexpr ::VROSC::LocalSessionsDataController*& __cordl_internal_get__localSessionsDataController() ;

constexpr ::UnityW<::VROSC::SaveLoadManager> const& __cordl_internal_get__saveLoadManager() const;

constexpr ::UnityW<::VROSC::SaveLoadManager>& __cordl_internal_get__saveLoadManager() ;

constexpr void __cordl_internal_set__localSessionsDataController(::VROSC::LocalSessionsDataController*  value) ;

constexpr void __cordl_internal_set__saveLoadManager(::UnityW<::VROSC::SaveLoadManager>  value) ;

/// @brief Method .ctor, addr 0x18492fc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::SaveLoadManager*  saveLoadManager, ::VROSC::LocalSessionsDataController*  localSessionsDataController) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OldSavesHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OldSavesHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OldSavesHandler(OldSavesHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OldSavesHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OldSavesHandler(OldSavesHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{419};

/// @brief Field _localSessionsDataController, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LocalSessionsDataController*  ____localSessionsDataController;

/// @brief Field _saveLoadManager, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::SaveLoadManager>  ____saveLoadManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OldSavesHandler, ____localSessionsDataController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::OldSavesHandler, ____saveLoadManager) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OldSavesHandler, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OldSavesHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OldSavesHandler*, "VROSC", "OldSavesHandler");
NEED_NO_BOX(::VROSC::OldSavesHandler___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OldSavesHandler___c*, "VROSC", "OldSavesHandler/<>c");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OldSavesHandler__Execute_d__3, "VROSC", "OldSavesHandler/<Execute>d__3");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OldSavesHandler__PackageSession_d__6, "VROSC", "OldSavesHandler/<PackageSession>d__6");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OldSavesHandler__UpdateSessionsFiles_d__5, "VROSC", "OldSavesHandler/<UpdateSessionsFiles>d__5");
