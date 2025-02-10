#pragma once
// IWYU pragma private; include "Firebase/Auth/FirebaseAuth.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__InitResult_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseAuth)
namespace Firebase::Auth {
class FirebaseAuth_StateChangedDelegate;
}
namespace Firebase::Auth {
class FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB;
}
namespace Firebase::Auth {
class FirebaseAuth__ForwardStateChange_c__AnonStorey3;
}
namespace Firebase::Auth {
class FirebaseAuth__ForwardStateChange_c__AnonStorey4;
}
namespace Firebase::Auth {
class FirebaseAuth__GetAuth_c__AnonStorey1;
}
namespace Firebase::Auth {
class FirebaseAuth__GetAuth_c__AnonStorey2;
}
namespace Firebase::Auth {
class FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA;
}
namespace Firebase::Auth {
class FirebaseUser;
}
namespace Firebase {
class FirebaseApp;
}
namespace Firebase {
struct InitResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Auth {
class FirebaseAuth;
}
namespace Firebase::Auth {
class FirebaseAuth_StateChangedDelegate;
}
namespace Firebase::Auth {
class FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB;
}
namespace Firebase::Auth {
class FirebaseAuth__ForwardStateChange_c__AnonStorey3;
}
namespace Firebase::Auth {
class FirebaseAuth__ForwardStateChange_c__AnonStorey4;
}
namespace Firebase::Auth {
class FirebaseAuth__GetAuth_c__AnonStorey1;
}
namespace Firebase::Auth {
class FirebaseAuth__GetAuth_c__AnonStorey2;
}
namespace Firebase::Auth {
class FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth_StateChangedDelegate);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2);
MARK_REF_PTR_T(::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA);
// Dependencies System.MulticastDelegate
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/StateChangedDelegate
class CORDL_TYPE FirebaseAuth_StateChangedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18fb694, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  authCPtr) ;

static inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f9e98, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth_StateChangedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth_StateChangedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth_StateChangedDelegate(FirebaseAuth_StateChangedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth_StateChangedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth_StateChangedDelegate(FirebaseAuth_StateChangedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth_StateChangedDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
class CORDL_TYPE FirebaseAuth__GetAuth_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
/// @brief Field app, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_app, put=__cordl_internal_set_app)) ::Firebase::FirebaseApp*  app;

/// @brief Field auth, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_auth, put=__cordl_internal_set_auth)) ::Firebase::Auth::FirebaseAuth*  auth;

static inline ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1* New_ctor() ;

constexpr ::Firebase::FirebaseApp* const& __cordl_internal_get_app() const;

constexpr ::Firebase::FirebaseApp*& __cordl_internal_get_app() ;

constexpr ::Firebase::Auth::FirebaseAuth* const& __cordl_internal_get_auth() const;

constexpr ::Firebase::Auth::FirebaseAuth*& __cordl_internal_get_auth() ;

constexpr void __cordl_internal_set_app(::Firebase::FirebaseApp*  value) ;

constexpr void __cordl_internal_set_auth(::Firebase::Auth::FirebaseAuth*  value) ;

/// @brief Method .ctor, addr 0x18f9e88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__GetAuth_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__GetAuth_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__GetAuth_c__AnonStorey1(FirebaseAuth__GetAuth_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__GetAuth_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__GetAuth_c__AnonStorey1(FirebaseAuth__GetAuth_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12243};

/// @brief Field app, offset: 0x10, size: 0x8, def value: None
 ::Firebase::FirebaseApp*  ___app;

/// @brief Field auth, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth*  ___auth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1, ___app) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1, ___auth) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies Firebase.InitResult, System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey2
class CORDL_TYPE FirebaseAuth__GetAuth_c__AnonStorey2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__ref$1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__ref$1, put=__cordl_internal_set___f__ref$1)) ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*  __f__ref$1;

/// @brief Field init_result, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_init_result, put=__cordl_internal_set_init_result)) ::Firebase::InitResult  init_result;

static inline ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2* New_ctor() ;

constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1* const& __cordl_internal_get___f__ref$1() const;

constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*& __cordl_internal_get___f__ref$1() ;

constexpr ::Firebase::InitResult const& __cordl_internal_get_init_result() const;

constexpr ::Firebase::InitResult& __cordl_internal_get_init_result() ;

constexpr void __cordl_internal_set___f__ref$1(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*  value) ;

constexpr void __cordl_internal_set_init_result(::Firebase::InitResult  value) ;

