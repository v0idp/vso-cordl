#pragma once
// IWYU pragma private; include "Proyecto26/RequestException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestException)
namespace System {
class Object;
}
// Forward declare root types
namespace Proyecto26 {
class RequestException;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::RequestException);
// Dependencies System.Exception
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.RequestException
class CORDL_TYPE RequestException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_IsHttpError, put=set_IsHttpError)) bool  IsHttpError;

 __declspec(property(get=get_IsNetworkError, put=set_IsNetworkError)) bool  IsNetworkError;

 __declspec(property(get=get_Response, put=set_Response)) ::StringW  Response;

 __declspec(property(get=get_ServerMessage, put=set_ServerMessage)) ::StringW  ServerMessage;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int64_t  StatusCode;

/// @brief Field _isHttpError, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHttpError, put=__cordl_internal_set__isHttpError)) bool  _isHttpError;

/// @brief Field _isNetworkError, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNetworkError, put=__cordl_internal_set__isNetworkError)) bool  _isNetworkError;

/// @brief Field _response, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__response, put=__cordl_internal_set__response)) ::StringW  _response;

/// @brief Field _serverMessage, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverMessage, put=__cordl_internal_set__serverMessage)) ::StringW  _serverMessage;

/// @brief Field _statusCode, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__statusCode, put=__cordl_internal_set__statusCode)) int64_t  _statusCode;

static inline ::Proyecto26::RequestException* New_ctor() ;

static inline ::Proyecto26::RequestException* New_ctor(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

static inline ::Proyecto26::RequestException* New_ctor(::StringW  message) ;

static inline ::Proyecto26::RequestException* New_ctor(::StringW  message, bool  isHttpError, bool  isNetworkError, int64_t  statusCode, ::StringW  response) ;

constexpr bool const& __cordl_internal_get__isHttpError() const;

constexpr bool& __cordl_internal_get__isHttpError() ;

constexpr bool const& __cordl_internal_get__isNetworkError() const;

constexpr bool& __cordl_internal_get__isNetworkError() ;

constexpr ::StringW const& __cordl_internal_get__response() const;

constexpr ::StringW& __cordl_internal_get__response() ;

constexpr ::StringW const& __cordl_internal_get__serverMessage() const;

constexpr ::StringW& __cordl_internal_get__serverMessage() ;

constexpr int64_t const& __cordl_internal_get__statusCode() const;

constexpr int64_t& __cordl_internal_get__statusCode() ;

constexpr void __cordl_internal_set__isHttpError(bool  value) ;

constexpr void __cordl_internal_set__isNetworkError(bool  value) ;

constexpr void __cordl_internal_set__response(::StringW  value) ;

constexpr void __cordl_internal_set__serverMessage(::StringW  value) ;

constexpr void __cordl_internal_set__statusCode(int64_t  value) ;

/// @brief Method .ctor, addr 0x17f83cc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17f848c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method .ctor, addr 0x17f8424, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x17f7cf4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, bool  isHttpError, bool  isNetworkError, int64_t  statusCode, ::StringW  response) ;

/// @brief Method get_IsHttpError, addr 0x17f8374, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHttpError() ;

/// @brief Method get_IsNetworkError, addr 0x17f8388, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNetworkError() ;

/// @brief Method get_Response, addr 0x17f83bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Response() ;

/// @brief Method get_ServerMessage, addr 0x17f83ac, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ServerMessage() ;

/// @brief Method get_StatusCode, addr 0x17f839c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_StatusCode() ;

/// @brief Method set_IsHttpError, addr 0x17f837c, size 0xc, virtual false, abstract: false, final false
inline void set_IsHttpError(bool  value) ;

/// @brief Method set_IsNetworkError, addr 0x17f8390, size 0xc, virtual false, abstract: false, final false
inline void set_IsNetworkError(bool  value) ;

/// @brief Method set_Response, addr 0x17f83c4, size 0x8, virtual false, abstract: false, final false
inline void set_Response(::StringW  value) ;

/// @brief Method set_ServerMessage, addr 0x17f83b4, size 0x8, virtual false, abstract: false, final false
inline void set_ServerMessage(::StringW  value) ;

/// @brief Method set_StatusCode, addr 0x17f83a4, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestException(RequestException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestException(RequestException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1737};

/// @brief Field _isHttpError, offset: 0x8c, size: 0x1, def value: None
 bool  ____isHttpError;

/// @brief Field _isNetworkError, offset: 0x8d, size: 0x1, def value: None
 bool  ____isNetworkError;

/// @brief Field _statusCode, offset: 0x90, size: 0x8, def value: None
 int64_t  ____statusCode;

/// @brief Field _serverMessage, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____serverMessage;

/// @brief Field _response, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____response;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Proyecto26::RequestException, ____isHttpError) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestException, ____isNetworkError) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestException, ____statusCode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestException, ____serverMessage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Proyecto26::RequestException, ____response) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Proyecto26::RequestException, 0xa8>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::RequestException);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::RequestException*, "Proyecto26", "RequestException");
