#pragma once
// IWYU pragma private; include "VROSC/HelmWrapper.hpp"
#include "VROSC/zzzz__AudioHelmInstrumentWrapper_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__HelmWrapper_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "AudioHelm/zzzz__HelmPatch_def.hpp"
#include "AudioHelm/zzzz__Param_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
//  Writing Method size for method: ::VROSC::HelmWrapper.get_CurrentPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::HelmPatchFormat* (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::get_CurrentPatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "get_CurrentPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.get_AssignedHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HandType (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::get_AssignedHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c8890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "get_AssignedHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.set_AssignedHand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(::VROSC::HandType)>(&::VROSC::HelmWrapper::set_AssignedHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c8898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "set_AssignedHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::Setup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17c88a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.LoadPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(::VROSC::PatchSettings*)>(&::VROSC::HelmWrapper::LoadPatch)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17c891c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "LoadPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.ReloadPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::ReloadPatch)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17c8aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "ReloadPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.ApplyGlobalOverloadSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::ApplyGlobalOverloadSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17c8a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "ApplyGlobalOverloadSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.SetParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(::AudioHelm::Param, float_t)>(&::VROSC::HelmWrapper::SetParameterValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "SetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.SetParameterPercent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(::AudioHelm::Param, float_t)>(&::VROSC::HelmWrapper::SetParameterPercent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17c8b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "SetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::AllNotesOff)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8b60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.NoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(int32_t)>(&::VROSC::HelmWrapper::NoteOff)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.NoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(int32_t, float_t, double_t, float_t, float_t)>(&::VROSC::HelmWrapper::NoteOn)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x17c8b98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.SetPitchBend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)(float_t)>(&::VROSC::HelmWrapper::SetPitchBend)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8e7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::IsPlaying)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17c8e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper.UsesPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::HelmWrapper::*)(::VROSC::PatchSettings*)>(&::VROSC::HelmWrapper::UsesPatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17c8efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "UsesPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmWrapper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmWrapper::*)()>(&::VROSC::HelmWrapper::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17c8f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& VROSC::HelmWrapper::__cordl_internal_get__noteHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteHistory;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& VROSC::HelmWrapper::__cordl_internal_get__noteHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteHistory;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__noteHistory(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::HelmWrapper::__cordl_internal_get__noteHistoryWritePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteHistoryWritePosition;
}
constexpr int32_t const& VROSC::HelmWrapper::__cordl_internal_get__noteHistoryWritePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteHistoryWritePosition;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__noteHistoryWritePosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noteHistoryWritePosition = value;
}
constexpr ::UnityW<::AudioHelm::HelmController>& VROSC::HelmWrapper::__cordl_internal_get__helmController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmController;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& VROSC::HelmWrapper::__cordl_internal_get__helmController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmController;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__helmController(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helmController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::AudioHelm::HelmPatch>& VROSC::HelmWrapper::__cordl_internal_get__helmPatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmPatch;
}
constexpr ::UnityW<::AudioHelm::HelmPatch> const& VROSC::HelmWrapper::__cordl_internal_get__helmPatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmPatch;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__helmPatch(::UnityW<::AudioHelm::HelmPatch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helmPatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PatchSettings*& VROSC::HelmWrapper::__cordl_internal_get__patchSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchSettings;
}
constexpr ::VROSC::PatchSettings* const& VROSC::HelmWrapper::__cordl_internal_get__patchSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patchSettings;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__patchSettings(::VROSC::PatchSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____patchSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HandType& VROSC::HelmWrapper::__cordl_internal_get__AssignedHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssignedHand_k__BackingField;
}
constexpr ::VROSC::HandType const& VROSC::HelmWrapper::__cordl_internal_get__AssignedHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssignedHand_k__BackingField;
}
constexpr void VROSC::HelmWrapper::__cordl_internal_set__AssignedHand_k__BackingField(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AssignedHand_k__BackingField = value;
}
inline void VROSC::HelmWrapper::setStaticF_Polyphony(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Polyphony", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get>(std::forward<int32_t>(value));
}
inline int32_t VROSC::HelmWrapper::getStaticF_Polyphony()  {
return ::cordl_internals::getStaticField<int32_t, "Polyphony", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get>();
}
inline ::AudioHelm::HelmPatchFormat* VROSC::HelmWrapper::get_CurrentPatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "get_CurrentPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::HelmPatchFormat*, false>(this, ___internal_method);
}
inline ::VROSC::HandType VROSC::HelmWrapper::get_AssignedHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "get_AssignedHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::HandType, false>(this, ___internal_method);
}
inline void VROSC::HelmWrapper::set_AssignedHand(::VROSC::HandType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "set_AssignedHand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::HelmWrapper::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HelmWrapper::LoadPatch(::VROSC::PatchSettings*  patchSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "LoadPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patchSettings);
}
inline void VROSC::HelmWrapper::ReloadPatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "ReloadPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HelmWrapper::ApplyGlobalOverloadSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "ApplyGlobalOverloadSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HelmWrapper::SetParameterValue(::AudioHelm::Param  parameter, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "SetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, newValue);
}
inline void VROSC::HelmWrapper::SetParameterPercent(::AudioHelm::Param  parameter, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "SetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, newValue);
}
inline void VROSC::HelmWrapper::AllNotesOff()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HelmWrapper::NoteOff(int32_t  note)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void VROSC::HelmWrapper::NoteOn(int32_t  note, float_t  velocity, double_t  predictedDspTime, float_t  pitch, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, predictedDspTime, pitch, volume);
}
inline void VROSC::HelmWrapper::SetPitchBend(float_t  pitchBendValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitchBendValue);
}
inline bool VROSC::HelmWrapper::IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::HelmWrapper::UsesPatch(::VROSC::PatchSettings*  patchSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        "UsesPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, patchSettings);
}
inline void VROSC::HelmWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::HelmWrapper* VROSC::HelmWrapper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::HelmWrapper*>());
}
// Ctor Parameters []
constexpr ::VROSC::HelmWrapper::HelmWrapper()   {
}
