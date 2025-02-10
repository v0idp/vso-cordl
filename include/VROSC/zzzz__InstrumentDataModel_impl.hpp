#pragma once
// IWYU pragma private; include "VROSC/InstrumentDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__InstrumentDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentDataModel::*)()>(&::VROSC::InstrumentDataModel::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x183d520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::InstrumentDataModel::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& VROSC::InstrumentDataModel::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TransformDataModel*& VROSC::InstrumentDataModel::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::InstrumentDataModel::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::InstrumentDataModel::__cordl_internal_get_SelectedChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedChannel;
}
constexpr int32_t const& VROSC::InstrumentDataModel::__cordl_internal_get_SelectedChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedChannel;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_SelectedChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedChannel = value;
}
constexpr bool& VROSC::InstrumentDataModel::__cordl_internal_get_Quantize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantize;
}
constexpr bool const& VROSC::InstrumentDataModel::__cordl_internal_get_Quantize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantize;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_Quantize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quantize = value;
}
constexpr float_t& VROSC::InstrumentDataModel::__cordl_internal_get_QuantizeTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeTolerance;
}
constexpr float_t const& VROSC::InstrumentDataModel::__cordl_internal_get_QuantizeTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeTolerance;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_QuantizeTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuantizeTolerance = value;
}
constexpr int32_t& VROSC::InstrumentDataModel::__cordl_internal_get_QuantizeBeatDivision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeBeatDivision;
}
constexpr int32_t const& VROSC::InstrumentDataModel::__cordl_internal_get_QuantizeBeatDivision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuantizeBeatDivision;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_QuantizeBeatDivision(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuantizeBeatDivision = value;
}
constexpr bool& VROSC::InstrumentDataModel::__cordl_internal_get_HasBeenOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasBeenOpened;
}
constexpr bool const& VROSC::InstrumentDataModel::__cordl_internal_get_HasBeenOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasBeenOpened;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_HasBeenOpened(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasBeenOpened = value;
}
constexpr float_t& VROSC::InstrumentDataModel::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::InstrumentDataModel::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::InstrumentDataModel::__cordl_internal_get_SpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::InstrumentDataModel::__cordl_internal_get_SpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr void VROSC::InstrumentDataModel::__cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InstrumentDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentDataModel* VROSC::InstrumentDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentDataModel::InstrumentDataModel()   {
}
