#pragma once
// IWYU pragma private; include "VROSC/SetupUiState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__SetupUiState_def.hpp"
#include "GlobalNamespace/zzzz__PunchKeyboard_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Dashboard_def.hpp"
#include "VROSC/zzzz__SetupBeatCounterState_def.hpp"
#include "VROSC/zzzz__UISchemeController_def.hpp"
//  Writing Method size for method: ::VROSC::SetupUiState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupUiState::*)(::VROSC::Dashboard*, ::GlobalNamespace::PunchKeyboard*, ::VROSC::UISchemeController*)>(&::VROSC::SetupUiState::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x16fa408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Dashboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PunchKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UISchemeController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupUiState.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupUiState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupUiState::OnEnter)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x16fa444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupUiState.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupUiState::*)()>(&::VROSC::SetupUiState::OnExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x16fa51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupUiState.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupUiState::*)()>(&::VROSC::SetupUiState::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupUiState.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupUiState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupUiState::UpdateData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x16fa610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Dashboard>& VROSC::SetupUiState::__cordl_internal_get__dashboardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashboardPrefab;
}
constexpr ::UnityW<::VROSC::Dashboard> const& VROSC::SetupUiState::__cordl_internal_get__dashboardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashboardPrefab;
}
constexpr void VROSC::SetupUiState::__cordl_internal_set__dashboardPrefab(::UnityW<::VROSC::Dashboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dashboardPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PunchKeyboard>& VROSC::SetupUiState::__cordl_internal_get__keyboardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PunchKeyboard> const& VROSC::SetupUiState::__cordl_internal_get__keyboardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardPrefab;
}
constexpr void VROSC::SetupUiState::__cordl_internal_set__keyboardPrefab(::UnityW<::GlobalNamespace::PunchKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboardPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UISchemeController*& VROSC::SetupUiState::__cordl_internal_get__uiSchemeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiSchemeController;
}
constexpr ::VROSC::UISchemeController* const& VROSC::SetupUiState::__cordl_internal_get__uiSchemeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiSchemeController;
}
constexpr void VROSC::SetupUiState::__cordl_internal_set__uiSchemeController(::VROSC::UISchemeController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiSchemeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SetupBeatCounterState*& VROSC::SetupUiState::__cordl_internal_get__beatCounterState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterState;
}
constexpr ::VROSC::SetupBeatCounterState* const& VROSC::SetupUiState::__cordl_internal_get__beatCounterState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterState;
}
constexpr void VROSC::SetupUiState::__cordl_internal_set__beatCounterState(::VROSC::SetupBeatCounterState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatCounterState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetupUiState::_ctor(::VROSC::Dashboard*  dashboardPrefab, ::GlobalNamespace::PunchKeyboard*  keyboardPrefab, ::VROSC::UISchemeController*  uiSchemeController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Dashboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PunchKeyboard*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UISchemeController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dashboardPrefab, keyboardPrefab, uiSchemeController);
}
inline void VROSC::SetupUiState::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::SetupUiState::OnExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupUiState::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupUiState::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupUiState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::VROSC::SetupUiState* VROSC::SetupUiState::New_ctor(::VROSC::Dashboard*  dashboardPrefab, ::GlobalNamespace::PunchKeyboard*  keyboardPrefab, ::VROSC::UISchemeController*  uiSchemeController)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetupUiState*>(dashboardPrefab, keyboardPrefab, uiSchemeController));
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::SetupUiState::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::SetupUiState::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::SetupUiState::SetupUiState()   {
}
