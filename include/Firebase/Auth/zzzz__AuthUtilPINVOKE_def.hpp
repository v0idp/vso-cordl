#pragma once
// IWYU pragma private; include "Firebase/Auth/AuthUtilPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthUtilPINVOKE)
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGPendingException;
}
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGStringHelper;
}
namespace Firebase::Auth {
class FirebaseAuth_StateChangedDelegate;
}
namespace Firebase::Auth {
class Future_User_SWIG_CompletionDelegate;
}
namespace Firebase::Auth {
class SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Auth {
class SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate;
}
namespace Firebase::Auth {
class SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate;
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
namespace Firebase::Auth {
class AuthUtilPINVOKE;
}
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGPendingException;
}
namespace Firebase::Auth {
class AuthUtilPINVOKE_SWIGStringHelper;
}
namespace Firebase::Auth {
class SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Auth {
class SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate;
}
namespace Firebase::Auth {
class SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Auth::AuthUtilPINVOKE);
MARK_REF_PTR_T(::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper);
MARK_REF_PTR_T(::Firebase::Auth::AuthUtilPINVOKE_SWIGPendingException);
MARK_REF_PTR_T(::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper);
MARK_REF_PTR_T(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate);
MARK_REF_PTR_T(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate);
MARK_REF_PTR_T(::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
class CORDL_TYPE SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f8ca4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f86d0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate(SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate(SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.MulticastDelegate
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
class CORDL_TYPE SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f8cb8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message, ::StringW  paramName) ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f876c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
class CORDL_TYPE AuthUtilPINVOKE_SWIGExceptionHelper : public ::System::Object {
public:
// Declarations
using ExceptionArgumentDelegate = ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate;

using ExceptionDelegate = ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate;

/// @brief Field applicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_applicationDelegate, put=setStaticF_applicationDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  applicationDelegate;

/// @brief Field argumentDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentDelegate, put=setStaticF_argumentDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentDelegate;

/// @brief Field argumentNullDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentNullDelegate, put=setStaticF_argumentNullDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate;

/// @brief Field argumentOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentOutOfRangeDelegate, put=setStaticF_argumentOutOfRangeDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate;

/// @brief Field arithmeticDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_arithmeticDelegate, put=setStaticF_arithmeticDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  arithmeticDelegate;

/// @brief Field divideByZeroDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_divideByZeroDelegate, put=setStaticF_divideByZeroDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  divideByZeroDelegate;

/// @brief Field indexOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_indexOutOfRangeDelegate, put=setStaticF_indexOutOfRangeDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate;

/// @brief Field invalidCastDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidCastDelegate, put=setStaticF_invalidCastDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  invalidCastDelegate;

/// @brief Field invalidOperationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidOperationDelegate, put=setStaticF_invalidOperationDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  invalidOperationDelegate;

/// @brief Field ioDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ioDelegate, put=setStaticF_ioDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  ioDelegate;

/// @brief Field nullReferenceDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nullReferenceDelegate, put=setStaticF_nullReferenceDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  nullReferenceDelegate;

/// @brief Field outOfMemoryDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outOfMemoryDelegate, put=setStaticF_outOfMemoryDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  outOfMemoryDelegate;

/// @brief Field overflowDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overflowDelegate, put=setStaticF_overflowDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  overflowDelegate;

/// @brief Field systemDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_systemDelegate, put=setStaticF_systemDelegate)) ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  systemDelegate;

static inline ::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper* New_ctor() ;

/// @brief Method SWIGRegisterExceptionCallbacksArgument_AuthUtil, addr 0x18f8978, size 0xb4, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacksArgument_AuthUtil(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate) ;

/// @brief Method SWIGRegisterExceptionCallbacks_AuthUtil, addr 0x18f880c, size 0x16c, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacks_AuthUtil(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  applicationDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  arithmeticDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  divideByZeroDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  invalidCastDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  invalidOperationDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  ioDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  nullReferenceDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  outOfMemoryDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  overflowDelegate, ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  systemExceptionDelegate) ;

/// @brief Method SetPendingApplicationException, addr 0x18f7c88, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingApplicationException(::StringW  message) ;

/// @brief Method SetPendingArgumentException, addr 0x18f812c, size 0x7c, virtual false, abstract: false, final false
static inline void SetPendingArgumentException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentNullException, addr 0x18f81a8, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentNullException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentOutOfRangeException, addr 0x18f8254, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentOutOfRangeException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArithmeticException, addr 0x18f7cf4, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingArithmeticException(::StringW  message) ;

/// @brief Method SetPendingDivideByZeroException, addr 0x18f7d60, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingDivideByZeroException(::StringW  message) ;

/// @brief Method SetPendingIOException, addr 0x18f7f10, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIOException(::StringW  message) ;

/// @brief Method SetPendingIndexOutOfRangeException, addr 0x18f7dcc, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIndexOutOfRangeException(::StringW  message) ;

/// @brief Method SetPendingInvalidCastException, addr 0x18f7e38, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidCastException(::StringW  message) ;

/// @brief Method SetPendingInvalidOperationException, addr 0x18f7ea4, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidOperationException(::StringW  message) ;

/// @brief Method SetPendingNullReferenceException, addr 0x18f7f7c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingNullReferenceException(::StringW  message) ;

/// @brief Method SetPendingOutOfMemoryException, addr 0x18f7fe8, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOutOfMemoryException(::StringW  message) ;

/// @brief Method SetPendingOverflowException, addr 0x18f8054, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOverflowException(::StringW  message) ;

/// @brief Method SetPendingSystemException, addr 0x18f80c0, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingSystemException(::StringW  message) ;

/// @brief Method .ctor, addr 0x18f6ddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_applicationDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentNullDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentOutOfRangeDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_arithmeticDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_divideByZeroDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_indexOutOfRangeDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_invalidCastDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_invalidOperationDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_ioDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_nullReferenceDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_outOfMemoryDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_overflowDelegate() ;

static inline ::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate* getStaticF_systemDelegate() ;

static inline void setStaticF_applicationDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_argumentDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentNullDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentOutOfRangeDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_arithmeticDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_divideByZeroDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_indexOutOfRangeDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidCastDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidOperationDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_ioDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_nullReferenceDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_outOfMemoryDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_overflowDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_systemDelegate(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthUtilPINVOKE_SWIGExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthUtilPINVOKE_SWIGExceptionHelper(AuthUtilPINVOKE_SWIGExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthUtilPINVOKE_SWIGExceptionHelper(AuthUtilPINVOKE_SWIGExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12236};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
class CORDL_TYPE AuthUtilPINVOKE_SWIGPendingException : public ::System::Object {
public:
// Declarations
/// @brief Field numExceptionsPending, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_numExceptionsPending, put=setStaticF_numExceptionsPending)) int32_t  numExceptionsPending;

/// @brief Field pendingException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingException, put=setStaticF_pendingException)) ::System::Exception*  pendingException;

/// @brief Method Retrieve, addr 0x18f8a2c, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Exception* Retrieve() ;

/// @brief Method Set, addr 0x18f8b28, size 0x17c, virtual false, abstract: false, final false
static inline void Set(::System::Exception*  e) ;

static inline int32_t getStaticF_numExceptionsPending() ;

static inline ::System::Exception* getStaticF_pendingException() ;

/// @brief Method get_Pending, addr 0x18f8ccc, size 0x68, virtual false, abstract: false, final false
static inline bool get_Pending() ;

static inline void setStaticF_numExceptionsPending(int32_t  value) ;

static inline void setStaticF_pendingException(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthUtilPINVOKE_SWIGPendingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGPendingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthUtilPINVOKE_SWIGPendingException(AuthUtilPINVOKE_SWIGPendingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGPendingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthUtilPINVOKE_SWIGPendingException(AuthUtilPINVOKE_SWIGPendingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::AuthUtilPINVOKE_SWIGPendingException, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.MulticastDelegate
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
class CORDL_TYPE SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f8ef0, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::StringW  message) ;

static inline ::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f8dd4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate(SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate(SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12238};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
class CORDL_TYPE AuthUtilPINVOKE_SWIGStringHelper : public ::System::Object {
public:
// Declarations
using SWIGStringDelegate = ::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate;

/// @brief Field stringDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringDelegate, put=setStaticF_stringDelegate)) ::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate*  stringDelegate;

/// @brief Method CreateString, addr 0x18f8d34, size 0x4, virtual false, abstract: false, final false
static inline ::StringW CreateString(::StringW  cString) ;

static inline ::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper* New_ctor() ;

/// @brief Method SWIGRegisterStringCallback_AuthUtil, addr 0x18f8e70, size 0x80, virtual false, abstract: false, final false
static inline void SWIGRegisterStringCallback_AuthUtil(::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate*  stringDelegate) ;

/// @brief Method .ctor, addr 0x18f6de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate* getStaticF_stringDelegate() ;

static inline void setStaticF_stringDelegate(::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthUtilPINVOKE_SWIGStringHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGStringHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthUtilPINVOKE_SWIGStringHelper(AuthUtilPINVOKE_SWIGStringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE_SWIGStringHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthUtilPINVOKE_SWIGStringHelper(AuthUtilPINVOKE_SWIGStringHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Auth
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtilPINVOKE
class CORDL_TYPE AuthUtilPINVOKE : public ::System::Object {
public:
// Declarations
using SWIGExceptionHelper = ::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper;

using SWIGPendingException = ::Firebase::Auth::AuthUtilPINVOKE_SWIGPendingException;

using SWIGStringHelper = ::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper;

/// @brief Field swigExceptionHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigExceptionHelper, put=setStaticF_swigExceptionHelper)) ::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper*  swigExceptionHelper;

/// @brief Field swigStringHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigStringHelper, put=setStaticF_swigStringHelper)) ::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper*  swigStringHelper;

/// @brief Method CreateAuthStateListener, addr 0x18f79ec, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateAuthStateListener(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  jarg2) ;

/// @brief Method CreateIdTokenListener, addr 0x18f7afc, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateIdTokenListener(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  jarg2) ;

/// @brief Method DestroyAuthStateListener, addr 0x18f7a78, size 0x84, virtual false, abstract: false, final false
static inline void DestroyAuthStateListener(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method DestroyIdTokenListener, addr 0x18f7b88, size 0x84, virtual false, abstract: false, final false
static inline void DestroyIdTokenListener(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method FirebaseAuth_CreateUserWithEmailAndPasswordInternal, addr 0x18f7690, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseAuth_CreateUserWithEmailAndPasswordInternal(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2, ::StringW  jarg3) ;

/// @brief Method FirebaseAuth_CurrentUserInternal_get, addr 0x18f7970, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseAuth_CurrentUserInternal_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseAuth_GetAuthInternal, addr 0x18f7870, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseAuth_GetAuthInternal(::System::Runtime::InteropServices::HandleRef  jarg1, ::ByRef<int32_t>  jarg2) ;

/// @brief Method FirebaseAuth_ReleaseReferenceInternal, addr 0x18f78f4, size 0x7c, virtual false, abstract: false, final false
static inline void FirebaseAuth_ReleaseReferenceInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseAuth_SendPasswordResetEmail, addr 0x18f77d0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseAuth_SendPasswordResetEmail(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method FirebaseAuth_SignInWithEmailAndPasswordInternal, addr 0x18f75cc, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseAuth_SignInWithEmailAndPasswordInternal(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2, ::StringW  jarg3) ;

/// @brief Method FirebaseAuth_SignOut, addr 0x18f7754, size 0x7c, virtual false, abstract: false, final false
static inline void FirebaseAuth_SignOut(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseUser_IsEmailVerified_get, addr 0x18f7338, size 0x84, virtual false, abstract: false, final false
static inline bool FirebaseUser_IsEmailVerified_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseUser_Reload, addr 0x18f72bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseUser_Reload(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseUser_SendEmailVerification, addr 0x18f71bc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseUser_SendEmailVerification(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseUser_UpdateEmail, addr 0x18f707c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseUser_UpdateEmail(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method FirebaseUser_UpdatePassword, addr 0x18f711c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseUser_UpdatePassword(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method FirebaseUser_UpdateUserProfile, addr 0x18f7238, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseUser_UpdateUserProfile(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::Runtime::InteropServices::HandleRef  jarg2) ;

/// @brief Method FirebaseUser_UserId_get, addr 0x18f73bc, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FirebaseUser_UserId_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_User_GetResult, addr 0x18f6f08, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_User_GetResult(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_User_SWIGUpcast, addr 0x18f7c0c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_User_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_User_SWIG_FreeCompletionData, addr 0x18f6e84, size 0x84, virtual false, abstract: false, final false
static inline void Future_User_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_User_SWIG_OnCompletion, addr 0x18f6dec, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_User_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Auth::Future_User_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method UserProfile_DisplayName_set, addr 0x18f74b8, size 0x98, virtual false, abstract: false, final false
static inline void UserProfile_DisplayName_set(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method delete_FirebaseUser, addr 0x18f7000, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FirebaseUser(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_User, addr 0x18f6f84, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_User(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_UserProfile, addr 0x18f7550, size 0x7c, virtual false, abstract: false, final false
static inline void delete_UserProfile(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline ::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper* getStaticF_swigExceptionHelper() ;

static inline ::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper* getStaticF_swigStringHelper() ;

/// @brief Method new_UserProfile, addr 0x18f7450, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_UserProfile() ;

static inline void setStaticF_swigExceptionHelper(::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper*  value) ;

static inline void setStaticF_swigStringHelper(::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthUtilPINVOKE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthUtilPINVOKE(AuthUtilPINVOKE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthUtilPINVOKE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthUtilPINVOKE(AuthUtilPINVOKE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::AuthUtilPINVOKE, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Auth
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE*, "Firebase.Auth", "AuthUtilPINVOKE");
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE_SWIGExceptionHelper*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGExceptionHelper");
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE_SWIGPendingException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE_SWIGPendingException*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGPendingException");
NEED_NO_BOX(::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtilPINVOKE_SWIGStringHelper*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGStringHelper");
NEED_NO_BOX(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionArgumentDelegate*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
NEED_NO_BOX(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::SWIGExceptionHelper_AuthUtilPINVOKE_ExceptionDelegate*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
NEED_NO_BOX(::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::SWIGStringHelper_AuthUtilPINVOKE_SWIGStringDelegate*, "Firebase.Auth", "AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate");
