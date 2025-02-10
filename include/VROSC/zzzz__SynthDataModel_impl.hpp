#pragma once
// IWYU pragma private; include "VROSC/SynthDataModel.hpp"
#include "VROSC/zzzz__InstrumentDataModel_impl.hpp"
#include "VROSC/zzzz__SynthDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__OctaveData_def.hpp"
#include "VROSC/zzzz__ScaleData_def.hpp"
#include "VROSC/zzzz__SynthData_def.hpp"
//  Writing Method size for method: ::VROSC::SynthDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SynthDataModel::*)()>(&::VROSC::SynthDataModel::get_Key)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1844158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataModel::*)()>(&::VROSC::SynthDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18441a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataModel::*)()>(&::VROSC::SynthDataModel::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1841210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataModel.CopyOldSynthData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataModel::*)(::VROSC::SynthData*)>(&::VROSC::SynthDataModel::CopyOldSynthData)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1841354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                        "CopyOldSynthData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthData*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::OctaveData*& VROSC::SynthDataModel::__cordl_internal_get_OctaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OctaveData;
}
constexpr ::VROSC::OctaveData* const& VROSC::SynthDataModel::__cordl_internal_get_OctaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OctaveData;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_OctaveData(::VROSC::OctaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OctaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*& VROSC::SynthDataModel::__cordl_internal_get_ScalesData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalesData;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>* const& VROSC::SynthDataModel::__cordl_internal_get_ScalesData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalesData;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_ScalesData(::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScalesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SynthDataModel::__cordl_internal_get_SelectedPatchName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedPatchName;
}
constexpr ::StringW const& VROSC::SynthDataModel::__cordl_internal_get_SelectedPatchName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedPatchName;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_SelectedPatchName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPatchName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::SynthDataModel::__cordl_internal_get_PatchesFilenames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchesFilenames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::SynthDataModel::__cordl_internal_get_PatchesFilenames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchesFilenames;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_PatchesFilenames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PatchesFilenames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SynthDataModel::__cordl_internal_get_FrameIsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameIsActive;
}
constexpr bool const& VROSC::SynthDataModel::__cordl_internal_get_FrameIsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameIsActive;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_FrameIsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrameIsActive = value;
}
constexpr bool& VROSC::SynthDataModel::__cordl_internal_get_ArpeggiatorLinkHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArpeggiatorLinkHands;
}
constexpr bool const& VROSC::SynthDataModel::__cordl_internal_get_ArpeggiatorLinkHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArpeggiatorLinkHands;
}
constexpr void VROSC::SynthDataModel::__cordl_internal_set_ArpeggiatorLinkHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ArpeggiatorLinkHands = value;
}
inline ::StringW VROSC::SynthDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataModel::CopyOldSynthData(::VROSC::SynthData*  oldSynthData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataModel*>::get(),
                        "CopyOldSynthData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldSynthData);
}
inline ::VROSC::SynthDataModel* VROSC::SynthDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataModel::SynthDataModel()   {
}
