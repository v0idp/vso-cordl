#pragma once
// IWYU pragma private; include "VROSC/StartState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__StartState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__FullScreenFxController_def.hpp"
//  Writing Method size for method: ::VROSC::StartState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StartState::*)(::VROSC::FullScreenFxController*)>(&::VROSC::StartState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16fa750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FullScreenFxController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StartState.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StartState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::StartState::OnEnter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16fa778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StartState.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StartState::*)()>(&::VROSC::StartState::OnExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StartState.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StartState::*)()>(&::VROSC::StartState::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StartState.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StartState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::StartState::UpdateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::FullScreenFxController>& VROSC::StartState::__cordl_internal_get__fullScreenFxController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullScreenFxController;
}
constexpr ::UnityW<::VROSC::FullScreenFxController> const& VROSC::StartState::__cordl_internal_get__fullScreenFxController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullScreenFxController;
}
constexpr void VROSC::StartState::__cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullScreenFxController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::StartState::_ctor(::VROSC::FullScreenFxController*  fullScreenFxController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FullScreenFxController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullScreenFxController);
}
inline void VROSC::StartState::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::StartState::OnExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::StartState::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::StartState::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StartState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::VROSC::StartState* VROSC::StartState::New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::StartState*>(fullScreenFxController));
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::StartState::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::StartState::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::StartState::StartState()   {
}
