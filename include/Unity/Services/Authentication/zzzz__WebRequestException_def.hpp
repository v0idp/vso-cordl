#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/WebRequestException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestException)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class WebRequestException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::WebRequestException);
// Dependencies System.Exception
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.WebRequestException
class CORDL_TYPE WebRequestException : public ::System::Exception {
public:
// Declarations
 __declspec(property(put=set_DeserializationError)) bool  DeserializationError;

 __declspec(property(get=get_NetworkError, put=set_NetworkError)) bool  NetworkError;

 __declspec(property(get=get_ResponseCode, put=set_ResponseCode)) int64_t  ResponseCode;

 __declspec(property(get=get_ResponseHeaders, put=set_ResponseHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ResponseHeaders;

 __declspec(property(put=set_ServerError)) bool  ServerError;

/// @brief Field <DeserializationError>k__BackingField, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeserializationError_k__BackingField, put=__cordl_internal_set__DeserializationError_k__BackingField)) bool  _DeserializationError_k__BackingField;

/// @brief Field <NetworkError>k__BackingField, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__NetworkError_k__BackingField, put=__cordl_internal_set__NetworkError_k__BackingField)) bool  _NetworkError_k__BackingField;

/// @brief Field <ResponseCode>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseCode_k__BackingField, put=__cordl_internal_set__ResponseCode_k__BackingField)) int64_t  _ResponseCode_k__BackingField;

/// @brief Field <ResponseHeaders>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResponseHeaders_k__BackingField, put=__cordl_internal_set__ResponseHeaders_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _ResponseHeaders_k__BackingField;

/// @brief Field <ServerError>k__BackingField, offset 0x8e, size 0x1 
 __declspec(property(get=__cordl_internal_get__ServerError_k__BackingField, put=__cordl_internal_set__ServerError_k__BackingField)) bool  _ServerError_k__BackingField;

static inline ::Unity::Services::Authentication::WebRequestException* New_ctor(bool  isNetworkError, bool  isServerError, bool  isDeserializationError, int64_t  responseCode, ::StringW  errorMessage, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  responseHeaders) ;

constexpr bool const& __cordl_internal_get__DeserializationError_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeserializationError_k__BackingField() ;

constexpr bool const& __cordl_internal_get__NetworkError_k__BackingField() const;

constexpr bool& __cordl_internal_get__NetworkError_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__ResponseCode_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ResponseCode_k__BackingField() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__ResponseHeaders_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__ResponseHeaders_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ServerError_k__BackingField() const;

constexpr bool& __cordl_internal_get__ServerError_k__BackingField() ;

constexpr void __cordl_internal_set__DeserializationError_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__NetworkError_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ResponseCode_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__ResponseHeaders_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__ServerError_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x2e99500, size 0xac, virtual false, abstract: false, final false
inline void _ctor(bool  isNetworkError, bool  isServerError, bool  isDeserializationError, int64_t  responseCode, ::StringW  errorMessage, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  responseHeaders) ;

/// @brief Method get_NetworkError, addr 0x2e99764, size 0x8, virtual false, abstract: false, final false
inline bool get_NetworkError() ;

/// @brief Method get_ResponseCode, addr 0x2e99790, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ResponseCode() ;

/// @brief Method get_ResponseHeaders, addr 0x2e997a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* get_ResponseHeaders() ;

/// @brief Method set_DeserializationError, addr 0x2e99778, size 0xc, virtual false, abstract: false, final false
inline void set_DeserializationError(bool  value) ;

/// @brief Method set_NetworkError, addr 0x2e9976c, size 0xc, virtual false, abstract: false, final false
inline void set_NetworkError(bool  value) ;

/// @brief Method set_ResponseCode, addr 0x2e99798, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseCode(int64_t  value) ;

/// @brief Method set_ResponseHeaders, addr 0x2e997a8, size 0x8, virtual false, abstract: false, final false
inline void set_ResponseHeaders(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_ServerError, addr 0x2e99784, size 0xc, virtual false, abstract: false, final false
inline void set_ServerError(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestException(WebRequestException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestException(WebRequestException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11580};

/// @brief Field <NetworkError>k__BackingField, offset: 0x8c, size: 0x1, def value: None
 bool  ____NetworkError_k__BackingField;

/// @brief Field <DeserializationError>k__BackingField, offset: 0x8d, size: 0x1, def value: None
 bool  ____DeserializationError_k__BackingField;

/// @brief Field <ServerError>k__BackingField, offset: 0x8e, size: 0x1, def value: None
 bool  ____ServerError_k__BackingField;

/// @brief Field <ResponseCode>k__BackingField, offset: 0x90, size: 0x8, def value: None
 int64_t  ____ResponseCode_k__BackingField;

/// @brief Field <ResponseHeaders>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____ResponseHeaders_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::WebRequestException, ____NetworkError_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequestException, ____DeserializationError_k__BackingField) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequestException, ____ServerError_k__BackingField) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequestException, ____ResponseCode_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::WebRequestException, ____ResponseHeaders_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::WebRequestException, 0xa0>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::WebRequestException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::WebRequestException*, "Unity.Services.Authentication", "WebRequestException");