/// @brief Method <>m__0, addr 0x18fb6a8, size 0xb4, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x18f9e90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__GetAuth_c__AnonStorey2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__GetAuth_c__AnonStorey2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__GetAuth_c__AnonStorey2(FirebaseAuth__GetAuth_c__AnonStorey2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__GetAuth_c__AnonStorey2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__GetAuth_c__AnonStorey2(FirebaseAuth__GetAuth_c__AnonStorey2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12244};

/// @brief Field init_result, offset: 0x10, size: 0x4, def value: None
 ::Firebase::InitResult  ___init_result;

/// @brief Field <>f__ref$1, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*  _____f__ref$1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2, ___init_result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2, _____f__ref$1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey3
class CORDL_TYPE FirebaseAuth__ForwardStateChange_c__AnonStorey3 : public ::System::Object {
public:
// Declarations
/// @brief Field stateChangeClosure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateChangeClosure, put=__cordl_internal_set_stateChangeClosure)) ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  stateChangeClosure;

static inline ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3* New_ctor() ;

constexpr ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* const& __cordl_internal_get_stateChangeClosure() const;

constexpr ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*& __cordl_internal_get_stateChangeClosure() ;

constexpr void __cordl_internal_set_stateChangeClosure(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value) ;

/// @brief Method .ctor, addr 0x18fa35c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__ForwardStateChange_c__AnonStorey3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__ForwardStateChange_c__AnonStorey3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__ForwardStateChange_c__AnonStorey3(FirebaseAuth__ForwardStateChange_c__AnonStorey3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__ForwardStateChange_c__AnonStorey3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__ForwardStateChange_c__AnonStorey3(FirebaseAuth__ForwardStateChange_c__AnonStorey3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12245};

/// @brief Field stateChangeClosure, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  ___stateChangeClosure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3, ___stateChangeClosure) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<ForwardStateChange>c__AnonStorey4
class CORDL_TYPE FirebaseAuth__ForwardStateChange_c__AnonStorey4 : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__ref$3, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__ref$3, put=__cordl_internal_set___f__ref$3)) ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*  __f__ref$3;

/// @brief Field auth, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_auth, put=__cordl_internal_set_auth)) ::Firebase::Auth::FirebaseAuth*  auth;

static inline ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4* New_ctor() ;

constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3* const& __cordl_internal_get___f__ref$3() const;

constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*& __cordl_internal_get___f__ref$3() ;

constexpr ::Firebase::Auth::FirebaseAuth* const& __cordl_internal_get_auth() const;

constexpr ::Firebase::Auth::FirebaseAuth*& __cordl_internal_get_auth() ;

constexpr void __cordl_internal_set___f__ref$3(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*  value) ;

constexpr void __cordl_internal_set_auth(::Firebase::Auth::FirebaseAuth*  value) ;

/// @brief Method <>m__0, addr 0x18fb75c, size 0x30, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x18fa364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__ForwardStateChange_c__AnonStorey4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__ForwardStateChange_c__AnonStorey4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__ForwardStateChange_c__AnonStorey4(FirebaseAuth__ForwardStateChange_c__AnonStorey4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__ForwardStateChange_c__AnonStorey4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__ForwardStateChange_c__AnonStorey4(FirebaseAuth__ForwardStateChange_c__AnonStorey4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12246};

/// @brief Field auth, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth*  ___auth;

/// @brief Field <>f__ref$3, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*  _____f__ref$3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4, ___auth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4, _____f__ref$3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStoreyA
class CORDL_TYPE FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA : public ::System::Object {
public:
// Declarations
/// @brief Field $this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Auth::FirebaseAuth*  $this;

/// @brief Field taskCompletionSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskCompletionSource, put=__cordl_internal_set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  taskCompletionSource;

static inline ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA* New_ctor() ;

constexpr ::Firebase::Auth::FirebaseAuth* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Auth::FirebaseAuth*& __cordl_internal_get_$this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* const& __cordl_internal_get_taskCompletionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*& __cordl_internal_get_taskCompletionSource() ;

constexpr void __cordl_internal_set_$this(::Firebase::Auth::FirebaseAuth*  value) ;

constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  value) ;

/// @brief Method <>m__0, addr 0x18fb78c, size 0x20, virtual false, abstract: false, final false
inline void __m__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task) ;

/// @brief Method .ctor, addr 0x18fa9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA(FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA(FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12247};

/// @brief Field taskCompletionSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  ___taskCompletionSource;

