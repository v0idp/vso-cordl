#pragma once
// IWYU pragma private; include "VROSC/UI/DisablePointingTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__PointingLaser_impl.hpp"
#include "VROSC/UI/zzzz__DisablePointingTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::VROSC::UI::DisablePointingTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::DisablePointingTrigger::*)(::UnityEngine::Collider*)>(&::VROSC::UI::DisablePointingTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x17e05c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        "OnTriggerEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::DisablePointingTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::DisablePointingTrigger::*)(::UnityEngine::Collider*)>(&::VROSC::UI::DisablePointingTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x17e067c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        "OnTriggerExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::DisablePointingTrigger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::DisablePointingTrigger::*)()>(&::VROSC::UI::DisablePointingTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e0738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::PointingLaser_DisablingReason& VROSC::UI::DisablePointingTrigger::__cordl_internal_get__disablingReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingReason;
}
constexpr ::VROSC::PointingLaser_DisablingReason const& VROSC::UI::DisablePointingTrigger::__cordl_internal_get__disablingReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingReason;
}
constexpr void VROSC::UI::DisablePointingTrigger::__cordl_internal_set__disablingReason(::VROSC::PointingLaser_DisablingReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disablingReason = value;
}
inline void VROSC::UI::DisablePointingTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        "OnTriggerEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::DisablePointingTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        "OnTriggerExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::DisablePointingTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::DisablePointingTrigger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::DisablePointingTrigger* VROSC::UI::DisablePointingTrigger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::DisablePointingTrigger*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::DisablePointingTrigger::DisablePointingTrigger()   {
}
