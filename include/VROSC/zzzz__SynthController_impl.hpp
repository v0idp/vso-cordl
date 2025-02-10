#pragma once
// IWYU pragma private; include "VROSC/SynthController.hpp"
#include "VROSC/zzzz__InstrumentController_impl.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__EffectsPanel_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__ParameterLinksPreset_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__ScalePanelUI_def.hpp"
#include "VROSC/zzzz__ScalePreset_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__SynthControlPanelUI_def.hpp"
#include "VROSC/zzzz__SynthDataController_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::SynthController.get_SynthDataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SynthDataController* (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_SynthDataController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x170ea00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_SynthDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_CurrentChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_CurrentChannel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170ea78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_DefaultPatchSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_DefaultPatchSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170ea94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_DefaultPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_CurrentPatchSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_CurrentPatchSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170eab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_CurrentOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_CurrentOctave)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170eacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_CurrentOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_MinOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_MinOctave)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170eae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.get_LinkHands
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthController::*)()>(&::VROSC::SynthController::get_LinkHands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x170eb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_LinkHands",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x170eb94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x170eca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(::VROSC::UserDataControllers*)>(&::VROSC::SynthController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x170eda8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SynthsDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(::VROSC::InstrumentDataController*)>(&::VROSC::SynthController::SynthsDataLoaded)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x170ee10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SynthsDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SetSound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(int32_t)>(&::VROSC::SynthController::SetSound)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x170ef7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SendPatchAnalytics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::SendPatchAnalytics)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x170f084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SendPatchAnalytics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SetNextOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::SetNextOctave)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170f14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SetPreviousOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::SetPreviousOctave)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170f168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.UpdateOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::UpdateOutput)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x170f184;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.ScalePresetChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(::VROSC::ScalePreset*, ::VROSC::Note)>(&::VROSC::SynthController::ScalePresetChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x170f204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "ScalePresetChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.SetInteractionValToHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(::VROSC::HandType, float_t)>(&::VROSC::SynthController::SetInteractionValToHand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x170f2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetInteractionValToHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::Toggle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x170f310;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController.UpdateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)(::VROSC::Signal*)>(&::VROSC::SynthController::UpdateParameters)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x170f38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "UpdateParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthController::*)()>(&::VROSC::SynthController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170f62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ScalePanelUI>& VROSC::SynthController::__cordl_internal_get__scalePanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalePanelUI;
}
constexpr ::UnityW<::VROSC::ScalePanelUI> const& VROSC::SynthController::__cordl_internal_get__scalePanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalePanelUI;
}
constexpr void VROSC::SynthController::__cordl_internal_set__scalePanelUI(::UnityW<::VROSC::ScalePanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scalePanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::EffectsPanel>& VROSC::SynthController::__cordl_internal_get__effectspanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectspanel;
}
constexpr ::UnityW<::VROSC::EffectsPanel> const& VROSC::SynthController::__cordl_internal_get__effectspanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectspanel;
}
constexpr void VROSC::SynthController::__cordl_internal_set__effectspanel(::UnityW<::VROSC::EffectsPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectspanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SynthControlPanelUI>& VROSC::SynthController::__cordl_internal_get__synthControlPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synthControlPanelUI;
}
constexpr ::UnityW<::VROSC::SynthControlPanelUI> const& VROSC::SynthController::__cordl_internal_get__synthControlPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synthControlPanelUI;
}
constexpr void VROSC::SynthController::__cordl_internal_set__synthControlPanelUI(::UnityW<::VROSC::SynthControlPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____synthControlPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset>& VROSC::SynthController::__cordl_internal_get__defaultPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPreset;
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& VROSC::SynthController::__cordl_internal_get__defaultPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPreset;
}
constexpr void VROSC::SynthController::__cordl_internal_set__defaultPreset(::UnityW<::VROSC::ParameterLinksPreset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset>& VROSC::SynthController::__cordl_internal_get__classicPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classicPreset;
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& VROSC::SynthController::__cordl_internal_get__classicPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classicPreset;
}
constexpr void VROSC::SynthController::__cordl_internal_set__classicPreset(::UnityW<::VROSC::ParameterLinksPreset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____classicPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset>& VROSC::SynthController::__cordl_internal_get__externalPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalPreset;
}
constexpr ::UnityW<::VROSC::ParameterLinksPreset> const& VROSC::SynthController::__cordl_internal_get__externalPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalPreset;
}
constexpr void VROSC::SynthController::__cordl_internal_set__externalPreset(::UnityW<::VROSC::ParameterLinksPreset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SynthController::__cordl_internal_get__useMallets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMallets;
}
constexpr bool const& VROSC::SynthController::__cordl_internal_get__useMallets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMallets;
}
constexpr void VROSC::SynthController::__cordl_internal_set__useMallets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMallets = value;
}
constexpr ::System::Action*& VROSC::SynthController::__cordl_internal_get_OnPatchChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPatchChanged;
}
constexpr ::System::Action* const& VROSC::SynthController::__cordl_internal_get_OnPatchChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPatchChanged;
}
constexpr void VROSC::SynthController::__cordl_internal_set_OnPatchChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPatchChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::SynthDataController* VROSC::SynthController::get_SynthDataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_SynthDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SynthDataController*, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthController::get_CurrentChannel()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::VROSC::PatchSettings* VROSC::SynthController::get_DefaultPatchSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_DefaultPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PatchSettings*, false>(this, ___internal_method);
}
inline ::VROSC::PatchSettings* VROSC::SynthController::get_CurrentPatchSettings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PatchSettings*, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthController::get_CurrentOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_CurrentOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthController::get_MinOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool VROSC::SynthController::get_LinkHands()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "get_LinkHands",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::SynthController::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::SynthController::SynthsDataLoaded(::VROSC::InstrumentDataController*  dataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SynthsDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataController);
}
inline void VROSC::SynthController::SetSound(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void VROSC::SynthController::SendPatchAnalytics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SendPatchAnalytics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::SetNextOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::SetPreviousOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::UpdateOutput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::ScalePresetChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "ScalePresetChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ScalePreset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scalePreset, key);
}
inline void VROSC::SynthController::SetInteractionValToHand(::VROSC::HandType  handType, float_t  parameterValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "SetInteractionValToHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handType, parameterValue);
}
inline void VROSC::SynthController::Toggle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthController::UpdateParameters(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        "UpdateParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SynthController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SynthController* VROSC::SynthController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthController::SynthController()   {
}
