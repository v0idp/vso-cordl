#pragma once
// IWYU pragma private; include "VROSC/InteractionDisabler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__InteractionDisabler_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
//  Writing Method size for method: ::VROSC::InteractionDisabler.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InteractionDisabler::*)()>(&::VROSC::InteractionDisabler::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1890714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InteractionDisabler.GetInChildren
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InteractionDisabler::*)()>(&::VROSC::InteractionDisabler::GetInChildren)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1890724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "GetInChildren",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InteractionDisabler.SetDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InteractionDisabler::*)(bool, bool)>(&::VROSC::InteractionDisabler::SetDisabled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1890778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "SetDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InteractionDisabler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InteractionDisabler::*)()>(&::VROSC::InteractionDisabler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1890880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& VROSC::InteractionDisabler::__cordl_internal_get__interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& VROSC::InteractionDisabler::__cordl_internal_get__interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactables;
}
constexpr void VROSC::InteractionDisabler::__cordl_internal_set__interactables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::InteractionDisabler::__cordl_internal_get__getInteractablesOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getInteractablesOnAwake;
}
constexpr bool const& VROSC::InteractionDisabler::__cordl_internal_get__getInteractablesOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getInteractablesOnAwake;
}
constexpr void VROSC::InteractionDisabler::__cordl_internal_set__getInteractablesOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getInteractablesOnAwake = value;
}
inline void VROSC::InteractionDisabler::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InteractionDisabler::GetInChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "GetInChildren",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InteractionDisabler::SetDisabled(bool  disabled, bool  disableVisually)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        "SetDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled, disableVisually);
}
inline void VROSC::InteractionDisabler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InteractionDisabler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InteractionDisabler* VROSC::InteractionDisabler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InteractionDisabler*>());
}
// Ctor Parameters []
constexpr ::VROSC::InteractionDisabler::InteractionDisabler()   {
}
