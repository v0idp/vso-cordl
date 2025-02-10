#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSettings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSettings.get_FlashColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::TutorialSettings::*)()>(&::GlobalNamespace::TutorialSettings::get_FlashColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16c1dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "get_FlashColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSettings.GetBlink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TutorialSettings::*)()>(&::GlobalNamespace::TutorialSettings::GetBlink)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16c1dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "GetBlink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSettings.GetNextBlinkStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TutorialSettings::*)()>(&::GlobalNamespace::TutorialSettings::GetNextBlinkStart)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16c1e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "GetNextBlinkStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSettings::*)()>(&::GlobalNamespace::TutorialSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16c1e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TutorialSettings::__cordl_internal_get__pattern()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pattern;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TutorialSettings::__cordl_internal_get__pattern() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pattern;
}
constexpr void GlobalNamespace::TutorialSettings::__cordl_internal_set__pattern(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TutorialSettings::__cordl_internal_get__patternDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patternDuration;
}
constexpr float_t const& GlobalNamespace::TutorialSettings::__cordl_internal_get__patternDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patternDuration;
}
constexpr void GlobalNamespace::TutorialSettings::__cordl_internal_set__patternDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____patternDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TutorialSettings::__cordl_internal_get__flashColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TutorialSettings::__cordl_internal_get__flashColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashColor;
}
constexpr void GlobalNamespace::TutorialSettings::__cordl_internal_set__flashColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flashColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::TutorialSettings::get_FlashColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "get_FlashColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::TutorialSettings::GetBlink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "GetBlink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::TutorialSettings::GetNextBlinkStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        "GetNextBlinkStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialSettings* GlobalNamespace::TutorialSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSettings::TutorialSettings()   {
}
