#pragma once
// IWYU pragma private; include "VROSC/SoundMetronome.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SoundMetronome_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::VROSC::SoundMetronome.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SoundMetronome::*)()>(&::VROSC::SoundMetronome::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16f7b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SoundMetronome.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SoundMetronome::*)()>(&::VROSC::SoundMetronome::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x16f7bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SoundMetronome._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SoundMetronome::*)()>(&::VROSC::SoundMetronome::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x16f7cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::SoundMetronome::__cordl_internal_get__barSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____barSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::SoundMetronome::__cordl_internal_get__barSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____barSound;
}
constexpr void VROSC::SoundMetronome::__cordl_internal_set__barSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____barSound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::SoundMetronome::__cordl_internal_get__beatSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::SoundMetronome::__cordl_internal_get__beatSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatSound;
}
constexpr void VROSC::SoundMetronome::__cordl_internal_set__beatSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatSound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SoundMetronome::__cordl_internal_get__beatScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatScheduled;
}
constexpr bool const& VROSC::SoundMetronome::__cordl_internal_get__beatScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatScheduled;
}
constexpr void VROSC::SoundMetronome::__cordl_internal_set__beatScheduled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____beatScheduled = value;
}
constexpr double_t& VROSC::SoundMetronome::__cordl_internal_get__lastScheduledBeatTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScheduledBeatTime;
}
constexpr double_t const& VROSC::SoundMetronome::__cordl_internal_get__lastScheduledBeatTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScheduledBeatTime;
}
constexpr void VROSC::SoundMetronome::__cordl_internal_set__lastScheduledBeatTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScheduledBeatTime = value;
}
constexpr double_t& VROSC::SoundMetronome::__cordl_internal_get__updateMargin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateMargin;
}
constexpr double_t const& VROSC::SoundMetronome::__cordl_internal_get__updateMargin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateMargin;
}
constexpr void VROSC::SoundMetronome::__cordl_internal_set__updateMargin(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateMargin = value;
}
inline void VROSC::SoundMetronome::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SoundMetronome::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SoundMetronome::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SoundMetronome*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SoundMetronome* VROSC::SoundMetronome::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SoundMetronome*>());
}
// Ctor Parameters []
constexpr ::VROSC::SoundMetronome::SoundMetronome()   {
}
