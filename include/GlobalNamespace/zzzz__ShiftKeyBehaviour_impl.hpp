#pragma once
// IWYU pragma private; include "GlobalNamespace/ShiftKeyBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShiftKeyBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShiftKeyBehaviour.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShiftKeyBehaviour::*)()>(&::GlobalNamespace::ShiftKeyBehaviour::Awake)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16bac24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShiftKeyBehaviour.ShiftKeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShiftKeyBehaviour::*)(::GlobalNamespace::Key*)>(&::GlobalNamespace::ShiftKeyBehaviour::ShiftKeyPressed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x16badb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "ShiftKeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShiftKeyBehaviour.ShiftVisibilityToggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShiftKeyBehaviour::*)(bool)>(&::GlobalNamespace::ShiftKeyBehaviour::ShiftVisibilityToggle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x16badfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "ShiftVisibilityToggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShiftKeyBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShiftKeyBehaviour::*)()>(&::GlobalNamespace::ShiftKeyBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bae70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_Housing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Housing;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_Housing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Housing;
}
constexpr void GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_set_Housing(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Housing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyRenderer;
}
constexpr void GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_set_keyRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCollider;
}
constexpr void GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_set_keyCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCap;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_keyCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCap;
}
constexpr void GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_set_keyCap(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyCap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Key>& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_shiftKeyController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftKeyController;
}
constexpr ::UnityW<::GlobalNamespace::Key> const& GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_get_shiftKeyController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftKeyController;
}
constexpr void GlobalNamespace::ShiftKeyBehaviour::__cordl_internal_set_shiftKeyController(::UnityW<::GlobalNamespace::Key>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shiftKeyController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ShiftKeyBehaviour::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShiftKeyBehaviour::ShiftKeyPressed(::GlobalNamespace::Key*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "ShiftKeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void GlobalNamespace::ShiftKeyBehaviour::ShiftVisibilityToggle(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        "ShiftVisibilityToggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::ShiftKeyBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShiftKeyBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ShiftKeyBehaviour* GlobalNamespace::ShiftKeyBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ShiftKeyBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShiftKeyBehaviour::ShiftKeyBehaviour()   {
}