/// @brief Field $this, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA, ___taskCompletionSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA, ___$this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStoreyB
class CORDL_TYPE FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB : public ::System::Object {
public:
// Declarations
/// @brief Field $this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Auth::FirebaseAuth*  $this;

/// @brief Field taskCompletionSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskCompletionSource, put=__cordl_internal_set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  taskCompletionSource;

static inline ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB* New_ctor() ;

constexpr ::Firebase::Auth::FirebaseAuth* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Auth::FirebaseAuth*& __cordl_internal_get_$this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* const& __cordl_internal_get_taskCompletionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*& __cordl_internal_get_taskCompletionSource() ;

constexpr void __cordl_internal_set_$this(::Firebase::Auth::FirebaseAuth*  value) ;

constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  value) ;

/// @brief Method <>m__0, addr 0x18fb7ac, size 0x20, virtual false, abstract: false, final false
inline void __m__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task) ;

/// @brief Method .ctor, addr 0x18fac48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB(FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB(FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12248};

/// @brief Field taskCompletionSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  ___taskCompletionSource;

/// @brief Field $this, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB, ___taskCompletionSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB, ___$this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.IDisposable, System.IntPtr, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseAuth
class CORDL_TYPE FirebaseAuth : public ::System::Object {
public:
// Declarations
using StateChangedDelegate = ::Firebase::Auth::FirebaseAuth_StateChangedDelegate;

using _CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB = ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB;

using _ForwardStateChange_c__AnonStorey3 = ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3;

using _ForwardStateChange_c__AnonStorey4 = ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4;

using _GetAuth_c__AnonStorey1 = ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1;

using _GetAuth_c__AnonStorey2 = ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2;

using _SignInWithEmailAndPasswordAsync_c__AnonStoreyA = ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA;

 __declspec(property(get=get_CurrentUser)) ::Firebase::Auth::FirebaseUser*  CurrentUser;

