#pragma once
// IWYU pragma private; include "VROSC/ToolDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__ToolDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::ToolDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToolDataModel::*)()>(&::VROSC::ToolDataModel::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18737f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToolDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TransformDataModel*& VROSC::ToolDataModel::__cordl_internal_get_TransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::ToolDataModel::__cordl_internal_get_TransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformData;
}
constexpr void VROSC::ToolDataModel::__cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ToolDataModel::__cordl_internal_get_HasBeenOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasBeenOpened;
}
constexpr bool const& VROSC::ToolDataModel::__cordl_internal_get_HasBeenOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasBeenOpened;
}
constexpr void VROSC::ToolDataModel::__cordl_internal_set_HasBeenOpened(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasBeenOpened = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::ToolDataModel::__cordl_internal_get_SpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::ToolDataModel::__cordl_internal_get_SpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpatialAnchorsUUIDs;
}
constexpr void VROSC::ToolDataModel::__cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ToolDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToolDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ToolDataModel* VROSC::ToolDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ToolDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::ToolDataModel::ToolDataModel()   {
}
