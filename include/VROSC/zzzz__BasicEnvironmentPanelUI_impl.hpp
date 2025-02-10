#pragma once
// IWYU pragma private; include "VROSC/BasicEnvironmentPanelUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BasicEnvironmentPanelUI_def.hpp"
#include "VROSC/zzzz__EnvironmentData_def.hpp"
#include "VROSC/zzzz__EnvironmentUIButton_def.hpp"
//  Writing Method size for method: ::VROSC::BasicEnvironmentPanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BasicEnvironmentPanelUI::*)()>(&::VROSC::BasicEnvironmentPanelUI::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x173742c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BasicEnvironmentPanelUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BasicEnvironmentPanelUI::*)()>(&::VROSC::BasicEnvironmentPanelUI::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x173747c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BasicEnvironmentPanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BasicEnvironmentPanelUI::*)()>(&::VROSC::BasicEnvironmentPanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17375c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BasicEnvironmentPanelUI.SetActiveEnvironment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BasicEnvironmentPanelUI::*)(::VROSC::EnvironmentData*)>(&::VROSC::BasicEnvironmentPanelUI::SetActiveEnvironment)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x17375c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BasicEnvironmentPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BasicEnvironmentPanelUI::*)()>(&::VROSC::BasicEnvironmentPanelUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17376f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>& VROSC::BasicEnvironmentPanelUI::__cordl_internal_get__environmentButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentButtons;
}
constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*> const& VROSC::BasicEnvironmentPanelUI::__cordl_internal_get__environmentButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentButtons;
}
constexpr void VROSC::BasicEnvironmentPanelUI::__cordl_internal_set__environmentButtons(::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::EnvironmentUIButton>& VROSC::BasicEnvironmentPanelUI::__cordl_internal_get__passthroughButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passthroughButton;
}
constexpr ::UnityW<::VROSC::EnvironmentUIButton> const& VROSC::BasicEnvironmentPanelUI::__cordl_internal_get__passthroughButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passthroughButton;
}
constexpr void VROSC::BasicEnvironmentPanelUI::__cordl_internal_set__passthroughButton(::UnityW<::VROSC::EnvironmentUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____passthroughButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BasicEnvironmentPanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BasicEnvironmentPanelUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BasicEnvironmentPanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BasicEnvironmentPanelUI::SetActiveEnvironment(::VROSC::EnvironmentData*  newEnvironment)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newEnvironment);
}
inline void VROSC::BasicEnvironmentPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BasicEnvironmentPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BasicEnvironmentPanelUI* VROSC::BasicEnvironmentPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BasicEnvironmentPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::BasicEnvironmentPanelUI::BasicEnvironmentPanelUI()   {
}
