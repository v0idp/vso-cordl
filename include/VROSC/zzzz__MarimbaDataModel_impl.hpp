#pragma once
// IWYU pragma private; include "VROSC/MarimbaDataModel.hpp"
#include "VROSC/zzzz__SynthDataModel_impl.hpp"
#include "VROSC/zzzz__MarimbaDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::VROSC::MarimbaDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MarimbaDataModel::*)()>(&::VROSC::MarimbaDataModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x183e2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::MarimbaDataModel::__cordl_internal_get_SequencerReferenceNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequencerReferenceNote;
}
constexpr int32_t const& VROSC::MarimbaDataModel::__cordl_internal_get_SequencerReferenceNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequencerReferenceNote;
}
constexpr void VROSC::MarimbaDataModel::__cordl_internal_set_SequencerReferenceNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SequencerReferenceNote = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& VROSC::MarimbaDataModel::__cordl_internal_get_SequenceSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceSteps;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& VROSC::MarimbaDataModel::__cordl_internal_get_SequenceSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SequenceSteps;
}
constexpr void VROSC::MarimbaDataModel::__cordl_internal_set_SequenceSteps(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SequenceSteps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::MarimbaDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MarimbaDataModel* VROSC::MarimbaDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MarimbaDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::MarimbaDataModel::MarimbaDataModel()   {
}
