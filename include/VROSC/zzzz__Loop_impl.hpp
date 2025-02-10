#pragma once
// IWYU pragma private; include "VROSC/Loop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
#include "VROSC/Utils/zzzz__KeyedValue_def.hpp"
#include "VROSC/zzzz__LoopData_def.hpp"
#include "VROSC/zzzz__LoopPlaybackTiming_def.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Loop_LoopPhase::Loop_LoopPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Loop_LoopPhase::Loop_LoopPhase()   {
}
constexpr ::VROSC::Loop_LoopPhase  VROSC::Loop_LoopPhase::NoTail{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Loop_LoopPhase  VROSC::Loop_LoopPhase::AddTail{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Loop_LoopPhase  VROSC::Loop_LoopPhase::TailOnly{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::Loop.get_TrackId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Loop::*)()>(&::VROSC::Loop::get_TrackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_TrackId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::StringW)>(&::VROSC::Loop::set_TrackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_LoopingLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_LoopingLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_LoopingLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_LoopingLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_LoopingLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_LoopingLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_PlaybackLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_PlaybackLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_PlaybackLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_PlaybackLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_PlaybackLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18914fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_PlaybackLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_TailLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_TailLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TailLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_TailLengthRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_TailLengthRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189150c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TailLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_BeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_BeatsPerBar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_BeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_BeatsPerBar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189151c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_TimeStretchFactor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_TimeStretchFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TimeStretchFactor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_TimeStretchFactor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(float_t)>(&::VROSC::Loop::set_TimeStretchFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189152c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TimeStretchFactor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_PlaybackLengthSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_PlaybackLengthSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_PlaybackLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_PlaybackLengthSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_PlaybackLengthSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189153c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_PlaybackLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_TailLengthSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_TailLengthSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TailLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_TailLengthSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_TailLengthSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189154c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TailLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_GlobalSyncStartOffsetSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_GlobalSyncStartOffsetSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_GlobalSyncStartOffsetSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_GlobalSyncStartOffsetSpeedAdjusted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::set_GlobalSyncStartOffsetSpeedAdjusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189155c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_GlobalSyncStartOffsetSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_LengthInBeats
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_LengthInBeats)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1891564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_LengthInBeats",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_SyncStartOffsetNormalized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Loop::*)()>(&::VROSC::Loop::get_SyncStartOffsetNormalized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18915cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_SyncStartOffsetNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.get_Overdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Loop::*)()>(&::VROSC::Loop::get_Overdub)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18915e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.set_Overdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(bool)>(&::VROSC::Loop::set_Overdub)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18915f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::StringW)>(&::VROSC::Loop::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18915fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetAudio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::Loop::*)()>(&::VROSC::Loop::GetAudio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189162c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetTailAudio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::Loop::*)()>(&::VROSC::Loop::GetTailAudio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1891648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetTailAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetAudioFromReadSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::Loop::*)(int32_t, ::VROSC::Loop_LoopPhase, int32_t, float_t)>(&::VROSC::Loop::GetAudioFromReadSample)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1891664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudioFromReadSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop_LoopPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetNextLoopStartAfterSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::GetNextLoopStartAfterSample)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18916ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetNextLoopStartAfterSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetRecordedGlobalOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::SetRecordedGlobalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetRecordedGlobalOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetRecordedGlobalOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::GetRecordedGlobalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1891804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetRecordedGlobalOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetUserSyncOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::SetUserSyncOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x189180c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetUserSyncOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)()>(&::VROSC::Loop::GetUserSyncOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x189188c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetPlayLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(int32_t)>(&::VROSC::Loop::SetPlayLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18918f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetPlayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetPanKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::ArrayW<float_t,::Array<float_t>*>, ::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::Loop::SetPanKeys)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1891970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetPanKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetPanKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> (::VROSC::Loop::*)()>(&::VROSC::Loop::GetPanKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1891a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetPanKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetVolumeKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::Loop::SetVolumeKeys)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1891a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetVolumeKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetVolumeKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Utils::KeyedValue* (::VROSC::Loop::*)()>(&::VROSC::Loop::GetVolumeKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1891ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetVolumeKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetAudio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, bool)>(&::VROSC::Loop::SetAudio)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1891b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetReadIndexAtSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Loop::*)(int32_t, int32_t)>(&::VROSC::Loop::GetReadIndexAtSample)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1891edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetReadIndexAtSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetAudioFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)()>(&::VROSC::Loop::GetAudioFromData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1891d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudioFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetValuesFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)()>(&::VROSC::Loop::GetValuesFromData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1891df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetValuesFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.SetLastLoopPlaybackData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)(::VROSC::LoopPlaybackTiming)>(&::VROSC::Loop::SetLastLoopPlaybackData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1891f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetLastLoopPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackTiming>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetLastLoopPlaybackData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackTiming (::VROSC::Loop::*)()>(&::VROSC::Loop::GetLastLoopPlaybackData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1891fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetLastLoopPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.GetLoopRecordedBPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::Loop::*)()>(&::VROSC::Loop::GetLoopRecordedBPM)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1892058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetLoopRecordedBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Loop.UpdateLoopPlaybackValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Loop::*)()>(&::VROSC::Loop::UpdateLoopPlaybackValues)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1891744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "UpdateLoopPlaybackValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Loop::__cordl_internal_get__TrackId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackId_k__BackingField;
}
constexpr ::StringW const& VROSC::Loop::__cordl_internal_get__TrackId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackId_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__TrackId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrackId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__LoopingLengthRaw_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopingLengthRaw_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__LoopingLengthRaw_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopingLengthRaw_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__LoopingLengthRaw_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoopingLengthRaw_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__PlaybackLengthRaw_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackLengthRaw_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__PlaybackLengthRaw_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackLengthRaw_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__PlaybackLengthRaw_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaybackLengthRaw_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__TailLengthRaw_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TailLengthRaw_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__TailLengthRaw_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TailLengthRaw_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__TailLengthRaw_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TailLengthRaw_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__BeatsPerBar_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatsPerBar_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__BeatsPerBar_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatsPerBar_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__BeatsPerBar_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeatsPerBar_k__BackingField = value;
}
constexpr float_t& VROSC::Loop::__cordl_internal_get__TimeStretchFactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeStretchFactor_k__BackingField;
}
constexpr float_t const& VROSC::Loop::__cordl_internal_get__TimeStretchFactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeStretchFactor_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__TimeStretchFactor_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeStretchFactor_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__PlaybackLengthSpeedAdjusted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackLengthSpeedAdjusted_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__PlaybackLengthSpeedAdjusted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackLengthSpeedAdjusted_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__PlaybackLengthSpeedAdjusted_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaybackLengthSpeedAdjusted_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__TailLengthSpeedAdjusted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TailLengthSpeedAdjusted_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__TailLengthSpeedAdjusted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TailLengthSpeedAdjusted_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__TailLengthSpeedAdjusted_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TailLengthSpeedAdjusted_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalSyncStartOffsetSpeedAdjusted_k__BackingField;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalSyncStartOffsetSpeedAdjusted_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__GlobalSyncStartOffsetSpeedAdjusted_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalSyncStartOffsetSpeedAdjusted_k__BackingField = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__recordedGlobalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordedGlobalOffset;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__recordedGlobalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordedGlobalOffset;
}
constexpr void VROSC::Loop::__cordl_internal_set__recordedGlobalOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordedGlobalOffset = value;
}
constexpr int32_t& VROSC::Loop::__cordl_internal_get__userOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userOffset;
}
constexpr int32_t const& VROSC::Loop::__cordl_internal_get__userOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userOffset;
}
constexpr void VROSC::Loop::__cordl_internal_set__userOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userOffset = value;
}
constexpr bool& VROSC::Loop::__cordl_internal_get__Overdub_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Overdub_k__BackingField;
}
constexpr bool const& VROSC::Loop::__cordl_internal_get__Overdub_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Overdub_k__BackingField;
}
constexpr void VROSC::Loop::__cordl_internal_set__Overdub_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Overdub_k__BackingField = value;
}
constexpr ::VROSC::LoopData*& VROSC::Loop::__cordl_internal_get__loopData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopData;
}
constexpr ::VROSC::LoopData* const& VROSC::Loop::__cordl_internal_get__loopData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopData;
}
constexpr void VROSC::Loop::__cordl_internal_set__loopData(::VROSC::LoopData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::Loop::get_TrackId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_TrackId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_LoopingLengthRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_LoopingLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_LoopingLengthRaw(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_LoopingLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_PlaybackLengthRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_PlaybackLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_PlaybackLengthRaw(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_PlaybackLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_TailLengthRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TailLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_TailLengthRaw(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TailLengthRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_BeatsPerBar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_BeatsPerBar(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::Loop::get_TimeStretchFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TimeStretchFactor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_TimeStretchFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TimeStretchFactor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_PlaybackLengthSpeedAdjusted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_PlaybackLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_PlaybackLengthSpeedAdjusted(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_PlaybackLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_TailLengthSpeedAdjusted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_TailLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_TailLengthSpeedAdjusted(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_TailLengthSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::Loop::get_GlobalSyncStartOffsetSpeedAdjusted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_GlobalSyncStartOffsetSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_GlobalSyncStartOffsetSpeedAdjusted(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_GlobalSyncStartOffsetSpeedAdjusted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::Loop::get_LengthInBeats()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_LengthInBeats",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::Loop::get_SyncStartOffsetNormalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_SyncStartOffsetNormalized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::Loop::get_Overdub()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "get_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Loop::set_Overdub(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "set_Overdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::Loop::_ctor(::StringW  trackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackId);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::Loop::GetAudio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::Loop::GetTailAudio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetTailAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method);
}
inline float_t VROSC::Loop::GetAudioFromReadSample(int32_t  sample, ::VROSC::Loop_LoopPhase  loopPhase, int32_t  channel, float_t  timeStretchFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudioFromReadSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop_LoopPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, sample, loopPhase, channel, timeStretchFactor);
}
inline int32_t VROSC::Loop::GetNextLoopStartAfterSample(int32_t  sample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetNextLoopStartAfterSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sample);
}
inline void VROSC::Loop::SetRecordedGlobalOffset(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetRecordedGlobalOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline int32_t VROSC::Loop::GetRecordedGlobalOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetRecordedGlobalOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::SetUserSyncOffset(int32_t  syncOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncOffset);
}
inline int32_t VROSC::Loop::GetUserSyncOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetUserSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::SetPlayLength(int32_t  playLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetPlayLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playLength);
}
inline void VROSC::Loop::SetPanKeys(::ArrayW<float_t,::Array<float_t>*>  firstKeys, ::ArrayW<float_t,::Array<float_t>*>  secondKeys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetPanKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstKeys, secondKeys);
}
inline ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> VROSC::Loop::GetPanKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetPanKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>, false>(this, ___internal_method);
}
inline void VROSC::Loop::SetVolumeKeys(::ArrayW<float_t,::Array<float_t>*>  volumeKeys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetVolumeKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volumeKeys);
}
inline ::VROSC::Utils::KeyedValue* VROSC::Loop::GetVolumeKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetVolumeKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Utils::KeyedValue*, false>(this, ___internal_method);
}
inline void VROSC::Loop::SetAudio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, int32_t  loopLength, bool  overdub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetAudio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audio, loopLength, overdub);
}
inline int32_t VROSC::Loop::GetReadIndexAtSample(int32_t  atSample, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetReadIndexAtSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, atSample, offset);
}
inline void VROSC::Loop::GetAudioFromData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetAudioFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Loop::GetValuesFromData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetValuesFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Loop::SetLastLoopPlaybackData(::VROSC::LoopPlaybackTiming  timing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "SetLastLoopPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackTiming>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timing);
}
inline ::VROSC::LoopPlaybackTiming VROSC::Loop::GetLastLoopPlaybackData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetLastLoopPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackTiming, false>(this, ___internal_method);
}
inline double_t VROSC::Loop::GetLoopRecordedBPM()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "GetLoopRecordedBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void VROSC::Loop::UpdateLoopPlaybackValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Loop*>::get(),
                        "UpdateLoopPlaybackValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Loop* VROSC::Loop::New_ctor(::StringW  trackId)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Loop*>(trackId));
}
// Ctor Parameters []
constexpr ::VROSC::Loop::Loop()   {
}
