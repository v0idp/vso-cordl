#pragma once
// IWYU pragma private; include "VROSC/SessionSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SessionSaveData_def.hpp"
//  Writing Method size for method: ::VROSC::SessionSaveData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionSaveData::*)()>(&::VROSC::SessionSaveData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x175cd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SessionSaveData::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& VROSC::SessionSaveData::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionSaveData::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& VROSC::SessionSaveData::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionSaveData::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& VROSC::SessionSaveData::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& VROSC::SessionSaveData::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& VROSC::SessionSaveData::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_Tags(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SessionSaveData::__cordl_internal_get_IsCloud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCloud;
}
constexpr bool const& VROSC::SessionSaveData::__cordl_internal_get_IsCloud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCloud;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_IsCloud(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsCloud = value;
}
constexpr bool& VROSC::SessionSaveData::__cordl_internal_get_IsShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShared;
}
constexpr bool const& VROSC::SessionSaveData::__cordl_internal_get_IsShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShared;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_IsShared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsShared = value;
}
constexpr bool& VROSC::SessionSaveData::__cordl_internal_get_IsNewSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsNewSave;
}
constexpr bool const& VROSC::SessionSaveData::__cordl_internal_get_IsNewSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsNewSave;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_IsNewSave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsNewSave = value;
}
constexpr bool& VROSC::SessionSaveData::__cordl_internal_get_HasPositionalData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPositionalData;
}
constexpr bool const& VROSC::SessionSaveData::__cordl_internal_get_HasPositionalData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasPositionalData;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_HasPositionalData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasPositionalData = value;
}
constexpr bool& VROSC::SessionSaveData::__cordl_internal_get_IsSavedAsDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSavedAsDefault;
}
constexpr bool const& VROSC::SessionSaveData::__cordl_internal_get_IsSavedAsDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSavedAsDefault;
}
constexpr void VROSC::SessionSaveData::__cordl_internal_set_IsSavedAsDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsSavedAsDefault = value;
}
inline void VROSC::SessionSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionSaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionSaveData* VROSC::SessionSaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionSaveData*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionSaveData::SessionSaveData()   {
}
