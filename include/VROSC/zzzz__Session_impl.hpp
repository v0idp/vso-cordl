#pragma once
// IWYU pragma private; include "VROSC/Session.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Session_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__Session_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Session_PreviewSource::Session_PreviewSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Session_PreviewSource::Session_PreviewSource()   {
}
constexpr ::VROSC::Session_PreviewSource  VROSC::Session_PreviewSource::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Session_PreviewSource  VROSC::Session_PreviewSource::Looper{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Session_PreviewSource  VROSC::Session_PreviewSource::TapeRecorder{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::Session_Contributor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Session_Contributor::*)()>(&::VROSC::Session_Contributor::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1859cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session_Contributor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Session_Contributor::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& VROSC::Session_Contributor::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void VROSC::Session_Contributor::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session_Contributor::__cordl_internal_get_UserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr ::StringW const& VROSC::Session_Contributor::__cordl_internal_get_UserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr void VROSC::Session_Contributor::__cordl_internal_set_UserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session_Contributor::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& VROSC::Session_Contributor::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void VROSC::Session_Contributor::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session_Contributor::__cordl_internal_get_Date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr ::StringW const& VROSC::Session_Contributor::__cordl_internal_get_Date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr void VROSC::Session_Contributor::__cordl_internal_set_Date(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Date)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::Session_Contributor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session_Contributor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Session_Contributor* VROSC::Session_Contributor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Session_Contributor*>());
}
// Ctor Parameters []
constexpr ::VROSC::Session_Contributor::Session_Contributor()   {
}
//  Writing Method size for method: ::VROSC::Session.Clone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Session* (::VROSC::Session::*)()>(&::VROSC::Session::Clone)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x185add4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Session.SetHasPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Session::*)(bool, float_t, ::VROSC::Session_PreviewSource)>(&::VROSC::Session::SetHasPreview)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x185a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        "SetHasPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Session_PreviewSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Session._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Session::*)()>(&::VROSC::Session::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1858574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::Session::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void VROSC::Session::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_SessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionName;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_SessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionName;
}
constexpr void VROSC::Session::__cordl_internal_set_SessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void VROSC::Session::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void VROSC::Session::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_AuthorName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthorName;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_AuthorName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthorName;
}
constexpr void VROSC::Session::__cordl_internal_set_AuthorName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_PlatformName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformName;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_PlatformName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformName;
}
constexpr void VROSC::Session::__cordl_internal_set_PlatformName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlatformName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_Date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_Date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Date;
}
constexpr void VROSC::Session::__cordl_internal_set_Date(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Date)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Session::__cordl_internal_get_TrackCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackCount;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_TrackCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackCount;
}
constexpr void VROSC::Session::__cordl_internal_set_TrackCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackCount = value;
}
constexpr bool& VROSC::Session::__cordl_internal_get_HasPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPreview;
}
constexpr bool const& VROSC::Session::__cordl_internal_get_HasPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPreview;
}
constexpr void VROSC::Session::__cordl_internal_set_HasPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasPreview = value;
}
constexpr float_t& VROSC::Session::__cordl_internal_get_PreviewNormalizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewNormalizeMultiplier;
}
constexpr float_t const& VROSC::Session::__cordl_internal_get_PreviewNormalizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewNormalizeMultiplier;
}
constexpr void VROSC::Session::__cordl_internal_set_PreviewNormalizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewNormalizeMultiplier = value;
}
constexpr ::VROSC::Session_PreviewSource& VROSC::Session::__cordl_internal_get_PreviewType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewType;
}
constexpr ::VROSC::Session_PreviewSource const& VROSC::Session::__cordl_internal_get_PreviewType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewType;
}
constexpr void VROSC::Session::__cordl_internal_set_PreviewType(::VROSC::Session_PreviewSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewType = value;
}
constexpr ::StringW& VROSC::Session::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& VROSC::Session::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void VROSC::Session::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Session::__cordl_internal_get_UpVotesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpVotesCount;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_UpVotesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpVotesCount;
}
constexpr void VROSC::Session::__cordl_internal_set_UpVotesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpVotesCount = value;
}
constexpr int32_t& VROSC::Session::__cordl_internal_get_FavoritesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoritesCount;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_FavoritesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FavoritesCount;
}
constexpr void VROSC::Session::__cordl_internal_set_FavoritesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FavoritesCount = value;
}
constexpr int32_t& VROSC::Session::__cordl_internal_get_DownloadsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadsCount;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_DownloadsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadsCount;
}
constexpr void VROSC::Session::__cordl_internal_set_DownloadsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadsCount = value;
}
constexpr int32_t& VROSC::Session::__cordl_internal_get_PreviewPlaysCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewPlaysCount;
}
constexpr int32_t const& VROSC::Session::__cordl_internal_get_PreviewPlaysCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewPlaysCount;
}
constexpr void VROSC::Session::__cordl_internal_set_PreviewPlaysCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewPlaysCount = value;
}
constexpr double_t& VROSC::Session::__cordl_internal_get_Popularity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Popularity;
}
constexpr double_t const& VROSC::Session::__cordl_internal_get_Popularity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Popularity;
}
constexpr void VROSC::Session::__cordl_internal_set_Popularity(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Popularity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::Session::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::Session::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void VROSC::Session::__cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*& VROSC::Session::__cordl_internal_get_Contributors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contributors;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>* const& VROSC::Session::__cordl_internal_get_Contributors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contributors;
}
constexpr void VROSC::Session::__cordl_internal_set_Contributors(::System::Collections::Generic::List_1<::VROSC::Session_Contributor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Contributors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Session::__cordl_internal_get_HasPositionalData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPositionalData;
}
constexpr bool const& VROSC::Session::__cordl_internal_get_HasPositionalData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPositionalData;
}
constexpr void VROSC::Session::__cordl_internal_set_HasPositionalData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasPositionalData = value;
}
inline ::VROSC::Session* VROSC::Session::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Session*, false>(this, ___internal_method);
}
inline void VROSC::Session::SetHasPreview(bool  hasPreview, float_t  multiplier, ::VROSC::Session_PreviewSource  previewSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        "SetHasPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Session_PreviewSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasPreview, multiplier, previewSource);
}
inline void VROSC::Session::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Session*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Session* VROSC::Session::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Session*>());
}
// Ctor Parameters []
constexpr ::VROSC::Session::Session()   {
}
