#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackController.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverride_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlaybackSettingsUI_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackController_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackSettings_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__LoopVisualizationData_def.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
#include "VROSC/zzzz__LooperSettings_def.hpp"
#include "VROSC/zzzz__PlaybackProgressUIData_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::*)()>(&::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0._UpdateClip_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::*)()>(&::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::_UpdateClip_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18a1fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*>::get(),
                        "<UpdateClip>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController>& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopPlayerPlaybackController> const& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopPlayerPlaybackController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_audioData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_audioData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_loopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopLength;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_loopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopLength;
}
constexpr void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_set_loopLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopLength = value;
}
constexpr bool& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_overdub()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdub;
}
constexpr bool const& VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_get_overdub() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdub;
}
constexpr void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::__cordl_internal_set_overdub(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdub = value;
}
inline void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::_UpdateClip_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*>::get(),
                        "<UpdateClip>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0* VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackController___c__DisplayClass28_0::LoopPlayerPlaybackController___c__DisplayClass28_0()   {
}
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::*)()>(&::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18a2004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a2314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopPlayerPlaybackController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "loopLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overdub", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::LoopPlayerPlaybackController__UpdateClip_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopPlayerPlaybackController>  __4__this, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, bool  overdub, ::System::Action*  callback, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->audioData = audioData;
this->loopLength = loopLength;
this->overdub = overdub;
this->callback = callback;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackController__UpdateClip_d__28::LoopPlayerPlaybackController__UpdateClip_d__28()   {
}
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.set_Settings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlayerPlaybackSettings*)>(&::VROSC::LoopPlayerPlaybackController::set_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "set_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.get_Settings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackSettings* (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.set_VisualizationData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopVisualizationData*)>(&::VROSC::LoopPlayerPlaybackController::set_VisualizationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "set_VisualizationData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopVisualizationData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.get_VisualizationData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopVisualizationData* (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::get_VisualizationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_VisualizationData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.get_Active
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::get_Active)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189f53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.get_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::get_Volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a1980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a1988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a19a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopStation*, ::VROSC::LoopPlayer*, ::VROSC::LoopPlaybackConfig*, ::StringW, int32_t, bool)>(&::VROSC::LoopPlayerPlaybackController::Setup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18a034c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18a19c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.UpdateClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, bool, ::System::Action*)>(&::VROSC::LoopPlayerPlaybackController::UpdateClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18a0850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdateClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.TogglePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(bool)>(&::VROSC::LoopPlayerPlaybackController::TogglePlay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18a0a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.SetSolo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(bool)>(&::VROSC::LoopPlayerPlaybackController::SetSolo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a1100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfig*, bool)>(&::VROSC::LoopPlayerPlaybackController::Play)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18a0d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.ResumePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::ResumePlay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18a0de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(bool)>(&::VROSC::LoopPlayerPlaybackController::Stop)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18a0e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.StartPlayback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfig*, bool)>(&::VROSC::LoopPlayerPlaybackController::StartPlayback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18a1a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "StartPlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.UpdatePlayConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopPlayerPlaybackController::UpdatePlayConfig)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18a0d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.SetLoopVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(float_t)>(&::VROSC::LoopPlayerPlaybackController::SetLoopVolume)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18a0fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetLoopVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.UpdateAudioSourceVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::UpdateAudioSourceVolume)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x18a0b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdateAudioSourceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.AdjustVolumeToNewGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopStationGroup*)>(&::VROSC::LoopPlayerPlaybackController::AdjustVolumeToNewGroup)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x189ffe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "AdjustVolumeToNewGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.GetPlaybackProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlaybackProgressUIData (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::GetPlaybackProgress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a1160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "GetPlaybackProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.ConfigChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::ConfigChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18a1ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "ConfigChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::Update)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x18a1bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.SetIsMutedByGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(bool)>(&::VROSC::LoopPlayerPlaybackController::SetIsMutedByGroup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a1d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetIsMutedByGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::LoopPlayerPlaybackController::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18a1d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController.DebugPrintVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::DebugPrintVolume)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x18a1d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "DebugPrintVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackController::*)()>(&::VROSC::LoopPlayerPlaybackController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18a1f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlayerPlaybackSettings*& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__Settings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr ::VROSC::LoopPlayerPlaybackSettings* const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__Settings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__Settings_k__BackingField(::VROSC::LoopPlayerPlaybackSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Settings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopVisualizationData*& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__VisualizationData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizationData_k__BackingField;
}
constexpr ::VROSC::LoopVisualizationData* const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__VisualizationData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VisualizationData_k__BackingField;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__VisualizationData_k__BackingField(::VROSC::LoopVisualizationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____VisualizationData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__recordingSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__recordingSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSource;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__recordingSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__tmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmp;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__tmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmp;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__tmp(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopPlaybackSettingsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlaybackSettingsUI;
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopPlaybackSettingsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlaybackSettingsUI;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__loopPlaybackSettingsUI(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlaybackSettingsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LooperSettings>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__looperSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperSettings;
}
constexpr ::UnityW<::VROSC::LooperSettings> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__looperSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperSettings;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__looperSettings(::UnityW<::VROSC::LooperSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____looperSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Loop*& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr ::VROSC::Loop* const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__loop(::VROSC::Loop*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loop)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__loopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfig*& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__playbackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackConfig;
}
constexpr ::VROSC::LoopPlaybackConfig* const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__playbackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playbackConfig;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__playbackConfig(::VROSC::LoopPlaybackConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playbackConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__isMutedBySolo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMutedBySolo;
}
constexpr bool const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__isMutedBySolo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMutedBySolo;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__isMutedBySolo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMutedBySolo = value;
}
constexpr float_t& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr float_t const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr float_t& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__groupVolumeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupVolumeMultiplier;
}
constexpr float_t const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__groupVolumeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupVolumeMultiplier;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__groupVolumeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupVolumeMultiplier = value;
}
constexpr int32_t& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__lastCommandInputSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCommandInputSample;
}
constexpr int32_t const& VROSC::LoopPlayerPlaybackController::__cordl_internal_get__lastCommandInputSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCommandInputSample;
}
constexpr void VROSC::LoopPlayerPlaybackController::__cordl_internal_set__lastCommandInputSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCommandInputSample = value;
}
inline void VROSC::LoopPlayerPlaybackController::set_Settings(::VROSC::LoopPlayerPlaybackSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "set_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlayerPlaybackSettings* VROSC::LoopPlayerPlaybackController::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Settings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlayerPlaybackSettings*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::set_VisualizationData(::VROSC::LoopVisualizationData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "set_VisualizationData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopVisualizationData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopVisualizationData* VROSC::LoopPlayerPlaybackController::get_VisualizationData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_VisualizationData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopVisualizationData*, false>(this, ___internal_method);
}
inline bool VROSC::LoopPlayerPlaybackController::get_Active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::LoopPlayerPlaybackController::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopPlayer*  loopPlayer, ::VROSC::LoopPlaybackConfig*  config, ::StringW  trackId, int32_t  globalSyncStartOffset, bool  overdub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation, loopPlayer, config, trackId, globalSyncStartOffset, overdub);
}
inline void VROSC::LoopPlayerPlaybackController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::UpdateClip(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  loopLength, bool  overdub, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdateClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, loopLength, overdub, callback);
}
inline void VROSC::LoopPlayerPlaybackController::TogglePlay(bool  play)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, play);
}
inline void VROSC::LoopPlayerPlaybackController::SetSolo(bool  isMutedBySolo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMutedBySolo);
}
inline void VROSC::LoopPlayerPlaybackController::Play(::VROSC::LoopPlaybackConfig*  config, bool  isResuming)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, isResuming);
}
inline void VROSC::LoopPlayerPlaybackController::ResumePlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "ResumePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::Stop(bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instant);
}
inline void VROSC::LoopPlayerPlaybackController::StartPlayback(::VROSC::LoopPlaybackConfig*  config, bool  isResuming)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "StartPlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, isResuming);
}
inline void VROSC::LoopPlayerPlaybackController::UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride*  playbackConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdatePlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playbackConfig);
}
inline void VROSC::LoopPlayerPlaybackController::SetLoopVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetLoopVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopPlayerPlaybackController::UpdateAudioSourceVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "UpdateAudioSourceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::AdjustVolumeToNewGroup(::VROSC::LoopStationGroup*  loopStationGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "AdjustVolumeToNewGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStationGroup);
}
inline ::VROSC::PlaybackProgressUIData VROSC::LoopPlayerPlaybackController::GetPlaybackProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "GetPlaybackProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PlaybackProgressUIData, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::ConfigChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "ConfigChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::SetIsMutedByGroup(bool  muted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "SetIsMutedByGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, muted);
}
inline void VROSC::LoopPlayerPlaybackController::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::LoopPlayerPlaybackController::DebugPrintVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        "DebugPrintVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackController* VROSC::LoopPlayerPlaybackController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackController*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackController::LoopPlayerPlaybackController()   {
}
