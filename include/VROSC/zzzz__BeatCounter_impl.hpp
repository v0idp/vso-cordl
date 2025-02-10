#pragma once
// IWYU pragma private; include "VROSC/BeatCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BeatCounter_def.hpp"
#include "GlobalNamespace/zzzz__AbletonLink_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "VROSC/zzzz__BeatCounterUI_def.hpp"
#include "VROSC/zzzz__BeatCounter_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::BeatCounter_SyncSource::BeatCounter_SyncSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::BeatCounter_SyncSource::BeatCounter_SyncSource()   {
}
constexpr ::VROSC::BeatCounter_SyncSource  VROSC::BeatCounter_SyncSource::Looper{static_cast<int32_t>(0x0)};
constexpr ::VROSC::BeatCounter_SyncSource  VROSC::BeatCounter_SyncSource::BeatCounter{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::BeatCounter.get_Metronome
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::Metronome> (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_Metronome)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_Metronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_BPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_BPM)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_BPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(double_t)>(&::VROSC::BeatCounter::set_BPM)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_BeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_BeatsPerBar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_BeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_BeatsPerBar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_BeatLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_BeatLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_BeatLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_BeatLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_BarLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_BarLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18292ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BarLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_CurrentSyncSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_CurrentSyncSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18292f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_CurrentSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_CurrentSyncSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_CurrentSyncSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_CurrentSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_AudioBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_AudioBarProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_AudioBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_AudioBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(double_t)>(&::VROSC::BeatCounter::set_AudioBarProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_AudioBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_AudioBarNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_AudioBarNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_AudioBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_AudioBarNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_AudioBarNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_AudioBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_VisualBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_VisualBarProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_VisualBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(float_t)>(&::VROSC::BeatCounter::set_VisualBarProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_VisualBarNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_VisualBarNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_VisualBarNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_VisualBarNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_IsVisualBeatFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_IsVisualBeatFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_IsVisualBeatFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_IsVisualBeatFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(bool)>(&::VROSC::BeatCounter::set_IsVisualBeatFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1829350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_IsVisualBeatFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_VisualCurrentBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_VisualCurrentBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182935c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualCurrentBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_VisualCurrentBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::set_VisualCurrentBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualCurrentBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_CurrentSyncSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::BeatCounter_SyncSource (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_CurrentSyncSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182936c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_CurrentSyncSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_CurrentSyncSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(::VROSC::BeatCounter_SyncSource)>(&::VROSC::BeatCounter::set_CurrentSyncSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_CurrentSyncSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_IsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182937c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(bool)>(&::VROSC::BeatCounter::set_IsPlaying)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1829384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.get_UseAbletonLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::get_UseAbletonLink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1829390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_UseAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.set_UseAbletonLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(bool)>(&::VROSC::BeatCounter::set_UseAbletonLink)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1829398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_UseAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18293a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182949c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(::VROSC::BeatCounterUI*)>(&::VROSC::BeatCounter::Setup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18295ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounterUI*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(::VROSC::UserDataControllers*)>(&::VROSC::BeatCounter::UserDataLoaded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1829d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x182a218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.UpdateVisualBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::UpdateVisualBeat)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x182a400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateVisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::BeatCounter::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x182a564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.UpdateBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::UpdateBarProgress)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x182a5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.ChangeBarProgressAndAdjustSyncSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(double_t)>(&::VROSC::BeatCounter::ChangeBarProgressAndAdjustSyncSample)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x182a984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "ChangeBarProgressAndAdjustSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.SetSyncSampleFromBarProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::SetSyncSampleFromBarProgress)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x182a6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetSyncSampleFromBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.VisualBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::VisualBeat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x182a4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "VisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.GetCurrentVisualSubdivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::GetCurrentVisualSubdivision)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x182a9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetCurrentVisualSubdivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.GetNextQuantizeDspTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)(int32_t, double_t)>(&::VROSC::BeatCounter::GetNextQuantizeDspTime)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182a9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetNextQuantizeDspTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.GetNextQuantizePointAfterSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::BeatCounter::*)(int32_t, float_t)>(&::VROSC::BeatCounter::GetNextQuantizePointAfterSample)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x182ab40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetNextQuantizePointAfterSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.GetQuantizeLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::GetQuantizeLength)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x182abe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetQuantizeLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.SetBPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(double_t, ::VROSC::BeatCounter_SyncSource, bool, bool)>(&::VROSC::BeatCounter::SetBPM)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182ac30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.SetBeatLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t, ::VROSC::BeatCounter_SyncSource, bool, bool)>(&::VROSC::BeatCounter::SetBeatLength)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1829e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.CalculateBPMFromBeatLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::CalculateBPMFromBeatLength)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x182ad00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "CalculateBPMFromBeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.GetBarLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::GetBarLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182ab20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetBarLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.SetBeatsPerBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(int32_t)>(&::VROSC::BeatCounter::SetBeatsPerBar)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x182a0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.EnableAbletonLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(bool)>(&::VROSC::BeatCounter::EnableAbletonLink)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x182adcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "EnableAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.SetLinkLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)(float_t)>(&::VROSC::BeatCounter::SetLinkLatency)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x182ae28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetLinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.UpdateAbletonLinkMainThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::UpdateAbletonLinkMainThread)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x182a234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateAbletonLinkMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter.UpdateAbletonLinkAudioThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::UpdateAbletonLinkAudioThread)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182a7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateAbletonLinkAudioThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BeatCounter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BeatCounter::*)()>(&::VROSC::BeatCounter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x182aef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Metronome>& VROSC::BeatCounter::__cordl_internal_get__metronome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronome;
}
constexpr ::UnityW<::VROSC::Metronome> const& VROSC::BeatCounter::__cordl_internal_get__metronome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metronome;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__metronome(::UnityW<::VROSC::Metronome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metronome)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::BeatCounterUI>& VROSC::BeatCounter::__cordl_internal_get__beatCounterUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterUI;
}
constexpr ::UnityW<::VROSC::BeatCounterUI> const& VROSC::BeatCounter::__cordl_internal_get__beatCounterUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterUI;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__beatCounterUI(::UnityW<::VROSC::BeatCounterUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatCounterUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::BeatCounter::__cordl_internal_get__beatCounterAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::BeatCounter::__cordl_internal_get__beatCounterAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatCounterAudioSource;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__beatCounterAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatCounterAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__currentlyChangingBpm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyChangingBpm;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__currentlyChangingBpm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyChangingBpm;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__currentlyChangingBpm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentlyChangingBpm = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__BPM_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BPM_k__BackingField;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__BPM_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BPM_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__BPM_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BPM_k__BackingField = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__BeatsPerBar_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatsPerBar_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__BeatsPerBar_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatsPerBar_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__BeatsPerBar_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeatsPerBar_k__BackingField = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__BeatLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatLength_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__BeatLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeatLength_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__BeatLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeatLength_k__BackingField = value;
}
constexpr float_t& VROSC::BeatCounter::__cordl_internal_get__lastFrameVisualBarProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameVisualBarProgress;
}
constexpr float_t const& VROSC::BeatCounter::__cordl_internal_get__lastFrameVisualBarProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameVisualBarProgress;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__lastFrameVisualBarProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameVisualBarProgress = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__CurrentSyncSample_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentSyncSample_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__CurrentSyncSample_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentSyncSample_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__CurrentSyncSample_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentSyncSample_k__BackingField = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__AudioBarProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBarProgress_k__BackingField;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__AudioBarProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBarProgress_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__AudioBarProgress_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioBarProgress_k__BackingField = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__AudioBarNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBarNumber_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__AudioBarNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBarNumber_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__AudioBarNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioBarNumber_k__BackingField = value;
}
constexpr float_t& VROSC::BeatCounter::__cordl_internal_get__VisualBarProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualBarProgress_k__BackingField;
}
constexpr float_t const& VROSC::BeatCounter::__cordl_internal_get__VisualBarProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualBarProgress_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__VisualBarProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualBarProgress_k__BackingField = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__VisualBarNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualBarNumber_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__VisualBarNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualBarNumber_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__VisualBarNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualBarNumber_k__BackingField = value;
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__IsVisualBeatFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisualBeatFrame_k__BackingField;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__IsVisualBeatFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisualBeatFrame_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__IsVisualBeatFrame_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsVisualBeatFrame_k__BackingField = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__VisualCurrentBeat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualCurrentBeat_k__BackingField;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__VisualCurrentBeat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualCurrentBeat_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__VisualCurrentBeat_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VisualCurrentBeat_k__BackingField = value;
}
constexpr ::VROSC::BeatCounter_SyncSource& VROSC::BeatCounter::__cordl_internal_get__CurrentSyncSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentSyncSource_k__BackingField;
}
constexpr ::VROSC::BeatCounter_SyncSource const& VROSC::BeatCounter::__cordl_internal_get__CurrentSyncSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentSyncSource_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__CurrentSyncSource_k__BackingField(::VROSC::BeatCounter_SyncSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentSyncSource_k__BackingField = value;
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__IsPlaying_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying_k__BackingField;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__IsPlaying_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__IsPlaying_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPlaying_k__BackingField = value;
}
constexpr ::GlobalNamespace::AbletonLink*& VROSC::BeatCounter::__cordl_internal_get__abletonLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abletonLink;
}
constexpr ::GlobalNamespace::AbletonLink* const& VROSC::BeatCounter::__cordl_internal_get__abletonLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abletonLink;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__abletonLink(::GlobalNamespace::AbletonLink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____abletonLink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::BeatCounter::__cordl_internal_get__maxAllowedLinkBarProgressDifference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAllowedLinkBarProgressDifference;
}
constexpr float_t const& VROSC::BeatCounter::__cordl_internal_get__maxAllowedLinkBarProgressDifference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAllowedLinkBarProgressDifference;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__maxAllowedLinkBarProgressDifference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAllowedLinkBarProgressDifference = value;
}
constexpr float_t& VROSC::BeatCounter::__cordl_internal_get__maxAllowedLinkBPMDifference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAllowedLinkBPMDifference;
}
constexpr float_t const& VROSC::BeatCounter::__cordl_internal_get__maxAllowedLinkBPMDifference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAllowedLinkBPMDifference;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__maxAllowedLinkBPMDifference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAllowedLinkBPMDifference = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__linkBeat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBeat;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__linkBeat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBeat;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkBeat(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkBeat = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__linkPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkPhase;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__linkPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkPhase;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkPhase(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkPhase = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__linkBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBPM;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__linkBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBPM;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkBPM(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkBPM = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__linkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkTime;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__linkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkTime;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkTime = value;
}
constexpr double_t& VROSC::BeatCounter::__cordl_internal_get__linkBarProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBarProgress;
}
constexpr double_t const& VROSC::BeatCounter::__cordl_internal_get__linkBarProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkBarProgress;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkBarProgress(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkBarProgress = value;
}
constexpr int32_t& VROSC::BeatCounter::__cordl_internal_get__linkNumPeers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkNumPeers;
}
constexpr int32_t const& VROSC::BeatCounter::__cordl_internal_get__linkNumPeers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkNumPeers;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkNumPeers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkNumPeers = value;
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__linkChangedBarProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkChangedBarProgress;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__linkChangedBarProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkChangedBarProgress;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkChangedBarProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkChangedBarProgress = value;
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__linkChangedBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkChangedBPM;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__linkChangedBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkChangedBPM;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkChangedBPM(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkChangedBPM = value;
}
constexpr float_t& VROSC::BeatCounter::__cordl_internal_get__linkLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatency;
}
constexpr float_t const& VROSC::BeatCounter::__cordl_internal_get__linkLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkLatency;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__linkLatency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkLatency = value;
}
constexpr bool& VROSC::BeatCounter::__cordl_internal_get__UseAbletonLink_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAbletonLink_k__BackingField;
}
constexpr bool const& VROSC::BeatCounter::__cordl_internal_get__UseAbletonLink_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAbletonLink_k__BackingField;
}
constexpr void VROSC::BeatCounter::__cordl_internal_set__UseAbletonLink_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseAbletonLink_k__BackingField = value;
}
inline void VROSC::BeatCounter::setStaticF_OnSyncSourceChanged(::System::Action_1<::VROSC::BeatCounter_SyncSource>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::BeatCounter_SyncSource>*, "OnSyncSourceChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>(std::forward<::System::Action_1<::VROSC::BeatCounter_SyncSource>*>(value));
}
inline ::System::Action_1<::VROSC::BeatCounter_SyncSource>* VROSC::BeatCounter::getStaticF_OnSyncSourceChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::BeatCounter_SyncSource>*, "OnSyncSourceChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>();
}
inline void VROSC::BeatCounter::setStaticF_OnBeatsPerBarChanged(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "OnBeatsPerBarChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* VROSC::BeatCounter::getStaticF_OnBeatsPerBarChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "OnBeatsPerBarChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>();
}
inline void VROSC::BeatCounter::setStaticF_OnBPMChanged(::System::Action_1<double_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<double_t>*, "OnBPMChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>(std::forward<::System::Action_1<double_t>*>(value));
}
inline ::System::Action_1<double_t>* VROSC::BeatCounter::getStaticF_OnBPMChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<double_t>*, "OnBPMChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>();
}
inline void VROSC::BeatCounter::setStaticF_OnVisualBeat(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "OnVisualBeat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* VROSC::BeatCounter::getStaticF_OnVisualBeat()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "OnVisualBeat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get>();
}
inline ::UnityW<::VROSC::Metronome> VROSC::BeatCounter::get_Metronome()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_Metronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::Metronome>, false>(this, ___internal_method);
}
inline double_t VROSC::BeatCounter::get_BPM()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_BPM(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_BeatsPerBar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_BeatsPerBar(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_BeatLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_BeatLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_BeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_BarLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_BarLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::BeatCounter::get_CurrentSyncSample()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_CurrentSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_CurrentSyncSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_CurrentSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t VROSC::BeatCounter::get_AudioBarProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_AudioBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_AudioBarProgress(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_AudioBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_AudioBarNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_AudioBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_AudioBarNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_AudioBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::BeatCounter::get_VisualBarProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_VisualBarProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_VisualBarNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_VisualBarNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualBarNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::BeatCounter::get_IsVisualBeatFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_IsVisualBeatFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_IsVisualBeatFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_IsVisualBeatFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::BeatCounter::get_VisualCurrentBeat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_VisualCurrentBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_VisualCurrentBeat(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_VisualCurrentBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::BeatCounter_SyncSource VROSC::BeatCounter::get_CurrentSyncSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_CurrentSyncSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::BeatCounter_SyncSource, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_CurrentSyncSource(::VROSC::BeatCounter_SyncSource  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_CurrentSyncSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::BeatCounter::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_IsPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::BeatCounter::get_UseAbletonLink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "get_UseAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::set_UseAbletonLink(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "set_UseAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::BeatCounter::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::Setup(::VROSC::BeatCounterUI*  beatCounterUI)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounterUI*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatCounterUI);
}
inline void VROSC::BeatCounter::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::BeatCounter::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::UpdateVisualBeat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateVisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::BeatCounter::UpdateBarProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::ChangeBarProgressAndAdjustSyncSample(double_t  barProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "ChangeBarProgressAndAdjustSyncSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, barProgress);
}
inline void VROSC::BeatCounter::SetSyncSampleFromBarProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetSyncSampleFromBarProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::VisualBeat(int32_t  beatNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "VisualBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatNumber);
}
inline int32_t VROSC::BeatCounter::GetCurrentVisualSubdivision(int32_t  subdivision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetCurrentVisualSubdivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, subdivision);
}
inline double_t VROSC::BeatCounter::GetNextQuantizeDspTime(int32_t  beatDivision, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetNextQuantizeDspTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, beatDivision, predictedDspTime);
}
inline int32_t VROSC::BeatCounter::GetNextQuantizePointAfterSample(int32_t  sample, float_t  barDivision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetNextQuantizePointAfterSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sample, barDivision);
}
inline double_t VROSC::BeatCounter::GetQuantizeLength(int32_t  beatDivision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetQuantizeLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, beatDivision);
}
inline void VROSC::BeatCounter::SetBPM(double_t  bpm, ::VROSC::BeatCounter_SyncSource  syncSource, bool  restartBar, bool  propagateToLink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm, syncSource, restartBar, propagateToLink);
}
inline void VROSC::BeatCounter::SetBeatLength(int32_t  beatLength, ::VROSC::BeatCounter_SyncSource  syncSource, bool  restartBar, bool  propagateToLink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::BeatCounter_SyncSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatLength, syncSource, restartBar, propagateToLink);
}
inline double_t VROSC::BeatCounter::CalculateBPMFromBeatLength(int32_t  beatLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "CalculateBPMFromBeatLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, beatLength);
}
inline double_t VROSC::BeatCounter::GetBarLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "GetBarLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::SetBeatsPerBar(int32_t  beatsPerBar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetBeatsPerBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatsPerBar);
}
inline void VROSC::BeatCounter::EnableAbletonLink(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "EnableAbletonLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void VROSC::BeatCounter::SetLinkLatency(float_t  latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "SetLinkLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, latency);
}
inline void VROSC::BeatCounter::UpdateAbletonLinkMainThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateAbletonLinkMainThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::UpdateAbletonLinkAudioThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        "UpdateAbletonLinkAudioThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BeatCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BeatCounter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BeatCounter* VROSC::BeatCounter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BeatCounter*>());
}
// Ctor Parameters []
constexpr ::VROSC::BeatCounter::BeatCounter()   {
}
