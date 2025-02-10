#pragma once
// IWYU pragma private; include "VROSC/SwitchObjectOnHover.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SwitchObjectOnHover_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
//  Writing Method size for method: ::VROSC::SwitchObjectOnHover.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SwitchObjectOnHover::*)()>(&::VROSC::SwitchObjectOnHover::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1771d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SwitchObjectOnHover.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SwitchObjectOnHover::*)()>(&::VROSC::SwitchObjectOnHover::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1771ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SwitchObjectOnHover.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SwitchObjectOnHover::*)(bool)>(&::VROSC::SwitchObjectOnHover::SetHovering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1771e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SwitchObjectOnHover._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SwitchObjectOnHover::*)()>(&::VROSC::SwitchObjectOnHover::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1771fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Interactable>& VROSC::SwitchObjectOnHover::__cordl_internal_get__interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr ::UnityW<::VROSC::Interactable> const& VROSC::SwitchObjectOnHover::__cordl_internal_get__interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr void VROSC::SwitchObjectOnHover::__cordl_internal_set__interactable(::UnityW<::VROSC::Interactable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SwitchObjectOnHover::__cordl_internal_get__normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SwitchObjectOnHover::__cordl_internal_get__normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr void VROSC::SwitchObjectOnHover::__cordl_internal_set__normal(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SwitchObjectOnHover::__cordl_internal_get__onHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onHover;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SwitchObjectOnHover::__cordl_internal_get__onHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onHover;
}
constexpr void VROSC::SwitchObjectOnHover::__cordl_internal_set__onHover(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onHover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SwitchObjectOnHover::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SwitchObjectOnHover::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SwitchObjectOnHover::SetHovering(bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::SwitchObjectOnHover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SwitchObjectOnHover*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SwitchObjectOnHover* VROSC::SwitchObjectOnHover::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SwitchObjectOnHover*>());
}
// Ctor Parameters []
constexpr ::VROSC::SwitchObjectOnHover::SwitchObjectOnHover()   {
}
