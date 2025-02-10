#pragma once
// IWYU pragma private; include "VROSC/CurrentlyRecordingLoop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__CurrentlyRecordingLoop_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__CurrentlyRecordingLoopOverdubbingAudio_def.hpp"
#include "VROSC/zzzz__CurrentlyRecordingLoopVisualization_def.hpp"
#include "VROSC/zzzz__CurrentlyRecordingLoop_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__LooperSettings_def.hpp"
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::*)()>(&::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a6c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0._ConcludeRecording_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::*)(::VROSC::LoopPlayer*)>(&::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::_ConcludeRecording_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a6fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*>::get(),
                        "<ConcludeRecording>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop>& VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop> const& VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_set___4__this(::UnityW<::VROSC::CurrentlyRecordingLoop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::_ConcludeRecording_b__0(::VROSC::LoopPlayer*  loopPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*>::get(),
                        "<ConcludeRecording>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlayer);
}
inline ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0* VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::CurrentlyRecordingLoop___c__DisplayClass30_0::CurrentlyRecordingLoop___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.set_LastRecordedLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::VROSC::LoopPlayer*)>(&::VROSC::CurrentlyRecordingLoop::set_LastRecordedLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a68dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_LastRecordedLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.get_LastRecordedLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayer> (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::get_LastRecordedLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a68e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_LastRecordedLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.set_IsOverdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(bool)>(&::VROSC::CurrentlyRecordingLoop::set_IsOverdub)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a68ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_IsOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.get_IsOverdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::get_IsOverdub)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a68f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_IsOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.set_UseAutoLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(bool)>(&::VROSC::CurrentlyRecordingLoop::set_UseAutoLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a6900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_UseAutoLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.get_UseAutoLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::get_UseAutoLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_UseAutoLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.set_FixedLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(int32_t)>(&::VROSC::CurrentlyRecordingLoop::set_FixedLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a6914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_FixedLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.get_FixedLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::get_FixedLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_FixedLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.set_TrackId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::StringW)>(&::VROSC::CurrentlyRecordingLoop::set_TrackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a6924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.get_TrackId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::get_TrackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a692c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::VROSC::LoopStation*)>(&::VROSC::CurrentlyRecordingLoop::Setup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a6934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.SetRecordingLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(bool, int32_t)>(&::VROSC::CurrentlyRecordingLoop::SetRecordingLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a6954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "SetRecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::StringW, bool, int32_t, int32_t)>(&::VROSC::CurrentlyRecordingLoop::StartRecording)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x18a6968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.ConcludeOverdub
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::ConcludeOverdub)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18a6aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.ConcludeRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, ::System::Action*)>(&::VROSC::CurrentlyRecordingLoop::ConcludeRecording)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18a6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.ConcludeRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, ::System::Action*)>(&::VROSC::CurrentlyRecordingLoop::ConcludeRecording)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18a6ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.SetPlaybackConfigOfNewLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::SetPlaybackConfigOfNewLoop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18a6c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "SetPlaybackConfigOfNewLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.TailRecordingComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, ::System::Action*)>(&::VROSC::CurrentlyRecordingLoop::TailRecordingComplete)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x18a6d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "TailRecordingComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.RecordingOfLoopComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::RecordingOfLoopComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18a6e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "RecordingOfLoopComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.RemoveLastLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::RemoveLastLoop)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18a6ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "RemoveLastLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.AbortRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::AbortRecording)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a6f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "AbortRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.OnStopShared
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::OnStopShared)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a6ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "OnStopShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop.Rerecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::Rerecord)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a6f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "Rerecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CurrentlyRecordingLoop._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CurrentlyRecordingLoop::*)()>(&::VROSC::CurrentlyRecordingLoop::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a6fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__visualization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualization;
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopVisualization> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__visualization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualization;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__visualization(::UnityW<::VROSC::CurrentlyRecordingLoopVisualization>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__overdubbingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdubbingAudio;
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__overdubbingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdubbingAudio;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__overdubbingAudio(::UnityW<::VROSC::CurrentlyRecordingLoopOverdubbingAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overdubbingAudio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LooperSettings>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__looperSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperSettings;
}
constexpr ::UnityW<::VROSC::LooperSettings> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__looperSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperSettings;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__looperSettings(::UnityW<::VROSC::LooperSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____looperSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationRecorder>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::UnityW<::VROSC::LoopStationRecorder> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__recorder(::UnityW<::VROSC::LoopStationRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__LastRecordedLoop_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastRecordedLoop_k__BackingField;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__LastRecordedLoop_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastRecordedLoop_k__BackingField;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__LastRecordedLoop_k__BackingField(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LastRecordedLoop_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__IsOverdub_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOverdub_k__BackingField;
}
constexpr bool const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__IsOverdub_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOverdub_k__BackingField;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__IsOverdub_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsOverdub_k__BackingField = value;
}
constexpr bool& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__UseAutoLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAutoLength_k__BackingField;
}
constexpr bool const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__UseAutoLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAutoLength_k__BackingField;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__UseAutoLength_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseAutoLength_k__BackingField = value;
}
constexpr int32_t& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__FixedLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FixedLength_k__BackingField;
}
constexpr int32_t const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__FixedLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FixedLength_k__BackingField;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__FixedLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FixedLength_k__BackingField = value;
}
constexpr ::StringW& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__TrackId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackId_k__BackingField;
}
constexpr ::StringW const& VROSC::CurrentlyRecordingLoop::__cordl_internal_get__TrackId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackId_k__BackingField;
}
constexpr void VROSC::CurrentlyRecordingLoop::__cordl_internal_set__TrackId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrackId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CurrentlyRecordingLoop::set_LastRecordedLoop(::VROSC::LoopPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_LastRecordedLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::LoopPlayer> VROSC::CurrentlyRecordingLoop::get_LastRecordedLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_LastRecordedLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayer>, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::set_IsOverdub(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_IsOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::CurrentlyRecordingLoop::get_IsOverdub()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_IsOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::set_UseAutoLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_UseAutoLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::CurrentlyRecordingLoop::get_UseAutoLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_UseAutoLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::set_FixedLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_FixedLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::CurrentlyRecordingLoop::get_FixedLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_FixedLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::set_TrackId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "set_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::CurrentlyRecordingLoop::get_TrackId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "get_TrackId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::Setup(::VROSC::LoopStation*  loopStation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation);
}
inline void VROSC::CurrentlyRecordingLoop::SetRecordingLength(bool  usesAutoLength, int32_t  fixedLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "SetRecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usesAutoLength, fixedLength);
}
inline void VROSC::CurrentlyRecordingLoop::StartRecording(::StringW  trackId, bool  isOverdub, int32_t  loopLength, int32_t  globalSyncStartOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackId, isOverdub, loopLength, globalSyncStartOffset);
}
inline void VROSC::CurrentlyRecordingLoop::ConcludeOverdub()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeOverdub",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::ConcludeRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  globalSyncStartOffset, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, globalSyncStartOffset, callback);
}
inline void VROSC::CurrentlyRecordingLoop::ConcludeRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, callback);
}
inline void VROSC::CurrentlyRecordingLoop::SetPlaybackConfigOfNewLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "SetPlaybackConfigOfNewLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::TailRecordingComplete(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "TailRecordingComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, loopLength, callback);
}
inline void VROSC::CurrentlyRecordingLoop::RecordingOfLoopComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "RecordingOfLoopComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::RemoveLastLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "RemoveLastLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::AbortRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "AbortRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::OnStopShared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "OnStopShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::Rerecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        "Rerecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CurrentlyRecordingLoop::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CurrentlyRecordingLoop*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::CurrentlyRecordingLoop* VROSC::CurrentlyRecordingLoop::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CurrentlyRecordingLoop*>());
}
// Ctor Parameters []
constexpr ::VROSC::CurrentlyRecordingLoop::CurrentlyRecordingLoop()   {
}
