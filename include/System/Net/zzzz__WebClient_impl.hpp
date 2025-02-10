#pragma once
// IWYU pragma private; include "System/Net/WebClient.hpp"
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebClient_ProgressData.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebClient_ProgressData::*)()>(&::System::Net::WebClient_ProgressData::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d62314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient_ProgressData*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesSent;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesSent;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_BytesSent(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BytesSent = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToSend;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToSend;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_TotalBytesToSend(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesToSend = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesReceived;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesReceived;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_BytesReceived(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BytesReceived = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToReceive;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToReceive;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_TotalBytesToReceive(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesToReceive = value;
}
constexpr bool& System::Net::WebClient_ProgressData::__cordl_internal_get_HasUploadPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasUploadPhase;
}
constexpr bool const& System::Net::WebClient_ProgressData::__cordl_internal_get_HasUploadPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasUploadPhase;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_HasUploadPhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasUploadPhase = value;
}
inline void System::Net::WebClient_ProgressData::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient_ProgressData*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::WebClient_ProgressData::WebClient_ProgressData()   {
}
//  Writing Method size for method: ::System::Net::WebClient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2d62148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.StartOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::StartOperation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d6226c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "StartOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.EndOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::EndOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d62308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "EndOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_Credentials
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "get_Credentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_CachePolicy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_CachePolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "get_CachePolicy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::GetWebRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d62338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebResponse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::WebClient::*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::GetWebResponse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d62844;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::OpenRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d62878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "OpenRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenRead)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2d62a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "OpenRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.AbortRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::AbortRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d63074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "AbortRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.CopyHeadersTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::CopyHeadersTo)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2d62458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "CopyHeadersTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetUri
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::GetUri)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d62894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "GetUri",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetUri
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::GetUri)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2d62da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "GetUri",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.ThrowIfNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::StringW)>(&::System::Net::WebClient::ThrowIfNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d62d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::WebClient::__cordl_internal_get__baseAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseAddress;
}
constexpr ::System::Uri* const& System::Net::WebClient::__cordl_internal_get__baseAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseAddress;
}
constexpr void System::Net::WebClient::__cordl_internal_set__baseAddress(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ICredentials*& System::Net::WebClient::__cordl_internal_get__credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::WebClient::__cordl_internal_get__credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr void System::Net::WebClient::__cordl_internal_set__credentials(::System::Net::ICredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebClient::__cordl_internal_get__headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebClient::__cordl_internal_get__headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr void System::Net::WebClient::__cordl_internal_set__headers(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::WebClient::__cordl_internal_get__requestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestParameters;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& System::Net::WebClient::__cordl_internal_get__requestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestParameters;
}
constexpr void System::Net::WebClient::__cordl_internal_set__requestParameters(::System::Collections::Specialized::NameValueCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebResponse*& System::Net::WebClient::__cordl_internal_get__webResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webResponse;
}
constexpr ::System::Net::WebResponse* const& System::Net::WebClient::__cordl_internal_get__webResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webResponse;
}
constexpr void System::Net::WebClient::__cordl_internal_set__webResponse(::System::Net::WebResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebRequest*& System::Net::WebClient::__cordl_internal_get__webRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequest;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebClient::__cordl_internal_get__webRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequest;
}
constexpr void System::Net::WebClient::__cordl_internal_set__webRequest(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____webRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Net::WebClient::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::WebClient::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::Net::WebClient::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::WebClient::__cordl_internal_get__method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr ::StringW const& System::Net::WebClient::__cordl_internal_get__method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr void System::Net::WebClient::__cordl_internal_set__method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::WebClient::__cordl_internal_get__contentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentLength;
}
constexpr int64_t const& System::Net::WebClient::__cordl_internal_get__contentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentLength;
}
constexpr void System::Net::WebClient::__cordl_internal_set__contentLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentLength = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__canceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__canceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled;
}
constexpr void System::Net::WebClient::__cordl_internal_set__canceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canceled = value;
}
constexpr ::System::Net::WebClient_ProgressData*& System::Net::WebClient::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr ::System::Net::WebClient_ProgressData* const& System::Net::WebClient::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void System::Net::WebClient::__cordl_internal_set__progress(::System::Net::WebClient_ProgressData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebProxy*& System::Net::WebClient::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::WebClient::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void System::Net::WebClient::__cordl_internal_set__proxy(::System::Net::IWebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__proxySet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxySet;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__proxySet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxySet;
}
constexpr void System::Net::WebClient::__cordl_internal_set__proxySet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxySet = value;
}
constexpr int32_t& System::Net::WebClient::__cordl_internal_get__callNesting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callNesting;
}
constexpr int32_t const& System::Net::WebClient::__cordl_internal_get__callNesting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callNesting;
}
constexpr void System::Net::WebClient::__cordl_internal_set__callNesting(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callNesting = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::WebClient::__cordl_internal_get__CachePolicy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachePolicy_k__BackingField;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Net::WebClient::__cordl_internal_get__CachePolicy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachePolicy_k__BackingField;
}
constexpr void System::Net::WebClient::__cordl_internal_set__CachePolicy_k__BackingField(::System::Net::Cache::RequestCachePolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CachePolicy_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::WebClient::setStaticF_s_parseContentTypeSeparators(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "s_parseContentTypeSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Net::WebClient::getStaticF_s_parseContentTypeSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "s_parseContentTypeSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get>();
}
inline void System::Net::WebClient::setStaticF_s_knownEncodings(::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>, "s_knownEncodings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get>(std::forward<::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>>(value));
}
inline ::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*> System::Net::WebClient::getStaticF_s_knownEncodings()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Text::Encoding*,::Array<::System::Text::Encoding*>*>, "s_knownEncodings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get>();
}
inline void System::Net::WebClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebClient::StartOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "StartOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::WebClient::EndOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "EndOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::ICredentials* System::Net::WebClient::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "get_Credentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::WebClient::get_CachePolicy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "get_CachePolicy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*, false>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebClient::GetWebRequest(::System::Uri*  address)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(this, ___internal_method, address);
}
inline ::System::Net::WebResponse* System::Net::WebClient::GetWebResponse(::System::Net::WebRequest*  request)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method, request);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenRead(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "OpenRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, address);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenRead(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "OpenRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, address);
}
inline void System::Net::WebClient::AbortRequest(::System::Net::WebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "AbortRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request);
}
inline void System::Net::WebClient::CopyHeadersTo(::System::Net::WebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "CopyHeadersTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::Uri* System::Net::WebClient::GetUri(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "GetUri",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method, address);
}
inline ::System::Uri* System::Net::WebClient::GetUri(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "GetUri",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method, address);
}
inline void System::Net::WebClient::ThrowIfNull(::System::Object*  argument, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebClient*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, argument, parameterName);
}
inline ::System::Net::WebClient* System::Net::WebClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebClient*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient::WebClient()   {
}
