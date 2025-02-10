#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/DownloadMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__DownloadMessage_def.hpp"
#include "Vuplex/WebView/zzzz__DownloadChangedEventArgs_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::DownloadMessage.FromJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::Internal::DownloadMessage* (*)(::StringW)>(&::Vuplex::WebView::Internal::DownloadMessage::FromJson)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17bc9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::DownloadMessage.ToEventArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::DownloadChangedEventArgs* (::Vuplex::WebView::Internal::DownloadMessage::*)()>(&::Vuplex::WebView::Internal::DownloadMessage::ToEventArgs)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17bc9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        "ToEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::DownloadMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::DownloadMessage::*)()>(&::Vuplex::WebView::Internal::DownloadMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17bca84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_ContentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentType;
}
constexpr ::StringW const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_ContentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentType;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_ContentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_FilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr ::StringW const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_FilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_FilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr float_t const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_Progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr int32_t& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr int32_t const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_Type(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::StringW& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::Internal::DownloadMessage::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Vuplex::WebView::Internal::DownloadMessage* Vuplex::WebView::Internal::DownloadMessage::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::Internal::DownloadMessage*, false>(nullptr, ___internal_method, json);
}
inline ::Vuplex::WebView::DownloadChangedEventArgs* Vuplex::WebView::Internal::DownloadMessage::ToEventArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        "ToEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::DownloadChangedEventArgs*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::DownloadMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::DownloadMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::DownloadMessage* Vuplex::WebView::Internal::DownloadMessage::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::DownloadMessage*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::DownloadMessage::DownloadMessage()   {
}
