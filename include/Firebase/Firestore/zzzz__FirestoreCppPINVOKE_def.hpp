#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreCppPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FirestoreCppPINVOKE)
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_FirestoreExceptionHelper;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGPendingException;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGStringHelper;
}
namespace Firebase::Firestore {
class FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_FirestoreVoid_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Firestore {
class SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate;
}
namespace Firebase::Firestore {
class SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirestoreCppPINVOKE;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_FirestoreExceptionHelper;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGPendingException;
}
namespace Firebase::Firestore {
class FirestoreCppPINVOKE_SWIGStringHelper;
}
namespace Firebase::Firestore {
class FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate;
}
namespace Firebase::Firestore {
class SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Firestore {
class SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate;
}
namespace Firebase::Firestore {
class SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCppPINVOKE);
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper);
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper);
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGPendingException);
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper);
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGExceptionHelper/ExceptionDelegate
class CORDL_TYPE SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1903a20, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1903548, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate(SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate(SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
class CORDL_TYPE SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1903a34, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message, ::StringW  paramName) ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x19035e4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGExceptionHelper
class CORDL_TYPE FirestoreCppPINVOKE_SWIGExceptionHelper : public ::System::Object {
public:
// Declarations
using ExceptionArgumentDelegate = ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate;

using ExceptionDelegate = ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate;

/// @brief Field applicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_applicationDelegate, put=setStaticF_applicationDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  applicationDelegate;

/// @brief Field argumentDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentDelegate, put=setStaticF_argumentDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentDelegate;

/// @brief Field argumentNullDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentNullDelegate, put=setStaticF_argumentNullDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate;

/// @brief Field argumentOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentOutOfRangeDelegate, put=setStaticF_argumentOutOfRangeDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate;

/// @brief Field arithmeticDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_arithmeticDelegate, put=setStaticF_arithmeticDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  arithmeticDelegate;

/// @brief Field divideByZeroDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_divideByZeroDelegate, put=setStaticF_divideByZeroDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  divideByZeroDelegate;

/// @brief Field indexOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_indexOutOfRangeDelegate, put=setStaticF_indexOutOfRangeDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate;

/// @brief Field invalidCastDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidCastDelegate, put=setStaticF_invalidCastDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  invalidCastDelegate;

/// @brief Field invalidOperationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidOperationDelegate, put=setStaticF_invalidOperationDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  invalidOperationDelegate;

/// @brief Field ioDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ioDelegate, put=setStaticF_ioDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  ioDelegate;

/// @brief Field nullReferenceDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nullReferenceDelegate, put=setStaticF_nullReferenceDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  nullReferenceDelegate;

/// @brief Field outOfMemoryDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outOfMemoryDelegate, put=setStaticF_outOfMemoryDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  outOfMemoryDelegate;

/// @brief Field overflowDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overflowDelegate, put=setStaticF_overflowDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  overflowDelegate;

/// @brief Field systemDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_systemDelegate, put=setStaticF_systemDelegate)) ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  systemDelegate;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper* New_ctor() ;

/// @brief Method SWIGRegisterExceptionCallbacksArgument_FirestoreCpp, addr 0x19037f0, size 0xb4, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacksArgument_FirestoreCpp(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate) ;

/// @brief Method SWIGRegisterExceptionCallbacks_FirestoreCpp, addr 0x1903684, size 0x16c, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacks_FirestoreCpp(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  applicationDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  arithmeticDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  divideByZeroDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  invalidCastDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  invalidOperationDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  ioDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  nullReferenceDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  outOfMemoryDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  overflowDelegate, ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  systemExceptionDelegate) ;

/// @brief Method SetPendingApplicationException, addr 0x1902b00, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingApplicationException(::StringW  message) ;

/// @brief Method SetPendingArgumentException, addr 0x1902fa4, size 0x7c, virtual false, abstract: false, final false
static inline void SetPendingArgumentException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentNullException, addr 0x1903020, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentNullException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentOutOfRangeException, addr 0x19030cc, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentOutOfRangeException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArithmeticException, addr 0x1902b6c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingArithmeticException(::StringW  message) ;

/// @brief Method SetPendingDivideByZeroException, addr 0x1902bd8, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingDivideByZeroException(::StringW  message) ;

/// @brief Method SetPendingIOException, addr 0x1902d88, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIOException(::StringW  message) ;

/// @brief Method SetPendingIndexOutOfRangeException, addr 0x1902c44, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIndexOutOfRangeException(::StringW  message) ;

/// @brief Method SetPendingInvalidCastException, addr 0x1902cb0, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidCastException(::StringW  message) ;

/// @brief Method SetPendingInvalidOperationException, addr 0x1902d1c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidOperationException(::StringW  message) ;

/// @brief Method SetPendingNullReferenceException, addr 0x1902df4, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingNullReferenceException(::StringW  message) ;

/// @brief Method SetPendingOutOfMemoryException, addr 0x1902e60, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOutOfMemoryException(::StringW  message) ;

/// @brief Method SetPendingOverflowException, addr 0x1902ecc, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOverflowException(::StringW  message) ;

/// @brief Method SetPendingSystemException, addr 0x1902f38, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingSystemException(::StringW  message) ;

/// @brief Method .ctor, addr 0x18fedb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_applicationDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentNullDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentOutOfRangeDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_arithmeticDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_divideByZeroDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_indexOutOfRangeDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_invalidCastDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_invalidOperationDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_ioDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_nullReferenceDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_outOfMemoryDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_overflowDelegate() ;

static inline ::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate* getStaticF_systemDelegate() ;

static inline void setStaticF_applicationDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_argumentDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentNullDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentOutOfRangeDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_arithmeticDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_divideByZeroDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_indexOutOfRangeDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidCastDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidOperationDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_ioDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_nullReferenceDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_outOfMemoryDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_overflowDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_systemDelegate(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCppPINVOKE_SWIGExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCppPINVOKE_SWIGExceptionHelper(FirestoreCppPINVOKE_SWIGExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCppPINVOKE_SWIGExceptionHelper(FirestoreCppPINVOKE_SWIGExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11089};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGPendingException
class CORDL_TYPE FirestoreCppPINVOKE_SWIGPendingException : public ::System::Object {
public:
// Declarations
/// @brief Field numExceptionsPending, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_numExceptionsPending, put=setStaticF_numExceptionsPending)) int32_t  numExceptionsPending;

/// @brief Field pendingException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingException, put=setStaticF_pendingException)) ::System::Exception*  pendingException;

/// @brief Method Retrieve, addr 0x18fd154, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Exception* Retrieve() ;

/// @brief Method Set, addr 0x19038a4, size 0x17c, virtual false, abstract: false, final false
static inline void Set(::System::Exception*  e) ;

static inline int32_t getStaticF_numExceptionsPending() ;

static inline ::System::Exception* getStaticF_pendingException() ;

/// @brief Method get_Pending, addr 0x18fd0ec, size 0x68, virtual false, abstract: false, final false
static inline bool get_Pending() ;

static inline void setStaticF_numExceptionsPending(int32_t  value) ;

static inline void setStaticF_pendingException(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCppPINVOKE_SWIGPendingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGPendingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCppPINVOKE_SWIGPendingException(FirestoreCppPINVOKE_SWIGPendingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGPendingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCppPINVOKE_SWIGPendingException(FirestoreCppPINVOKE_SWIGPendingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCppPINVOKE_SWIGPendingException, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGStringHelper/SWIGStringDelegate
class CORDL_TYPE SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1903c04, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::StringW  message) ;

static inline ::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1903ae8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate(SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate(SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11091};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/SWIGStringHelper
class CORDL_TYPE FirestoreCppPINVOKE_SWIGStringHelper : public ::System::Object {
public:
// Declarations
using SWIGStringDelegate = ::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate;

/// @brief Field stringDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringDelegate, put=setStaticF_stringDelegate)) ::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate*  stringDelegate;

/// @brief Method CreateString, addr 0x1903a48, size 0x4, virtual false, abstract: false, final false
static inline ::StringW CreateString(::StringW  cString) ;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper* New_ctor() ;

/// @brief Method SWIGRegisterStringCallback_FirestoreCpp, addr 0x1903b84, size 0x80, virtual false, abstract: false, final false
static inline void SWIGRegisterStringCallback_FirestoreCpp(::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate*  stringDelegate) ;

/// @brief Method .ctor, addr 0x18fedc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate* getStaticF_stringDelegate() ;

static inline void setStaticF_stringDelegate(::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCppPINVOKE_SWIGStringHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGStringHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCppPINVOKE_SWIGStringHelper(FirestoreCppPINVOKE_SWIGStringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_SWIGStringHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCppPINVOKE_SWIGStringHelper(FirestoreCppPINVOKE_SWIGStringHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/FirestoreExceptionHelper/FirestoreExceptionDelegate
class CORDL_TYPE FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1903ea0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1903d10, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate(FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate(FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE/FirestoreExceptionHelper
class CORDL_TYPE FirestoreCppPINVOKE_FirestoreExceptionHelper : public ::System::Object {
public:
// Declarations
using FirestoreExceptionDelegate = ::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate;

/// @brief Field firestoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_firestoreDelegate, put=setStaticF_firestoreDelegate)) ::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate*  firestoreDelegate;

/// @brief Method FirestoreExceptionRegisterCallback, addr 0x1903dac, size 0x80, virtual false, abstract: false, final false
static inline void FirestoreExceptionRegisterCallback(::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate*  firestoreCallback) ;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper* New_ctor() ;

/// @brief Method SetPendingFirestoreException, addr 0x1903c18, size 0x5c, virtual false, abstract: false, final false
static inline void SetPendingFirestoreException(::StringW  message) ;

/// @brief Method .ctor, addr 0x18fedc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate* getStaticF_firestoreDelegate() ;

static inline void setStaticF_firestoreDelegate(::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCppPINVOKE_FirestoreExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_FirestoreExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCppPINVOKE_FirestoreExceptionHelper(FirestoreCppPINVOKE_FirestoreExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE_FirestoreExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCppPINVOKE_FirestoreExceptionHelper(FirestoreCppPINVOKE_FirestoreExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11094};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCppPINVOKE
class CORDL_TYPE FirestoreCppPINVOKE : public ::System::Object {
public:
// Declarations
using FirestoreExceptionHelper = ::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper;

using SWIGExceptionHelper = ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper;

using SWIGPendingException = ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGPendingException;

using SWIGStringHelper = ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper;

/// @brief Field exceptionHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_exceptionHelper, put=setStaticF_exceptionHelper)) ::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper*  exceptionHelper;

/// @brief Field swigExceptionHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigExceptionHelper, put=setStaticF_swigExceptionHelper)) ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper*  swigExceptionHelper;

/// @brief Field swigStringHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigStringHelper, put=setStaticF_swigStringHelper)) ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper*  swigStringHelper;

/// @brief Method ApiHeaders_SetClientLanguage, addr 0x1901e98, size 0x8c, virtual false, abstract: false, final false
static inline void ApiHeaders_SetClientLanguage(::StringW  jarg1) ;

/// @brief Method CollectionReferenceProxy_Document__SWIG_0, addr 0x1901084, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr CollectionReferenceProxy_Document__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method CollectionReferenceProxy_Document__SWIG_1, addr 0x1901100, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr CollectionReferenceProxy_Document__SWIG_1(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method CollectionReferenceProxy_SWIGUpcast, addr 0x1902a84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr CollectionReferenceProxy_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method CollectionReferenceProxy_path, addr 0x1900ff0, size 0x94, virtual false, abstract: false, final false
static inline ::StringW CollectionReferenceProxy_path(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method ConvertFieldValueToMap, addr 0x18fd9f4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertFieldValueToMap(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method ConvertFieldValueToVector, addr 0x18fe888, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertFieldValueToVector(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method ConvertMapToFieldValue, addr 0x18fdc00, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertMapToFieldValue(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method ConvertSnapshotToFieldValue, addr 0x18fddd8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertSnapshotToFieldValue(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method ConvertVectorToFieldValue, addr 0x18fea94, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertVectorToFieldValue(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentReferenceProxy_Collection__SWIG_0, addr 0x18ffbfc, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentReferenceProxy_Collection__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method DocumentReferenceProxy_Delete, addr 0x18ffd20, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentReferenceProxy_Delete(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentReferenceProxy_Get__SWIG_0, addr 0x18ffc9c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentReferenceProxy_Get__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method DocumentReferenceProxy_id, addr 0x18ffad4, size 0x94, virtual false, abstract: false, final false
static inline ::StringW DocumentReferenceProxy_id(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentReferenceProxy_is_valid, addr 0x18ffd9c, size 0x84, virtual false, abstract: false, final false
static inline bool DocumentReferenceProxy_is_valid(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentReferenceProxy_path, addr 0x18ffb68, size 0x94, virtual false, abstract: false, final false
static inline ::StringW DocumentReferenceProxy_path(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentReferenceSet, addr 0x18fe194, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentReferenceSet(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2, ::System::Runtime::InteropServices::HandleRef  jarg3) ;

/// @brief Method DocumentReferenceUpdate__SWIG_0, addr 0x18fe568, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentReferenceUpdate__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method DocumentSnapshotEquals, addr 0x18fd4e4, size 0x8c, virtual false, abstract: false, final false
static inline bool DocumentSnapshotEquals(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method DocumentSnapshotHashCode, addr 0x18fd83c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t DocumentSnapshotHashCode(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentSnapshotProxy_Get__SWIG_4, addr 0x1900030, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentSnapshotProxy_Get__SWIG_4(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2, int32_t  jarg3) ;

/// @brief Method DocumentSnapshotProxy_exists, addr 0x18fffac, size 0x84, virtual false, abstract: false, final false
static inline bool DocumentSnapshotProxy_exists(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentSnapshotProxy_id, addr 0x18ffe9c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW DocumentSnapshotProxy_id(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentSnapshotProxy_reference, addr 0x18fff30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentSnapshotProxy_reference(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method DocumentSnapshotVector_GetCopy, addr 0x19025a8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr DocumentSnapshotVector_GetCopy(::System::Runtime::InteropServices::HandleRef  jarg1, uint32_t  jarg2) ;

/// @brief Method FieldToValueMapIterator_Advance, addr 0x19023a0, size 0x7c, virtual false, abstract: false, final false
static inline void FieldToValueMapIterator_Advance(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldToValueMapIterator_HasMore, addr 0x190231c, size 0x84, virtual false, abstract: false, final false
static inline bool FieldToValueMapIterator_HasMore(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldToValueMapIterator_UnsafeKeyView, addr 0x190241c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FieldToValueMapIterator_UnsafeKeyView(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldToValueMapIterator_UnsafeValueView, addr 0x19024b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldToValueMapIterator_UnsafeValueView(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldToValueMap_Insert, addr 0x190217c, size 0xa8, virtual false, abstract: false, final false
static inline void FieldToValueMap_Insert(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2, ::System::Runtime::InteropServices::HandleRef  jarg3) ;

/// @brief Method FieldToValueMap_Iterator, addr 0x1902224, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldToValueMap_Iterator(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_Blob, addr 0x19003c0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Blob(::System::Runtime::InteropServices::HandleRef  jarg1, uint32_t  jarg2) ;

/// @brief Method FieldValueProxy_Boolean, addr 0x190013c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Boolean(bool  jarg1) ;

/// @brief Method FieldValueProxy_Delete, addr 0x1900c28, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Delete() ;

/// @brief Method FieldValueProxy_Double, addr 0x1900234, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Double(double_t  jarg1) ;

/// @brief Method FieldValueProxy_GeoPoint, addr 0x19004c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_GeoPoint(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_Integer, addr 0x19001b8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Integer(int64_t  jarg1) ;

/// @brief Method FieldValueProxy_IntegerIncrement, addr 0x1900cf8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_IntegerIncrement(int64_t  jarg1) ;

/// @brief Method FieldValueProxy_Null, addr 0x1900bc0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Null() ;

/// @brief Method FieldValueProxy_Reference, addr 0x1900444, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Reference(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_ServerTimestamp, addr 0x1900c90, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_ServerTimestamp() ;

/// @brief Method FieldValueProxy_String, addr 0x190032c, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_String(::StringW  jarg1) ;

/// @brief Method FieldValueProxy_Timestamp, addr 0x19002b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_Timestamp(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_blob_size, addr 0x19009c8, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t FieldValueProxy_blob_size(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_blob_value, addr 0x190094c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_blob_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_boolean_value, addr 0x19006c0, size 0x84, virtual false, abstract: false, final false
static inline bool FieldValueProxy_boolean_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_double_value, addr 0x19007c0, size 0x7c, virtual false, abstract: false, final false
static inline double_t FieldValueProxy_double_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_geo_point_value, addr 0x1900ac0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_geo_point_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_integer_value, addr 0x1900744, size 0x7c, virtual false, abstract: false, final false
static inline int64_t FieldValueProxy_integer_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_is_map, addr 0x190063c, size 0x84, virtual false, abstract: false, final false
static inline bool FieldValueProxy_is_map(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_is_null, addr 0x19005b8, size 0x84, virtual false, abstract: false, final false
static inline bool FieldValueProxy_is_null(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_is_valid, addr 0x1900b3c, size 0x84, virtual false, abstract: false, final false
static inline bool FieldValueProxy_is_valid(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_reference_value, addr 0x1900a44, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_reference_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_string_value, addr 0x19008b8, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FieldValueProxy_string_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_timestamp_value, addr 0x190083c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueProxy_timestamp_value(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueProxy_type, addr 0x190053c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t FieldValueProxy_type(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FieldValueVector_GetUnsafeView, addr 0x190278c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr FieldValueVector_GetUnsafeView(::System::Runtime::InteropServices::HandleRef  jarg1, uint32_t  jarg2) ;

/// @brief Method FieldValueVector_PushBack, addr 0x1902810, size 0x84, virtual false, abstract: false, final false
static inline void FieldValueVector_PushBack(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method FieldValueVector_Size, addr 0x1902710, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t FieldValueVector_Size(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirestoreProxy_Collection__SWIG_0, addr 0x1901c7c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FirestoreProxy_Collection__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method FirestoreProxy_GetInstance__SWIG_1, addr 0x1901b84, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirestoreProxy_GetInstance__SWIG_1(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirestoreProxy_batch, addr 0x1901e1c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirestoreProxy_batch(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirestoreProxy_set_settings, addr 0x1901d98, size 0x84, virtual false, abstract: false, final false
static inline void FirestoreProxy_set_settings(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method FirestoreProxy_settings, addr 0x1901d1c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirestoreProxy_settings(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_DocumentSnapshot_GetResult, addr 0x18ff584, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_DocumentSnapshot_GetResult(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_DocumentSnapshot_SWIGUpcast, addr 0x190298c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_DocumentSnapshot_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_DocumentSnapshot_SWIG_FreeCompletionData, addr 0x18ff500, size 0x84, virtual false, abstract: false, final false
static inline void Future_DocumentSnapshot_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_DocumentSnapshot_SWIG_OnCompletion, addr 0x18ff468, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_DocumentSnapshot_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method Future_FirestoreVoid_SWIGUpcast, addr 0x1902a08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_FirestoreVoid_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_FirestoreVoid_SWIG_FreeCompletionData, addr 0x18ff714, size 0x84, virtual false, abstract: false, final false
static inline void Future_FirestoreVoid_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_FirestoreVoid_SWIG_OnCompletion, addr 0x18ff67c, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_FirestoreVoid_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Firestore::Future_FirestoreVoid_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method Future_QuerySnapshot_GetResult, addr 0x18ff370, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_QuerySnapshot_GetResult(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_QuerySnapshot_SWIGUpcast, addr 0x1902910, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_QuerySnapshot_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_QuerySnapshot_SWIG_FreeCompletionData, addr 0x18ff2ec, size 0x84, virtual false, abstract: false, final false
static inline void Future_QuerySnapshot_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_QuerySnapshot_SWIG_OnCompletion, addr 0x18ff254, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_QuerySnapshot_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method GeoPointProxy_latitude, addr 0x18fee54, size 0x7c, virtual false, abstract: false, final false
static inline double_t GeoPointProxy_latitude(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method GeoPointProxy_longitude, addr 0x18feed0, size 0x7c, virtual false, abstract: false, final false
static inline double_t GeoPointProxy_longitude(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method LoadBundleTaskProgressProxy_bytes_loaded, addr 0x1901994, size 0x7c, virtual false, abstract: false, final false
static inline int64_t LoadBundleTaskProgressProxy_bytes_loaded(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method LoadBundleTaskProgressProxy_documents_loaded, addr 0x190189c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t LoadBundleTaskProgressProxy_documents_loaded(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method LoadBundleTaskProgressProxy_state, addr 0x1901a8c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t LoadBundleTaskProgressProxy_state(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method LoadBundleTaskProgressProxy_total_bytes, addr 0x1901a10, size 0x7c, virtual false, abstract: false, final false
static inline int64_t LoadBundleTaskProgressProxy_total_bytes(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method LoadBundleTaskProgressProxy_total_documents, addr 0x1901918, size 0x7c, virtual false, abstract: false, final false
static inline int32_t LoadBundleTaskProgressProxy_total_documents(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method QueryEquals, addr 0x18fd060, size 0x8c, virtual false, abstract: false, final false
static inline bool QueryEquals(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method QueryHashCode, addr 0x18fd60c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t QueryHashCode(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method QueryProxy_Get__SWIG_0, addr 0x1900f6c, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr QueryProxy_Get__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method QuerySnapshotDocuments, addr 0x18fec08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr QuerySnapshotDocuments(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method QuerySnapshotEquals, addr 0x18fd354, size 0x8c, virtual false, abstract: false, final false
static inline bool QuerySnapshotEquals(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method QuerySnapshotHashCode, addr 0x18fd724, size 0x7c, virtual false, abstract: false, final false
static inline int32_t QuerySnapshotHashCode(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method QuerySnapshotProxy_size, addr 0x1901298, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t QuerySnapshotProxy_size(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method SetOptionsProxy_Merge, addr 0x18ff9f0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr SetOptionsProxy_Merge() ;

/// @brief Method SettingsProxy_cache_size_bytes, addr 0x1901580, size 0x7c, virtual false, abstract: false, final false
static inline int64_t SettingsProxy_cache_size_bytes(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method SettingsProxy_host, addr 0x19013e4, size 0x94, virtual false, abstract: false, final false
static inline ::StringW SettingsProxy_host(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method SettingsProxy_is_persistence_enabled, addr 0x19014fc, size 0x84, virtual false, abstract: false, final false
static inline bool SettingsProxy_is_persistence_enabled(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method SettingsProxy_is_ssl_enabled, addr 0x1901478, size 0x84, virtual false, abstract: false, final false
static inline bool SettingsProxy_is_ssl_enabled(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method SettingsProxy_kCacheSizeUnlimited_get, addr 0x1901314, size 0x68, virtual false, abstract: false, final false
static inline int64_t SettingsProxy_kCacheSizeUnlimited_get() ;

/// @brief Method SettingsProxy_set_cache_size_bytes, addr 0x190179c, size 0x84, virtual false, abstract: false, final false
static inline void SettingsProxy_set_cache_size_bytes(::System::Runtime::InteropServices::HandleRef  jarg1, int64_t  jarg2) ;

/// @brief Method SettingsProxy_set_host, addr 0x19015fc, size 0x98, virtual false, abstract: false, final false
static inline void SettingsProxy_set_host(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method SettingsProxy_set_persistence_enabled, addr 0x1901718, size 0x84, virtual false, abstract: false, final false
static inline void SettingsProxy_set_persistence_enabled(::System::Runtime::InteropServices::HandleRef  jarg1, bool  jarg2) ;

/// @brief Method SettingsProxy_set_ssl_enabled, addr 0x1901694, size 0x84, virtual false, abstract: false, final false
static inline void SettingsProxy_set_ssl_enabled(::System::Runtime::InteropServices::HandleRef  jarg1, bool  jarg2) ;

/// @brief Method TimestampProxy_ToString, addr 0x18ff144, size 0x94, virtual false, abstract: false, final false
static inline ::StringW TimestampProxy_ToString(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method TimestampProxy_nanoseconds, addr 0x18ff0c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t TimestampProxy_nanoseconds(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method TimestampProxy_seconds, addr 0x18ff04c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t TimestampProxy_seconds(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method TransactionManagerProxy_CppDispose, addr 0x1902098, size 0x7c, virtual false, abstract: false, final false
static inline void TransactionManagerProxy_CppDispose(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method WriteBatchProxy_Commit, addr 0x1900e74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr WriteBatchProxy_Commit(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method WriteBatchProxy_Delete, addr 0x1900df0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr WriteBatchProxy_Delete(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method WriteBatchSet, addr 0x18fe6f4, size 0x9c, virtual false, abstract: false, final false
static inline void WriteBatchSet(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2, ::System::Runtime::InteropServices::HandleRef  jarg3, ::System::Runtime::InteropServices::HandleRef  jarg4) ;

/// @brief Method WriteBatchUpdate__SWIG_0, addr 0x18fdfc0, size 0x94, virtual false, abstract: false, final false
static inline void WriteBatchUpdate__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2, ::System::Runtime::InteropServices::HandleRef  jarg3) ;

/// @brief Method delete_CollectionReferenceProxy, addr 0x19011a0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_CollectionReferenceProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_DocumentReferenceProxy, addr 0x18ffa58, size 0x7c, virtual false, abstract: false, final false
static inline void delete_DocumentReferenceProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_DocumentSnapshotProxy, addr 0x18ffe20, size 0x7c, virtual false, abstract: false, final false
static inline void delete_DocumentSnapshotProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_DocumentSnapshotVector, addr 0x190262c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_DocumentSnapshotVector(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FieldPathProxy, addr 0x18ff890, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FieldPathProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FieldToValueMap, addr 0x19022a0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FieldToValueMap(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FieldToValueMapIterator, addr 0x190252c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FieldToValueMapIterator(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FieldValueProxy, addr 0x19000c0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FieldValueProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FieldValueVector, addr 0x1902894, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FieldValueVector(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FirestoreProxy, addr 0x1901c00, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FirestoreProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_DocumentSnapshot, addr 0x18ff600, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_DocumentSnapshot(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_FirestoreVoid, addr 0x18ff798, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_FirestoreVoid(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_QuerySnapshot, addr 0x18ff3ec, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_QuerySnapshot(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_GeoPointProxy, addr 0x18fef4c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_GeoPointProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_LoadBundleTaskProgressProxy, addr 0x1901b08, size 0x7c, virtual false, abstract: false, final false
static inline void delete_LoadBundleTaskProgressProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_QueryProxy, addr 0x1900ef0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_QueryProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_QuerySnapshotProxy, addr 0x190121c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_QuerySnapshotProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_SetOptionsProxy, addr 0x18ff974, size 0x7c, virtual false, abstract: false, final false
static inline void delete_SetOptionsProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_SettingsProxy, addr 0x1901820, size 0x7c, virtual false, abstract: false, final false
static inline void delete_SettingsProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_TimestampProxy, addr 0x18ff1d8, size 0x7c, virtual false, abstract: false, final false
static inline void delete_TimestampProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_TransactionCallbackProxy, addr 0x1901f24, size 0x7c, virtual false, abstract: false, final false
static inline void delete_TransactionCallbackProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_TransactionManagerProxy, addr 0x190201c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_TransactionManagerProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_WriteBatchProxy, addr 0x1900d74, size 0x7c, virtual false, abstract: false, final false
static inline void delete_WriteBatchProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper* getStaticF_exceptionHelper() ;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper* getStaticF_swigExceptionHelper() ;

static inline ::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper* getStaticF_swigStringHelper() ;

/// @brief Method new_FieldPathProxy, addr 0x18ff814, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr new_FieldPathProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method new_FieldToValueMap, addr 0x1902114, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_FieldToValueMap() ;

/// @brief Method new_FieldValueVector, addr 0x19026a8, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_FieldValueVector() ;

/// @brief Method new_GeoPointProxy, addr 0x18fedd0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr new_GeoPointProxy(double_t  jarg1, double_t  jarg2) ;

/// @brief Method new_SetOptionsProxy, addr 0x18ff90c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_SetOptionsProxy() ;

/// @brief Method new_SettingsProxy__SWIG_0, addr 0x190137c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_SettingsProxy__SWIG_0() ;

/// @brief Method new_TimestampProxy__SWIG_1, addr 0x18fefc8, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr new_TimestampProxy__SWIG_1(int64_t  jarg1, int32_t  jarg2) ;

/// @brief Method new_TransactionManagerProxy, addr 0x1901fa0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr new_TransactionManagerProxy(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline void setStaticF_exceptionHelper(::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper*  value) ;

static inline void setStaticF_swigExceptionHelper(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper*  value) ;

static inline void setStaticF_swigStringHelper(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCppPINVOKE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCppPINVOKE(FirestoreCppPINVOKE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCppPINVOKE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCppPINVOKE(FirestoreCppPINVOKE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCppPINVOKE, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestoreCppPINVOKE);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCppPINVOKE*, "Firebase.Firestore", "FirestoreCppPINVOKE");
NEED_NO_BOX(::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCppPINVOKE_FirestoreExceptionHelper*, "Firebase.Firestore", "FirestoreCppPINVOKE/FirestoreExceptionHelper");
NEED_NO_BOX(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGExceptionHelper*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGExceptionHelper");
NEED_NO_BOX(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGPendingException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGPendingException*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGPendingException");
NEED_NO_BOX(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCppPINVOKE_SWIGStringHelper*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGStringHelper");
NEED_NO_BOX(::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreExceptionHelper_FirestoreCppPINVOKE_FirestoreExceptionDelegate*, "Firebase.Firestore", "FirestoreCppPINVOKE/FirestoreExceptionHelper/FirestoreExceptionDelegate");
NEED_NO_BOX(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionArgumentDelegate*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
NEED_NO_BOX(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SWIGExceptionHelper_FirestoreCppPINVOKE_ExceptionDelegate*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
NEED_NO_BOX(::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SWIGStringHelper_FirestoreCppPINVOKE_SWIGStringDelegate*, "Firebase.Firestore", "FirestoreCppPINVOKE/SWIGStringHelper/SWIGStringDelegate");
