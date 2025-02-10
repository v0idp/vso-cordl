#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDeviceManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__MicrophoneDeviceManager_def.hpp"
#include "NatSuite/Devices/zzzz__AudioDevice_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__MicrophoneDeviceManager_def.hpp"
#include "VROSC/zzzz__MicrophoneEffectsManager_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::*)()>(&::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::MoveNext)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x18c0de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18c1854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48()   {
}
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::*)()>(&::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x16ee608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16ee7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57()   {
}
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__Setup_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__Setup_d__47::*)()>(&::VROSC::MicrophoneDeviceManager__Setup_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x16ee7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__Setup_d__47>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager__Setup_d__47.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager__Setup_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::MicrophoneDeviceManager__Setup_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16eea5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__Setup_d__47>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MicrophoneDeviceManager__Setup_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__Setup_d__47>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager__Setup_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager__Setup_d__47>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::MicrophoneDeviceManager__Setup_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::MicrophoneDeviceManager__Setup_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::MicrophoneDeviceManager__Setup_d__47::MicrophoneDeviceManager__Setup_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDeviceManager__Setup_d__47::MicrophoneDeviceManager__Setup_d__47()   {
}
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_MicrophoneDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NatSuite::Devices::AudioDevice* (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::get_MicrophoneDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_MicrophoneDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_Latency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::VROSC::MicrophoneDeviceManager::get_Latency)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18bfa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_Latency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.set_Latency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::VROSC::MicrophoneDeviceManager::set_Latency)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18bfad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_Latency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_StopFadeTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::get_StopFadeTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_StopFadeTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.set_StopFadeTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(float_t)>(&::VROSC::MicrophoneDeviceManager::set_StopFadeTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_StopFadeTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.set_IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(bool)>(&::VROSC::MicrophoneDeviceManager::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18bfb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_UsesMicrophoneTakingInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::get_UsesMicrophoneTakingInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_UsesMicrophoneTakingInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_HasWorkingMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::VROSC::MicrophoneDeviceManager::get_HasWorkingMicrophone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18bfb68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_HasWorkingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.set_HasWorkingMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::VROSC::MicrophoneDeviceManager::set_HasWorkingMicrophone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18bfbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_HasWorkingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.get_CanUseNatDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::VROSC::MicrophoneDeviceManager::get_CanUseNatDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18bfc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_CanUseNatDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.set_CanUseNatDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::VROSC::MicrophoneDeviceManager::set_CanUseNatDevice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18bfc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_CanUseNatDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18bfcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.InitializeNativeMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::InitializeNativeMicrophone)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18bfd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitializeNativeMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetMicrophoneDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(::NatSuite::Devices::AudioDevice*)>(&::VROSC::MicrophoneDeviceManager::SetMicrophoneDevice)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18bfe28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetMicrophoneDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::AudioDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::Update)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x18c01c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetUseProximity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(bool)>(&::VROSC::MicrophoneDeviceManager::SetUseProximity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18c03f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetUseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetMicrophoneProximity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(float_t)>(&::VROSC::MicrophoneDeviceManager::SetMicrophoneProximity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18c0418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetMicrophoneProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetLatencyCompensation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(float_t)>(&::VROSC::MicrophoneDeviceManager::SetLatencyCompensation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18c043c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetLatencyCompensation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.ResetLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::ResetLatency)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x18c04d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ResetLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.MicrophoneEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(bool)>(&::VROSC::MicrophoneDeviceManager::MicrophoneEnabled)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x18bfedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "MicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.LoopStationStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::MicrophoneDeviceManager::LoopStationStateChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18c0644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "LoopStationStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.InitiateInputAfterBufferReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::InitiateInputAfterBufferReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18c05b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitiateInputAfterBufferReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.InitiateInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::InitiateInput)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x18c06e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitiateInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.MicrophoneTakingInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(bool)>(&::VROSC::MicrophoneDeviceManager::MicrophoneTakingInput)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18c084c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "MicrophoneTakingInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.ReceiveMicrophoneSamples
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(::ArrayW<float_t,::Array<float_t>*>, int64_t)>(&::VROSC::MicrophoneDeviceManager::ReceiveMicrophoneSamples)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x18c08f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ReceiveMicrophoneSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.ResetReadIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::ResetReadIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18c0810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ResetReadIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetPreampVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(float_t)>(&::VROSC::MicrophoneDeviceManager::SetPreampVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18c0a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetPreampReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(float_t)>(&::VROSC::MicrophoneDeviceManager::SetPreampReverb)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18c0a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.SetPreviewReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(bool)>(&::VROSC::MicrophoneDeviceManager::SetPreviewReverb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18c0a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreviewReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::MicrophoneDeviceManager::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x18c0a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDeviceManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDeviceManager::*)()>(&::VROSC::MicrophoneDeviceManager::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18c0d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::MicrophoneDeviceManager::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MicrophoneEffectsManager>& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneEffectsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneEffectsManager;
}
constexpr ::UnityW<::VROSC::MicrophoneEffectsManager> const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneEffectsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneEffectsManager;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__microphoneEffectsManager(::UnityW<::VROSC::MicrophoneEffectsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneEffectsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__nativeMicrophoneBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMicrophoneBufferSize;
}
constexpr int32_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__nativeMicrophoneBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMicrophoneBufferSize;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__nativeMicrophoneBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeMicrophoneBufferSize = value;
}
constexpr ::NatSuite::Devices::AudioDevice*& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDevice;
}
constexpr ::NatSuite::Devices::AudioDevice* const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDevice;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__microphoneDevice(::NatSuite::Devices::AudioDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBuffer;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBuffer;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__ringBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ringBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBufferWriteIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBufferWriteIndex;
}
constexpr int32_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBufferWriteIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBufferWriteIndex;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__ringBufferWriteIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ringBufferWriteIndex = value;
}
constexpr int32_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBufferReadIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBufferReadIndex;
}
constexpr int32_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__ringBufferReadIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ringBufferReadIndex;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__ringBufferReadIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ringBufferReadIndex = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__takingInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____takingInput;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__takingInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____takingInput;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__takingInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____takingInput = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneEnabled;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneEnabled;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__microphoneEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneEnabled = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneTakingInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneTakingInput;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneTakingInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneTakingInput;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__microphoneTakingInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneTakingInput = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__useProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useProximity;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__useProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useProximity;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__useProximity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useProximity = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneProximity;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__microphoneProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneProximity;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__microphoneProximity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneProximity = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__StopFadeTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StopFadeTime_k__BackingField;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__StopFadeTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StopFadeTime_k__BackingField;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__StopFadeTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StopFadeTime_k__BackingField = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__preampVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preampVolume;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__preampVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preampVolume;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__preampVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preampVolume = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakDisplayDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakDisplayDuration;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakDisplayDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakDisplayDuration;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__peakDisplayDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peakDisplayDuration = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakValue;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakValue;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__peakValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peakValue = value;
}
constexpr float_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakTimer;
}
constexpr float_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__peakTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakTimer;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__peakTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peakTimer = value;
}
constexpr bool& VROSC::MicrophoneDeviceManager::__cordl_internal_get__isInPeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInPeak;
}
constexpr bool const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__isInPeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInPeak;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__isInPeak(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInPeak = value;
}
constexpr int32_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__writeAheadBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeAheadBuffers;
}
constexpr int32_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__writeAheadBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeAheadBuffers;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__writeAheadBuffers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeAheadBuffers = value;
}
constexpr int32_t& VROSC::MicrophoneDeviceManager::__cordl_internal_get__receivedBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedBuffers;
}
constexpr int32_t const& VROSC::MicrophoneDeviceManager::__cordl_internal_get__receivedBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivedBuffers;
}
constexpr void VROSC::MicrophoneDeviceManager::__cordl_internal_set__receivedBuffers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivedBuffers = value;
}
inline void VROSC::MicrophoneDeviceManager::setStaticF__Latency_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<Latency>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<float_t>(value));
}
inline float_t VROSC::MicrophoneDeviceManager::getStaticF__Latency_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<Latency>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF__HasWorkingMicrophone_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<HasWorkingMicrophone>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<bool>(value));
}
inline bool VROSC::MicrophoneDeviceManager::getStaticF__HasWorkingMicrophone_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<HasWorkingMicrophone>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF__CanUseNatDevice_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<CanUseNatDevice>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<bool>(value));
}
inline bool VROSC::MicrophoneDeviceManager::getStaticF__CanUseNatDevice_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<CanUseNatDevice>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF_OnPeakReach(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPeakReach", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::MicrophoneDeviceManager::getStaticF_OnPeakReach()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPeakReach", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF_OnPeakLeft(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPeakLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::MicrophoneDeviceManager::getStaticF_OnPeakLeft()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPeakLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF_OnInputMeasurementChanged(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "OnInputMeasurementChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* VROSC::MicrophoneDeviceManager::getStaticF_OnInputMeasurementChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "OnInputMeasurementChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline void VROSC::MicrophoneDeviceManager::setStaticF_OnSignal(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSignal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::MicrophoneDeviceManager::getStaticF_OnSignal()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSignal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get>();
}
inline ::NatSuite::Devices::AudioDevice* VROSC::MicrophoneDeviceManager::get_MicrophoneDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_MicrophoneDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::NatSuite::Devices::AudioDevice*, false>(this, ___internal_method);
}
inline float_t VROSC::MicrophoneDeviceManager::get_Latency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_Latency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::set_Latency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_Latency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline float_t VROSC::MicrophoneDeviceManager::get_StopFadeTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_StopFadeTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::set_StopFadeTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_StopFadeTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::MicrophoneDeviceManager::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::MicrophoneDeviceManager::get_UsesMicrophoneTakingInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_UsesMicrophoneTakingInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::MicrophoneDeviceManager::get_HasWorkingMicrophone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_HasWorkingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::set_HasWorkingMicrophone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_HasWorkingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool VROSC::MicrophoneDeviceManager::get_CanUseNatDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "get_CanUseNatDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::set_CanUseNatDevice(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "set_CanUseNatDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void VROSC::MicrophoneDeviceManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::MicrophoneDeviceManager::InitializeNativeMicrophone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitializeNativeMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::SetMicrophoneDevice(::NatSuite::Devices::AudioDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetMicrophoneDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::AudioDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void VROSC::MicrophoneDeviceManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::SetUseProximity(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetUseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::MicrophoneDeviceManager::SetMicrophoneProximity(float_t  proximity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetMicrophoneProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proximity);
}
inline void VROSC::MicrophoneDeviceManager::SetLatencyCompensation(float_t  latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetLatencyCompensation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, latency);
}
inline void VROSC::MicrophoneDeviceManager::ResetLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ResetLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::MicrophoneEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "MicrophoneEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void VROSC::MicrophoneDeviceManager::LoopStationStateChanged(::VROSC::LoopStationRecorder_RecordingState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "LoopStationStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::MicrophoneDeviceManager::InitiateInputAfterBufferReceived()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitiateInputAfterBufferReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::InitiateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "InitiateInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::MicrophoneTakingInput(bool  takingInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "MicrophoneTakingInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, takingInput);
}
inline void VROSC::MicrophoneDeviceManager::ReceiveMicrophoneSamples(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ReceiveMicrophoneSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleBuffer, timestamp);
}
inline void VROSC::MicrophoneDeviceManager::ResetReadIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "ResetReadIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDeviceManager::SetPreampVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::MicrophoneDeviceManager::SetPreampReverb(float_t  reverb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reverb);
}
inline void VROSC::MicrophoneDeviceManager::SetPreviewReverb(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "SetPreviewReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::MicrophoneDeviceManager::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::MicrophoneDeviceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDeviceManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MicrophoneDeviceManager* VROSC::MicrophoneDeviceManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneDeviceManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDeviceManager::MicrophoneDeviceManager()   {
}
