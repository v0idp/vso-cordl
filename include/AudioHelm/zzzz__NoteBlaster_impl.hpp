#pragma once
// IWYU pragma private; include "AudioHelm/NoteBlaster.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__NoteBlaster_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
//  Writing Method size for method: ::AudioHelm::NoteBlaster.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::NoteBlaster::*)()>(&::AudioHelm::NoteBlaster::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x181b8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteBlaster*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::NoteBlaster._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::NoteBlaster::*)()>(&::AudioHelm::NoteBlaster::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x181b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteBlaster*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AudioHelm::HelmController>& AudioHelm::NoteBlaster::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& AudioHelm::NoteBlaster::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void AudioHelm::NoteBlaster::__cordl_internal_set_player(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::NoteBlaster::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr int32_t const& AudioHelm::NoteBlaster::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void AudioHelm::NoteBlaster::__cordl_internal_set_min(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr int32_t& AudioHelm::NoteBlaster::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr int32_t const& AudioHelm::NoteBlaster::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void AudioHelm::NoteBlaster::__cordl_internal_set_max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
inline void AudioHelm::NoteBlaster::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteBlaster*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::NoteBlaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteBlaster*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::NoteBlaster* AudioHelm::NoteBlaster::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::NoteBlaster*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::NoteBlaster::NoteBlaster()   {
}
