#pragma once
// IWYU pragma private; include "VROSC/SampleDatabase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__SampleDatabase_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "VROSC/zzzz__SampleGroup_def.hpp"
//  Writing Method size for method: ::VROSC::SampleDatabase.get_SampleGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*> (::VROSC::SampleDatabase::*)()>(&::VROSC::SampleDatabase::get_SampleGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f6e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "get_SampleGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleDatabase.GetGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::SampleGroup> (::VROSC::SampleDatabase::*)(int32_t)>(&::VROSC::SampleDatabase::GetGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x16f6e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleDatabase.GetGroupSampleId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SampleDatabase::*)(int32_t, int32_t)>(&::VROSC::SampleDatabase::GetGroupSampleId)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x16f6f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetGroupSampleId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleDatabase.GetSampleAudioClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::VROSC::SampleDatabase::*)(int32_t)>(&::VROSC::SampleDatabase::GetSampleAudioClip)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x16f7130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetSampleAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SampleDatabase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SampleDatabase::*)()>(&::VROSC::SampleDatabase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f737c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>& VROSC::SampleDatabase::__cordl_internal_get__samplegroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplegroups;
}
constexpr ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*> const& VROSC::SampleDatabase::__cordl_internal_get__samplegroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplegroups;
}
constexpr void VROSC::SampleDatabase::__cordl_internal_set__samplegroups(::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samplegroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*> VROSC::SampleDatabase::get_SampleGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "get_SampleGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::VROSC::SampleGroup>,::Array<::UnityW<::VROSC::SampleGroup>>*>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::SampleGroup> VROSC::SampleDatabase::GetGroup(int32_t  groupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::SampleGroup>, false>(this, ___internal_method, groupId);
}
inline int32_t VROSC::SampleDatabase::GetGroupSampleId(int32_t  groupId, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetGroupSampleId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, groupId, index);
}
inline ::UnityW<::UnityEngine::AudioClip> VROSC::SampleDatabase::GetSampleAudioClip(int32_t  sampleId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        "GetSampleAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method, sampleId);
}
inline void VROSC::SampleDatabase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SampleDatabase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SampleDatabase* VROSC::SampleDatabase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SampleDatabase*>());
}
// Ctor Parameters []
constexpr ::VROSC::SampleDatabase::SampleDatabase()   {
}
