#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/WebRequest.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestVerb_impl.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequest_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkConfiguration_def.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestVerb_def.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::*)()>(&::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0._SendAttemptAsync_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::*)(::UnityEngine::AsyncOperation*)>(&::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::_SendAttemptAsync_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2e99654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*>::get(),
                        "<SendAttemptAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::WebRequest*& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Unity::Services::Authentication::WebRequest* const& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_set___4__this(::Unity::Services::Authentication::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::_SendAttemptAsync_b__0(::UnityEngine::AsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*>::get(),
                        "<SendAttemptAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
inline ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0* Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::WebRequest___c__DisplayClass16_0::WebRequest___c__DisplayClass16_0()   {
}
template<typename T>
inline void Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Unity::Services::Authentication::WebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::WebRequest__SendAsync_d__15_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::Unity::Services::Authentication::WebRequest*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Services::Authentication::WebRequest__SendAsync_d__15_1<T>::WebRequest__SendAsync_d__15_1()   {
}
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.get_Configuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::INetworkConfiguration* (::Unity::Services::Authentication::WebRequest::*)()>(&::Unity::Services::Authentication::WebRequest::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e989e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "get_Configuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.get_Retries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Authentication::WebRequest::*)()>(&::Unity::Services::Authentication::WebRequest::get_Retries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e989e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "get_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.set_Retries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::WebRequest::*)(int32_t)>(&::Unity::Services::Authentication::WebRequest::set_Retries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e989f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "set_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::WebRequest::*)(::Unity::Services::Authentication::INetworkConfiguration*, ::Unity::Services::Authentication::WebRequestVerb, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::StringW, ::StringW)>(&::Unity::Services::Authentication::WebRequest::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e989f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::WebRequestVerb>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.SendAttemptAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Unity::Services::Authentication::WebRequest::*)(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*)>(&::Unity::Services::Authentication::WebRequest::SendAttemptAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e98ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "SendAttemptAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.Build
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Unity::Services::Authentication::WebRequest::*)()>(&::Unity::Services::Authentication::WebRequest::Build)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x2e98c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.RequestCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::WebRequest::*)(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*, int64_t, bool, bool, ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Unity::Services::Authentication::WebRequest::RequestCompleted)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2e992dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.RequestHasServerError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::WebRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Unity::Services::Authentication::WebRequest::RequestHasServerError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e995ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestHasServerError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::WebRequest.RequestHasNetworkError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::WebRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Unity::Services::Authentication::WebRequest::RequestHasNetworkError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e995d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestHasNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::WebRequestVerb& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Verb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Verb;
}
constexpr ::Unity::Services::Authentication::WebRequestVerb const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Verb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Verb;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_Verb(::Unity::Services::Authentication::WebRequestVerb  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Verb = value;
}
constexpr ::StringW& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Url;
}
constexpr ::StringW const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Url;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Headers;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Headers;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_Headers(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Payload;
}
constexpr ::StringW const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_Payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Payload;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_Payload(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Payload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_PayloadContentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PayloadContentType;
}
constexpr ::StringW const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_PayloadContentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PayloadContentType;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_PayloadContentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PayloadContentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings*& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_JsonSerializerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JsonSerializerSettings;
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& Unity::Services::Authentication::WebRequest::__cordl_internal_get_m_JsonSerializerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JsonSerializerSettings;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set_m_JsonSerializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_JsonSerializerSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::INetworkConfiguration*& Unity::Services::Authentication::WebRequest::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& Unity::Services::Authentication::WebRequest::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Configuration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Authentication::WebRequest::__cordl_internal_get__Retries_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Retries_k__BackingField;
}
constexpr int32_t const& Unity::Services::Authentication::WebRequest::__cordl_internal_get__Retries_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Retries_k__BackingField;
}
constexpr void Unity::Services::Authentication::WebRequest::__cordl_internal_set__Retries_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Retries_k__BackingField = value;
}
inline ::Unity::Services::Authentication::INetworkConfiguration* Unity::Services::Authentication::WebRequest::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "get_Configuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::INetworkConfiguration*, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Authentication::WebRequest::get_Retries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "get_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::WebRequest::set_Retries(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "set_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::WebRequest::_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration, ::Unity::Services::Authentication::WebRequestVerb  verb, ::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers, ::StringW  payload, ::StringW  payloadContentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::WebRequestVerb>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configuration, verb, url, headers, payload, payloadContentType);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Authentication::WebRequest::SendAsync()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                    "SendAsync",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Authentication::WebRequest::SendAttemptAsync(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "SendAttemptAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, tcs);
}
inline ::UnityEngine::Networking::UnityWebRequest* Unity::Services::Authentication::WebRequest::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::WebRequest::RequestCompleted(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs, int64_t  responseCode, bool  isNetworkError, bool  isServerError, ::StringW  errorText, ::StringW  bodyText, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tcs, responseCode, isNetworkError, isServerError, errorText, bodyText, headers);
}
inline bool Unity::Services::Authentication::WebRequest::RequestHasServerError(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestHasServerError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, request);
}
inline bool Unity::Services::Authentication::WebRequest::RequestHasNetworkError(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::WebRequest*>::get(),
                        "RequestHasNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, request);
}
inline ::Unity::Services::Authentication::WebRequest* Unity::Services::Authentication::WebRequest::New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration, ::Unity::Services::Authentication::WebRequestVerb  verb, ::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers, ::StringW  payload, ::StringW  payloadContentType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::WebRequest*>(configuration, verb, url, headers, payload, payloadContentType));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::WebRequest::WebRequest()   {
}
