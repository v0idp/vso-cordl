#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__HelmPatch_def.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmPatch.LoadPatchData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmPatch::*)(::StringW)>(&::AudioHelm::HelmPatch::LoadPatchData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1820804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatch*>::get(),
                        "LoadPatchData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmPatch._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmPatch::*)()>(&::AudioHelm::HelmPatch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1820868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& AudioHelm::HelmPatch::__cordl_internal_get_patchObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& AudioHelm::HelmPatch::__cordl_internal_get_patchObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchObject;
}
constexpr void AudioHelm::HelmPatch::__cordl_internal_set_patchObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patchObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::HelmPatchFormat*& AudioHelm::HelmPatch::__cordl_internal_get_patchData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchData;
}
constexpr ::AudioHelm::HelmPatchFormat* const& AudioHelm::HelmPatch::__cordl_internal_get_patchData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchData;
}
constexpr void AudioHelm::HelmPatch::__cordl_internal_set_patchData(::AudioHelm::HelmPatchFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patchData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::HelmPatch::LoadPatchData(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatch*>::get(),
                        "LoadPatchData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline void AudioHelm::HelmPatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmPatch* AudioHelm::HelmPatch::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmPatch*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmPatch::HelmPatch()   {
}
