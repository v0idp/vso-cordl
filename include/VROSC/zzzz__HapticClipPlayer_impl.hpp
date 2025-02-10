#pragma once
// IWYU pragma private; include "VROSC/HapticClipPlayer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__HapticClipPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__HapticClipPlayer_def.hpp"
#include "VROSC/zzzz__SignalControllerInfo_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HapticClipPlayer_HapticHand::HapticClipPlayer_HapticHand(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::HapticClipPlayer_HapticHand::HapticClipPlayer_HapticHand()   {
}
constexpr ::VROSC::HapticClipPlayer_HapticHand  VROSC::HapticClipPlayer_HapticHand::SignalOrigin{static_cast<int32_t>(0x0)};
constexpr ::VROSC::HapticClipPlayer_HapticHand  VROSC::HapticClipPlayer_HapticHand::Left{static_cast<int32_t>(0x1)};
constexpr ::VROSC::HapticClipPlayer_HapticHand  VROSC::HapticClipPlayer_HapticHand::Right{static_cast<int32_t>(0x2)};
constexpr ::VROSC::HapticClipPlayer_HapticHand  VROSC::HapticClipPlayer_HapticHand::Both{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::HapticClipPlayer__StartHaptics_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer__StartHaptics_d__12::*)()>(&::VROSC::HapticClipPlayer__StartHaptics_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x171d1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer__StartHaptics_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer__StartHaptics_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer__StartHaptics_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::HapticClipPlayer__StartHaptics_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171d4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer__StartHaptics_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::HapticClipPlayer__StartHaptics_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer__StartHaptics_d__12>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HapticClipPlayer__StartHaptics_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer__StartHaptics_d__12>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::HapticClipPlayer__StartHaptics_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::HapticClipPlayer__StartHaptics_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::HapticClipPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "signalControllerInfo", ty: "::VROSC::SignalControllerInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "signalAmplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HapticClipPlayer__StartHaptics_d__12::HapticClipPlayer__StartHaptics_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  dspTime, ::UnityW<::VROSC::HapticClipPlayer>  __4__this, ::VROSC::SignalControllerInfo*  signalControllerInfo, float_t  signalAmplitude, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->dspTime = dspTime;
this->__4__this = __4__this;
this->signalControllerInfo = signalControllerInfo;
this->signalAmplitude = signalAmplitude;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::HapticClipPlayer__StartHaptics_d__12::HapticClipPlayer__StartHaptics_d__12()   {
}
//  Writing Method size for method: ::VROSC::HapticClipPlayer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)(::VROSC::Signal*)>(&::VROSC::HapticClipPlayer::NodeBegin)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x171cf98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)(::VROSC::Signal*)>(&::VROSC::HapticClipPlayer::NodeStay)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x171d070;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer.StartHaptics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)(float_t, ::VROSC::SignalControllerInfo*, double_t)>(&::VROSC::HapticClipPlayer::StartHaptics)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x171cfbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "StartHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SignalControllerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer.GenerateHaptics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)(float_t, float_t, ::VROSC::HandType)>(&::VROSC::HapticClipPlayer::GenerateHaptics)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x171d094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "GenerateHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)()>(&::VROSC::HapticClipPlayer::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x171d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HapticClipPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticClipPlayer::*)()>(&::VROSC::HapticClipPlayer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x171d1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::HapticClipPlayer::__cordl_internal_get__amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr float_t const& VROSC::HapticClipPlayer::__cordl_internal_get__amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitude = value;
}
constexpr float_t& VROSC::HapticClipPlayer::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& VROSC::HapticClipPlayer::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr float_t& VROSC::HapticClipPlayer::__cordl_internal_get__decayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTime;
}
constexpr float_t const& VROSC::HapticClipPlayer::__cordl_internal_get__decayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTime;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__decayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::HapticClipPlayer::__cordl_internal_get__decayCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::HapticClipPlayer::__cordl_internal_get__decayCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayCurve;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__decayCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____decayCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HapticClipPlayer_HapticHand& VROSC::HapticClipPlayer::__cordl_internal_get__playOnHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playOnHand;
}
constexpr ::VROSC::HapticClipPlayer_HapticHand const& VROSC::HapticClipPlayer::__cordl_internal_get__playOnHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playOnHand;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__playOnHand(::VROSC::HapticClipPlayer_HapticHand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playOnHand = value;
}
constexpr bool& VROSC::HapticClipPlayer::__cordl_internal_get__isMetronome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMetronome;
}
constexpr bool const& VROSC::HapticClipPlayer::__cordl_internal_get__isMetronome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMetronome;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__isMetronome(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMetronome = value;
}
constexpr float_t& VROSC::HapticClipPlayer::__cordl_internal_get__decayCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayCounter;
}
constexpr float_t const& VROSC::HapticClipPlayer::__cordl_internal_get__decayCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayCounter;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__decayCounter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayCounter = value;
}
constexpr float_t& VROSC::HapticClipPlayer::__cordl_internal_get__lastSignalAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSignalAmplitude;
}
constexpr float_t const& VROSC::HapticClipPlayer::__cordl_internal_get__lastSignalAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSignalAmplitude;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__lastSignalAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSignalAmplitude = value;
}
constexpr ::VROSC::HandType& VROSC::HapticClipPlayer::__cordl_internal_get__lastHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHand;
}
constexpr ::VROSC::HandType const& VROSC::HapticClipPlayer::__cordl_internal_get__lastHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHand;
}
constexpr void VROSC::HapticClipPlayer::__cordl_internal_set__lastHand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHand = value;
}
inline void VROSC::HapticClipPlayer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::HapticClipPlayer::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::HapticClipPlayer::StartHaptics(float_t  signalAmplitude, ::VROSC::SignalControllerInfo*  signalControllerInfo, double_t  dspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "StartHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SignalControllerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalAmplitude, signalControllerInfo, dspTime);
}
inline void VROSC::HapticClipPlayer::GenerateHaptics(float_t  amplitude, float_t  frequency, ::VROSC::HandType  hand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "GenerateHaptics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amplitude, frequency, hand);
}
inline void VROSC::HapticClipPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HapticClipPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticClipPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::HapticClipPlayer* VROSC::HapticClipPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::HapticClipPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::HapticClipPlayer::HapticClipPlayer()   {
}
