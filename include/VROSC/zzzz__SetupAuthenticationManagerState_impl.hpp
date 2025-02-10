#pragma once
// IWYU pragma private; include "VROSC/SetupAuthenticationManagerState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__SetupAuthenticationManagerState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__AuthenticationManager_def.hpp"
//  Writing Method size for method: ::VROSC::SetupAuthenticationManagerState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupAuthenticationManagerState::*)(::VROSC::AuthenticationManager*)>(&::VROSC::SetupAuthenticationManagerState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16fa088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AuthenticationManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupAuthenticationManagerState.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupAuthenticationManagerState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupAuthenticationManagerState::OnEnter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fa0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupAuthenticationManagerState.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupAuthenticationManagerState::*)()>(&::VROSC::SetupAuthenticationManagerState::OnExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupAuthenticationManagerState.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupAuthenticationManagerState::*)()>(&::VROSC::SetupAuthenticationManagerState::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupAuthenticationManagerState.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupAuthenticationManagerState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupAuthenticationManagerState::UpdateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AuthenticationManager>& VROSC::SetupAuthenticationManagerState::__cordl_internal_get__authenticationManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authenticationManager;
}
constexpr ::UnityW<::VROSC::AuthenticationManager> const& VROSC::SetupAuthenticationManagerState::__cordl_internal_get__authenticationManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authenticationManager;
}
constexpr void VROSC::SetupAuthenticationManagerState::__cordl_internal_set__authenticationManager(::UnityW<::VROSC::AuthenticationManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authenticationManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetupAuthenticationManagerState::_ctor(::VROSC::AuthenticationManager*  authenticationManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AuthenticationManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, authenticationManager);
}
inline void VROSC::SetupAuthenticationManagerState::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::SetupAuthenticationManagerState::OnExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupAuthenticationManagerState::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupAuthenticationManagerState::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupAuthenticationManagerState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::VROSC::SetupAuthenticationManagerState* VROSC::SetupAuthenticationManagerState::New_ctor(::VROSC::AuthenticationManager*  authenticationManager)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetupAuthenticationManagerState*>(authenticationManager));
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::SetupAuthenticationManagerState::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::SetupAuthenticationManagerState::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::SetupAuthenticationManagerState::SetupAuthenticationManagerState()   {
}
