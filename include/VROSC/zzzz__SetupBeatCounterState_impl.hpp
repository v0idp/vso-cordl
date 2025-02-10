#pragma once
// IWYU pragma private; include "VROSC/SetupBeatCounterState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__SetupBeatCounterState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BeatCounterUI_def.hpp"
#include "VROSC/zzzz__BeatCounter_def.hpp"
//  Writing Method size for method: ::VROSC::SetupBeatCounterState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupBeatCounterState::*)(::VROSC::BeatCounter*)>(&::VROSC::SetupBeatCounterState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16fa0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupBeatCounterState.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupBeatCounterState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupBeatCounterState::OnEnter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16fa100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupBeatCounterState.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupBeatCounterState::*)()>(&::VROSC::SetupBeatCounterState::OnExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupBeatCounterState.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupBeatCounterState::*)()>(&::VROSC::SetupBeatCounterState::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetupBeatCounterState.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetupBeatCounterState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::SetupBeatCounterState::UpdateData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x16fa12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::BeatCounter>& VROSC::SetupBeatCounterState::__cordl_internal_get__beatCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounter;
}
constexpr ::UnityW<::VROSC::BeatCounter> const& VROSC::SetupBeatCounterState::__cordl_internal_get__beatCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounter;
}
constexpr void VROSC::SetupBeatCounterState::__cordl_internal_set__beatCounter(::UnityW<::VROSC::BeatCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::BeatCounterUI>& VROSC::SetupBeatCounterState::__cordl_internal_get__beatCounterUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterUI;
}
constexpr ::UnityW<::VROSC::BeatCounterUI> const& VROSC::SetupBeatCounterState::__cordl_internal_get__beatCounterUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterUI;
}
constexpr void VROSC::SetupBeatCounterState::__cordl_internal_set__beatCounterUI(::UnityW<::VROSC::BeatCounterUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatCounterUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetupBeatCounterState::_ctor(::VROSC::BeatCounter*  beatCounter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatCounter);
}
inline void VROSC::SetupBeatCounterState::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::SetupBeatCounterState::OnExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupBeatCounterState::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetupBeatCounterState::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetupBeatCounterState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::VROSC::SetupBeatCounterState* VROSC::SetupBeatCounterState::New_ctor(::VROSC::BeatCounter*  beatCounter)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetupBeatCounterState*>(beatCounter));
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::SetupBeatCounterState::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::SetupBeatCounterState::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::SetupBeatCounterState::SetupBeatCounterState()   {
}
