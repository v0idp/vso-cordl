#pragma once
// IWYU pragma private; include "VROSC/OctaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__OctaveData_def.hpp"
//  Writing Method size for method: ::VROSC::OctaveData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OctaveData::*)()>(&::VROSC::OctaveData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1841d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OctaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::OctaveData::__cordl_internal_get_SelectedOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedOctave;
}
constexpr int32_t const& VROSC::OctaveData::__cordl_internal_get_SelectedOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedOctave;
}
constexpr void VROSC::OctaveData::__cordl_internal_set_SelectedOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedOctave = value;
}
constexpr int32_t& VROSC::OctaveData::__cordl_internal_get_MinOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinOctave;
}
constexpr int32_t const& VROSC::OctaveData::__cordl_internal_get_MinOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinOctave;
}
constexpr void VROSC::OctaveData::__cordl_internal_set_MinOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinOctave = value;
}
constexpr int32_t& VROSC::OctaveData::__cordl_internal_get_MaxOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxOctave;
}
constexpr int32_t const& VROSC::OctaveData::__cordl_internal_get_MaxOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxOctave;
}
constexpr void VROSC::OctaveData::__cordl_internal_set_MaxOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxOctave = value;
}
inline void VROSC::OctaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OctaveData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OctaveData* VROSC::OctaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OctaveData*>());
}
// Ctor Parameters []
constexpr ::VROSC::OctaveData::OctaveData()   {
}
