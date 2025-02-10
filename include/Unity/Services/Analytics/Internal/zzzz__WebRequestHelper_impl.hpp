#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/WebRequestHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequestHelper_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__WebRequestHelper_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__WebRequestHelper_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::*)()>(&::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e930dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0._SendWebRequest_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::*)(::UnityEngine::AsyncOperation*)>(&::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::_SendWebRequest_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e930e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*>::get(),
                        "<SendWebRequest>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int64_t>*& Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_get_onCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
constexpr ::System::Action_1<int64_t>* const& Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_get_onCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
constexpr void Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_set_onCompleted(::System::Action_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_get_requestOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestOp;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_get_requestOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestOp;
}
constexpr void Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::__cordl_internal_set_requestOp(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestOp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::_SendWebRequest_b__0(::UnityEngine::AsyncOperation*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*>::get(),
                        "<SendWebRequest>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
inline ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0* Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0::WebRequestHelper___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::WebRequestHelper.CreateWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::Internal::IWebRequest* (::Unity::Services::Analytics::Internal::WebRequestHelper::*)(::StringW, ::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Unity::Services::Analytics::Internal::WebRequestHelper::CreateWebRequest)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2e92e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        "CreateWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::WebRequestHelper.SendWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::WebRequestHelper::*)(::Unity::Services::Analytics::Internal::IWebRequest*, ::System::Action_1<int64_t>*)>(&::Unity::Services::Analytics::Internal::WebRequestHelper::SendWebRequest)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2e92fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        "SendWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::WebRequestHelper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::WebRequestHelper::*)()>(&::Unity::Services::Analytics::Internal::WebRequestHelper::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e8b10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Analytics::Internal::WebRequestHelper::__cordl_internal_get_k_ClientIdHeaderValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_ClientIdHeaderValue;
}
constexpr ::StringW const& Unity::Services::Analytics::Internal::WebRequestHelper::__cordl_internal_get_k_ClientIdHeaderValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_ClientIdHeaderValue;
}
constexpr void Unity::Services::Analytics::Internal::WebRequestHelper::__cordl_internal_set_k_ClientIdHeaderValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_ClientIdHeaderValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Analytics::Internal::IWebRequest* Unity::Services::Analytics::Internal::WebRequestHelper::CreateWebRequest(::StringW  url, ::StringW  method, ::ArrayW<uint8_t,::Array<uint8_t>*>  postBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        "CreateWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::Internal::IWebRequest*, false>(this, ___internal_method, url, method, postBytes);
}
inline void Unity::Services::Analytics::Internal::WebRequestHelper::SendWebRequest(::Unity::Services::Analytics::Internal::IWebRequest*  request, ::System::Action_1<int64_t>*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        "SendWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int64_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, onCompleted);
}
inline void Unity::Services::Analytics::Internal::WebRequestHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::WebRequestHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::WebRequestHelper* Unity::Services::Analytics::Internal::WebRequestHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::WebRequestHelper*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IWebRequestHelper"
constexpr  Unity::Services::Analytics::Internal::WebRequestHelper::operator ::Unity::Services::Analytics::Internal::IWebRequestHelper*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IWebRequestHelper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IWebRequestHelper"
constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper* Unity::Services::Analytics::Internal::WebRequestHelper::i___Unity__Services__Analytics__Internal__IWebRequestHelper() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IWebRequestHelper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::WebRequestHelper::WebRequestHelper()   {
}
