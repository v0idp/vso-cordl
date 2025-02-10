#pragma once
// IWYU pragma private; include "VROSC/PassthroughEnabler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__PassthroughEnabler_def.hpp"
#include "GlobalNamespace/zzzz__Environment_def.hpp"
//  Writing Method size for method: ::VROSC::PassthroughEnabler.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughEnabler::*)()>(&::VROSC::PassthroughEnabler::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x16f021c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughEnabler.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughEnabler::*)()>(&::VROSC::PassthroughEnabler::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16f0340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughEnabler.NewEnvironmentSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughEnabler::*)(::GlobalNamespace::Environment*)>(&::VROSC::PassthroughEnabler::NewEnvironmentSelected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16f0438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "NewEnvironmentSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PassthroughEnabler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PassthroughEnabler::*)()>(&::VROSC::PassthroughEnabler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f065c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Environment>& VROSC::PassthroughEnabler::__cordl_internal_get__environment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environment;
}
constexpr ::UnityW<::GlobalNamespace::Environment> const& VROSC::PassthroughEnabler::__cordl_internal_get__environment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environment;
}
constexpr void VROSC::PassthroughEnabler::__cordl_internal_set__environment(::UnityW<::GlobalNamespace::Environment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PassthroughEnabler::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PassthroughEnabler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PassthroughEnabler::NewEnvironmentSelected(::GlobalNamespace::Environment*  environment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        "NewEnvironmentSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environment);
}
inline void VROSC::PassthroughEnabler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PassthroughEnabler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PassthroughEnabler* VROSC::PassthroughEnabler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PassthroughEnabler*>());
}
// Ctor Parameters []
constexpr ::VROSC::PassthroughEnabler::PassthroughEnabler()   {
}
