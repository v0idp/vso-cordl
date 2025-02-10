#pragma once
// IWYU pragma private; include "AudioHelm/DestroyAfterTime.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__DestroyAfterTime_def.hpp"
//  Writing Method size for method: ::AudioHelm::DestroyAfterTime.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::DestroyAfterTime::*)()>(&::AudioHelm::DestroyAfterTime::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::DestroyAfterTime.Die
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::DestroyAfterTime::*)()>(&::AudioHelm::DestroyAfterTime::Die)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x181a4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        "Die",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::DestroyAfterTime._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::DestroyAfterTime::*)()>(&::AudioHelm::DestroyAfterTime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181a514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::DestroyAfterTime::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& AudioHelm::DestroyAfterTime::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void AudioHelm::DestroyAfterTime::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
inline void AudioHelm::DestroyAfterTime::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::DestroyAfterTime::Die()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        "Die",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::DestroyAfterTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::DestroyAfterTime*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::DestroyAfterTime* AudioHelm::DestroyAfterTime::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::DestroyAfterTime*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::DestroyAfterTime::DestroyAfterTime()   {
}