 __declspec(property(get=get_CurrentUserInternal)) ::Firebase::Auth::FirebaseUser*  CurrentUserInternal;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  __f__am$cache0;

/// @brief Field <>f__am$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache1, put=setStaticF___f__am$cache1)) ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  __f__am$cache1;

/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  __f__mg$cache0;

/// @brief Field <>f__mg$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache1, put=setStaticF___f__mg$cache1)) ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  __f__mg$cache1;

/// @brief Field appCPtr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_appCPtr, put=__cordl_internal_set_appCPtr)) ::System::IntPtr  appCPtr;

/// @brief Field appCPtrToAuth, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_appCPtrToAuth, put=setStaticF_appCPtrToAuth)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*  appCPtrToAuth;

/// @brief Field appProxy, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_appProxy, put=__cordl_internal_set_appProxy)) ::Firebase::FirebaseApp*  appProxy;

/// @brief Field authStateListener, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_authStateListener, put=__cordl_internal_set_authStateListener)) ::System::IntPtr  authStateListener;

/// @brief Field currentUser, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentUser, put=__cordl_internal_set_currentUser)) ::Firebase::Auth::FirebaseUser*  currentUser;

/// @brief Field idTokenChangedImpl, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_idTokenChangedImpl, put=__cordl_internal_set_idTokenChangedImpl)) ::System::EventHandler*  idTokenChangedImpl;

/// @brief Field idTokenListener, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_idTokenListener, put=__cordl_internal_set_idTokenListener)) ::System::IntPtr  idTokenListener;

/// @brief Field persistentLoaded, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_persistentLoaded, put=__cordl_internal_set_persistentLoaded)) bool  persistentLoaded;

/// @brief Field stateChangedImpl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateChangedImpl, put=__cordl_internal_set_stateChangedImpl)) ::System::EventHandler*  stateChangedImpl;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CompleteFirebaseUserTask, addr 0x18fad3c, size 0x120, virtual false, abstract: false, final false
inline void CompleteFirebaseUserTask(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  taskCompletionSource) ;

/// @brief Method CreateUserWithEmailAndPasswordAsync, addr 0x18faae4, size 0x164, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* CreateUserWithEmailAndPasswordAsync(::StringW  email, ::StringW  password) ;

/// @brief Method CreateUserWithEmailAndPasswordInternalAsync, addr 0x18fac50, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* CreateUserWithEmailAndPasswordInternalAsync(::StringW  email, ::StringW  password) ;

/// @brief Method Dispose, addr 0x18f9538, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeInternal, addr 0x18f953c, size 0x360, virtual false, abstract: false, final false
inline void DisposeInternal() ;

/// @brief Method Finalize, addr 0x18f94a4, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ForwardStateChange, addr 0x18fa184, size 0x1d8, virtual false, abstract: false, final false
static inline void ForwardStateChange(::System::IntPtr  appCPtr, ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  stateChangeClosure) ;

/// @brief Method GetAuth, addr 0x18f9a38, size 0x450, virtual false, abstract: false, final false
static inline ::Firebase::Auth::FirebaseAuth* GetAuth(::Firebase::FirebaseApp*  app) ;

/// @brief Method GetAuthInternal, addr 0x18fb214, size 0x1c4, virtual false, abstract: false, final false
static inline ::Firebase::Auth::FirebaseAuth* GetAuthInternal(::Firebase::FirebaseApp*  app, ::ByRef<::Firebase::InitResult>  init_result_out) ;

/// @brief Method IdTokenChangedFunction, addr 0x18f9374, size 0xdc, virtual false, abstract: false, final false
static inline void IdTokenChangedFunction(::System::IntPtr  appCPtr) ;

static inline ::Firebase::Auth::FirebaseAuth* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method OnAppDisposed, addr 0x18f9f24, size 0x4, virtual false, abstract: false, final false
inline void OnAppDisposed(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method ProxyFromAppCPtr, addr 0x18f989c, size 0x148, virtual false, abstract: false, final false
static inline ::Firebase::Auth::FirebaseAuth* ProxyFromAppCPtr(::System::IntPtr  appCPtr) ;

/// @brief Method ReleaseReferenceInternal, addr 0x18fa0c4, size 0xc0, virtual false, abstract: false, final false
static inline void ReleaseReferenceInternal(::Firebase::Auth::FirebaseAuth*  instance) ;

/// @brief Method SendPasswordResetEmailAsync, addr 0x18fb154, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendPasswordResetEmailAsync(::StringW  email) ;

/// @brief Method SignInWithEmailAndPasswordAsync, addr 0x18fa88c, size 0x164, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* SignInWithEmailAndPasswordAsync(::StringW  email, ::StringW  password) ;

/// @brief Method SignInWithEmailAndPasswordInternalAsync, addr 0x18fa9f8, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* SignInWithEmailAndPasswordInternalAsync(::StringW  email, ::StringW  password) ;

/// @brief Method SignOut, addr 0x18fb0c4, size 0x90, virtual false, abstract: false, final false
inline void SignOut() ;

/// @brief Method StateChangedFunction, addr 0x18f9298, size 0xdc, virtual false, abstract: false, final false
static inline void StateChangedFunction(::System::IntPtr  appCPtr) ;

/// @brief Method ThrowIfNull, addr 0x18f99e4, size 0x54, virtual false, abstract: false, final false
inline void ThrowIfNull() ;

/// @brief Method UpdateCurrentUser, addr 0x18fa5c4, size 0x150, virtual false, abstract: false, final false
inline ::Firebase::Auth::FirebaseUser* UpdateCurrentUser(::Firebase::Auth::FirebaseUser*  proxy) ;

/// @brief Method <IdTokenChangedFunction>m__1, addr 0x18fb60c, size 0x88, virtual false, abstract: false, final false
static inline void _IdTokenChangedFunction_m__1(::Firebase::Auth::FirebaseAuth*  auth) ;

/// @brief Method <StateChangedFunction>m__0, addr 0x18fb4b0, size 0x15c, virtual false, abstract: false, final false
static inline void _StateChangedFunction_m__0(::Firebase::Auth::FirebaseAuth*  auth) ;

constexpr ::System::IntPtr const& __cordl_internal_get_appCPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_appCPtr() ;

constexpr ::Firebase::FirebaseApp* const& __cordl_internal_get_appProxy() const;

constexpr ::Firebase::FirebaseApp*& __cordl_internal_get_appProxy() ;

constexpr ::System::IntPtr const& __cordl_internal_get_authStateListener() const;

constexpr ::System::IntPtr& __cordl_internal_get_authStateListener() ;

constexpr ::Firebase::Auth::FirebaseUser* const& __cordl_internal_get_currentUser() const;

constexpr ::Firebase::Auth::FirebaseUser*& __cordl_internal_get_currentUser() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_idTokenChangedImpl() const;

constexpr ::System::EventHandler*& __cordl_internal_get_idTokenChangedImpl() ;

constexpr ::System::IntPtr const& __cordl_internal_get_idTokenListener() const;

constexpr ::System::IntPtr& __cordl_internal_get_idTokenListener() ;

constexpr bool const& __cordl_internal_get_persistentLoaded() const;

constexpr bool& __cordl_internal_get_persistentLoaded() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_stateChangedImpl() const;

constexpr ::System::EventHandler*& __cordl_internal_get_stateChangedImpl() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_appCPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_appProxy(::Firebase::FirebaseApp*  value) ;

constexpr void __cordl_internal_set_authStateListener(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_currentUser(::Firebase::Auth::FirebaseUser*  value) ;

constexpr void __cordl_internal_set_idTokenChangedImpl(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_idTokenListener(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_persistentLoaded(bool  value) ;

constexpr void __cordl_internal_set_stateChangedImpl(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18f9450, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method add_StateChanged, addr 0x18fa3f0, size 0x98, virtual false, abstract: false, final false
inline void add_StateChanged(::System::EventHandler*  value) ;

/// @brief Method add_stateChangedImpl, addr 0x18fa488, size 0x9c, virtual false, abstract: false, final false
inline void add_stateChangedImpl(::System::EventHandler*  value) ;

/// @brief Method getCPtr, addr 0x18f8fdc, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::FirebaseAuth*  obj) ;

static inline ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* getStaticF___f__am$cache0() ;

static inline ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* getStaticF___f__am$cache1() ;

static inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* getStaticF___f__mg$cache0() ;

static inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* getStaticF___f__mg$cache1() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>* getStaticF_appCPtrToAuth() ;

/// @brief Method get_CurrentUser, addr 0x18fa758, size 0x38, virtual false, abstract: false, final false
inline ::Firebase::Auth::FirebaseUser* get_CurrentUser() ;

/// @brief Method get_CurrentUserInternal, addr 0x18fa790, size 0xfc, virtual false, abstract: false, final false
inline ::Firebase::Auth::FirebaseUser* get_CurrentUserInternal() ;

/// @brief Method get_DefaultInstance, addr 0x18fa36c, size 0x84, virtual false, abstract: false, final false
static inline ::Firebase::Auth::FirebaseAuth* get_DefaultInstance() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_StateChanged, addr 0x18fa524, size 0x4, virtual false, abstract: false, final false
inline void remove_StateChanged(::System::EventHandler*  value) ;

/// @brief Method remove_stateChangedImpl, addr 0x18fa528, size 0x9c, virtual false, abstract: false, final false
inline void remove_stateChangedImpl(::System::EventHandler*  value) ;

static inline void setStaticF___f__am$cache0(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value) ;

static inline void setStaticF___f__am$cache1(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value) ;

static inline void setStaticF___f__mg$cache0(::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  value) ;

static inline void setStaticF___f__mg$cache1(::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  value) ;

static inline void setStaticF_appCPtrToAuth(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAuth() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAuth(FirebaseAuth && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAuth", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAuth(FirebaseAuth const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12249};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field appProxy, offset: 0x28, size: 0x8, def value: None
 ::Firebase::FirebaseApp*  ___appProxy;

/// @brief Field appCPtr, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  ___appCPtr;

/// @brief Field authStateListener, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___authStateListener;

/// @brief Field idTokenListener, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  ___idTokenListener;

/// @brief Field currentUser, offset: 0x48, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseUser*  ___currentUser;

/// @brief Field stateChangedImpl, offset: 0x50, size: 0x8, def value: None
 ::System::EventHandler*  ___stateChangedImpl;

/// @brief Field idTokenChangedImpl, offset: 0x58, size: 0x8, def value: None
 ::System::EventHandler*  ___idTokenChangedImpl;

/// @brief Field persistentLoaded, offset: 0x60, size: 0x1, def value: None
 bool  ___persistentLoaded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___appProxy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___appCPtr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___authStateListener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___idTokenListener) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___currentUser) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___stateChangedImpl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___idTokenChangedImpl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseAuth, ___persistentLoaded) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseAuth, 0x68>, "Size mismatch!");

} // namespace end def Firebase::Auth
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth*, "Firebase.Auth", "FirebaseAuth");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth_StateChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth_StateChangedDelegate*, "Firebase.Auth", "FirebaseAuth/StateChangedDelegate");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*, "Firebase.Auth", "FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStoreyB");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*, "Firebase.Auth", "FirebaseAuth/<ForwardStateChange>c__AnonStorey3");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*, "Firebase.Auth", "FirebaseAuth/<ForwardStateChange>c__AnonStorey4");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*, "Firebase.Auth", "FirebaseAuth/<GetAuth>c__AnonStorey1");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*, "Firebase.Auth", "FirebaseAuth/<GetAuth>c__AnonStorey2");
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*, "Firebase.Auth", "FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStoreyA");
