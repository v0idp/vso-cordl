#pragma once
// IWYU pragma private; include "VROSC/VideosSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__VideosSettings_def.hpp"
#include "VROSC/zzzz__VideoInfo_def.hpp"
//  Writing Method size for method: ::VROSC::VideosSettings.GenerateJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosSettings::*)()>(&::VROSC::VideosSettings::GenerateJson)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x177d384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosSettings*>::get(),
                        "GenerateJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosSettings::*)()>(&::VROSC::VideosSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177d4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>& VROSC::VideosSettings::__cordl_internal_get__videoInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoInfos;
}
constexpr ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*> const& VROSC::VideosSettings::__cordl_internal_get__videoInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoInfos;
}
constexpr void VROSC::VideosSettings::__cordl_internal_set__videoInfos(::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::VideosSettings::GenerateJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosSettings*>::get(),
                        "GenerateJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideosSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VideosSettings* VROSC::VideosSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VideosSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::VideosSettings::VideosSettings()   {
}
