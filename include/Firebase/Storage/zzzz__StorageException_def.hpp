#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StorageException)
namespace Firebase::Storage {
struct ErrorInternal;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace Firebase::Storage {
class StorageException;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::StorageException);
// Dependencies System.Exception
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageException
class CORDL_TYPE StorageException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_ErrorCode, put=set_ErrorCode)) int32_t  ErrorCode;

 __declspec(property(put=set_HttpResultCode)) int32_t  HttpResultCode;

/// @brief Field <ErrorCode>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ErrorCode_k__BackingField, put=__cordl_internal_set__ErrorCode_k__BackingField)) int32_t  _ErrorCode_k__BackingField;

/// @brief Field <HttpResultCode>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__HttpResultCode_k__BackingField, put=__cordl_internal_set__HttpResultCode_k__BackingField)) int32_t  _HttpResultCode_k__BackingField;

/// @brief Field errorToStorageErrorAndHttpStatusCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_errorToStorageErrorAndHttpStatusCode, put=setStaticF_errorToStorageErrorAndHttpStatusCode)) ::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*  errorToStorageErrorAndHttpStatusCode;

/// @brief Field unknownError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unknownError, put=setStaticF_unknownError)) ::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*  unknownError;

/// @brief Method CreateFromException, addr 0x192af9c, size 0x46c, virtual false, abstract: false, final false
static inline ::Firebase::Storage::StorageException* CreateFromException(::System::Exception*  exception) ;

/// @brief Method GetErrorMessageForCode, addr 0x192ba40, size 0x170, virtual false, abstract: false, final false
static inline ::StringW GetErrorMessageForCode(int32_t  errorCode) ;

static inline ::Firebase::Storage::StorageException* New_ctor(int32_t  errorCode, int32_t  httpResultCode, ::StringW  errorMessage) ;

constexpr int32_t const& __cordl_internal_get__ErrorCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ErrorCode_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__HttpResultCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__HttpResultCode_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HttpResultCode_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x192b988, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  errorCode, int32_t  httpResultCode, ::StringW  errorMessage) ;

static inline ::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>* getStaticF_errorToStorageErrorAndHttpStatusCode() ;

static inline ::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>* getStaticF_unknownError() ;

/// @brief Method get_ErrorCode, addr 0x192bbb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ErrorCode() ;

static inline void setStaticF_errorToStorageErrorAndHttpStatusCode(::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*  value) ;

static inline void setStaticF_unknownError(::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*  value) ;

/// @brief Method set_ErrorCode, addr 0x192bbb8, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorCode(int32_t  value) ;

/// @brief Method set_HttpResultCode, addr 0x192bbc0, size 0x8, virtual false, abstract: false, final false
inline void set_HttpResultCode(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageException(StorageException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageException(StorageException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11705};

/// @brief Field <ErrorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____ErrorCode_k__BackingField;

/// @brief Field <HttpResultCode>k__BackingField, offset: 0x90, size: 0x4, def value: None
 int32_t  ____HttpResultCode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageException, ____ErrorCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageException, ____HttpResultCode_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageException, 0x98>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::StorageException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageException*, "Firebase.Storage", "StorageException");
