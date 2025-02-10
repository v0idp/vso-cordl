#pragma once
// IWYU pragma private; include "Vuplex/WebView/DownloadChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_impl.hpp"
#include "Vuplex/WebView/zzzz__DownloadChangedEventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::DownloadChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::DownloadChangedEventArgs::*)(::StringW, ::StringW, ::StringW, float_t, ::Vuplex::WebView::ProgressChangeType, ::StringW)>(&::Vuplex::WebView::DownloadChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16df748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::DownloadChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_ContentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentType;
}
constexpr ::StringW const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_ContentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentType;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_ContentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_FilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr ::StringW const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_FilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_FilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr float_t const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_Progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr ::Vuplex::WebView::ProgressChangeType& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Vuplex::WebView::ProgressChangeType const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_Type(::Vuplex::WebView::ProgressChangeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::StringW& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr ::StringW const& Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_get_Url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Url;
}
constexpr void Vuplex::WebView::DownloadChangedEventArgs::__cordl_internal_set_Url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::DownloadChangedEventArgs::_ctor(::StringW  contentType, ::StringW  filePath, ::StringW  id, float_t  progress, ::Vuplex::WebView::ProgressChangeType  type, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::DownloadChangedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::ProgressChangeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, filePath, id, progress, type, url);
}
inline ::Vuplex::WebView::DownloadChangedEventArgs* Vuplex::WebView::DownloadChangedEventArgs::New_ctor(::StringW  contentType, ::StringW  filePath, ::StringW  id, float_t  progress, ::Vuplex::WebView::ProgressChangeType  type, ::StringW  url)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::DownloadChangedEventArgs*>(contentType, filePath, id, progress, type, url));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::DownloadChangedEventArgs::DownloadChangedEventArgs()   {
}
