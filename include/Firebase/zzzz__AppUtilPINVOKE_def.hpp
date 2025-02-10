#pragma once
// IWYU pragma private; include "Firebase/AppUtilPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppUtilPINVOKE)
namespace Firebase {
class AppUtilPINVOKE_SWIGExceptionHelper;
}
namespace Firebase {
class AppUtilPINVOKE_SWIGPendingException;
}
namespace Firebase {
class AppUtilPINVOKE_SWIGStringHelper;
}
namespace Firebase {
class FutureVoid_SWIG_CompletionDelegate;
}
namespace Firebase {
class LogUtil_LogMessageDelegate;
}
namespace Firebase {
class SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase {
class SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate;
}
namespace Firebase {
class SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate;
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
namespace Firebase {
class AppUtilPINVOKE;
}
namespace Firebase {
class AppUtilPINVOKE_SWIGExceptionHelper;
}
namespace Firebase {
class AppUtilPINVOKE_SWIGPendingException;
}
namespace Firebase {
class AppUtilPINVOKE_SWIGStringHelper;
}
namespace Firebase {
class SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase {
class SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate;
}
namespace Firebase {
class SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::AppUtilPINVOKE);
MARK_REF_PTR_T(::Firebase::AppUtilPINVOKE_SWIGExceptionHelper);
MARK_REF_PTR_T(::Firebase::AppUtilPINVOKE_SWIGPendingException);
MARK_REF_PTR_T(::Firebase::AppUtilPINVOKE_SWIGStringHelper);
MARK_REF_PTR_T(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate);
MARK_REF_PTR_T(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate);
MARK_REF_PTR_T(::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
class CORDL_TYPE SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f012c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18efb58, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate(SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate(SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
class CORDL_TYPE SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f0140, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message, ::StringW  paramName) ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18efbf4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGExceptionHelper
class CORDL_TYPE AppUtilPINVOKE_SWIGExceptionHelper : public ::System::Object {
public:
// Declarations
using ExceptionArgumentDelegate = ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate;

using ExceptionDelegate = ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate;

/// @brief Field applicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_applicationDelegate, put=setStaticF_applicationDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  applicationDelegate;

/// @brief Field argumentDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentDelegate, put=setStaticF_argumentDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentDelegate;

/// @brief Field argumentNullDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentNullDelegate, put=setStaticF_argumentNullDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate;

/// @brief Field argumentOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentOutOfRangeDelegate, put=setStaticF_argumentOutOfRangeDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate;

/// @brief Field arithmeticDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_arithmeticDelegate, put=setStaticF_arithmeticDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  arithmeticDelegate;

/// @brief Field divideByZeroDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_divideByZeroDelegate, put=setStaticF_divideByZeroDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  divideByZeroDelegate;

/// @brief Field indexOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_indexOutOfRangeDelegate, put=setStaticF_indexOutOfRangeDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate;

/// @brief Field invalidCastDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidCastDelegate, put=setStaticF_invalidCastDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  invalidCastDelegate;

/// @brief Field invalidOperationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidOperationDelegate, put=setStaticF_invalidOperationDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  invalidOperationDelegate;

/// @brief Field ioDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ioDelegate, put=setStaticF_ioDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  ioDelegate;

/// @brief Field nullReferenceDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nullReferenceDelegate, put=setStaticF_nullReferenceDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  nullReferenceDelegate;

/// @brief Field outOfMemoryDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outOfMemoryDelegate, put=setStaticF_outOfMemoryDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  outOfMemoryDelegate;

/// @brief Field overflowDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overflowDelegate, put=setStaticF_overflowDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  overflowDelegate;

/// @brief Field systemDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_systemDelegate, put=setStaticF_systemDelegate)) ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  systemDelegate;

static inline ::Firebase::AppUtilPINVOKE_SWIGExceptionHelper* New_ctor() ;

/// @brief Method SWIGRegisterExceptionCallbacksArgument_AppUtil, addr 0x18efe00, size 0xb4, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacksArgument_AppUtil(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate) ;

/// @brief Method SWIGRegisterExceptionCallbacks_AppUtil, addr 0x18efc94, size 0x16c, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacks_AppUtil(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  applicationDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  arithmeticDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  divideByZeroDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  invalidCastDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  invalidOperationDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  ioDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  nullReferenceDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  outOfMemoryDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  overflowDelegate, ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  systemExceptionDelegate) ;

/// @brief Method SetPendingApplicationException, addr 0x18ef110, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingApplicationException(::StringW  message) ;

/// @brief Method SetPendingArgumentException, addr 0x18ef5b4, size 0x7c, virtual false, abstract: false, final false
static inline void SetPendingArgumentException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentNullException, addr 0x18ef630, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentNullException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentOutOfRangeException, addr 0x18ef6dc, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentOutOfRangeException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArithmeticException, addr 0x18ef17c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingArithmeticException(::StringW  message) ;

/// @brief Method SetPendingDivideByZeroException, addr 0x18ef1e8, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingDivideByZeroException(::StringW  message) ;

/// @brief Method SetPendingIOException, addr 0x18ef398, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIOException(::StringW  message) ;

/// @brief Method SetPendingIndexOutOfRangeException, addr 0x18ef254, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIndexOutOfRangeException(::StringW  message) ;

/// @brief Method SetPendingInvalidCastException, addr 0x18ef2c0, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidCastException(::StringW  message) ;

/// @brief Method SetPendingInvalidOperationException, addr 0x18ef32c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidOperationException(::StringW  message) ;

/// @brief Method SetPendingNullReferenceException, addr 0x18ef404, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingNullReferenceException(::StringW  message) ;

/// @brief Method SetPendingOutOfMemoryException, addr 0x18ef470, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOutOfMemoryException(::StringW  message) ;

/// @brief Method SetPendingOverflowException, addr 0x18ef4dc, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOverflowException(::StringW  message) ;

/// @brief Method SetPendingSystemException, addr 0x18ef548, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingSystemException(::StringW  message) ;

/// @brief Method .ctor, addr 0x18ed9d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_applicationDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentNullDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentOutOfRangeDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_arithmeticDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_divideByZeroDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_indexOutOfRangeDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_invalidCastDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_invalidOperationDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_ioDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_nullReferenceDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_outOfMemoryDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_overflowDelegate() ;

static inline ::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate* getStaticF_systemDelegate() ;

static inline void setStaticF_applicationDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_argumentDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentNullDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentOutOfRangeDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_arithmeticDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_divideByZeroDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_indexOutOfRangeDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidCastDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidOperationDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_ioDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_nullReferenceDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_outOfMemoryDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_overflowDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_systemDelegate(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppUtilPINVOKE_SWIGExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppUtilPINVOKE_SWIGExceptionHelper(AppUtilPINVOKE_SWIGExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppUtilPINVOKE_SWIGExceptionHelper(AppUtilPINVOKE_SWIGExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::AppUtilPINVOKE_SWIGExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGPendingException
class CORDL_TYPE AppUtilPINVOKE_SWIGPendingException : public ::System::Object {
public:
// Declarations
/// @brief Field numExceptionsPending, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_numExceptionsPending, put=setStaticF_numExceptionsPending)) int32_t  numExceptionsPending;

/// @brief Field pendingException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingException, put=setStaticF_pendingException)) ::System::Exception*  pendingException;

/// @brief Method Retrieve, addr 0x18efeb4, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Exception* Retrieve() ;

/// @brief Method Set, addr 0x18effb0, size 0x17c, virtual false, abstract: false, final false
static inline void Set(::System::Exception*  e) ;

static inline int32_t getStaticF_numExceptionsPending() ;

static inline ::System::Exception* getStaticF_pendingException() ;

/// @brief Method get_Pending, addr 0x18f0154, size 0x68, virtual false, abstract: false, final false
static inline bool get_Pending() ;

static inline void setStaticF_numExceptionsPending(int32_t  value) ;

static inline void setStaticF_pendingException(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppUtilPINVOKE_SWIGPendingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGPendingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppUtilPINVOKE_SWIGPendingException(AppUtilPINVOKE_SWIGPendingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGPendingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppUtilPINVOKE_SWIGPendingException(AppUtilPINVOKE_SWIGPendingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::AppUtilPINVOKE_SWIGPendingException, 0x10>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
class CORDL_TYPE SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f0378, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::StringW  message) ;

static inline ::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f025c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate(SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate(SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE/SWIGStringHelper
class CORDL_TYPE AppUtilPINVOKE_SWIGStringHelper : public ::System::Object {
public:
// Declarations
using SWIGStringDelegate = ::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate;

/// @brief Field stringDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringDelegate, put=setStaticF_stringDelegate)) ::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate*  stringDelegate;

/// @brief Method CreateString, addr 0x18f01bc, size 0x4, virtual false, abstract: false, final false
static inline ::StringW CreateString(::StringW  cString) ;

static inline ::Firebase::AppUtilPINVOKE_SWIGStringHelper* New_ctor() ;

/// @brief Method SWIGRegisterStringCallback_AppUtil, addr 0x18f02f8, size 0x80, virtual false, abstract: false, final false
static inline void SWIGRegisterStringCallback_AppUtil(::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate*  stringDelegate) ;

/// @brief Method .ctor, addr 0x18ed9e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate* getStaticF_stringDelegate() ;

static inline void setStaticF_stringDelegate(::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppUtilPINVOKE_SWIGStringHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGStringHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppUtilPINVOKE_SWIGStringHelper(AppUtilPINVOKE_SWIGStringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE_SWIGStringHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppUtilPINVOKE_SWIGStringHelper(AppUtilPINVOKE_SWIGStringHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::AppUtilPINVOKE_SWIGStringHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppUtilPINVOKE
class CORDL_TYPE AppUtilPINVOKE : public ::System::Object {
public:
// Declarations
using SWIGExceptionHelper = ::Firebase::AppUtilPINVOKE_SWIGExceptionHelper;

using SWIGPendingException = ::Firebase::AppUtilPINVOKE_SWIGPendingException;

using SWIGStringHelper = ::Firebase::AppUtilPINVOKE_SWIGStringHelper;

/// @brief Field swigExceptionHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigExceptionHelper, put=setStaticF_swigExceptionHelper)) ::Firebase::AppUtilPINVOKE_SWIGExceptionHelper*  swigExceptionHelper;

/// @brief Field swigStringHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigStringHelper, put=setStaticF_swigStringHelper)) ::Firebase::AppUtilPINVOKE_SWIGStringHelper*  swigStringHelper;

/// @brief Method AppEnableLogCallback, addr 0x18eedf0, size 0x7c, virtual false, abstract: false, final false
static inline void AppEnableLogCallback(bool  jarg1) ;

/// @brief Method AppOptionsInternal_ApiKey_get, addr 0x18ee610, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_ApiKey_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_AppId_get, addr 0x18ee57c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_AppId_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_GetDatabaseUrlInternal, addr 0x18ee4e8, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_GetDatabaseUrlInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_MessageSenderId_get, addr 0x18ee6a4, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_MessageSenderId_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_PackageName_get, addr 0x18ee860, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_PackageName_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_ProjectId_get, addr 0x18ee7cc, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_ProjectId_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method AppOptionsInternal_StorageBucket_get, addr 0x18ee738, size 0x94, virtual false, abstract: false, final false
static inline ::StringW AppOptionsInternal_StorageBucket_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseApp_AppSetDefaultConfigPath, addr 0x18eec78, size 0x8c, virtual false, abstract: false, final false
static inline void FirebaseApp_AppSetDefaultConfigPath(::StringW  jarg1) ;

/// @brief Method FirebaseApp_CreateInternal__SWIG_0, addr 0x18eea80, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseApp_CreateInternal__SWIG_0() ;

/// @brief Method FirebaseApp_DefaultName_get, addr 0x18eed04, size 0x88, virtual false, abstract: false, final false
static inline ::StringW FirebaseApp_DefaultName_get() ;

/// @brief Method FirebaseApp_GetLogLevelInternal, addr 0x18eeb64, size 0x68, virtual false, abstract: false, final false
static inline int32_t FirebaseApp_GetLogLevelInternal() ;

/// @brief Method FirebaseApp_NameInternal_get, addr 0x18ee9ec, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FirebaseApp_NameInternal_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseApp_RegisterLibraryInternal, addr 0x18eebcc, size 0xac, virtual false, abstract: false, final false
static inline void FirebaseApp_RegisterLibraryInternal(::StringW  jarg1, ::StringW  jarg2) ;

/// @brief Method FirebaseApp_ReleaseReferenceInternal, addr 0x18eeae8, size 0x7c, virtual false, abstract: false, final false
static inline void FirebaseApp_ReleaseReferenceInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseApp_options, addr 0x18ee970, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseApp_options(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FutureBase_error, addr 0x18edae0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t FutureBase_error(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FutureBase_error_message, addr 0x18edb5c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FutureBase_error_message(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FutureBase_status, addr 0x18eda64, size 0x7c, virtual false, abstract: false, final false
static inline int32_t FutureBase_status(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FutureVoid_SWIGUpcast, addr 0x18ef094, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FutureVoid_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method FutureVoid_SWIG_FreeCompletionData, addr 0x18ee3e8, size 0x84, virtual false, abstract: false, final false
static inline void FutureVoid_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method FutureVoid_SWIG_OnCompletion, addr 0x18ee350, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr FutureVoid_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::FutureVoid_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method GetEnabledAppCallbackByName, addr 0x18eef7c, size 0x98, virtual false, abstract: false, final false
static inline bool GetEnabledAppCallbackByName(::StringW  jarg1) ;

/// @brief Method PollCallbacks, addr 0x18eed8c, size 0x64, virtual false, abstract: false, final false
static inline void PollCallbacks() ;

/// @brief Method SetEnabledAllAppCallbacks, addr 0x18eee6c, size 0x7c, virtual false, abstract: false, final false
static inline void SetEnabledAllAppCallbacks(bool  jarg1) ;

/// @brief Method SetEnabledAppCallbackByName, addr 0x18eeee8, size 0x94, virtual false, abstract: false, final false
static inline void SetEnabledAppCallbackByName(::StringW  jarg1, bool  jarg2) ;

/// @brief Method SetLogFunction, addr 0x18ef014, size 0x80, virtual false, abstract: false, final false
static inline void SetLogFunction(::Firebase::LogUtil_LogMessageDelegate*  jarg1) ;

/// @brief Method StringList_Add, addr 0x18edc6c, size 0x98, virtual false, abstract: false, final false
static inline void StringList_Add(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method StringList_Clear, addr 0x18edbf0, size 0x7c, virtual false, abstract: false, final false
static inline void StringList_Clear(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method StringList_Contains, addr 0x18ee0ec, size 0xa4, virtual false, abstract: false, final false
static inline bool StringList_Contains(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method StringList_IndexOf, addr 0x18ee190, size 0xa0, virtual false, abstract: false, final false
static inline int32_t StringList_IndexOf(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method StringList_Insert, addr 0x18edfc4, size 0xa4, virtual false, abstract: false, final false
static inline void StringList_Insert(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2, ::StringW  jarg3) ;

/// @brief Method StringList_Remove, addr 0x18ee230, size 0xa4, virtual false, abstract: false, final false
static inline bool StringList_Remove(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method StringList_RemoveAt, addr 0x18ee068, size 0x84, virtual false, abstract: false, final false
static inline void StringList_RemoveAt(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method StringList_getitem, addr 0x18ede84, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW StringList_getitem(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method StringList_getitemcopy, addr 0x18edde8, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW StringList_getitemcopy(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2) ;

/// @brief Method StringList_setitem, addr 0x18edf20, size 0xa4, virtual false, abstract: false, final false
static inline void StringList_setitem(::System::Runtime::InteropServices::HandleRef  jarg1, int32_t  jarg2, ::StringW  jarg3) ;

/// @brief Method StringList_size, addr 0x18edd04, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t StringList_size(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_AppOptionsInternal, addr 0x18ee8f4, size 0x7c, virtual false, abstract: false, final false
static inline void delete_AppOptionsInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FutureBase, addr 0x18ed9e8, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FutureBase(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_FutureVoid, addr 0x18ee46c, size 0x7c, virtual false, abstract: false, final false
static inline void delete_FutureVoid(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_StringList, addr 0x18ee2d4, size 0x7c, virtual false, abstract: false, final false
static inline void delete_StringList(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline ::Firebase::AppUtilPINVOKE_SWIGExceptionHelper* getStaticF_swigExceptionHelper() ;

static inline ::Firebase::AppUtilPINVOKE_SWIGStringHelper* getStaticF_swigStringHelper() ;

/// @brief Method new_StringList__SWIG_0, addr 0x18edd80, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_StringList__SWIG_0() ;

static inline void setStaticF_swigExceptionHelper(::Firebase::AppUtilPINVOKE_SWIGExceptionHelper*  value) ;

static inline void setStaticF_swigStringHelper(::Firebase::AppUtilPINVOKE_SWIGStringHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppUtilPINVOKE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppUtilPINVOKE(AppUtilPINVOKE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppUtilPINVOKE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppUtilPINVOKE(AppUtilPINVOKE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::AppUtilPINVOKE, 0x10>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::AppUtilPINVOKE);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE*, "Firebase", "AppUtilPINVOKE");
NEED_NO_BOX(::Firebase::AppUtilPINVOKE_SWIGExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE_SWIGExceptionHelper*, "Firebase", "AppUtilPINVOKE/SWIGExceptionHelper");
NEED_NO_BOX(::Firebase::AppUtilPINVOKE_SWIGPendingException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE_SWIGPendingException*, "Firebase", "AppUtilPINVOKE/SWIGPendingException");
NEED_NO_BOX(::Firebase::AppUtilPINVOKE_SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE_SWIGStringHelper*, "Firebase", "AppUtilPINVOKE/SWIGStringHelper");
NEED_NO_BOX(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionArgumentDelegate*, "Firebase", "AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
NEED_NO_BOX(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::SWIGExceptionHelper_AppUtilPINVOKE_ExceptionDelegate*, "Firebase", "AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
NEED_NO_BOX(::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::SWIGStringHelper_AppUtilPINVOKE_SWIGStringDelegate*, "Firebase", "AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate");
