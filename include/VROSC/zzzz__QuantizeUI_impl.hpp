#pragma once
// IWYU pragma private; include "VROSC/QuantizeUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__QuantizeUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__TempoSyncDisplay_def.hpp"
#include "VROSC/zzzz__UISlideToggle_def.hpp"
#include "VROSC/zzzz__UISpinner_def.hpp"
//  Writing Method size for method: ::VROSC::QuantizeUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)(::VROSC::InstrumentController*)>(&::VROSC::QuantizeUI::Setup)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x1782c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)()>(&::VROSC::QuantizeUI::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17835a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)()>(&::VROSC::QuantizeUI::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17835a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.CheckIfQuantizationCanBeSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)(double_t)>(&::VROSC::QuantizeUI::CheckIfQuantizationCanBeSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17836a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "CheckIfQuantizationCanBeSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.ApplyInstrumentQuantizeValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)()>(&::VROSC::QuantizeUI::ApplyInstrumentQuantizeValues)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17834bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ApplyInstrumentQuantizeValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.ChangeQuantizeLateHits
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::QuantizeUI::ChangeQuantizeLateHits)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17837ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ChangeQuantizeLateHits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.QuantizeSelectionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)(int32_t)>(&::VROSC::QuantizeUI::QuantizeSelectionChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x17837d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "QuantizeSelectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.ShouldDisableBeatCounter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::QuantizeUI::*)()>(&::VROSC::QuantizeUI::ShouldDisableBeatCounter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17838f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ShouldDisableBeatCounter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI.SetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)(int32_t)>(&::VROSC::QuantizeUI::SetQuantize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x17836c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "SetQuantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::QuantizeUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::QuantizeUI::*)()>(&::VROSC::QuantizeUI::_ctor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1783a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISpinner>& VROSC::QuantizeUI::__cordl_internal_get__quantize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantize;
}
constexpr ::UnityW<::VROSC::UISpinner> const& VROSC::QuantizeUI::__cordl_internal_get__quantize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantize;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__quantize(::UnityW<::VROSC::UISpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quantize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlideToggle>& VROSC::QuantizeUI::__cordl_internal_get__quantizeLateHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeLateHits;
}
constexpr ::UnityW<::VROSC::UISlideToggle> const& VROSC::QuantizeUI::__cordl_internal_get__quantizeLateHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeLateHits;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__quantizeLateHits(::UnityW<::VROSC::UISlideToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quantizeLateHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TempoSyncDisplay>& VROSC::QuantizeUI::__cordl_internal_get__tempoSyncDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoSyncDisplay;
}
constexpr ::UnityW<::VROSC::TempoSyncDisplay> const& VROSC::QuantizeUI::__cordl_internal_get__tempoSyncDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoSyncDisplay;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__tempoSyncDisplay(::UnityW<::VROSC::TempoSyncDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tempoSyncDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InstrumentController>& VROSC::QuantizeUI::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::InstrumentController> const& VROSC::QuantizeUI::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::QuantizeUI::__cordl_internal_get__setQuantization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setQuantization;
}
constexpr int32_t const& VROSC::QuantizeUI::__cordl_internal_get__setQuantization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setQuantization;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__setQuantization(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setQuantization = value;
}
constexpr bool& VROSC::QuantizeUI::__cordl_internal_get__setupDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr bool const& VROSC::QuantizeUI::__cordl_internal_get__setupDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__setupDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupDone = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::QuantizeUI::__cordl_internal_get__quantizeSelectionValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeSelectionValues;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::QuantizeUI::__cordl_internal_get__quantizeSelectionValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeSelectionValues;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__quantizeSelectionValues(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quantizeSelectionValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& VROSC::QuantizeUI::__cordl_internal_get__quantizeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeMap;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& VROSC::QuantizeUI::__cordl_internal_get__quantizeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quantizeMap;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__quantizeMap(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quantizeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::QuantizeUI::__cordl_internal_get__hasStartedBeatCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasStartedBeatCounter;
}
constexpr bool const& VROSC::QuantizeUI::__cordl_internal_get__hasStartedBeatCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasStartedBeatCounter;
}
constexpr void VROSC::QuantizeUI::__cordl_internal_set__hasStartedBeatCounter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasStartedBeatCounter = value;
}
inline void VROSC::QuantizeUI::Setup(::VROSC::InstrumentController*  instrument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument);
}
inline void VROSC::QuantizeUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::QuantizeUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::QuantizeUI::CheckIfQuantizationCanBeSet(double_t  BPM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "CheckIfQuantizationCanBeSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, BPM);
}
inline void VROSC::QuantizeUI::ApplyInstrumentQuantizeValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ApplyInstrumentQuantizeValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::QuantizeUI::ChangeQuantizeLateHits(::VROSC::InputDevice*  inputDevice, bool  quantizeLateHits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ChangeQuantizeLateHits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, quantizeLateHits);
}
inline void VROSC::QuantizeUI::QuantizeSelectionChanged(int32_t  selection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "QuantizeSelectionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selection);
}
inline bool VROSC::QuantizeUI::ShouldDisableBeatCounter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "ShouldDisableBeatCounter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::QuantizeUI::SetQuantize(int32_t  quantize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        "SetQuantize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quantize);
}
inline void VROSC::QuantizeUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::QuantizeUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::QuantizeUI* VROSC::QuantizeUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::QuantizeUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::QuantizeUI::QuantizeUI()   {
}
