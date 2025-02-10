#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopPlaybackTiming_impl.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackSettings_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverride_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlaybackTiming_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackLoopingState_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackStoppedState_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackWillStartState_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackWillStopState_def.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Local
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlayerPlaybackSettings::set_Local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Local",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Local
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Local",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlayerPlaybackSettings::set_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Loop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::Loop*)>(&::VROSC::LoopPlayerPlaybackSettings::set_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Loop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Loop* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_StoppedState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackStoppedState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_StoppedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_StoppedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackStoppedState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_StoppedState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackStoppedState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_StoppedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_StoppedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_WillStartState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackWillStartState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_WillStartState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_WillStartState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackWillStartState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_WillStartState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackWillStartState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_WillStartState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WillStartState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_LoopingState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackLoopingState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_LoopingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_LoopingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackLoopingState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_LoopingState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackLoopingState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_LoopingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_LoopingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_WillStopState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackWillStopState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_WillStopState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_WillStopState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackWillStopState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_WillStopState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackWillStopState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_WillStopState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WillStopState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_CurrentState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_CurrentState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_NextState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackState*)>(&::VROSC::LoopPlayerPlaybackSettings::set_NextState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_NextState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState* (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_NextState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1899fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Timing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackTiming)>(&::VROSC::LoopPlayerPlaybackSettings::set_Timing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1899fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Timing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackTiming>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Timing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackTiming (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Timing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1899ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Timing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Active
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(bool)>(&::VROSC::LoopPlayerPlaybackSettings::set_Active)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x189a004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Active
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_Playing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(bool)>(&::VROSC::LoopPlayerPlaybackSettings::set_Playing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x189a018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_Playing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_Playing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_WaitingToStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_WaitingToStart)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x189a02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WaitingToStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.set_FadeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(float_t)>(&::VROSC::LoopPlayerPlaybackSettings::set_FadeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_FadeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_FadeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_FadeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_FadeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_PlayFromStartOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_PlayFromStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_PlayFromStartOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_BarRelativeStartOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_BarRelativeStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189a08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_BarRelativeStartOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.get_AllowedLeadupToNoTailLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::VROSC::LoopPlayerPlaybackSettings::get_AllowedLeadupToNoTailLoop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x189a094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_AllowedLeadupToNoTailLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::Loop*, ::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlayerPlaybackSettings::Setup)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x189a114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlayerPlaybackSettings::SetStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x189a65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetStop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlayerPlaybackSettings::SetStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x189a660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetFadeIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlayerPlaybackSettings::SetFadeIn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x189a664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetFadeIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetFadeOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlayerPlaybackSettings::SetFadeOut)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x189a668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetFadeOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetOneShot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(bool)>(&::VROSC::LoopPlayerPlaybackSettings::SetOneShot)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x189a944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetOneShot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetRetrigger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(bool)>(&::VROSC::LoopPlayerPlaybackSettings::SetRetrigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x189ab34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetRetrigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.StartRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfig*, bool)>(&::VROSC::LoopPlayerPlaybackSettings::StartRequested)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x189ab38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "StartRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.LoadLastPlaybackData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::LoadLastPlaybackData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x189af90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "LoadLastPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.ResumePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::ResumePlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x189b040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.ShouldShowPlayIcon
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::ShouldShowPlayIcon)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x189b070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldShowPlayIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.UpdatePlayConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopPlayerPlaybackSettings::UpdatePlayConfig)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x189b0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.StopRequested
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t, bool)>(&::VROSC::LoopPlayerPlaybackSettings::StopRequested)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x189b10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "StopRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.ProgressState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::ProgressState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x189b1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ProgressState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.SetState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::VROSC::LoopPlayerPlaybackState*, int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::SetState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x189afbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.PerformIsPlayingCheck
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::PerformIsPlayingCheck)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x189b204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "PerformIsPlayingCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.ShouldCheckActivityChangeBeforeSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::ShouldCheckActivityChangeBeforeSample)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x189b288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldCheckActivityChangeBeforeSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.ShouldUpdateFading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::ShouldUpdateFading)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189b2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldUpdateFading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.CheckForStateSwitchThisSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::CheckForStateSwitchThisSample)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x189b300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "CheckForStateSwitchThisSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.UpdateFading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::UpdateFading)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x189b3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "UpdateFading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.GetNextLoopPointFromOffsetStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackSettings::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::GetNextLoopPointFromOffsetStart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x189aa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "GetNextLoopPointFromOffsetStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings.RenderPlaybackData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::LoopPlayerPlaybackSettings::RenderPlaybackData)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x189b410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "RenderPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackSettings::*)()>(&::VROSC::LoopPlayerPlaybackSettings::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x189b8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlaybackConfig*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Local_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Local_k__BackingField;
}
constexpr ::VROSC::LoopPlaybackConfig* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Local_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Local_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Local_k__BackingField(::VROSC::LoopPlaybackConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Local_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfig*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
constexpr ::VROSC::LoopPlaybackConfig* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Current_k__BackingField(::VROSC::LoopPlaybackConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Current_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Loop*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Loop_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loop_k__BackingField;
}
constexpr ::VROSC::Loop* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Loop_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loop_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Loop_k__BackingField(::VROSC::Loop*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Loop_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackStoppedState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__StoppedState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StoppedState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackStoppedState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__StoppedState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StoppedState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__StoppedState_k__BackingField(::VROSC::LoopPlayerPlaybackStoppedState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StoppedState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackWillStartState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__WillStartState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillStartState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackWillStartState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__WillStartState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillStartState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__WillStartState_k__BackingField(::VROSC::LoopPlayerPlaybackWillStartState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WillStartState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackLoopingState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__LoopingState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopingState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackLoopingState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__LoopingState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopingState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__LoopingState_k__BackingField(::VROSC::LoopPlayerPlaybackLoopingState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoopingState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackWillStopState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__WillStopState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillStopState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackWillStopState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__WillStopState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillStopState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__WillStopState_k__BackingField(::VROSC::LoopPlayerPlaybackWillStopState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WillStopState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__CurrentState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__CurrentState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__CurrentState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlayerPlaybackState*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__NextState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextState_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackState* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__NextState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextState_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__NextState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NextState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackTiming& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Timing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timing_k__BackingField;
}
constexpr ::VROSC::LoopPlaybackTiming const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Timing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timing_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Timing_k__BackingField(::VROSC::LoopPlaybackTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timing_k__BackingField = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Playing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playing_k__BackingField;
}
constexpr bool const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__Playing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playing_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__Playing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playing_k__BackingField = value;
}
constexpr float_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__FadeMultiplier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeMultiplier_k__BackingField;
}
constexpr float_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__FadeMultiplier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeMultiplier_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__FadeMultiplier_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FadeMultiplier_k__BackingField = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__wasPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPlaying;
}
constexpr bool const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__wasPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPlaying;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__wasPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasPlaying = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__noTailLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noTailLoops;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__noTailLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noTailLoops;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__noTailLoops(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noTailLoops = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__fadeWithNaturalTail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithNaturalTail;
}
constexpr bool const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__fadeWithNaturalTail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithNaturalTail;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__fadeWithNaturalTail(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeWithNaturalTail = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__playedLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedLength;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__playedLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedLength;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__playedLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playedLength = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__allowedLeadupToNoTailLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedLeadupToNoTailLoop;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__allowedLeadupToNoTailLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowedLeadupToNoTailLoop;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__allowedLeadupToNoTailLoop(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowedLeadupToNoTailLoop = value;
}
constexpr ::System::Action*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnPlayingStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayingStart;
}
constexpr ::System::Action* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnPlayingStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayingStart;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set_OnPlayingStart(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPlayingStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnPlayingEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayingEnd;
}
constexpr ::System::Action* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnPlayingEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayingEnd;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set_OnPlayingEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPlayingEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr ::System::Action_1<::VROSC::LoopPlayerPlaybackState*>* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_OnStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set_OnStateChanged(::System::Action_1<::VROSC::LoopPlayerPlaybackState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_DebugLogQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugLogQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>* const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get_DebugLogQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugLogQueue;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set_DebugLogQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DebugLogQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__lastReadSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReadSample;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__lastReadSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReadSample;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__lastReadSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastReadSample = value;
}
constexpr double_t& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__lastBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBPM;
}
constexpr double_t const& VROSC::LoopPlayerPlaybackSettings::__cordl_internal_get__lastBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBPM;
}
constexpr void VROSC::LoopPlayerPlaybackSettings::__cordl_internal_set__lastBPM(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBPM = value;
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Local(::VROSC::LoopPlaybackConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Local",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlayerPlaybackSettings::get_Local()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Local",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Current(::VROSC::LoopPlaybackConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlayerPlaybackSettings::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Loop(::VROSC::Loop*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Loop* VROSC::LoopPlayerPlaybackSettings::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Loop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Loop*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_StoppedState(::VROSC::LoopPlayerPlaybackStoppedState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_StoppedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackStoppedState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackStoppedState* VROSC::LoopPlayerPlaybackSettings::get_StoppedState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_StoppedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackStoppedState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_WillStartState(::VROSC::LoopPlayerPlaybackWillStartState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_WillStartState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackWillStartState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackWillStartState* VROSC::LoopPlayerPlaybackSettings::get_WillStartState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WillStartState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackWillStartState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_LoopingState(::VROSC::LoopPlayerPlaybackLoopingState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_LoopingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackLoopingState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackLoopingState* VROSC::LoopPlayerPlaybackSettings::get_LoopingState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_LoopingState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackLoopingState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_WillStopState(::VROSC::LoopPlayerPlaybackWillStopState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_WillStopState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackWillStopState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackWillStopState* VROSC::LoopPlayerPlaybackSettings::get_WillStopState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WillStopState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackWillStopState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_CurrentState(::VROSC::LoopPlayerPlaybackState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackState* VROSC::LoopPlayerPlaybackSettings::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_NextState(::VROSC::LoopPlayerPlaybackState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackState* VROSC::LoopPlayerPlaybackSettings::get_NextState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_NextState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackState*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Timing(::VROSC::LoopPlaybackTiming  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Timing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackTiming>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlaybackTiming VROSC::LoopPlayerPlaybackSettings::get_Timing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Timing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackTiming, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::LoopPlayerPlaybackSettings::get_Active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_Playing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::LoopPlayerPlaybackSettings::get_Playing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackSettings::get_WaitingToStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_WaitingToStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::set_FadeMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "set_FadeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::LoopPlayerPlaybackSettings::get_FadeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_FadeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopPlayerPlaybackSettings::get_PlayFromStartOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_PlayFromStartOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopPlayerPlaybackSettings::get_BarRelativeStartOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_BarRelativeStartOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopPlayerPlaybackSettings::get_AllowedLeadupToNoTailLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "get_AllowedLeadupToNoTailLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::Setup(::VROSC::Loop*  loop, ::VROSC::LoopPlaybackConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loop, config);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetStart(::VROSC::LoopPlaybackConfig_TriggerSync  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetStop(::VROSC::LoopPlaybackConfig_TriggerSync  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetFadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetFadeIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetFadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetFadeOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetOneShot(bool  oneShot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetOneShot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oneShot);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetRetrigger(bool  retrigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetRetrigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, retrigger);
}
inline void VROSC::LoopPlayerPlaybackSettings::StartRequested(::VROSC::LoopPlaybackConfig*  config, bool  isResuming)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "StartRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, isResuming);
}
inline void VROSC::LoopPlayerPlaybackSettings::LoadLastPlaybackData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "LoadLastPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::ResumePlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackSettings::ShouldShowPlayIcon()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldShowPlayIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackSettings::UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  newConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newConfig);
}
inline void VROSC::LoopPlayerPlaybackSettings::StopRequested(int32_t  atSample, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "StopRequested",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atSample, instant);
}
inline void VROSC::LoopPlayerPlaybackSettings::ProgressState(int32_t  atSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ProgressState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atSample);
}
inline void VROSC::LoopPlayerPlaybackSettings::SetState(::VROSC::LoopPlayerPlaybackState*  currentState, int32_t  atSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackState*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentState, atSample);
}
inline void VROSC::LoopPlayerPlaybackSettings::PerformIsPlayingCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "PerformIsPlayingCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackSettings::ShouldCheckActivityChangeBeforeSample(int32_t  samples)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldCheckActivityChangeBeforeSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, samples);
}
inline bool VROSC::LoopPlayerPlaybackSettings::ShouldUpdateFading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "ShouldUpdateFading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackSettings::CheckForStateSwitchThisSample(int32_t  atSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "CheckForStateSwitchThisSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, atSample);
}
inline void VROSC::LoopPlayerPlaybackSettings::UpdateFading(int32_t  atSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "UpdateFading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atSample);
}
inline int32_t VROSC::LoopPlayerPlaybackSettings::GetNextLoopPointFromOffsetStart(int32_t  startSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "GetNextLoopPointFromOffsetStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, startSample);
}
inline void VROSC::LoopPlayerPlaybackSettings::RenderPlaybackData(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        "RenderPlaybackData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::LoopPlayerPlaybackSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackSettings* VROSC::LoopPlayerPlaybackSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackSettings::LoopPlayerPlaybackSettings()   {
}
