#pragma once
// IWYU pragma private; include "VROSC/NoteBoardPlayer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__NoteBoardNote_impl.hpp"
#include "VROSC/zzzz__NoteBoard_impl.hpp"
#include "VROSC/zzzz__NotePlayer_impl.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__NoteFieldNoteData_def.hpp"
#include "VROSC/zzzz__PlayBehaviourField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour::NoteBoardPlayer_PlayBehaviour(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour::NoteBoardPlayer_PlayBehaviour()   {
}
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour  VROSC::NoteBoardPlayer_PlayBehaviour::Slide{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour  VROSC::NoteBoardPlayer_PlayBehaviour::Hold{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer__Stop_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer__Stop_d__20::*)()>(&::VROSC::NoteBoardPlayer__Stop_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x171ecb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer__Stop_d__20>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer__Stop_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer__Stop_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::NoteBoardPlayer__Stop_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x171ef04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer__Stop_d__20>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::NoteBoardPlayer__Stop_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer__Stop_d__20>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardPlayer__Stop_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer__Stop_d__20>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::NoteBoardPlayer__Stop_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::NoteBoardPlayer__Stop_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NoteBoardPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkHands", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "immediate", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteBoardPlayer__Stop_d__20::NoteBoardPlayer__Stop_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::NoteBoardPlayer>  __4__this, bool  linkHands, bool  immediate, ::VROSC::HandType  handType, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->linkHands = linkHands;
this->immediate = immediate;
this->handType = handType;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardPlayer__Stop_d__20::NoteBoardPlayer__Stop_d__20()   {
}
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.get_RequireOrigin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteBoardPlayer::*)()>(&::VROSC::NoteBoardPlayer::get_RequireOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171e1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.get_Instrument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InstrumentController> (::VROSC::NoteBoardPlayer::*)()>(&::VROSC::NoteBoardPlayer::get_Instrument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171e1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "get_Instrument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)()>(&::VROSC::NoteBoardPlayer::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x171e1c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)(::VROSC::Signal*)>(&::VROSC::NoteBoardPlayer::NodeBegin)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x171e314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)(::VROSC::Signal*)>(&::VROSC::NoteBoardPlayer::NodeStay)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x171e3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.UpdateCurrentPlayingNotefield
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)(::VROSC::Signal*)>(&::VROSC::NoteBoardPlayer::UpdateCurrentPlayingNotefield)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x171e368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "UpdateCurrentPlayingNotefield",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)(::VROSC::Signal*)>(&::VROSC::NoteBoardPlayer::NodeEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x171e44c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)(::VROSC::Signal*, bool, bool)>(&::VROSC::NoteBoardPlayer::Play)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x171bd64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NoteBoardPlayer::*)(::UnityEngine::Vector3)>(&::VROSC::NoteBoardPlayer::GetNote)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x171e954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::NoteBoardPlayer::*)(bool, ::VROSC::HandType, bool)>(&::VROSC::NoteBoardPlayer::Stop)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x171eac4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteBoardPlayer::*)()>(&::VROSC::NoteBoardPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x171c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteBoardPlayer.__n__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::NoteBoardPlayer::*)(bool, ::VROSC::HandType, bool)>(&::VROSC::NoteBoardPlayer::__n__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171ebb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "<>n__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteBoard>& VROSC::NoteBoardPlayer::__cordl_internal_get__noteBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr ::UnityW<::VROSC::NoteBoard> const& VROSC::NoteBoardPlayer::__cordl_internal_get__noteBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__noteBoard(::UnityW<::VROSC::NoteBoard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteBoard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NoteBoard_PlayAxis& VROSC::NoteBoardPlayer::__cordl_internal_get__playAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playAxis;
}
constexpr ::VROSC::NoteBoard_PlayAxis const& VROSC::NoteBoardPlayer::__cordl_internal_get__playAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playAxis;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__playAxis(::VROSC::NoteBoard_PlayAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playAxis = value;
}
constexpr ::VROSC::NoteBoardNote_Coloring& VROSC::NoteBoardPlayer::__cordl_internal_get__coloring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr ::VROSC::NoteBoardNote_Coloring const& VROSC::NoteBoardPlayer::__cordl_internal_get__coloring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__coloring(::VROSC::NoteBoardNote_Coloring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coloring = value;
}
constexpr ::VROSC::IntField*& VROSC::NoteBoardPlayer::__cordl_internal_get__octave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octave;
}
constexpr ::VROSC::IntField* const& VROSC::NoteBoardPlayer::__cordl_internal_get__octave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octave;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__octave(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____octave)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PlayBehaviourField*& VROSC::NoteBoardPlayer::__cordl_internal_get__playBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBehaviour;
}
constexpr ::VROSC::PlayBehaviourField* const& VROSC::NoteBoardPlayer::__cordl_internal_get__playBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playBehaviour;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__playBehaviour(::VROSC::PlayBehaviourField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playBehaviour)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NoteBoardPlayer::__cordl_internal_get__scaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleOffset;
}
constexpr ::VROSC::IntField* const& VROSC::NoteBoardPlayer::__cordl_internal_get__scaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleOffset;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__scaleOffset(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::NoteBoardPlayer::__cordl_internal_get__avoidTritone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avoidTritone;
}
constexpr bool const& VROSC::NoteBoardPlayer::__cordl_internal_get__avoidTritone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avoidTritone;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__avoidTritone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____avoidTritone = value;
}
constexpr ::VROSC::NoteFieldNoteData*& VROSC::NoteBoardPlayer::__cordl_internal_get__currentPlayingNoteField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingNoteField;
}
constexpr ::VROSC::NoteFieldNoteData* const& VROSC::NoteBoardPlayer::__cordl_internal_get__currentPlayingNoteField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingNoteField;
}
constexpr void VROSC::NoteBoardPlayer::__cordl_internal_set__currentPlayingNoteField(::VROSC::NoteFieldNoteData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPlayingNoteField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::NoteBoardPlayer::get_RequireOrigin()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InstrumentController> VROSC::NoteBoardPlayer::get_Instrument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "get_Instrument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InstrumentController>, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardPlayer::Update()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteBoardPlayer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NoteBoardPlayer::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NoteBoardPlayer::UpdateCurrentPlayingNotefield(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "UpdateCurrentPlayingNotefield",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NoteBoardPlayer::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NoteBoardPlayer::Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, linkHands, ignoreQuantize);
}
inline int32_t VROSC::NoteBoardPlayer::GetNote(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position);
}
inline ::System::Threading::Tasks::Task* VROSC::NoteBoardPlayer::Stop(bool  immediate, ::VROSC::HandType  handType, bool  linkHands)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, immediate, handType, linkHands);
}
inline void VROSC::NoteBoardPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::NoteBoardPlayer::__n__0(bool  immediate, ::VROSC::HandType  handType, bool  linkHands)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteBoardPlayer*>::get(),
                        "<>n__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, immediate, handType, linkHands);
}
inline ::VROSC::NoteBoardPlayer* VROSC::NoteBoardPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteBoardPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteBoardPlayer::NoteBoardPlayer()   {
}
