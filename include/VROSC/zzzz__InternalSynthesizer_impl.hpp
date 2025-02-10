#pragma once
// IWYU pragma private; include "VROSC/InternalSynthesizer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SoundSource_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_impl.hpp"
#include "VROSC/zzzz__InternalSynthesizer_def.hpp"
#include "AudioHelm/zzzz__AudioHelmClock_def.hpp"
#include "AudioHelm/zzzz__Param_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__AudioHelmInstrumentWrapper_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__HelmWrapper_def.hpp"
#include "VROSC/zzzz__InternalSynthesizer_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__SoundSource_def.hpp"
#include "VROSC/zzzz__VirtuosoSampler_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::InternalSynthesizer__Setup_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer__Setup_d__13::*)()>(&::VROSC::InternalSynthesizer__Setup_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x17cb1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer__Setup_d__13>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer__Setup_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer__Setup_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::InternalSynthesizer__Setup_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17cb54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer__Setup_d__13>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::InternalSynthesizer__Setup_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer__Setup_d__13>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer__Setup_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer__Setup_d__13>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::InternalSynthesizer__Setup_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::InternalSynthesizer__Setup_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::InternalSynthesizer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::InternalSynthesizer__Setup_d__13::InternalSynthesizer__Setup_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::InternalSynthesizer>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::InternalSynthesizer__Setup_d__13::InternalSynthesizer__Setup_d__13()   {
}
//  Writing Method size for method: ::VROSC::InternalSynthesizer.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::Setup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17c8fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17c90a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(::VROSC::WidgetSettings_Identifier, int32_t, float_t, ::VROSC::PatchSettings*, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::InternalSynthesizer::PlayNote)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17c9240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(int32_t, ::VROSC::PatchSettings*, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::StopNote)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17c9628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(float_t, int32_t, ::VROSC::PatchSettings*, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::SetParameter)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x17c965c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetPitchBend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(float_t, ::VROSC::PatchSettings*, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::SetPitchBend)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x17c99e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPitchBend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetHelmParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(::VROSC::PatchSettings*, ::AudioHelm::Param, float_t, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::SetHelmParameterValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x17c9d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetHelmParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetHelmParameterPercent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(::VROSC::PatchSettings*, ::AudioHelm::Param, float_t, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::SetHelmParameterPercent)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x17c9b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetHelmParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetPatchToModularDrums
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::SetPatchToModularDrums)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17ca9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatchToModularDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(::VROSC::HelmWrapper*, ::VROSC::PatchSettings*)>(&::VROSC::InternalSynthesizer::SetPatch)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x17caa3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HelmWrapper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::AllNotesOff)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17cad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(::System::Object*)>(&::VROSC::InternalSynthesizer::AllNotesOff)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x17cad7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetPatchToMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::SetPatchToMicrophone)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17caf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatchToMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.SetBPM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)(double_t, bool)>(&::VROSC::InternalSynthesizer::SetBPM)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17caff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.ReloadHelm
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::ReloadHelm)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x17c90f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "ReloadHelm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.GetHelmOrSamplerWrapper
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::AudioHelmInstrumentWrapper> (::VROSC::InternalSynthesizer::*)(::VROSC::PatchSettings*, ::VROSC::HandType)>(&::VROSC::InternalSynthesizer::GetHelmOrSamplerWrapper)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x17c92b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetHelmOrSamplerWrapper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.GetCurrentInstrumentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::GetCurrentInstrumentName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17cb048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentInstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.GetCurrentPatchName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::GetCurrentPatchName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x17cb0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer.GetCurrentSoundSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SoundSource (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::GetCurrentSoundSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cb15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentSoundSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InternalSynthesizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InternalSynthesizer::*)()>(&::VROSC::InternalSynthesizer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x17cb164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AudioHelm::AudioHelmClock>& VROSC::InternalSynthesizer::__cordl_internal_get__audioHelmClock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioHelmClock;
}
constexpr ::UnityW<::AudioHelm::AudioHelmClock> const& VROSC::InternalSynthesizer::__cordl_internal_get__audioHelmClock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioHelmClock;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__audioHelmClock(::UnityW<::AudioHelm::AudioHelmClock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioHelmClock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::VirtuosoSampler>& VROSC::InternalSynthesizer::__cordl_internal_get__sampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampler;
}
constexpr ::UnityW<::VROSC::VirtuosoSampler> const& VROSC::InternalSynthesizer::__cordl_internal_get__sampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampler;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__sampler(::UnityW<::VROSC::VirtuosoSampler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HelmWrapper>& VROSC::InternalSynthesizer::__cordl_internal_get__helmOne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmOne;
}
constexpr ::UnityW<::VROSC::HelmWrapper> const& VROSC::InternalSynthesizer::__cordl_internal_get__helmOne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmOne;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__helmOne(::UnityW<::VROSC::HelmWrapper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helmOne)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HelmWrapper>& VROSC::InternalSynthesizer::__cordl_internal_get__helmTwo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmTwo;
}
constexpr ::UnityW<::VROSC::HelmWrapper> const& VROSC::InternalSynthesizer::__cordl_internal_get__helmTwo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmTwo;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__helmTwo(::UnityW<::VROSC::HelmWrapper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helmTwo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*& VROSC::InternalSynthesizer::__cordl_internal_get__helms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>* const& VROSC::InternalSynthesizer::__cordl_internal_get__helms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helms;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__helms(::System::Collections::Generic::List_1<::UnityW<::VROSC::HelmWrapper>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::HelmWrapper>& VROSC::InternalSynthesizer::__cordl_internal_get__activeHelm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeHelm;
}
constexpr ::UnityW<::VROSC::HelmWrapper> const& VROSC::InternalSynthesizer::__cordl_internal_get__activeHelm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeHelm;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__activeHelm(::UnityW<::VROSC::HelmWrapper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeHelm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SoundSource& VROSC::InternalSynthesizer::__cordl_internal_get__currentSoundSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSoundSource;
}
constexpr ::VROSC::SoundSource const& VROSC::InternalSynthesizer::__cordl_internal_get__currentSoundSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSoundSource;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__currentSoundSource(::VROSC::SoundSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSoundSource = value;
}
constexpr ::VROSC::WidgetSettings_Identifier& VROSC::InternalSynthesizer::__cordl_internal_get__currentInstrumentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentInstrumentId;
}
constexpr ::VROSC::WidgetSettings_Identifier const& VROSC::InternalSynthesizer::__cordl_internal_get__currentInstrumentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentInstrumentId;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__currentInstrumentId(::VROSC::WidgetSettings_Identifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentInstrumentId = value;
}
constexpr bool& VROSC::InternalSynthesizer::__cordl_internal_get__patchSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchSet;
}
constexpr bool const& VROSC::InternalSynthesizer::__cordl_internal_get__patchSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchSet;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__patchSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____patchSet = value;
}
constexpr bool& VROSC::InternalSynthesizer::__cordl_internal_get__isHelmDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHelmDirty;
}
constexpr bool const& VROSC::InternalSynthesizer::__cordl_internal_get__isHelmDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHelmDirty;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__isHelmDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHelmDirty = value;
}
constexpr float_t& VROSC::InternalSynthesizer::__cordl_internal_get__reloadHelmRefreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reloadHelmRefreshRate;
}
constexpr float_t const& VROSC::InternalSynthesizer::__cordl_internal_get__reloadHelmRefreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reloadHelmRefreshRate;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__reloadHelmRefreshRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reloadHelmRefreshRate = value;
}
constexpr float_t& VROSC::InternalSynthesizer::__cordl_internal_get__reloadHelmTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reloadHelmTimer;
}
constexpr float_t const& VROSC::InternalSynthesizer::__cordl_internal_get__reloadHelmTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reloadHelmTimer;
}
constexpr void VROSC::InternalSynthesizer::__cordl_internal_set__reloadHelmTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reloadHelmTimer = value;
}
inline void VROSC::InternalSynthesizer::setStaticF_OnActivePatchChanged(::System::Action_1<::VROSC::PatchSettings*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::PatchSettings*>*, "OnActivePatchChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get>(std::forward<::System::Action_1<::VROSC::PatchSettings*>*>(value));
}
inline ::System::Action_1<::VROSC::PatchSettings*>* VROSC::InternalSynthesizer::getStaticF_OnActivePatchChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::PatchSettings*>*, "OnActivePatchChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get>();
}
inline ::System::Threading::Tasks::Task* VROSC::InternalSynthesizer::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, float_t  velocity, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, note, velocity, patchSettings, predictedDspTime, handType, pitch, volume);
}
inline void VROSC::InternalSynthesizer::StopNote(int32_t  note, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, patchSettings, handType);
}
inline void VROSC::InternalSynthesizer::SetParameter(float_t  parameterValue, int32_t  parameterId, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterValue, parameterId, patchSettings, handType);
}
inline void VROSC::InternalSynthesizer::SetPitchBend(float_t  pitchBendValue, ::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPitchBend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitchBendValue, patchSettings, handType);
}
inline void VROSC::InternalSynthesizer::SetHelmParameterValue(::VROSC::PatchSettings*  patchSettings, ::AudioHelm::Param  parameter, float_t  newValue, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetHelmParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patchSettings, parameter, newValue, handType);
}
inline void VROSC::InternalSynthesizer::SetHelmParameterPercent(::VROSC::PatchSettings*  patchSettings, ::AudioHelm::Param  parameter, float_t  newValue, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetHelmParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patchSettings, parameter, newValue, handType);
}
inline void VROSC::InternalSynthesizer::SetPatchToModularDrums()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatchToModularDrums",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::SetPatch(::VROSC::HelmWrapper*  helmWrapper, ::VROSC::PatchSettings*  patchSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HelmWrapper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, helmWrapper, patchSettings);
}
inline void VROSC::InternalSynthesizer::AllNotesOff()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::AllNotesOff(::System::Object*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patch);
}
inline void VROSC::InternalSynthesizer::SetPatchToMicrophone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetPatchToMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::SetBPM(double_t  bpm, bool  reset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "SetBPM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm, reset);
}
inline void VROSC::InternalSynthesizer::ReloadHelm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "ReloadHelm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::AudioHelmInstrumentWrapper> VROSC::InternalSynthesizer::GetHelmOrSamplerWrapper(::VROSC::PatchSettings*  patchSettings, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetHelmOrSamplerWrapper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::AudioHelmInstrumentWrapper>, false>(this, ___internal_method, patchSettings, handType);
}
inline ::StringW VROSC::InternalSynthesizer::GetCurrentInstrumentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentInstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW VROSC::InternalSynthesizer::GetCurrentPatchName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::SoundSource VROSC::InternalSynthesizer::GetCurrentSoundSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        "GetCurrentSoundSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SoundSource, false>(this, ___internal_method);
}
inline void VROSC::InternalSynthesizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InternalSynthesizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InternalSynthesizer* VROSC::InternalSynthesizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InternalSynthesizer*>());
}
// Ctor Parameters []
constexpr ::VROSC::InternalSynthesizer::InternalSynthesizer()   {
}
