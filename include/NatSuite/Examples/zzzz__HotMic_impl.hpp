#pragma once
// IWYU pragma private; include "NatSuite/Examples/HotMic.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "NatSuite/Examples/zzzz__HotMic_def.hpp"
#include "NatSuite/Devices/zzzz__IAudioDevice_def.hpp"
#include "NatSuite/Examples/Components/zzzz__ClipRecorder_def.hpp"
#include "NatSuite/Examples/zzzz__HotMic_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::NatSuite::Examples::HotMic__Start_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic__Start_d__2::*)()>(&::NatSuite::Examples::HotMic__Start_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x1800c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic__Start_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::HotMic__Start_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic__Start_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::NatSuite::Examples::HotMic__Start_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1800fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic__Start_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Examples::HotMic__Start_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic__Start_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::HotMic__Start_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic__Start_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  NatSuite::Examples::HotMic__Start_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* NatSuite::Examples::HotMic__Start_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::HotMic>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Examples::HotMic__Start_d__2::HotMic__Start_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::HotMic>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::HotMic__Start_d__2::HotMic__Start_d__2()   {
}
//  Writing Method size for method: ::NatSuite::Examples::HotMic.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic::*)()>(&::NatSuite::Examples::HotMic::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1800578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::HotMic.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic::*)()>(&::NatSuite::Examples::HotMic::StartRecording)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x1800608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::HotMic.StopRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic::*)()>(&::NatSuite::Examples::HotMic::StopRecording)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18009ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::HotMic._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::HotMic::*)()>(&::NatSuite::Examples::HotMic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1800c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::IAudioDevice*& NatSuite::Examples::HotMic::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::NatSuite::Devices::IAudioDevice* const& NatSuite::Examples::HotMic::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void NatSuite::Examples::HotMic::__cordl_internal_set_device(::NatSuite::Devices::IAudioDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::NatSuite::Examples::Components::ClipRecorder*& NatSuite::Examples::HotMic::__cordl_internal_get_recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr ::NatSuite::Examples::Components::ClipRecorder* const& NatSuite::Examples::HotMic::__cordl_internal_get_recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr void NatSuite::Examples::HotMic::__cordl_internal_set_recorder(::NatSuite::Examples::Components::ClipRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Examples::HotMic::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::HotMic::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::HotMic::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::HotMic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::HotMic*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::NatSuite::Examples::HotMic* NatSuite::Examples::HotMic::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Examples::HotMic*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::HotMic::HotMic()   {
}
