#pragma once
// IWYU pragma private; include "VROSC/TapeRecorder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TapeRecorder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__TapeRecorderDataController_def.hpp"
#include "VROSC/zzzz__TapeRecorderUI_def.hpp"
#include "VROSC/zzzz__TapeRecorder_def.hpp"
//  Writing Method size for method: ::VROSC::TapeRecorder__StartRecording_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder__StartRecording_d__30::*)()>(&::VROSC::TapeRecorder__StartRecording_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x16fc870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder__StartRecording_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder__StartRecording_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder__StartRecording_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::TapeRecorder__StartRecording_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16fcb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder__StartRecording_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TapeRecorder__StartRecording_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder__StartRecording_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder__StartRecording_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder__StartRecording_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::TapeRecorder__StartRecording_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::TapeRecorder__StartRecording_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::TapeRecorder>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TapeRecorder__StartRecording_d__30::TapeRecorder__StartRecording_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::TapeRecorder>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorder__StartRecording_d__30::TapeRecorder__StartRecording_d__30()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorder.get_MaxRecordingLengthSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_MaxRecordingLengthSeconds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fb20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_Recording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_Recording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_Recording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_Playing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_Playing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_HasRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_HasRecording)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fb238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_HasRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_CurrentPlaybackTimeSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_CurrentPlaybackTimeSeconds)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16fb254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_CurrentPlaybackTimeSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_RecordingLengthSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_RecordingLengthSeconds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16fb2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_RecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.get_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::get_IsSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.set_IsSetup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(bool)>(&::VROSC::TapeRecorder::set_IsSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16fb360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(::VROSC::TapeRecorderDataController*)>(&::VROSC::TapeRecorder::Setup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x16fb36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TapeRecorderDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x16fb940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::StartRecording)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16fbb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.GetElapsedRecordingTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::GetElapsedRecordingTime)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x16fbb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "GetElapsedRecordingTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.RecordingReachedEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::TapeRecorder::RecordingReachedEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fbbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "RecordingReachedEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.StopRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::StopRecording)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16fbc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.ConcludeRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::ConcludeRecording)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16fbbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.UpdateLoadedRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(bool, float_t)>(&::VROSC::TapeRecorder::UpdateLoadedRecording)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x16fbcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "UpdateLoadedRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.SaveRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::SaveRecording)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x16fc0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SaveRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.StartPlayback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::StartPlayback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16fc394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StartPlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.PausePlayback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::PausePlayback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16fc3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "PausePlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.SetUseAsPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(bool)>(&::VROSC::TapeRecorder::SetUseAsPreview)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16fc3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SetUseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(::VROSC::TapeRecorderDataController*)>(&::VROSC::TapeRecorder::UserDataLoaded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16fc3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TapeRecorderDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.SetPlaybackTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(float_t)>(&::VROSC::TapeRecorder::SetPlaybackTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16fc478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SetPlaybackTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::TapeRecorder::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16fc518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fc610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder._SaveRecording_b__36_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)()>(&::VROSC::TapeRecorder::_SaveRecording_b__36_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16fc618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "<SaveRecording>b__36_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorder._SaveRecording_b__36_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorder::*)(::VROSC::Error)>(&::VROSC::TapeRecorder::_SaveRecording_b__36_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16fc70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "<SaveRecording>b__36_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::TapeRecorderUI>& VROSC::TapeRecorder::__cordl_internal_get__ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr ::UnityW<::VROSC::TapeRecorderUI> const& VROSC::TapeRecorder::__cordl_internal_get__ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__ui(::UnityW<::VROSC::TapeRecorderUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ui)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::TapeRecorder::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::TapeRecorder::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TapeRecorderDataController*& VROSC::TapeRecorder::__cordl_internal_get__dataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr ::VROSC::TapeRecorderDataController* const& VROSC::TapeRecorder::__cordl_internal_get__dataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__dataController(::VROSC::TapeRecorderDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& VROSC::TapeRecorder::__cordl_internal_get__recordingStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime;
}
constexpr double_t const& VROSC::TapeRecorder::__cordl_internal_get__recordingStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__recordingStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStartTime = value;
}
constexpr int32_t& VROSC::TapeRecorder::__cordl_internal_get__lastFetchedRecordingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFetchedRecordingIndex;
}
constexpr int32_t const& VROSC::TapeRecorder::__cordl_internal_get__lastFetchedRecordingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFetchedRecordingIndex;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__lastFetchedRecordingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFetchedRecordingIndex = value;
}
constexpr bool& VROSC::TapeRecorder::__cordl_internal_get__recording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recording;
}
constexpr bool const& VROSC::TapeRecorder::__cordl_internal_get__recording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recording;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__recording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recording = value;
}
constexpr bool& VROSC::TapeRecorder::__cordl_internal_get__wasPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPlaying;
}
constexpr bool const& VROSC::TapeRecorder::__cordl_internal_get__wasPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPlaying;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__wasPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasPlaying = value;
}
constexpr bool& VROSC::TapeRecorder::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr bool const& VROSC::TapeRecorder::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playing = value;
}
constexpr int32_t& VROSC::TapeRecorder::__cordl_internal_get__currentPlaybackSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlaybackSample;
}
constexpr int32_t const& VROSC::TapeRecorder::__cordl_internal_get__currentPlaybackSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlaybackSample;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__currentPlaybackSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPlaybackSample = value;
}
constexpr bool& VROSC::TapeRecorder::__cordl_internal_get__IsSetup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr bool const& VROSC::TapeRecorder::__cordl_internal_get__IsSetup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSetup_k__BackingField;
}
constexpr void VROSC::TapeRecorder::__cordl_internal_set__IsSetup_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSetup_k__BackingField = value;
}
inline void VROSC::TapeRecorder::setStaticF_OnStartSaving(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnStartSaving", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::TapeRecorder::getStaticF_OnStartSaving()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnStartSaving", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>();
}
inline void VROSC::TapeRecorder::setStaticF_OnSaveSuccess(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSaveSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::TapeRecorder::getStaticF_OnSaveSuccess()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSaveSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>();
}
inline void VROSC::TapeRecorder::setStaticF_OnSaveFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnSaveFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::TapeRecorder::getStaticF_OnSaveFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnSaveFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get>();
}
inline float_t VROSC::TapeRecorder::get_MaxRecordingLengthSeconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::TapeRecorder::get_Recording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_Recording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::TapeRecorder::get_Playing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_Playing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::TapeRecorder::get_HasRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_HasRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::TapeRecorder::get_CurrentPlaybackTimeSeconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_CurrentPlaybackTimeSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::TapeRecorder::get_RecordingLengthSeconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_RecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::TapeRecorder::get_IsSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "get_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::set_IsSetup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "set_IsSetup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TapeRecorder::Setup(::VROSC::TapeRecorderDataController*  dataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TapeRecorderDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataController);
}
inline void VROSC::TapeRecorder::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::TapeRecorder::GetElapsedRecordingTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "GetElapsedRecordingTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::RecordingReachedEnd(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  recordingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "RecordingReachedEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingData);
}
inline void VROSC::TapeRecorder::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::ConcludeRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::UpdateLoadedRecording(bool  trim, float_t  recordedLengthSeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "UpdateLoadedRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trim, recordedLengthSeconds);
}
inline void VROSC::TapeRecorder::SaveRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SaveRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "StartPlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::PausePlayback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "PausePlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::SetUseAsPreview(bool  useAsPreview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SetUseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useAsPreview);
}
inline void VROSC::TapeRecorder::UserDataLoaded(::VROSC::TapeRecorderDataController*  dataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TapeRecorderDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataController);
}
inline void VROSC::TapeRecorder::SetPlaybackTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "SetPlaybackTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void VROSC::TapeRecorder::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::TapeRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::_SaveRecording_b__36_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "<SaveRecording>b__36_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorder::_SaveRecording_b__36_1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorder*>::get(),
                        "<SaveRecording>b__36_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::TapeRecorder* VROSC::TapeRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorder::TapeRecorder()   {
}
