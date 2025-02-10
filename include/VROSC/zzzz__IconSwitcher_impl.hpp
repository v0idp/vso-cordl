#pragma once
// IWYU pragma private; include "VROSC/IconSwitcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__IconSwitcher_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::VROSC::IconSwitcher.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitcher::*)()>(&::VROSC::IconSwitcher::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17402a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IconSwitcher.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitcher::*)(bool)>(&::VROSC::IconSwitcher::SetActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17402b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IconSwitcher._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitcher::*)()>(&::VROSC::IconSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1740310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::IconSwitcher::__cordl_internal_get__startsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startsActive;
}
constexpr bool const& VROSC::IconSwitcher::__cordl_internal_get__startsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startsActive;
}
constexpr void VROSC::IconSwitcher::__cordl_internal_set__startsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startsActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::IconSwitcher::__cordl_internal_get__normalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::IconSwitcher::__cordl_internal_get__normalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMesh;
}
constexpr void VROSC::IconSwitcher::__cordl_internal_set__normalMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::IconSwitcher::__cordl_internal_get__activeMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::IconSwitcher::__cordl_internal_get__activeMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr void VROSC::IconSwitcher::__cordl_internal_set__activeMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::IconSwitcher::__cordl_internal_get__isHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovering;
}
constexpr bool const& VROSC::IconSwitcher::__cordl_internal_get__isHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovering;
}
constexpr void VROSC::IconSwitcher::__cordl_internal_set__isHovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHovering = value;
}
inline void VROSC::IconSwitcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::IconSwitcher::SetActive(bool  shouldBeActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeActive);
}
inline void VROSC::IconSwitcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IconSwitcher* VROSC::IconSwitcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IconSwitcher*>());
}
// Ctor Parameters []
constexpr ::VROSC::IconSwitcher::IconSwitcher()   {
}
