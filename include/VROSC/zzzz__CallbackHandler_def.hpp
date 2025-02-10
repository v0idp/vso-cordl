#pragma once
// IWYU pragma private; include "VROSC/CallbackHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackHandler)
namespace Firebase::Firestore {
class DocumentSnapshot;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
namespace VROSC {
class CallbackHandler_ErrorCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreCollectionDictionaryReadCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreCollectionReadCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreDocumentReadCallback;
}
namespace VROSC {
class CallbackHandler_LoginUserWithEmailCallback;
}
namespace VROSC {
class CallbackHandler_StringCallback;
}
namespace VROSC {
class CallbackHandler_UserLoginAnonymouslyCallback;
}
namespace VROSC {
struct CallbackHandler__PollInProgressRequests_d__25;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class CallbackHandler;
}
namespace VROSC {
class CallbackHandler_ErrorCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreCollectionDictionaryReadCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreCollectionReadCallback;
}
namespace VROSC {
class CallbackHandler_FirestoreDocumentReadCallback;
}
namespace VROSC {
class CallbackHandler_LoginUserWithEmailCallback;
}
namespace VROSC {
class CallbackHandler_StringCallback;
}
namespace VROSC {
class CallbackHandler_UserLoginAnonymouslyCallback;
}
namespace VROSC {
struct CallbackHandler__PollInProgressRequests_d__25;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CallbackHandler);
MARK_REF_PTR_T(::VROSC::CallbackHandler_ErrorCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_FirestoreCollectionReadCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_FirestoreDocumentReadCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_LoginUserWithEmailCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_StringCallback);
MARK_REF_PTR_T(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback);
MARK_VAL_T(::VROSC::CallbackHandler__PollInProgressRequests_d__25);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/LoginUserWithEmailCallback
class CORDL_TYPE CallbackHandler_LoginUserWithEmailCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_2<::StringW,bool>*  Action;

/// @brief Field IsVerified, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsVerified, put=__cordl_internal_set_IsVerified)) bool  IsVerified;

/// @brief Field UserId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::VROSC::CallbackHandler_LoginUserWithEmailCallback* New_ctor() ;

constexpr ::System::Action_2<::StringW,bool>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_2<::StringW,bool>*& __cordl_internal_get_Action() ;

constexpr bool const& __cordl_internal_get_IsVerified() const;

constexpr bool& __cordl_internal_get_IsVerified() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_Action(::System::Action_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_IsVerified(bool  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0x183085c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_LoginUserWithEmailCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_LoginUserWithEmailCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_LoginUserWithEmailCallback(CallbackHandler_LoginUserWithEmailCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_LoginUserWithEmailCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_LoginUserWithEmailCallback(CallbackHandler_LoginUserWithEmailCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{320};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<::StringW,bool>*  ___Action;

/// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UserId;

/// @brief Field IsVerified, offset: 0x20, size: 0x1, def value: None
 bool  ___IsVerified;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_LoginUserWithEmailCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_LoginUserWithEmailCallback, ___UserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_LoginUserWithEmailCallback, ___IsVerified) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_LoginUserWithEmailCallback, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/UserLoginAnonymouslyCallback
class CORDL_TYPE CallbackHandler_UserLoginAnonymouslyCallback : public ::System::Object {
public:
// Declarations
/// @brief Field AccessToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccessToken, put=__cordl_internal_set_AccessToken)) ::StringW  AccessToken;

/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_3<::StringW,::StringW,::StringW>*  Action;

/// @brief Field RefreshToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RefreshToken, put=__cordl_internal_set_RefreshToken)) ::StringW  RefreshToken;

/// @brief Field UserId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::VROSC::CallbackHandler_UserLoginAnonymouslyCallback* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AccessToken() const;

constexpr ::StringW& __cordl_internal_get_AccessToken() ;

constexpr ::System::Action_3<::StringW,::StringW,::StringW>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_3<::StringW,::StringW,::StringW>*& __cordl_internal_get_Action() ;

constexpr ::StringW const& __cordl_internal_get_RefreshToken() const;

constexpr ::StringW& __cordl_internal_get_RefreshToken() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_AccessToken(::StringW  value) ;

constexpr void __cordl_internal_set_Action(::System::Action_3<::StringW,::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_RefreshToken(::StringW  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1830938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_UserLoginAnonymouslyCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_UserLoginAnonymouslyCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_UserLoginAnonymouslyCallback(CallbackHandler_UserLoginAnonymouslyCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_UserLoginAnonymouslyCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_UserLoginAnonymouslyCallback(CallbackHandler_UserLoginAnonymouslyCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{321};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_3<::StringW,::StringW,::StringW>*  ___Action;

/// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UserId;

/// @brief Field AccessToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AccessToken;

/// @brief Field RefreshToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RefreshToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback, ___UserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback, ___AccessToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback, ___RefreshToken) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_UserLoginAnonymouslyCallback, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/FirestoreCollectionReadCallback
class CORDL_TYPE CallbackHandler_FirestoreCollectionReadCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  Action;

/// @brief Field Data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  Data;

static inline ::VROSC::CallbackHandler_FirestoreCollectionReadCallback* New_ctor() ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*& __cordl_internal_get_Action() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Action(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  value) ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  value) ;

/// @brief Method .ctor, addr 0x1830a00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_FirestoreCollectionReadCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreCollectionReadCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_FirestoreCollectionReadCallback(CallbackHandler_FirestoreCollectionReadCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreCollectionReadCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_FirestoreCollectionReadCallback(CallbackHandler_FirestoreCollectionReadCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{322};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  ___Action;

/// @brief Field Data, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_FirestoreCollectionReadCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_FirestoreCollectionReadCallback, ___Data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_FirestoreCollectionReadCallback, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/FirestoreCollectionDictionaryReadCallback
class CORDL_TYPE CallbackHandler_FirestoreCollectionDictionaryReadCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  Action;

/// @brief Field Data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  Data;

static inline ::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback* New_ctor() ;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& __cordl_internal_get_Action() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Action(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value) ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

/// @brief Method .ctor, addr 0x1830ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_FirestoreCollectionDictionaryReadCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreCollectionDictionaryReadCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_FirestoreCollectionDictionaryReadCallback(CallbackHandler_FirestoreCollectionDictionaryReadCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreCollectionDictionaryReadCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_FirestoreCollectionDictionaryReadCallback(CallbackHandler_FirestoreCollectionDictionaryReadCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{323};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  ___Action;

/// @brief Field Data, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback, ___Data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/FirestoreDocumentReadCallback
class CORDL_TYPE CallbackHandler_FirestoreDocumentReadCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  Action;

/// @brief Field Data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Data;

static inline ::VROSC::CallbackHandler_FirestoreDocumentReadCallback* New_ctor() ;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& __cordl_internal_get_Action() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Action(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x1830b90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_FirestoreDocumentReadCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreDocumentReadCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_FirestoreDocumentReadCallback(CallbackHandler_FirestoreDocumentReadCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_FirestoreDocumentReadCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_FirestoreDocumentReadCallback(CallbackHandler_FirestoreDocumentReadCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{324};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  ___Action;

/// @brief Field Data, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_FirestoreDocumentReadCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_FirestoreDocumentReadCallback, ___Data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_FirestoreDocumentReadCallback, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/StringCallback
class CORDL_TYPE CallbackHandler_StringCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_1<::StringW>*  Action;

/// @brief Field Argument, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Argument, put=__cordl_internal_set_Argument)) ::StringW  Argument;

static inline ::VROSC::CallbackHandler_StringCallback* New_ctor() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_Action() ;

constexpr ::StringW const& __cordl_internal_get_Argument() const;

constexpr ::StringW& __cordl_internal_get_Argument() ;

constexpr void __cordl_internal_set_Action(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Argument(::StringW  value) ;

/// @brief Method .ctor, addr 0x18306bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_StringCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_StringCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_StringCallback(CallbackHandler_StringCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_StringCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_StringCallback(CallbackHandler_StringCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{325};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___Action;

/// @brief Field Argument, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Argument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_StringCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_StringCallback, ___Argument) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_StringCallback, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.Error
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler/ErrorCallback
class CORDL_TYPE CallbackHandler_ErrorCallback : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Action, put=__cordl_internal_set_Action)) ::System::Action_1<::VROSC::Error>*  Action;

/// @brief Field Error, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::VROSC::Error  Error;

static inline ::VROSC::CallbackHandler_ErrorCallback* New_ctor() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_Action() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_Action() ;

constexpr ::VROSC::Error const& __cordl_internal_get_Error() const;

constexpr ::VROSC::Error& __cordl_internal_get_Error() ;

constexpr void __cordl_internal_set_Action(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_Error(::VROSC::Error  value) ;

/// @brief Method .ctor, addr 0x1830788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler_ErrorCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_ErrorCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler_ErrorCallback(CallbackHandler_ErrorCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler_ErrorCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler_ErrorCallback(CallbackHandler_ErrorCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{326};

/// @brief Field Action, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___Action;

/// @brief Field Error, offset: 0x18, size: 0x4, def value: None
 ::VROSC::Error  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler_ErrorCallback, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler_ErrorCallback, ___Error) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler_ErrorCallback, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.CallbackHandler/<PollInProgressRequests>d__25
struct CORDL_TYPE CallbackHandler__PollInProgressRequests_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1830e3c, size 0x8b4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18316f0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler__PollInProgressRequests_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CallbackHandler__PollInProgressRequests_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CallbackHandler__PollInProgressRequests_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler__PollInProgressRequests_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::CallbackHandler__PollInProgressRequests_d__25, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler__PollInProgressRequests_d__25, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CallbackHandler
class CORDL_TYPE CallbackHandler : public ::System::Object {
public:
// Declarations
using ErrorCallback = ::VROSC::CallbackHandler_ErrorCallback;

using FirestoreCollectionDictionaryReadCallback = ::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback;

using FirestoreCollectionReadCallback = ::VROSC::CallbackHandler_FirestoreCollectionReadCallback;

using FirestoreDocumentReadCallback = ::VROSC::CallbackHandler_FirestoreDocumentReadCallback;

using LoginUserWithEmailCallback = ::VROSC::CallbackHandler_LoginUserWithEmailCallback;

using StringCallback = ::VROSC::CallbackHandler_StringCallback;

using UserLoginAnonymouslyCallback = ::VROSC::CallbackHandler_UserLoginAnonymouslyCallback;

using _PollInProgressRequests_d__25 = ::VROSC::CallbackHandler__PollInProgressRequests_d__25;

/// @brief Field _emptyCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__emptyCallbacks, put=setStaticF__emptyCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*  _emptyCallbacks;

/// @brief Field _errorCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorCallbacks, put=setStaticF__errorCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_ErrorCallback*>*  _errorCallbacks;

/// @brief Field _firestoreCollectionDictionaryReadCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__firestoreCollectionDictionaryReadCallbacks, put=setStaticF__firestoreCollectionDictionaryReadCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback*>*  _firestoreCollectionDictionaryReadCallbacks;

/// @brief Field _firestoreCollectionReadCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__firestoreCollectionReadCallbacks, put=setStaticF__firestoreCollectionReadCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionReadCallback*>*  _firestoreCollectionReadCallbacks;

/// @brief Field _firestoreDocumentReadCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__firestoreDocumentReadCallbacks, put=setStaticF__firestoreDocumentReadCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreDocumentReadCallback*>*  _firestoreDocumentReadCallbacks;

/// @brief Field _loginUserWithEmailCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loginUserWithEmailCallbacks, put=setStaticF__loginUserWithEmailCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_LoginUserWithEmailCallback*>*  _loginUserWithEmailCallbacks;

/// @brief Field _stringCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stringCallbacks, put=setStaticF__stringCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_StringCallback*>*  _stringCallbacks;

/// @brief Field _userLoginAnonymouslyCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__userLoginAnonymouslyCallbacks, put=setStaticF__userLoginAnonymouslyCallbacks)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_UserLoginAnonymouslyCallback*>*  _userLoginAnonymouslyCallbacks;

/// @brief Method Init, addr 0x18304ac, size 0x4c, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::VROSC::CallbackHandler* New_ctor() ;

/// @brief Method PollInProgressRequests, addr 0x18304f8, size 0x84, virtual false, abstract: false, final false
static inline void PollInProgressRequests() ;

/// @brief Method RegisterCallback, addr 0x183057c, size 0x80, virtual false, abstract: false, final false
static inline void RegisterCallback(::System::Action*  action) ;

/// @brief Method RegisterErrorCallback, addr 0x18306c4, size 0xc4, virtual false, abstract: false, final false
static inline void RegisterErrorCallback(::System::Action_1<::VROSC::Error>*  action, ::VROSC::Error  error) ;

/// @brief Method RegisterFirestoreCollectionDictionaryReadCallback, addr 0x1830a08, size 0xc0, virtual false, abstract: false, final false
static inline void RegisterFirestoreCollectionDictionaryReadCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  action, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data) ;

/// @brief Method RegisterFirestoreCollectionReadCallback, addr 0x1830940, size 0xc0, virtual false, abstract: false, final false
static inline void RegisterFirestoreCollectionReadCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  action, ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  data) ;

/// @brief Method RegisterFirestoreDocumentReadCallback, addr 0x1830ad0, size 0xc0, virtual false, abstract: false, final false
static inline void RegisterFirestoreDocumentReadCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  action, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method RegisterLoginUserWithEmailCallback, addr 0x1830790, size 0xcc, virtual false, abstract: false, final false
static inline void RegisterLoginUserWithEmailCallback(::System::Action_2<::StringW,bool>*  action, ::StringW  userId, bool  isVerified) ;

/// @brief Method RegisterStringCallback, addr 0x18305fc, size 0xc0, virtual false, abstract: false, final false
static inline void RegisterStringCallback(::System::Action_1<::StringW>*  action, ::StringW  argument) ;

/// @brief Method RegisterUserLoginAnonymouslyCallback, addr 0x1830864, size 0xd4, virtual false, abstract: false, final false
static inline void RegisterUserLoginAnonymouslyCallback(::System::Action_3<::StringW,::StringW,::StringW>*  action, ::StringW  userId, ::StringW  accessToken, ::StringW  refreshToken) ;

/// @brief Method .ctor, addr 0x1830b98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* getStaticF__emptyCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_ErrorCallback*>* getStaticF__errorCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback*>* getStaticF__firestoreCollectionDictionaryReadCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionReadCallback*>* getStaticF__firestoreCollectionReadCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreDocumentReadCallback*>* getStaticF__firestoreDocumentReadCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_LoginUserWithEmailCallback*>* getStaticF__loginUserWithEmailCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_StringCallback*>* getStaticF__stringCallbacks() ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_UserLoginAnonymouslyCallback*>* getStaticF__userLoginAnonymouslyCallbacks() ;

static inline void setStaticF__emptyCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*  value) ;

static inline void setStaticF__errorCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_ErrorCallback*>*  value) ;

static inline void setStaticF__firestoreCollectionDictionaryReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback*>*  value) ;

static inline void setStaticF__firestoreCollectionReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreCollectionReadCallback*>*  value) ;

static inline void setStaticF__firestoreDocumentReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_FirestoreDocumentReadCallback*>*  value) ;

static inline void setStaticF__loginUserWithEmailCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_LoginUserWithEmailCallback*>*  value) ;

static inline void setStaticF__stringCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_StringCallback*>*  value) ;

static inline void setStaticF__userLoginAnonymouslyCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler_UserLoginAnonymouslyCallback*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackHandler(CallbackHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackHandler(CallbackHandler const& ) = delete;

/// @brief Field PollingDelay offset 0xffffffff size 0x4
static constexpr int32_t  PollingDelay{static_cast<int32_t>(0x64)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CallbackHandler, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CallbackHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler*, "VROSC", "CallbackHandler");
NEED_NO_BOX(::VROSC::CallbackHandler_ErrorCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_ErrorCallback*, "VROSC", "CallbackHandler/ErrorCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_FirestoreCollectionDictionaryReadCallback*, "VROSC", "CallbackHandler/FirestoreCollectionDictionaryReadCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_FirestoreCollectionReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_FirestoreCollectionReadCallback*, "VROSC", "CallbackHandler/FirestoreCollectionReadCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_FirestoreDocumentReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_FirestoreDocumentReadCallback*, "VROSC", "CallbackHandler/FirestoreDocumentReadCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_LoginUserWithEmailCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_LoginUserWithEmailCallback*, "VROSC", "CallbackHandler/LoginUserWithEmailCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_StringCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_StringCallback*, "VROSC", "CallbackHandler/StringCallback");
NEED_NO_BOX(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler_UserLoginAnonymouslyCallback*, "VROSC", "CallbackHandler/UserLoginAnonymouslyCallback");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler__PollInProgressRequests_d__25, "VROSC", "CallbackHandler/<PollInProgressRequests>d__25");
