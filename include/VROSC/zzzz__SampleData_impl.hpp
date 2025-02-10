#pragma once
// IWYU pragma private; include "VROSC/SampleData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__SampleData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::VROSC::SampleData.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SampleData::*)()>(&::VROSC::SampleData::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f6e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleData.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SampleData::*)()>(&::VROSC::SampleData::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f6e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleData.get_Clip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::VROSC::SampleData::*)()>(&::VROSC::SampleData::get_Clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f6e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_Clip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SampleData::*)()>(&::VROSC::SampleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f6e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::SampleData::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& VROSC::SampleData::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void VROSC::SampleData::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& VROSC::SampleData::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& VROSC::SampleData::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void VROSC::SampleData::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& VROSC::SampleData::__cordl_internal_get__audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& VROSC::SampleData::__cordl_internal_get__audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr void VROSC::SampleData::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::SampleData::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW VROSC::SampleData::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> VROSC::SampleData::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        "get_Clip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void VROSC::SampleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SampleData* VROSC::SampleData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SampleData*>());
}
// Ctor Parameters []
constexpr ::VROSC::SampleData::SampleData()   {
}
