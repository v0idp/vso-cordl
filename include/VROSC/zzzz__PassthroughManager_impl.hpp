#pragma once
// IWYU pragma private; include "VROSC/PassthroughManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__PassthroughManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::VROSC::PassthroughManager.get_IsToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PassthroughManager::*)()>(&::VROSC::PassthroughManager::get_IsToggled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "get_IsToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughManager.set_IsToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughManager::*)(bool)>(&::VROSC::PassthroughManager::set_IsToggled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f066c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "set_IsToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughManager::*)()>(&::VROSC::PassthroughManager::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16f0678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughManager.TogglePassthrough
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughManager::*)(bool)>(&::VROSC::PassthroughManager::TogglePassthrough)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x16f0504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "TogglePassthrough",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughManager::*)()>(&::VROSC::PassthroughManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f0698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRManager>& VROSC::PassthroughManager::__cordl_internal_get__ovrManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrManager;
}
constexpr ::UnityW<::GlobalNamespace::OVRManager> const& VROSC::PassthroughManager::__cordl_internal_get__ovrManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrManager;
}
constexpr void VROSC::PassthroughManager::__cordl_internal_set__ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ovrManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& VROSC::PassthroughManager::__cordl_internal_get__passthroughLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passthroughLayer;
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& VROSC::PassthroughManager::__cordl_internal_get__passthroughLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____passthroughLayer;
}
constexpr void VROSC::PassthroughManager::__cordl_internal_set__passthroughLayer(::UnityW<::GlobalNamespace::OVRPassthroughLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____passthroughLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& VROSC::PassthroughManager::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& VROSC::PassthroughManager::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void VROSC::PassthroughManager::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::PassthroughManager::__cordl_internal_get__IsToggled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsToggled_k__BackingField;
}
constexpr bool const& VROSC::PassthroughManager::__cordl_internal_get__IsToggled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsToggled_k__BackingField;
}
constexpr void VROSC::PassthroughManager::__cordl_internal_set__IsToggled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsToggled_k__BackingField = value;
}
inline bool VROSC::PassthroughManager::get_IsToggled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "get_IsToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PassthroughManager::set_IsToggled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "set_IsToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::PassthroughManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PassthroughManager::TogglePassthrough(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        "TogglePassthrough",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::PassthroughManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PassthroughManager* VROSC::PassthroughManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PassthroughManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::PassthroughManager::PassthroughManager()   {
}
