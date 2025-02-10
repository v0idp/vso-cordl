#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageInternalPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StorageInternalPINVOKE)
namespace Firebase::Storage {
class Future_Size_SWIG_CompletionDelegate;
}
namespace Firebase::Storage {
class Future_StorageMetadata_SWIG_CompletionDelegate;
}
namespace Firebase::Storage {
class MonitorControllerInternal_MonitorControllerEventDelegate;
}
namespace Firebase::Storage {
class SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Storage {
class SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate;
}
namespace Firebase::Storage {
class SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGPendingException;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGStringHelper;
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
namespace Firebase::Storage {
class SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate;
}
namespace Firebase::Storage {
class SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate;
}
namespace Firebase::Storage {
class SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGExceptionHelper;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGPendingException;
}
namespace Firebase::Storage {
class StorageInternalPINVOKE_SWIGStringHelper;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate);
MARK_REF_PTR_T(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate);
MARK_REF_PTR_T(::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate);
MARK_REF_PTR_T(::Firebase::Storage::StorageInternalPINVOKE);
MARK_REF_PTR_T(::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper);
MARK_REF_PTR_T(::Firebase::Storage::StorageInternalPINVOKE_SWIGPendingException);
MARK_REF_PTR_T(::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper);
// Dependencies System.MulticastDelegate
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
class CORDL_TYPE SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1924ab4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message) ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x19244e0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate(SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate(SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.MulticastDelegate
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
class CORDL_TYPE SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1924ac8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  message, ::StringW  paramName) ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x192457c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate(SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper
class CORDL_TYPE StorageInternalPINVOKE_SWIGExceptionHelper : public ::System::Object {
public:
// Declarations
using ExceptionArgumentDelegate = ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate;

using ExceptionDelegate = ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate;

/// @brief Field applicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_applicationDelegate, put=setStaticF_applicationDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  applicationDelegate;

/// @brief Field argumentDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentDelegate, put=setStaticF_argumentDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentDelegate;

/// @brief Field argumentNullDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentNullDelegate, put=setStaticF_argumentNullDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate;

/// @brief Field argumentOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_argumentOutOfRangeDelegate, put=setStaticF_argumentOutOfRangeDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate;

/// @brief Field arithmeticDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_arithmeticDelegate, put=setStaticF_arithmeticDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  arithmeticDelegate;

/// @brief Field divideByZeroDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_divideByZeroDelegate, put=setStaticF_divideByZeroDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  divideByZeroDelegate;

/// @brief Field indexOutOfRangeDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_indexOutOfRangeDelegate, put=setStaticF_indexOutOfRangeDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate;

/// @brief Field invalidCastDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidCastDelegate, put=setStaticF_invalidCastDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  invalidCastDelegate;

/// @brief Field invalidOperationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidOperationDelegate, put=setStaticF_invalidOperationDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  invalidOperationDelegate;

/// @brief Field ioDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ioDelegate, put=setStaticF_ioDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  ioDelegate;

/// @brief Field nullReferenceDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nullReferenceDelegate, put=setStaticF_nullReferenceDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  nullReferenceDelegate;

/// @brief Field outOfMemoryDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_outOfMemoryDelegate, put=setStaticF_outOfMemoryDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  outOfMemoryDelegate;

/// @brief Field overflowDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overflowDelegate, put=setStaticF_overflowDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  overflowDelegate;

/// @brief Field systemDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_systemDelegate, put=setStaticF_systemDelegate)) ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  systemDelegate;

static inline ::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper* New_ctor() ;

/// @brief Method SWIGRegisterExceptionCallbacksArgument_StorageInternal, addr 0x1924788, size 0xb4, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacksArgument_StorageInternal(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentNullDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  argumentOutOfRangeDelegate) ;

/// @brief Method SWIGRegisterExceptionCallbacks_StorageInternal, addr 0x192461c, size 0x16c, virtual false, abstract: false, final false
static inline void SWIGRegisterExceptionCallbacks_StorageInternal(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  applicationDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  arithmeticDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  divideByZeroDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  indexOutOfRangeDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  invalidCastDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  invalidOperationDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  ioDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  nullReferenceDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  outOfMemoryDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  overflowDelegate, ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  systemExceptionDelegate) ;

/// @brief Method SetPendingApplicationException, addr 0x1923a98, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingApplicationException(::StringW  message) ;

/// @brief Method SetPendingArgumentException, addr 0x1923f3c, size 0x7c, virtual false, abstract: false, final false
static inline void SetPendingArgumentException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentNullException, addr 0x1923fb8, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentNullException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArgumentOutOfRangeException, addr 0x1924064, size 0xac, virtual false, abstract: false, final false
static inline void SetPendingArgumentOutOfRangeException(::StringW  message, ::StringW  paramName) ;

/// @brief Method SetPendingArithmeticException, addr 0x1923b04, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingArithmeticException(::StringW  message) ;

/// @brief Method SetPendingDivideByZeroException, addr 0x1923b70, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingDivideByZeroException(::StringW  message) ;

/// @brief Method SetPendingIOException, addr 0x1923d20, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIOException(::StringW  message) ;

/// @brief Method SetPendingIndexOutOfRangeException, addr 0x1923bdc, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingIndexOutOfRangeException(::StringW  message) ;

/// @brief Method SetPendingInvalidCastException, addr 0x1923c48, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidCastException(::StringW  message) ;

/// @brief Method SetPendingInvalidOperationException, addr 0x1923cb4, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingInvalidOperationException(::StringW  message) ;

/// @brief Method SetPendingNullReferenceException, addr 0x1923d8c, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingNullReferenceException(::StringW  message) ;

/// @brief Method SetPendingOutOfMemoryException, addr 0x1923df8, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOutOfMemoryException(::StringW  message) ;

/// @brief Method SetPendingOverflowException, addr 0x1923e64, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingOverflowException(::StringW  message) ;

/// @brief Method SetPendingSystemException, addr 0x1923ed0, size 0x6c, virtual false, abstract: false, final false
static inline void SetPendingSystemException(::StringW  message) ;

/// @brief Method .ctor, addr 0x19227f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_applicationDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentNullDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate* getStaticF_argumentOutOfRangeDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_arithmeticDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_divideByZeroDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_indexOutOfRangeDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_invalidCastDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_invalidOperationDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_ioDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_nullReferenceDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_outOfMemoryDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_overflowDelegate() ;

static inline ::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate* getStaticF_systemDelegate() ;

static inline void setStaticF_applicationDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_argumentDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentNullDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_argumentOutOfRangeDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*  value) ;

static inline void setStaticF_arithmeticDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_divideByZeroDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_indexOutOfRangeDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidCastDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_invalidOperationDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_ioDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_nullReferenceDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_outOfMemoryDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_overflowDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

static inline void setStaticF_systemDelegate(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageInternalPINVOKE_SWIGExceptionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGExceptionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageInternalPINVOKE_SWIGExceptionHelper(StorageInternalPINVOKE_SWIGExceptionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGExceptionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageInternalPINVOKE_SWIGExceptionHelper(StorageInternalPINVOKE_SWIGExceptionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGPendingException
class CORDL_TYPE StorageInternalPINVOKE_SWIGPendingException : public ::System::Object {
public:
// Declarations
/// @brief Field numExceptionsPending, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_numExceptionsPending, put=setStaticF_numExceptionsPending)) int32_t  numExceptionsPending;

/// @brief Field pendingException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingException, put=setStaticF_pendingException)) ::System::Exception*  pendingException;

/// @brief Method Retrieve, addr 0x192483c, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Exception* Retrieve() ;

/// @brief Method Set, addr 0x1924938, size 0x17c, virtual false, abstract: false, final false
static inline void Set(::System::Exception*  e) ;

static inline int32_t getStaticF_numExceptionsPending() ;

static inline ::System::Exception* getStaticF_pendingException() ;

/// @brief Method get_Pending, addr 0x1924adc, size 0x68, virtual false, abstract: false, final false
static inline bool get_Pending() ;

static inline void setStaticF_numExceptionsPending(int32_t  value) ;

static inline void setStaticF_pendingException(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageInternalPINVOKE_SWIGPendingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGPendingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageInternalPINVOKE_SWIGPendingException(StorageInternalPINVOKE_SWIGPendingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGPendingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageInternalPINVOKE_SWIGPendingException(StorageInternalPINVOKE_SWIGPendingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11672};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageInternalPINVOKE_SWIGPendingException, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.MulticastDelegate
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
class CORDL_TYPE SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1924d00, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::StringW  message) ;

static inline ::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1924be4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate(SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate(SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11673};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper
class CORDL_TYPE StorageInternalPINVOKE_SWIGStringHelper : public ::System::Object {
public:
// Declarations
using SWIGStringDelegate = ::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate;

/// @brief Field stringDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringDelegate, put=setStaticF_stringDelegate)) ::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate*  stringDelegate;

/// @brief Method CreateString, addr 0x1924b44, size 0x4, virtual false, abstract: false, final false
static inline ::StringW CreateString(::StringW  cString) ;

static inline ::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper* New_ctor() ;

/// @brief Method SWIGRegisterStringCallback_StorageInternal, addr 0x1924c80, size 0x80, virtual false, abstract: false, final false
static inline void SWIGRegisterStringCallback_StorageInternal(::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate*  stringDelegate) ;

/// @brief Method .ctor, addr 0x1922800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate* getStaticF_stringDelegate() ;

static inline void setStaticF_stringDelegate(::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageInternalPINVOKE_SWIGStringHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGStringHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageInternalPINVOKE_SWIGStringHelper(StorageInternalPINVOKE_SWIGStringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE_SWIGStringHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageInternalPINVOKE_SWIGStringHelper(StorageInternalPINVOKE_SWIGStringHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11674};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageInternalPINVOKE
class CORDL_TYPE StorageInternalPINVOKE : public ::System::Object {
public:
// Declarations
using SWIGExceptionHelper = ::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper;

using SWIGPendingException = ::Firebase::Storage::StorageInternalPINVOKE_SWIGPendingException;

using SWIGStringHelper = ::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper;

/// @brief Field swigExceptionHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigExceptionHelper, put=setStaticF_swigExceptionHelper)) ::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper*  swigExceptionHelper;

/// @brief Field swigStringHelper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigStringHelper, put=setStaticF_swigStringHelper)) ::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper*  swigStringHelper;

/// @brief Method ControllerInternal_Cancel, addr 0x1922cac, size 0x84, virtual false, abstract: false, final false
static inline bool ControllerInternal_Cancel(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseStorageInternal_App_get, addr 0x1923890, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseStorageInternal_App_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseStorageInternal_GetInstanceInternal, addr 0x1923764, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseStorageInternal_GetInstanceInternal(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2, ::ByRef<int32_t>  jarg3) ;

/// @brief Method FirebaseStorageInternal_GetReference__SWIG_0, addr 0x19236e8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr FirebaseStorageInternal_GetReference__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseStorageInternal_ReleaseReferenceInternal, addr 0x1923814, size 0x7c, virtual false, abstract: false, final false
static inline void FirebaseStorageInternal_ReleaseReferenceInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method FirebaseStorageInternal_Url_get, addr 0x192390c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW FirebaseStorageInternal_Url_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_Size_GetResult, addr 0x1922b38, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t Future_Size_GetResult(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_Size_SWIGUpcast, addr 0x1923a1c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_Size_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_Size_SWIG_FreeCompletionData, addr 0x1922ab4, size 0x84, virtual false, abstract: false, final false
static inline void Future_Size_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_Size_SWIG_OnCompletion, addr 0x1922a1c, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_Size_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Storage::Future_Size_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method Future_StorageMetadata_GetResult, addr 0x1922924, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_StorageMetadata_GetResult(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method Future_StorageMetadata_SWIGUpcast, addr 0x19239a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_StorageMetadata_SWIGUpcast(::System::IntPtr  jarg1) ;

/// @brief Method Future_StorageMetadata_SWIG_FreeCompletionData, addr 0x19228a0, size 0x84, virtual false, abstract: false, final false
static inline void Future_StorageMetadata_SWIG_FreeCompletionData(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2) ;

/// @brief Method Future_StorageMetadata_SWIG_OnCompletion, addr 0x1922808, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr Future_StorageMetadata_SWIG_OnCompletion(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Storage::Future_StorageMetadata_SWIG_CompletionDelegate*  jarg2, int32_t  jarg3) ;

/// @brief Method MetadataInternal_ContentType_set, addr 0x1922e14, size 0x98, virtual false, abstract: false, final false
static inline void MetadataInternal_ContentType_set(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method MetadataInternal_CopyCppObject, addr 0x1922eac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr MetadataInternal_CopyCppObject(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method MonitorControllerInternal_BytesTransferred_get, addr 0x19235f0, size 0x7c, virtual false, abstract: false, final false
static inline int64_t MonitorControllerInternal_BytesTransferred_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method MonitorControllerInternal_Controller_get, addr 0x1923574, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr MonitorControllerInternal_Controller_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method MonitorControllerInternal_SetPausedEvent, addr 0x192343c, size 0x9c, virtual false, abstract: false, final false
static inline void MonitorControllerInternal_SetPausedEvent(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  jarg2, ::System::IntPtr  jarg3) ;

/// @brief Method MonitorControllerInternal_SetProgressEvent, addr 0x19234d8, size 0x9c, virtual false, abstract: false, final false
static inline void MonitorControllerInternal_SetProgressEvent(::System::Runtime::InteropServices::HandleRef  jarg1, ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  jarg2, ::System::IntPtr  jarg3) ;

/// @brief Method MonitorControllerInternal_TotalByteCount_get, addr 0x192366c, size 0x7c, virtual false, abstract: false, final false
static inline int64_t MonitorControllerInternal_TotalByteCount_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method StorageReferenceInternal_Bucket_get, addr 0x19230c0, size 0x94, virtual false, abstract: false, final false
static inline ::StringW StorageReferenceInternal_Bucket_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method StorageReferenceInternal_Child__SWIG_0, addr 0x1922fa4, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr StorageReferenceInternal_Child__SWIG_0(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2) ;

/// @brief Method StorageReferenceInternal_Delete, addr 0x1923044, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr StorageReferenceInternal_Delete(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method StorageReferenceInternal_FullPath_get, addr 0x1923154, size 0x94, virtual false, abstract: false, final false
static inline ::StringW StorageReferenceInternal_FullPath_get(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method StorageReferenceInternal_GetFileUsingMonitorController, addr 0x19231e8, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr StorageReferenceInternal_GetFileUsingMonitorController(::System::Runtime::InteropServices::HandleRef  jarg1, ::StringW  jarg2, ::System::Runtime::InteropServices::HandleRef  jarg3) ;

/// @brief Method StorageReferenceInternal_PutBytesUsingMonitorController, addr 0x1923298, size 0xac, virtual false, abstract: false, final false
static inline ::System::IntPtr StorageReferenceInternal_PutBytesUsingMonitorController(::System::Runtime::InteropServices::HandleRef  jarg1, ::System::IntPtr  jarg2, uint32_t  jarg3, ::System::Runtime::InteropServices::HandleRef  jarg4, ::System::Runtime::InteropServices::HandleRef  jarg5) ;

/// @brief Method delete_ControllerInternal, addr 0x1922c30, size 0x7c, virtual false, abstract: false, final false
static inline void delete_ControllerInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_Size, addr 0x1922bb4, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_Size(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_Future_StorageMetadata, addr 0x19229a0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_Future_StorageMetadata(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_MetadataInternal, addr 0x1922d98, size 0x7c, virtual false, abstract: false, final false
static inline void delete_MetadataInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_MonitorControllerInternal, addr 0x19233c0, size 0x7c, virtual false, abstract: false, final false
static inline void delete_MonitorControllerInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

/// @brief Method delete_StorageReferenceInternal, addr 0x1922f28, size 0x7c, virtual false, abstract: false, final false
static inline void delete_StorageReferenceInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline ::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper* getStaticF_swigExceptionHelper() ;

static inline ::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper* getStaticF_swigStringHelper() ;

/// @brief Method new_MetadataInternal__SWIG_0, addr 0x1922d30, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr new_MetadataInternal__SWIG_0() ;

/// @brief Method new_MonitorControllerInternal, addr 0x1923344, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr new_MonitorControllerInternal(::System::Runtime::InteropServices::HandleRef  jarg1) ;

static inline void setStaticF_swigExceptionHelper(::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper*  value) ;

static inline void setStaticF_swigStringHelper(::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageInternalPINVOKE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageInternalPINVOKE(StorageInternalPINVOKE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageInternalPINVOKE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageInternalPINVOKE(StorageInternalPINVOKE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageInternalPINVOKE, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionArgumentDelegate*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
NEED_NO_BOX(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::SWIGExceptionHelper_StorageInternalPINVOKE_ExceptionDelegate*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate");
NEED_NO_BOX(::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::SWIGStringHelper_StorageInternalPINVOKE_SWIGStringDelegate*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate");
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE*, "Firebase.Storage", "StorageInternalPINVOKE");
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE_SWIGExceptionHelper*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGExceptionHelper");
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE_SWIGPendingException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE_SWIGPendingException*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGPendingException");
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE_SWIGStringHelper*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGStringHelper");
