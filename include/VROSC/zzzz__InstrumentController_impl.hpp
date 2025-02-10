#pragma once
// IWYU pragma private; include "VROSC/InstrumentController.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__IAnchoredObject_impl.hpp"
#include "VROSC/zzzz__WidgetController_impl.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InfoPanel_def.hpp"
#include "VROSC/zzzz__InstrumentControlPanelUI_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
#include "VROSC/zzzz__InstrumentFrameController_def.hpp"
#include "VROSC/zzzz__InstrumentSettings_def.hpp"
#include "VROSC/zzzz__InstrumentVolumeController_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentController.get_InstrumentSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InstrumentSettings> (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_InstrumentSettings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x170d48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_InstrumentSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_VolumeController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InstrumentVolumeController> (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_VolumeController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170d504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_VolumeController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_CurrentPatchSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_CurrentPatchSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170d50c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_CurrentChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_CurrentChannel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170d514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_UsingExternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_UsingExternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x170d530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_UsingExternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_Quantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_Quantize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170d58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_Quantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_QuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_QuantizeTolerance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170d5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_QuantizeTolerance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.get_QuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::get_QuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170d5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_QuantizeBeatDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::Setup)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x170d5f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetActivationPositions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::UnityEngine::Vector3, bool)>(&::VROSC::InstrumentController::SetActivationPositions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x170d790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::OnDestroy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x170d898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::VROSC::UserDataControllers*)>(&::VROSC::InstrumentController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x170dbc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.AddSpatialAnchorToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::StringW)>(&::VROSC::InstrumentController::AddSpatialAnchorToData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170df4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.RemoveSpatialAnchorFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::StringW)>(&::VROSC::InstrumentController::RemoveSpatialAnchorFromData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170df68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.GetTransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::GetTransformMover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170df84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "GetTransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::Toggle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x170df8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(int32_t, float_t, ::System::Object*, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::InstrumentController::PlayNote)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x170e018;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(int32_t, ::System::Object*, ::VROSC::HandType)>(&::VROSC::InstrumentController::StopNote)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x170e168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::VROSC::WidgetSettings_Identifier, float_t, int32_t, ::VROSC::HandType)>(&::VROSC::InstrumentController::SetParameter)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x170e264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(float_t)>(&::VROSC::InstrumentController::SetVolume)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x170e32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.UpdateOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::UpdateOutput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170e3c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SynthesizerSourceChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(bool)>(&::VROSC::InstrumentController::SynthesizerSourceChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x170e3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.TransformChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::VROSC::TransformMover*)>(&::VROSC::InstrumentController::TransformChanged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x170e400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(bool)>(&::VROSC::InstrumentController::SetQuantize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x170e560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetQuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(float_t)>(&::VROSC::InstrumentController::SetQuantizeTolerance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170e588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantizeTolerance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetQuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(int32_t)>(&::VROSC::InstrumentController::SetQuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170e5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantizeBeatDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetInstrumentFrameActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(bool)>(&::VROSC::InstrumentController::SetInstrumentFrameActive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x170e5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetInstrumentFrameActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController.SetSound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(int32_t)>(&::VROSC::InstrumentController::SetSound)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x170e628;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)()>(&::VROSC::InstrumentController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170e6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController._UserDataLoaded_b__30_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::VROSC::InstrumentController::_UserDataLoaded_b__30_0)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x170e748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "<UserDataLoaded>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentController._UserDataLoaded_b__30_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentController::*)(::VROSC::Error)>(&::VROSC::InstrumentController::_UserDataLoaded_b__30_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x170e8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "<UserDataLoaded>b__30_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InstrumentControlPanelUI>& VROSC::InstrumentController::__cordl_internal_get__controlPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanelUI;
}
constexpr ::UnityW<::VROSC::InstrumentControlPanelUI> const& VROSC::InstrumentController::__cordl_internal_get__controlPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanelUI;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__controlPanelUI(::UnityW<::VROSC::InstrumentControlPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controlPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InfoPanel>& VROSC::InstrumentController::__cordl_internal_get__infoPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr ::UnityW<::VROSC::InfoPanel> const& VROSC::InstrumentController::__cordl_internal_get__infoPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____infoPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::InstrumentController::__cordl_internal_get__spawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::InstrumentController::__cordl_internal_get__spawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPosition;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__spawnPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InstrumentFrameController>& VROSC::InstrumentController::__cordl_internal_get__frameController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameController;
}
constexpr ::UnityW<::VROSC::InstrumentFrameController> const& VROSC::InstrumentController::__cordl_internal_get__frameController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameController;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__frameController(::UnityW<::VROSC::InstrumentFrameController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____frameController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InstrumentVolumeController>& VROSC::InstrumentController::__cordl_internal_get__volumeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr ::UnityW<::VROSC::InstrumentVolumeController> const& VROSC::InstrumentController::__cordl_internal_get__volumeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeController;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__volumeController(::UnityW<::VROSC::InstrumentVolumeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::InstrumentController::__cordl_internal_get__spawnOriginalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnOriginalPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::InstrumentController::__cordl_internal_get__spawnOriginalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnOriginalPosition;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__spawnOriginalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnOriginalPosition = value;
}
constexpr bool& VROSC::InstrumentController::__cordl_internal_get__spawnPointSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPointSet;
}
constexpr bool const& VROSC::InstrumentController::__cordl_internal_get__spawnPointSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnPointSet;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__spawnPointSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnPointSet = value;
}
constexpr ::VROSC::InstrumentDataController*& VROSC::InstrumentController::__cordl_internal_get__dataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr ::VROSC::InstrumentDataController* const& VROSC::InstrumentController::__cordl_internal_get__dataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set__dataController(::VROSC::InstrumentDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::InstrumentController::__cordl_internal_get_OnUseExternalChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUseExternalChanged;
}
constexpr ::System::Action_1<bool>* const& VROSC::InstrumentController::__cordl_internal_get_OnUseExternalChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUseExternalChanged;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set_OnUseExternalChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnUseExternalChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>*& VROSC::InstrumentController::__cordl_internal_get_OnPlayNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayNote;
}
constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>* const& VROSC::InstrumentController::__cordl_internal_get_OnPlayNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayNote;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set_OnPlayNote(::System::Action_2<::VROSC::HandType,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPlayNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>*& VROSC::InstrumentController::__cordl_internal_get_OnStopNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopNote;
}
constexpr ::System::Action_2<::VROSC::HandType,::System::Object*>* const& VROSC::InstrumentController::__cordl_internal_get_OnStopNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopNote;
}
constexpr void VROSC::InstrumentController::__cordl_internal_set_OnStopNote(::System::Action_2<::VROSC::HandType,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStopNote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::InstrumentSettings> VROSC::InstrumentController::get_InstrumentSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_InstrumentSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InstrumentSettings>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InstrumentVolumeController> VROSC::InstrumentController::get_VolumeController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_VolumeController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InstrumentVolumeController>, false>(this, ___internal_method);
}
inline ::VROSC::PatchSettings* VROSC::InstrumentController::get_CurrentPatchSettings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PatchSettings*, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentController::get_CurrentChannel()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool VROSC::InstrumentController::get_UsingExternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_UsingExternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::InstrumentController::get_Quantize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_Quantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::InstrumentController::get_QuantizeTolerance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_QuantizeTolerance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentController::get_QuantizeBeatDivision()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "get_QuantizeBeatDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::SetActivationPositions(::UnityEngine::Vector3  pressPos, bool  active)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pressPos, active);
}
inline void VROSC::InstrumentController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::InstrumentController::AddSpatialAnchorToData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::InstrumentController::RemoveSpatialAnchorFromData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline ::UnityW<::VROSC::TransformMover> VROSC::InstrumentController::GetTransformMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "GetTransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::Toggle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::PlayNote(int32_t  note, float_t  velocity, ::System::Object*  source, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, source, predictedDspTime, handType, pitch, volume);
}
inline void VROSC::InstrumentController::StopNote(int32_t  note, ::System::Object*  source, ::VROSC::HandType  handType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, source, handType);
}
inline void VROSC::InstrumentController::SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, ::VROSC::HandType  handType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, parameterValue, parameterId, handType);
}
inline void VROSC::InstrumentController::SetVolume(float_t  volume)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::InstrumentController::UpdateOutput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::SynthesizerSourceChanged(bool  useExternal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useExternal);
}
inline void VROSC::InstrumentController::TransformChanged(::VROSC::TransformMover*  mover)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::InstrumentController::SetQuantize(bool  quantize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quantize);
}
inline void VROSC::InstrumentController::SetQuantizeTolerance(float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantizeTolerance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tolerance);
}
inline void VROSC::InstrumentController::SetQuantizeBeatDivision(int32_t  division)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetQuantizeBeatDivision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, division);
}
inline void VROSC::InstrumentController::SetInstrumentFrameActive(bool  frameActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "SetInstrumentFrameActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameActive);
}
inline void VROSC::InstrumentController::SetSound(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void VROSC::InstrumentController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentController::_UserDataLoaded_b__30_0(bool  success, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "<UserDataLoaded>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, position, rotation);
}
inline void VROSC::InstrumentController::_UserDataLoaded_b__30_1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentController*>::get(),
                        "<UserDataLoaded>b__30_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::InstrumentController* VROSC::InstrumentController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentController*>());
}
/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr  VROSC::InstrumentController::operator ::VROSC::IAnchoredObject*() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* VROSC::InstrumentController::i___VROSC__IAnchoredObject() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentController::InstrumentController()   {
}
