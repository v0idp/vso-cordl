#pragma once
// IWYU pragma private; include "VROSC/NotePlayer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::NotePlayer___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer___c__DisplayClass22_0::*)()>(&::VROSC::NotePlayer___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171ef94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer___c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer___c__DisplayClass22_0._Play_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NotePlayer___c__DisplayClass22_0::*)(double_t)>(&::VROSC::NotePlayer___c__DisplayClass22_0::_Play_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x171f2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer___c__DisplayClass22_0*>::get(),
                        "<Play>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_get_nextQuantizeDspTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextQuantizeDspTime;
}
constexpr double_t const& VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_get_nextQuantizeDspTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextQuantizeDspTime;
}
constexpr void VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_set_nextQuantizeDspTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextQuantizeDspTime = value;
}
constexpr double_t& VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_get_quantizeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantizeLength;
}
constexpr double_t const& VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_get_quantizeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantizeLength;
}
constexpr void VROSC::NotePlayer___c__DisplayClass22_0::__cordl_internal_set_quantizeLength(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quantizeLength = value;
}
inline void VROSC::NotePlayer___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer___c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::NotePlayer___c__DisplayClass22_0::_Play_b__0(double_t  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer___c__DisplayClass22_0*>::get(),
                        "<Play>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::VROSC::NotePlayer___c__DisplayClass22_0* VROSC::NotePlayer___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NotePlayer___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::NotePlayer___c__DisplayClass22_0::NotePlayer___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::VROSC::NotePlayer__PlayNoteQuantized_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer__PlayNoteQuantized_d__27::*)()>(&::VROSC::NotePlayer__PlayNoteQuantized_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x171f30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__PlayNoteQuantized_d__27>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer__PlayNoteQuantized_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer__PlayNoteQuantized_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::NotePlayer__PlayNoteQuantized_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171f960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__PlayNoteQuantized_d__27>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::NotePlayer__PlayNoteQuantized_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__PlayNoteQuantized_d__27>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NotePlayer__PlayNoteQuantized_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__PlayNoteQuantized_d__27>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::NotePlayer__PlayNoteQuantized_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::NotePlayer__PlayNoteQuantized_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NotePlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "note", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "velocity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NotePlayer__PlayNoteQuantized_d__27::NotePlayer__PlayNoteQuantized_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  predictedDspTime, ::UnityW<::VROSC::NotePlayer>  __4__this, int32_t  note, float_t  velocity, ::VROSC::HandType  handType, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->predictedDspTime = predictedDspTime;
this->__4__this = __4__this;
this->note = note;
this->velocity = velocity;
this->handType = handType;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::NotePlayer__PlayNoteQuantized_d__27::NotePlayer__PlayNoteQuantized_d__27()   {
}
//  Writing Method size for method: ::VROSC::NotePlayer__Stop_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer__Stop_d__28::*)()>(&::VROSC::NotePlayer__Stop_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x171f96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__Stop_d__28>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer__Stop_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer__Stop_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::NotePlayer__Stop_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x171fc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__Stop_d__28>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::NotePlayer__Stop_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__Stop_d__28>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NotePlayer__Stop_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer__Stop_d__28>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::NotePlayer__Stop_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::NotePlayer__Stop_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkHands", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "handType", ty: "::VROSC::HandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NotePlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "immediate", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NotePlayer__Stop_d__28::NotePlayer__Stop_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  linkHands, ::VROSC::HandType  handType, ::UnityW<::VROSC::NotePlayer>  __4__this, bool  immediate, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->linkHands = linkHands;
this->handType = handType;
this->__4__this = __4__this;
this->immediate = immediate;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::NotePlayer__Stop_d__28::NotePlayer__Stop_d__28()   {
}
//  Writing Method size for method: ::VROSC::NotePlayer.get_MaxNotesPerPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NotePlayer::*)()>(&::VROSC::NotePlayer::get_MaxNotesPerPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171ef6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.get_CurrentlyPlayingNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::VROSC::NotePlayer::*)()>(&::VROSC::NotePlayer::get_CurrentlyPlayingNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171ef74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "get_CurrentlyPlayingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)()>(&::VROSC::NotePlayer::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x171d8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(::VROSC::Signal*)>(&::VROSC::NotePlayer::NodeBegin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x171e350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(::VROSC::Signal*)>(&::VROSC::NotePlayer::NodeStay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x171ef7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(::VROSC::Signal*)>(&::VROSC::NotePlayer::NodeEnd)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x171e48c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(::VROSC::Signal*, bool, bool)>(&::VROSC::NotePlayer::Play)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x171e570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NotePlayer::*)(::UnityEngine::Vector3)>(&::VROSC::NotePlayer::GetNote)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x171f13c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.GetNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::VROSC::NotePlayer::*)(::UnityEngine::Vector3)>(&::VROSC::NotePlayer::GetNotes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x171f174;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(int32_t, float_t, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::NotePlayer::PlayNote)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x171f21c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(int32_t, ::VROSC::HandType)>(&::VROSC::NotePlayer::StopNote)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x171f27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.PlayNoteQuantized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(int32_t, float_t, double_t, ::VROSC::HandType)>(&::VROSC::NotePlayer::PlayNoteQuantized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x171ef9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "PlayNoteQuantized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::NotePlayer::*)(bool, ::VROSC::HandType, bool)>(&::VROSC::NotePlayer::Stop)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x171ebc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.SetInstrument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(::VROSC::InstrumentController*)>(&::VROSC::NotePlayer::SetInstrument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171f2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.SetPitch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(float_t)>(&::VROSC::NotePlayer::SetPitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171f2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)(float_t)>(&::VROSC::NotePlayer::SetVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171f2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotePlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotePlayer::*)()>(&::VROSC::NotePlayer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x171e04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InstrumentController>& VROSC::NotePlayer::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::InstrumentController> const& VROSC::NotePlayer::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NotePlayer::__cordl_internal_get__note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr ::VROSC::IntField* const& VROSC::NotePlayer::__cordl_internal_get__note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__note(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____note)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::NotePlayer::__cordl_internal_get__noteOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteOffset;
}
constexpr ::VROSC::IntField* const& VROSC::NotePlayer::__cordl_internal_get__noteOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteOffset;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__noteOffset(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NotePlayer::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr float_t const& VROSC::NotePlayer::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitch = value;
}
constexpr float_t& VROSC::NotePlayer::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr float_t const& VROSC::NotePlayer::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr bool& VROSC::NotePlayer::__cordl_internal_get__oneShot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneShot;
}
constexpr bool const& VROSC::NotePlayer::__cordl_internal_get__oneShot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oneShot;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__oneShot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oneShot = value;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& VROSC::NotePlayer::__cordl_internal_get__currentPlayingNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingNotes;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& VROSC::NotePlayer::__cordl_internal_get__currentPlayingNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingNotes;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__currentPlayingNotes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPlayingNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::NotePlayer::__cordl_internal_get__scheduledNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledNote;
}
constexpr int32_t const& VROSC::NotePlayer::__cordl_internal_get__scheduledNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledNote;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__scheduledNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduledNote = value;
}
constexpr int32_t& VROSC::NotePlayer::__cordl_internal_get__heldNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldNote;
}
constexpr int32_t const& VROSC::NotePlayer::__cordl_internal_get__heldNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldNote;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__heldNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldNote = value;
}
constexpr float_t& VROSC::NotePlayer::__cordl_internal_get__scheduledNoteHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledNoteHoldTime;
}
constexpr float_t const& VROSC::NotePlayer::__cordl_internal_get__scheduledNoteHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledNoteHoldTime;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__scheduledNoteHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduledNoteHoldTime = value;
}
constexpr float_t& VROSC::NotePlayer::__cordl_internal_get__heldNoteHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldNoteHoldTime;
}
constexpr float_t const& VROSC::NotePlayer::__cordl_internal_get__heldNoteHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldNoteHoldTime;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__heldNoteHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldNoteHoldTime = value;
}
constexpr int32_t& VROSC::NotePlayer::__cordl_internal_get__scheduledStops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledStops;
}
constexpr int32_t const& VROSC::NotePlayer::__cordl_internal_get__scheduledStops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledStops;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__scheduledStops(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduledStops = value;
}
constexpr ::System::Collections::Generic::List_1<double_t>*& VROSC::NotePlayer::__cordl_internal_get__scheduledQuantizeSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledQuantizeSteps;
}
constexpr ::System::Collections::Generic::List_1<double_t>* const& VROSC::NotePlayer::__cordl_internal_get__scheduledQuantizeSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledQuantizeSteps;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__scheduledQuantizeSteps(::System::Collections::Generic::List_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scheduledQuantizeSteps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NotePlayer::__cordl_internal_get__currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVelocity;
}
constexpr float_t const& VROSC::NotePlayer::__cordl_internal_get__currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVelocity;
}
constexpr void VROSC::NotePlayer::__cordl_internal_set__currentVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentVelocity = value;
}
inline int32_t VROSC::NotePlayer::get_MaxNotesPerPlayer()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> VROSC::NotePlayer::get_CurrentlyPlayingNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "get_CurrentlyPlayingNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(this, ___internal_method);
}
inline void VROSC::NotePlayer::Update()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NotePlayer::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NotePlayer::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NotePlayer::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::NotePlayer::Play(::VROSC::Signal*  signal, bool  linkHands, bool  ignoreQuantize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal, linkHands, ignoreQuantize);
}
inline int32_t VROSC::NotePlayer::GetNote(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> VROSC::NotePlayer::GetNotes(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(this, ___internal_method, position);
}
inline void VROSC::NotePlayer::PlayNote(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, predictedDspTime, handType, pitch, volume);
}
inline void VROSC::NotePlayer::StopNote(int32_t  note, ::VROSC::HandType  handType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, handType);
}
inline void VROSC::NotePlayer::PlayNoteQuantized(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "PlayNoteQuantized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, predictedDspTime, handType);
}
inline ::System::Threading::Tasks::Task* VROSC::NotePlayer::Stop(bool  immediate, ::VROSC::HandType  handType, bool  linkHands)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, immediate, handType, linkHands);
}
inline void VROSC::NotePlayer::SetInstrument(::VROSC::InstrumentController*  instrument)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument);
}
inline void VROSC::NotePlayer::SetPitch(float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitch);
}
inline void VROSC::NotePlayer::SetVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::NotePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotePlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NotePlayer* VROSC::NotePlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NotePlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::NotePlayer::NotePlayer()   {
}
