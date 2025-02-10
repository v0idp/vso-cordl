#pragma once
// IWYU pragma private; include "VROSC/VideoInfo.hpp"
#include "VROSC/zzzz__PaginatedListItemData_impl.hpp"
#include "VROSC/zzzz__VideoInfo_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::VROSC::VideoInfo.get_Thumbnail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::VROSC::VideoInfo::*)()>(&::VROSC::VideoInfo::get_Thumbnail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177d36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        "get_Thumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoInfo.set_Thumbnail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoInfo::*)(::UnityEngine::Texture*)>(&::VROSC::VideoInfo::set_Thumbnail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177d374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        "set_Thumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoInfo::*)()>(&::VROSC::VideoInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177d37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::VideoInfo::__cordl_internal_get_VideoId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoId;
}
constexpr ::StringW const& VROSC::VideoInfo::__cordl_internal_get_VideoId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoId;
}
constexpr void VROSC::VideoInfo::__cordl_internal_set_VideoId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VideoId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::VideoInfo::__cordl_internal_get_VideoPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPath;
}
constexpr ::StringW const& VROSC::VideoInfo::__cordl_internal_get_VideoPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPath;
}
constexpr void VROSC::VideoInfo::__cordl_internal_set_VideoPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VideoPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::VideoInfo::__cordl_internal_get_Title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr ::StringW const& VROSC::VideoInfo::__cordl_internal_get_Title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr void VROSC::VideoInfo::__cordl_internal_set_Title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::VideoInfo::__cordl_internal_get_RequiredVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredVersion;
}
constexpr ::StringW const& VROSC::VideoInfo::__cordl_internal_get_RequiredVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiredVersion;
}
constexpr void VROSC::VideoInfo::__cordl_internal_set_RequiredVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RequiredVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture>& VROSC::VideoInfo::__cordl_internal_get__Thumbnail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thumbnail_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture> const& VROSC::VideoInfo::__cordl_internal_get__Thumbnail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thumbnail_k__BackingField;
}
constexpr void VROSC::VideoInfo::__cordl_internal_set__Thumbnail_k__BackingField(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Thumbnail_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Texture> VROSC::VideoInfo::get_Thumbnail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        "get_Thumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline void VROSC::VideoInfo::set_Thumbnail(::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        "set_Thumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::VideoInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VideoInfo* VROSC::VideoInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VideoInfo*>());
}
// Ctor Parameters []
constexpr ::VROSC::VideoInfo::VideoInfo()   {
}
