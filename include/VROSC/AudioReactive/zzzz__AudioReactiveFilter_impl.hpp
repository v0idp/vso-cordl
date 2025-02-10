#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveFilter_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::FilterSettings_AudioReactiveFilter_BeatFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::FilterSettings_AudioReactiveFilter_BeatFilter()   {
}
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::Beat1{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::Beat2{static_cast<int32_t>(0x2)};
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::Beat3{static_cast<int32_t>(0x4)};
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter::Beat4{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings.Filter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::*)(int32_t)>(&::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::Filter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17d9108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        "Filter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::*)(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter, int32_t, int32_t)>(&::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17d920c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings.Instantiate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* (::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::*)()>(&::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::Instantiate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17d9188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__reactOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactOn;
}
constexpr ::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter const& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__reactOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactOn;
}
constexpr void VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_set__reactOn(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactOn = value;
}
constexpr int32_t& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__chance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chance;
}
constexpr int32_t const& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__chance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chance;
}
constexpr void VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_set__chance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chance = value;
}
constexpr int32_t& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr int32_t const& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr void VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_set__cooldown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldown = value;
}
constexpr int32_t& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__onCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCoolDown;
}
constexpr int32_t const& VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_get__onCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCoolDown;
}
constexpr void VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::__cordl_internal_set__onCoolDown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onCoolDown = value;
}
inline bool VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::Filter(int32_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        "Filter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::_ctor(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  reactOn, int32_t  chance, int32_t  cooldown)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reactOn, chance, cooldown);
}
inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::New_ctor(::VROSC::AudioReactive::FilterSettings_AudioReactiveFilter_BeatFilter  reactOn, int32_t  chance, int32_t  cooldown)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>(reactOn, chance, cooldown));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings::AudioReactiveFilter_FilterSettings()   {
}
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter.Filter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioReactive::AudioReactiveFilter::*)(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*, int32_t)>(&::VROSC::AudioReactive::AudioReactiveFilter::Filter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17d90f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        "Filter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter.Get
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* (::VROSC::AudioReactive::AudioReactiveFilter::*)()>(&::VROSC::AudioReactive::AudioReactiveFilter::Get)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17d9170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveFilter::*)()>(&::VROSC::AudioReactive::AudioReactiveFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*& VROSC::AudioReactive::AudioReactiveFilter::__cordl_internal_get__filterSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterSettings;
}
constexpr ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* const& VROSC::AudioReactive::AudioReactiveFilter::__cordl_internal_get__filterSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterSettings;
}
constexpr void VROSC::AudioReactive::AudioReactiveFilter::__cordl_internal_set__filterSettings(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::AudioReactive::AudioReactiveFilter::Filter(::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*  filterSettings, int32_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        "Filter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filterSettings, beat);
}
inline ::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings* VROSC::AudioReactive::AudioReactiveFilter::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::AudioReactiveFilter_FilterSettings*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::AudioReactiveFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::AudioReactiveFilter* VROSC::AudioReactive::AudioReactiveFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::AudioReactiveFilter*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::AudioReactiveFilter::AudioReactiveFilter()   {
}
