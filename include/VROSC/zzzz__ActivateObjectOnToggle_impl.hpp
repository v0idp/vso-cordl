#pragma once
// IWYU pragma private; include "VROSC/ActivateObjectOnToggle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ActivateObjectOnToggle_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::ActivateObjectOnToggle.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ActivateObjectOnToggle::*)()>(&::VROSC::ActivateObjectOnToggle::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x177121c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ActivateObjectOnToggle.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ActivateObjectOnToggle::*)()>(&::VROSC::ActivateObjectOnToggle::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17713b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ActivateObjectOnToggle.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ActivateObjectOnToggle::*)(::VROSC::InputDevice*, bool)>(&::VROSC::ActivateObjectOnToggle::SetActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17713d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ActivateObjectOnToggle._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ActivateObjectOnToggle::*)()>(&::VROSC::ActivateObjectOnToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17713f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::ActivateObjectOnToggle::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::ActivateObjectOnToggle::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void VROSC::ActivateObjectOnToggle::__cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TooltipData*& VROSC::ActivateObjectOnToggle::__cordl_internal_get__tooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltip;
}
constexpr ::VROSC::TooltipData* const& VROSC::ActivateObjectOnToggle::__cordl_internal_get__tooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltip;
}
constexpr void VROSC::ActivateObjectOnToggle::__cordl_internal_set__tooltip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ActivateObjectOnToggle::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ActivateObjectOnToggle::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ActivateObjectOnToggle::SetActive(::VROSC::InputDevice*  device, bool  shouldBeOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, shouldBeOn);
}
inline void VROSC::ActivateObjectOnToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ActivateObjectOnToggle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ActivateObjectOnToggle* VROSC::ActivateObjectOnToggle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ActivateObjectOnToggle*>());
}
// Ctor Parameters []
constexpr ::VROSC::ActivateObjectOnToggle::ActivateObjectOnToggle()   {
}
