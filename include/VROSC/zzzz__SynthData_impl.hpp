#pragma once
// IWYU pragma private; include "VROSC/SynthData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SynthData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__OctaveData_def.hpp"
#include "VROSC/zzzz__ScaleData_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::SynthData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthData::*)()>(&::VROSC::SynthData::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1844c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SynthData::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& VROSC::SynthData::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::SynthData::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataModel*& VROSC::SynthData::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::SynthData::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::SynthData::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::OctaveData*& VROSC::SynthData::__cordl_internal_get_OctaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OctaveData;
}
constexpr ::VROSC::OctaveData* const& VROSC::SynthData::__cordl_internal_get_OctaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OctaveData;
}
constexpr void VROSC::SynthData::__cordl_internal_set_OctaveData(::VROSC::OctaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OctaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*& VROSC::SynthData::__cordl_internal_get_ScalesData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalesData;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>* const& VROSC::SynthData::__cordl_internal_get_ScalesData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalesData;
}
constexpr void VROSC::SynthData::__cordl_internal_set_ScalesData(::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScalesData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SynthData::__cordl_internal_get_SelectedPatchName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedPatchName;
}
constexpr ::StringW const& VROSC::SynthData::__cordl_internal_get_SelectedPatchName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedPatchName;
}
constexpr void VROSC::SynthData::__cordl_internal_set_SelectedPatchName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPatchName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::SynthData::__cordl_internal_get_PatchesFilenames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchesFilenames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::SynthData::__cordl_internal_get_PatchesFilenames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchesFilenames;
}
constexpr void VROSC::SynthData::__cordl_internal_set_PatchesFilenames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PatchesFilenames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SynthData::__cordl_internal_get_Quantize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantize;
}
constexpr bool const& VROSC::SynthData::__cordl_internal_get_Quantize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantize;
}
constexpr void VROSC::SynthData::__cordl_internal_set_Quantize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quantize = value;
}
constexpr float_t& VROSC::SynthData::__cordl_internal_get_QuantizeTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeTolerance;
}
constexpr float_t const& VROSC::SynthData::__cordl_internal_get_QuantizeTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeTolerance;
}
constexpr void VROSC::SynthData::__cordl_internal_set_QuantizeTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuantizeTolerance = value;
}
constexpr int32_t& VROSC::SynthData::__cordl_internal_get_QuantizeBeatDivision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeBeatDivision;
}
constexpr int32_t const& VROSC::SynthData::__cordl_internal_get_QuantizeBeatDivision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeBeatDivision;
}
constexpr void VROSC::SynthData::__cordl_internal_set_QuantizeBeatDivision(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuantizeBeatDivision = value;
}
inline void VROSC::SynthData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SynthData* VROSC::SynthData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthData*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthData::SynthData()   {
}
