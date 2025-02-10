#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingButton.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IAnchoredObject_impl.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_impl.hpp"
#include "VROSC/zzzz__LoopStationRecorder_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__LoopStationRecordingButton_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralArc_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__DrumPadEffectOnSignal_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopStationDataController_def.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingButtonPlayback_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingButtonVisual_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingButton_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingProgress_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__LooperButtonProgressUpdater_def.hpp"
#include "VROSC/zzzz__ResetableMover_def.hpp"
#include "VROSC/zzzz__SelectionBar_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UIScrollableItem_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::*)()>(&::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18aba30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0._SetToData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_SetToData_b__0)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x18aba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        "<SetToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0._SetToData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::*)(::VROSC::Error)>(&::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_SetToData_b__1)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x18abd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        "<SetToData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStationRecordingButton>& VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationRecordingButton> const& VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationRecordingButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationDataController*& VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_get_dataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataController;
}
constexpr ::VROSC::LoopStationDataController* const& VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_get_dataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataController;
}
constexpr void VROSC::LoopStationRecordingButton___c__DisplayClass41_0::__cordl_internal_set_dataController(::VROSC::LoopStationDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_SetToData_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        "<SetToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, anchorPosition, anchorRotation);
}
inline void VROSC::LoopStationRecordingButton___c__DisplayClass41_0::_SetToData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>::get(),
                        "<SetToData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0* VROSC::LoopStationRecordingButton___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0::LoopStationRecordingButton___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.set_RecordingProgressValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(float_t)>(&::VROSC::LoopStationRecordingButton::set_RecordingProgressValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18aa758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "set_RecordingProgressValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.get_RecordingProgressValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::get_RecordingProgressValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18aa760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_RecordingProgressValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.get_LoopPlaybackConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig* (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::get_LoopPlaybackConfig)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a6d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_LoopPlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.get_TransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::get_TransformMover)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18aa768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::Awake)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x18aa784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.ClickInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::ClickData*)>(&::VROSC::LoopStationRecordingButton::ClickInput)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18aaad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ClickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18aab04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18aab4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::OnDestroy)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x18aab54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::LoopStation*)>(&::VROSC::LoopStationRecordingButton::Setup)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x18aaf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.SetPlaybackSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopStationRecordingButton::SetPlaybackSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18ab338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetPlaybackSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.MultiplierChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::UIScrollableItem*)>(&::VROSC::LoopStationRecordingButton::MultiplierChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18ab354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "MultiplierChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIScrollableItem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.UpdateLooperState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::LoopStationLoopHandler_LooperState)>(&::VROSC::LoopStationRecordingButton::UpdateLooperState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18ab370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationLoopHandler_LooperState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.RecorderStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopStationRecordingButton::RecorderStateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18ab4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "RecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::Signal*)>(&::VROSC::LoopStationRecordingButton::NodeBegin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18ab4b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18ab4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.UpdateArc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::UpdateArc)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18ab738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateArc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.UpdateVisually
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::UpdateVisually)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18ab378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateVisually",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(float_t, float_t)>(&::VROSC::LoopStationRecordingButton::SetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18ab6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.ButtonReset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::ResetableMover*)>(&::VROSC::LoopStationRecordingButton::ButtonReset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18ab784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ButtonReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.ButtonMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::ResetableMover*)>(&::VROSC::LoopStationRecordingButton::ButtonMoved)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x18ab7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ButtonMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.SetToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::LoopStationDataController*)>(&::VROSC::LoopStationRecordingButton::SetToData)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18ab0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.LoopStationMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::VROSC::TransformMover*)>(&::VROSC::LoopStationRecordingButton::LoopStationMoved)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18ab894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "LoopStationMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.AddSpatialAnchorToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::StringW)>(&::VROSC::LoopStationRecordingButton::AddSpatialAnchorToData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18ab908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton.RemoveSpatialAnchorFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)(::StringW)>(&::VROSC::LoopStationRecordingButton::RemoveSpatialAnchorFromData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18ab96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecordingButton::*)()>(&::VROSC::LoopStationRecordingButton::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18ab9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStationRecorder>& VROSC::LoopStationRecordingButton::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::UnityW<::VROSC::LoopStationRecorder> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__recorder(::UnityW<::VROSC::LoopStationRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SelectionBar>& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopLengthSelectionBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBar;
}
constexpr ::UnityW<::VROSC::SelectionBar> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopLengthSelectionBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBar;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__loopLengthSelectionBar(::UnityW<::VROSC::SelectionBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopLengthSelectionBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopLengthSelectionBarHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBarHolder;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopLengthSelectionBarHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLengthSelectionBarHolder;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__loopLengthSelectionBarHolder(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopLengthSelectionBarHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ResetableMover>& VROSC::LoopStationRecordingButton::__cordl_internal_get__resetableMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetableMover;
}
constexpr ::UnityW<::VROSC::ResetableMover> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__resetableMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetableMover;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resetableMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::LoopStationRecordingButton::__cordl_internal_get__clickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickInput;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__clickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickInput;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__clickInput(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clickInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& VROSC::LoopStationRecordingButton::__cordl_internal_get__drumPadEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumPadEffect;
}
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__drumPadEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumPadEffect;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__drumPadEffect(::UnityW<::VROSC::DrumPadEffectOnSignal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumPadEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LooperButtonProgressUpdater>& VROSC::LoopStationRecordingButton::__cordl_internal_get__slider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slider;
}
constexpr ::UnityW<::VROSC::LooperButtonProgressUpdater> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__slider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slider;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__slider(::UnityW<::VROSC::LooperButtonProgressUpdater>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::LoopStationRecordingButton::__cordl_internal_get__buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonText;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__buttonText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationRecordingButtonVisual*& VROSC::LoopStationRecordingButton::__cordl_internal_get__visual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visual;
}
constexpr ::VROSC::LoopStationRecordingButtonVisual* const& VROSC::LoopStationRecordingButton::__cordl_internal_get__visual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visual;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__visual(::VROSC::LoopStationRecordingButtonVisual*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visual)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& VROSC::LoopStationRecordingButton::__cordl_internal_get__arc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arc;
}
constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__arc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arc;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__arc(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationRecordingButtonPlayback>& VROSC::LoopStationRecordingButton::__cordl_internal_get__playback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playback;
}
constexpr ::UnityW<::VROSC::LoopStationRecordingButtonPlayback> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__playback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playback;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__playback(::UnityW<::VROSC::LoopStationRecordingButtonPlayback>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::LoopStationRecordingButton::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr float_t const& VROSC::LoopStationRecordingButton::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationRecordingButton::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationRecordingProgress*& VROSC::LoopStationRecordingButton::__cordl_internal_get__recordingProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingProgress;
}
constexpr ::VROSC::LoopStationRecordingProgress* const& VROSC::LoopStationRecordingButton::__cordl_internal_get__recordingProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingProgress;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__recordingProgress(::VROSC::LoopStationRecordingProgress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationLoopHandler_LooperState& VROSC::LoopStationRecordingButton::__cordl_internal_get__looperState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperState;
}
constexpr ::VROSC::LoopStationLoopHandler_LooperState const& VROSC::LoopStationRecordingButton::__cordl_internal_get__looperState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looperState;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__looperState(::VROSC::LoopStationLoopHandler_LooperState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____looperState = value;
}
constexpr ::VROSC::LoopStationRecorder_RecordingState& VROSC::LoopStationRecordingButton::__cordl_internal_get__recordingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingState;
}
constexpr ::VROSC::LoopStationRecorder_RecordingState const& VROSC::LoopStationRecordingButton::__cordl_internal_get__recordingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingState;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__recordingState(::VROSC::LoopStationRecorder_RecordingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingState = value;
}
constexpr float_t& VROSC::LoopStationRecordingButton::__cordl_internal_get__RecordingProgressValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingProgressValue_k__BackingField;
}
constexpr float_t const& VROSC::LoopStationRecordingButton::__cordl_internal_get__RecordingProgressValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingProgressValue_k__BackingField;
}
constexpr void VROSC::LoopStationRecordingButton::__cordl_internal_set__RecordingProgressValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecordingProgressValue_k__BackingField = value;
}
inline void VROSC::LoopStationRecordingButton::set_RecordingProgressValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "set_RecordingProgressValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::LoopStationRecordingButton::get_RecordingProgressValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_RecordingProgressValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopStationRecordingButton::get_LoopPlaybackConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_LoopPlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig*, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::TransformMover> VROSC::LoopStationRecordingButton::get_TransformMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::ClickInput(::VROSC::ClickData*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ClickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void VROSC::LoopStationRecordingButton::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::OnEnable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::Setup(::VROSC::LoopStation*  loopStation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation);
}
inline void VROSC::LoopStationRecordingButton::SetPlaybackSettings(::VROSC::LoopPlaybackConfig*  loopPlaybackConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetPlaybackSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlaybackConfig);
}
inline void VROSC::LoopStationRecordingButton::MultiplierChanged(::VROSC::UIScrollableItem*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "MultiplierChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UIScrollableItem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void VROSC::LoopStationRecordingButton::UpdateLooperState(::VROSC::LoopStationLoopHandler_LooperState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationLoopHandler_LooperState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::LoopStationRecordingButton::RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  recordingState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "RecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingState);
}
inline void VROSC::LoopStationRecordingButton::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::LoopStationRecordingButton::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::UpdateArc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateArc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::UpdateVisually()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "UpdateVisually",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecordingButton::SetValue(float_t  value, float_t  flashValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, flashValue);
}
inline void VROSC::LoopStationRecordingButton::ButtonReset(::VROSC::ResetableMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ButtonReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::LoopStationRecordingButton::ButtonMoved(::VROSC::ResetableMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "ButtonMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::LoopStationRecordingButton::SetToData(::VROSC::LoopStationDataController*  dataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "SetToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataController);
}
inline void VROSC::LoopStationRecordingButton::LoopStationMoved(::VROSC::TransformMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "LoopStationMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::LoopStationRecordingButton::AddSpatialAnchorToData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::LoopStationRecordingButton::RemoveSpatialAnchorFromData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::LoopStationRecordingButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationRecordingButton* VROSC::LoopStationRecordingButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationRecordingButton*>());
}
/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr  VROSC::LoopStationRecordingButton::operator ::VROSC::IAnchoredObject*() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* VROSC::LoopStationRecordingButton::i___VROSC__IAnchoredObject() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecordingButton::LoopStationRecordingButton()   {
}
