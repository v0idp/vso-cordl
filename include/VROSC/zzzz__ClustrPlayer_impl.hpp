#pragma once
// IWYU pragma private; include "VROSC/ClustrPlayer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_impl.hpp"
#include "VROSC/zzzz__ClustrPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ClustrDataController_def.hpp"
#include "VROSC/zzzz__ClustrPlayer_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ClustrPlayer_Chord::ClustrPlayer_Chord(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer_Chord::ClustrPlayer_Chord()   {
}
constexpr ::VROSC::ClustrPlayer_Chord  VROSC::ClustrPlayer_Chord::Sus2{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ClustrPlayer_Chord  VROSC::ClustrPlayer_Chord::Triad{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ClustrPlayer_Chord  VROSC::ClustrPlayer_Chord::Sus4{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ClustrPlayer_StrumDirection::ClustrPlayer_StrumDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer_StrumDirection::ClustrPlayer_StrumDirection()   {
}
constexpr ::VROSC::ClustrPlayer_StrumDirection  VROSC::ClustrPlayer_StrumDirection::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ClustrPlayer_StrumDirection  VROSC::ClustrPlayer_StrumDirection::Up{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ClustrPlayer_StrumDirection  VROSC::ClustrPlayer_StrumDirection::Down{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ClustrPlayer_FifthsInversion::ClustrPlayer_FifthsInversion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer_FifthsInversion::ClustrPlayer_FifthsInversion()   {
}
constexpr ::VROSC::ClustrPlayer_FifthsInversion  VROSC::ClustrPlayer_FifthsInversion::V_First{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ClustrPlayer_FifthsInversion  VROSC::ClustrPlayer_FifthsInversion::I_Basic{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ClustrPlayer_FifthsInversion  VROSC::ClustrPlayer_FifthsInversion::IV_Second{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::ClustrPlayer___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer___c__DisplayClass18_0::*)()>(&::VROSC::ClustrPlayer___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171c25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer___c__DisplayClass18_0._PlayNote_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer___c__DisplayClass18_0::*)()>(&::VROSC::ClustrPlayer___c__DisplayClass18_0::_PlayNote_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x171c49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer___c__DisplayClass18_0*>::get(),
                        "<PlayNote>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ClustrPlayer>& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::ClustrPlayer> const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set___4__this(::UnityW<::VROSC::ClustrPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr double_t& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_predictedDspTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictedDspTime;
}
constexpr double_t const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_predictedDspTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictedDspTime;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set_predictedDspTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predictedDspTime = value;
}
constexpr ::VROSC::HandType& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_handType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handType;
}
constexpr ::VROSC::HandType const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_handType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handType;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set_handType(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handType = value;
}
constexpr float_t& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr float_t& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void VROSC::ClustrPlayer___c__DisplayClass18_0::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
inline void VROSC::ClustrPlayer___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ClustrPlayer___c__DisplayClass18_0::_PlayNote_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer___c__DisplayClass18_0*>::get(),
                        "<PlayNote>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ClustrPlayer___c__DisplayClass18_0* VROSC::ClustrPlayer___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ClustrPlayer___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer___c__DisplayClass18_0::ClustrPlayer___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::VROSC::ClustrPlayer__StrumChord_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer__StrumChord_d__19::*)()>(&::VROSC::ClustrPlayer__StrumChord_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x171c54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer__StrumChord_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer__StrumChord_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer__StrumChord_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::ClustrPlayer__StrumChord_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171cc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer__StrumChord_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::ClustrPlayer__StrumChord_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer__StrumChord_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ClustrPlayer__StrumChord_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer__StrumChord_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::ClustrPlayer__StrumChord_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::ClustrPlayer__StrumChord_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::ClustrPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "secondNote", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "velocity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "pitch", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "thirdNote", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstNote", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_strumTime_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ClustrPlayer__StrumChord_d__19::ClustrPlayer__StrumChord_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::ClustrPlayer>  __4__this, ::System::Threading::CancellationToken  cancellationToken, int32_t  secondNote, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume, int32_t  thirdNote, int32_t  firstNote, int32_t  _strumTime_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->secondNote = secondNote;
this->velocity = velocity;
this->predictedDspTime = predictedDspTime;
this->handType = handType;
this->pitch = pitch;
this->volume = volume;
this->thirdNote = thirdNote;
this->firstNote = firstNote;
this->_strumTime_5__2 = _strumTime_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer__StrumChord_d__19::ClustrPlayer__StrumChord_d__19()   {
}
//  Writing Method size for method: ::VROSC::ClustrPlayer.get_MaxNotesPerPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::ClustrPlayer::*)()>(&::VROSC::ClustrPlayer::get_MaxNotesPerPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171b640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.get__dataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ClustrDataController* (::VROSC::ClustrPlayer::*)()>(&::VROSC::ClustrPlayer::get__dataController)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x171b648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "get__dataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)()>(&::VROSC::ClustrPlayer::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x171b6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.GetQuadrant
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::VROSC::ClustrPlayer::*)(::UnityEngine::Vector3)>(&::VROSC::ClustrPlayer::GetQuadrant)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x171b744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "GetQuadrant",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.GetNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::VROSC::ClustrPlayer::*)(::UnityEngine::Vector3)>(&::VROSC::ClustrPlayer::GetNotes)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x171b908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)(::VROSC::Signal*)>(&::VROSC::ClustrPlayer::NodeStay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x171bc60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)(::VROSC::Signal*, bool, bool)>(&::VROSC::ClustrPlayer::Play)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x171bcb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)(int32_t, float_t, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::ClustrPlayer::PlayNote)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x171be40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.StrumChord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)(int32_t, int32_t, int32_t, float_t, double_t, ::VROSC::HandType, float_t, float_t, ::System::Threading::CancellationToken)>(&::VROSC::ClustrPlayer::StrumChord)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x171c264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "StrumChord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)(int32_t, ::VROSC::HandType)>(&::VROSC::ClustrPlayer::StopNote)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x171c35c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrPlayer::*)()>(&::VROSC::ClustrPlayer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x171c418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::ClustrPlayer_StrumDirection& VROSC::ClustrPlayer::__cordl_internal_get__strumDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strumDirection;
}
constexpr ::VROSC::ClustrPlayer_StrumDirection const& VROSC::ClustrPlayer::__cordl_internal_get__strumDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strumDirection;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__strumDirection(::VROSC::ClustrPlayer_StrumDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strumDirection = value;
}
constexpr bool& VROSC::ClustrPlayer::__cordl_internal_get__useAsBass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAsBass;
}
constexpr bool const& VROSC::ClustrPlayer::__cordl_internal_get__useAsBass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAsBass;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__useAsBass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useAsBass = value;
}
constexpr ::VROSC::ClustrPlayer_Chord& VROSC::ClustrPlayer::__cordl_internal_get__chord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chord;
}
constexpr ::VROSC::ClustrPlayer_Chord const& VROSC::ClustrPlayer::__cordl_internal_get__chord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chord;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__chord(::VROSC::ClustrPlayer_Chord  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chord = value;
}
constexpr ::VROSC::ClustrPlayer_FifthsInversion& VROSC::ClustrPlayer::__cordl_internal_get__fifthsInversion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fifthsInversion;
}
constexpr ::VROSC::ClustrPlayer_FifthsInversion const& VROSC::ClustrPlayer::__cordl_internal_get__fifthsInversion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fifthsInversion;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__fifthsInversion(::VROSC::ClustrPlayer_FifthsInversion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fifthsInversion = value;
}
constexpr ::System::Threading::CancellationTokenSource*& VROSC::ClustrPlayer::__cordl_internal_get__strumCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strumCancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& VROSC::ClustrPlayer::__cordl_internal_get__strumCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strumCancellationTokenSource;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__strumCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strumCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& VROSC::ClustrPlayer::__cordl_internal_get__hoveredNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredNotes;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& VROSC::ClustrPlayer::__cordl_internal_get__hoveredNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveredNotes;
}
constexpr void VROSC::ClustrPlayer::__cordl_internal_set__hoveredNotes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveredNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::ClustrPlayer::get_MaxNotesPerPlayer()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::VROSC::ClustrDataController* VROSC::ClustrPlayer::get__dataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "get__dataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::ClustrDataController*, false>(this, ___internal_method);
}
inline void VROSC::ClustrPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int VROSC::ClustrPlayer::GetQuadrant(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "GetQuadrant",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, position);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> VROSC::ClustrPlayer::GetNotes(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(this, ___internal_method, position);
}
inline void VROSC::ClustrPlayer::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ClustrPlayer::Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, linkHands, ignoreQuantize);
}
inline void VROSC::ClustrPlayer::PlayNote(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, predictedDspTime, handType, pitch, volume);
}
inline void VROSC::ClustrPlayer::StrumChord(int32_t  firstNote, int32_t  secondNote, int32_t  thirdNote, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        "StrumChord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstNote, secondNote, thirdNote, velocity, predictedDspTime, handType, pitch, volume, cancellationToken);
}
inline void VROSC::ClustrPlayer::StopNote(int32_t  note, ::VROSC::HandType  handType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, handType);
}
inline void VROSC::ClustrPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ClustrPlayer* VROSC::ClustrPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ClustrPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::ClustrPlayer::ClustrPlayer()   {
}
