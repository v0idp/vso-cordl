#pragma once
// IWYU pragma private; include "VROSC/ArpeggiatorEffectsUI.hpp"
#include "VROSC/zzzz__BaseEffectsUI_impl.hpp"
#include "VROSC/zzzz__ArpeggiatorEffectsUI_def.hpp"
#include "VROSC/zzzz__ArpeggiatorEffectsUI_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
#include "VROSC/zzzz__UISpinner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern::ArpeggiatorEffectsUI_Pattern(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern::ArpeggiatorEffectsUI_Pattern()   {
}
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern  VROSC::ArpeggiatorEffectsUI_Pattern::Up{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern  VROSC::ArpeggiatorEffectsUI_Pattern::Down{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern  VROSC::ArpeggiatorEffectsUI_Pattern::UpDown{static_cast<int32_t>(0x2)};
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern  VROSC::ArpeggiatorEffectsUI_Pattern::AsPlayed{static_cast<int32_t>(0x3)};
constexpr ::VROSC::ArpeggiatorEffectsUI_Pattern  VROSC::ArpeggiatorEffectsUI_Pattern::Random{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(::VROSC::SynthController*)>(&::VROSC::ArpeggiatorEffectsUI::Setup)> {
  constexpr static std::size_t size = 0xd3c;
  constexpr static std::size_t addrs = 0x1785b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::OnDestroy)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1786b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.LoadPatchValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::LoadPatchValues)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1786f38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.UpdateEnableState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::UpdateEnableState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x178719c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.CheckIfDirty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::CheckIfDirty)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1787280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.OnOffToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::ArpeggiatorEffectsUI::OnOffToggled)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1787528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.ChangeTempo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(int32_t)>(&::VROSC::ArpeggiatorEffectsUI::ChangeTempo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1787640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeTempo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.ChangeGate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(float_t)>(&::VROSC::ArpeggiatorEffectsUI::ChangeGate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17877cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeGate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.ChangeOctaves
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(int32_t)>(&::VROSC::ArpeggiatorEffectsUI::ChangeOctaves)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1787838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeOctaves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.ChangePattern
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)(int32_t)>(&::VROSC::ArpeggiatorEffectsUI::ChangePattern)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x178789c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangePattern",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI.ResetPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::ResetPressed)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1787900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ArpeggiatorEffectsUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ArpeggiatorEffectsUI::*)()>(&::VROSC::ArpeggiatorEffectsUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1787bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempo;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempo;
}
constexpr void VROSC::ArpeggiatorEffectsUI::__cordl_internal_set__tempo(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tempo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__octaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaves;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__octaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaves;
}
constexpr void VROSC::ArpeggiatorEffectsUI::__cordl_internal_set__octaves(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____octaves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__pattern()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pattern;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__pattern() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pattern;
}
constexpr void VROSC::ArpeggiatorEffectsUI::__cordl_internal_set__pattern(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__gateSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::ArpeggiatorEffectsUI::__cordl_internal_get__gateSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateSlider;
}
constexpr void VROSC::ArpeggiatorEffectsUI::__cordl_internal_set__gateSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gateSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ArpeggiatorEffectsUI::Setup(::VROSC::SynthController*  instrument)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument);
}
inline void VROSC::ArpeggiatorEffectsUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ArpeggiatorEffectsUI::LoadPatchValues()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ArpeggiatorEffectsUI::UpdateEnableState()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ArpeggiatorEffectsUI::CheckIfDirty()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ArpeggiatorEffectsUI::OnOffToggled(::VROSC::InputDevice*  device, bool  isOn)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, isOn);
}
inline void VROSC::ArpeggiatorEffectsUI::ChangeTempo(int32_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeTempo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frequency);
}
inline void VROSC::ArpeggiatorEffectsUI::ChangeGate(float_t  gate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeGate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gate);
}
inline void VROSC::ArpeggiatorEffectsUI::ChangeOctaves(int32_t  octaves)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangeOctaves",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, octaves);
}
inline void VROSC::ArpeggiatorEffectsUI::ChangePattern(int32_t  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        "ChangePattern",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pattern);
}
inline void VROSC::ArpeggiatorEffectsUI::ResetPressed()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ArpeggiatorEffectsUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ArpeggiatorEffectsUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ArpeggiatorEffectsUI* VROSC::ArpeggiatorEffectsUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ArpeggiatorEffectsUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::ArpeggiatorEffectsUI::ArpeggiatorEffectsUI()   {
}
