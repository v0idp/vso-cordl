#pragma once
// IWYU pragma private; include "Proyecto26/RestClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RestClient)
namespace Proyecto26 {
class RequestException;
}
namespace Proyecto26 {
class RequestHelper;
}
namespace Proyecto26 {
class ResponseHelper;
}
namespace RSG {
template<typename PromisedT>
class IPromise_1;
}
namespace RSG {
template<typename PromisedT>
class Promise_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class Object;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Proyecto26 {
class RestClient;
}
// Write type traits
MARK_REF_PTR_T(::Proyecto26::RestClient);
// Dependencies System.Object
namespace Proyecto26 {
// Is value type: false
// CS Name: Proyecto26.RestClient
class CORDL_TYPE RestClient : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultRequestHeaders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultRequestHeaders, put=setStaticF__defaultRequestHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _defaultRequestHeaders;

/// @brief Field _defaultRequestParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultRequestParams, put=setStaticF__defaultRequestParams)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _defaultRequestParams;

/// @brief Method ClearDefaultHeaders, addr 0x17f8f34, size 0x44, virtual false, abstract: false, final false
static inline void ClearDefaultHeaders() ;

/// @brief Method ClearDefaultParams, addr 0x17f8e0c, size 0x44, virtual false, abstract: false, final false
static inline void ClearDefaultParams() ;

/// @brief Method Delete, addr 0x17f9a4c, size 0xcc, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Delete(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Delete, addr 0x17f99ec, size 0x60, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Delete(::StringW  url) ;

/// @brief Method Delete, addr 0x17f9368, size 0x60, virtual false, abstract: false, final false
static inline void Delete(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Delete, addr 0x17f92f8, size 0x70, virtual false, abstract: false, final false
static inline void Delete(::StringW  url, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Get, addr 0x17f95c8, size 0xcc, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Get(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Get, addr 0x17f9568, size 0x60, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Get(::StringW  url) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Get(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Get(::StringW  url) ;

/// @brief Method Get, addr 0x17f8ff8, size 0x60, virtual false, abstract: false, final false
static inline void Get(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Get, addr 0x17f8f88, size 0x70, virtual false, abstract: false, final false
static inline void Get(::StringW  url, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Get(::StringW  url, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method GetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<::ArrayW<T,::Array<T>*>>* GetArray(::Proyecto26::RequestHelper*  options) ;

/// @brief Method GetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<::ArrayW<T,::Array<T>*>>* GetArray(::StringW  url) ;

/// @brief Method GetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetArray(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<T,::Array<T>*>>*  callback) ;

/// @brief Method GetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void GetArray(::StringW  url, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<T,::Array<T>*>>*  callback) ;

/// @brief Method Head, addr 0x17f9b78, size 0xcc, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Head(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Head, addr 0x17f9b18, size 0x60, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Head(::StringW  url) ;

/// @brief Method Head, addr 0x17f9438, size 0x60, virtual false, abstract: false, final false
static inline void Head(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Head, addr 0x17f93c8, size 0x70, virtual false, abstract: false, final false
static inline void Head(::StringW  url, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Post, addr 0x17f9704, size 0xcc, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Post(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Post, addr 0x17f9694, size 0x70, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Post(::StringW  url, ::System::Object*  body) ;

/// @brief Method Post, addr 0x17f97d0, size 0x70, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Post(::StringW  url, ::StringW  bodyString) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Post(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Post(::StringW  url, ::System::Object*  body) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Post(::StringW  url, ::StringW  bodyString) ;

/// @brief Method Post, addr 0x17f90d0, size 0x60, virtual false, abstract: false, final false
static inline void Post(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Post(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Post, addr 0x17f9058, size 0x78, virtual false, abstract: false, final false
static inline void Post(::StringW  url, ::System::Object*  body, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Post(::StringW  url, ::System::Object*  body, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Post, addr 0x17f9130, size 0x78, virtual false, abstract: false, final false
static inline void Post(::StringW  url, ::StringW  bodyString, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Post(::StringW  url, ::StringW  bodyString, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<::ArrayW<T,::Array<T>*>>* PostArray(::Proyecto26::RequestHelper*  options) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<::ArrayW<T,::Array<T>*>>* PostArray(::StringW  url, ::System::Object*  body) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<::ArrayW<T,::Array<T>*>>* PostArray(::StringW  url, ::StringW  bodyString) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void PostArray(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<T,::Array<T>*>>*  callback) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void PostArray(::StringW  url, ::System::Object*  body, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<T,::Array<T>*>>*  callback) ;

/// @brief Method PostArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void PostArray(::StringW  url, ::StringW  bodyString, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,::ArrayW<T,::Array<T>*>>*  callback) ;

/// @brief Method Promisify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Promisify(::RSG::Promise_1<T>*  promise, ::Proyecto26::RequestException*  error, ::Proyecto26::ResponseHelper*  response, T  body) ;

/// @brief Method Promisify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Promisify(::RSG::Promise_1<T>*  promise, ::Proyecto26::RequestException*  error, T  response) ;

/// @brief Method Put, addr 0x17f98b0, size 0xcc, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Put(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Put, addr 0x17f9840, size 0x70, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Put(::StringW  url, ::System::Object*  body) ;

/// @brief Method Put, addr 0x17f997c, size 0x70, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Put(::StringW  url, ::StringW  bodyString) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Put(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Put(::StringW  url, ::System::Object*  body) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Put(::StringW  url, ::StringW  bodyString) ;

/// @brief Method Put, addr 0x17f9220, size 0x60, virtual false, abstract: false, final false
static inline void Put(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Put(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Put, addr 0x17f91a8, size 0x78, virtual false, abstract: false, final false
static inline void Put(::StringW  url, ::System::Object*  body, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Put(::StringW  url, ::System::Object*  body, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Put, addr 0x17f9280, size 0x78, virtual false, abstract: false, final false
static inline void Put(::StringW  url, ::StringW  bodyString, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Put(::StringW  url, ::StringW  bodyString, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

/// @brief Method Request, addr 0x17f9498, size 0xd0, virtual false, abstract: false, final false
static inline ::RSG::IPromise_1<::Proyecto26::ResponseHelper*>* Request(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Request, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::RSG::IPromise_1<T>* Request(::Proyecto26::RequestHelper*  options) ;

/// @brief Method Request, addr 0x17f8f78, size 0x10, virtual false, abstract: false, final false
static inline void Request(::Proyecto26::RequestHelper*  options, ::System::Action_2<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*>*  callback) ;

/// @brief Method Request, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Request(::Proyecto26::RequestHelper*  options, ::System::Action_3<::Proyecto26::RequestException*,::Proyecto26::ResponseHelper*,T>*  callback) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF__defaultRequestHeaders() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF__defaultRequestParams() ;

/// @brief Method get_DefaultRequestHeaders, addr 0x17f8e50, size 0x98, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_DefaultRequestHeaders() ;

/// @brief Method get_DefaultRequestParams, addr 0x17f8d20, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_DefaultRequestParams() ;

/// @brief Method get_Version, addr 0x17f8c7c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Version* get_Version() ;

static inline void setStaticF__defaultRequestHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF__defaultRequestParams(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_DefaultRequestHeaders, addr 0x17f8ee8, size 0x4c, virtual false, abstract: false, final false
static inline void set_DefaultRequestHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_DefaultRequestParams, addr 0x17f8dc0, size 0x4c, virtual false, abstract: false, final false
static inline void set_DefaultRequestParams(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RestClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RestClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RestClient(RestClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RestClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RestClient(RestClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1742};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Proyecto26::RestClient, 0x10>, "Size mismatch!");

} // namespace end def Proyecto26
NEED_NO_BOX(::Proyecto26::RestClient);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::RestClient*, "Proyecto26", "RestClient");
