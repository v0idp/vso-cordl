#pragma once
// IWYU pragma private; include "VROSC/EnvironmentPanelUI.hpp"
#include "VROSC/zzzz__BasicEnvironmentPanelUI_impl.hpp"
#include "VROSC/zzzz__EnvironmentPanelUI_def.hpp"
#include "VROSC/zzzz__EnvironmentColorsUI_def.hpp"
#include "VROSC/zzzz__EnvironmentData_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)()>(&::VROSC::EnvironmentPanelUI::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17376fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)()>(&::VROSC::EnvironmentPanelUI::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17377dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)()>(&::VROSC::EnvironmentPanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1737884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI.SetEffectsInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)(float_t)>(&::VROSC::EnvironmentPanelUI::SetEffectsInput)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x173795c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "SetEffectsInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI.SetActiveEnvironment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)(::VROSC::EnvironmentData*)>(&::VROSC::EnvironmentPanelUI::SetActiveEnvironment)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1737a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnvironmentPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentPanelUI::*)()>(&::VROSC::EnvironmentPanelUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1737abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISlider>& VROSC::EnvironmentPanelUI::__cordl_internal_get__effectSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::EnvironmentPanelUI::__cordl_internal_get__effectSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectSlider;
}
constexpr void VROSC::EnvironmentPanelUI::__cordl_internal_set__effectSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::EnvironmentColorsUI>& VROSC::EnvironmentPanelUI::__cordl_internal_get__environmentColorsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentColorsUI;
}
constexpr ::UnityW<::VROSC::EnvironmentColorsUI> const& VROSC::EnvironmentPanelUI::__cordl_internal_get__environmentColorsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentColorsUI;
}
constexpr void VROSC::EnvironmentPanelUI::__cordl_internal_set__environmentColorsUI(::UnityW<::VROSC::EnvironmentColorsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentColorsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::EnvironmentPanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentPanelUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentPanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::EnvironmentPanelUI::SetEffectsInput(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        "SetEffectsInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void VROSC::EnvironmentPanelUI::SetActiveEnvironment(::VROSC::EnvironmentData*  newEnvironment)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEnvironment);
}
inline void VROSC::EnvironmentPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EnvironmentPanelUI* VROSC::EnvironmentPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EnvironmentPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::EnvironmentPanelUI::EnvironmentPanelUI()   {
}
