#pragma once
// IWYU pragma private; include "VROSC/ScaleData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Scale_impl.hpp"
#include "VROSC/zzzz__ScaleData_def.hpp"
//  Writing Method size for method: ::VROSC::ScaleData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleData::*)()>(&::VROSC::ScaleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1841d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::ScaleData::__cordl_internal_get_StartNoteOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNoteOffset;
}
constexpr int32_t const& VROSC::ScaleData::__cordl_internal_get_StartNoteOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNoteOffset;
}
constexpr void VROSC::ScaleData::__cordl_internal_set_StartNoteOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartNoteOffset = value;
}
constexpr ::VROSC::Scale& VROSC::ScaleData::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::VROSC::Scale const& VROSC::ScaleData::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void VROSC::ScaleData::__cordl_internal_set_Scale(::VROSC::Scale  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr bool& VROSC::ScaleData::__cordl_internal_get_Locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr bool const& VROSC::ScaleData::__cordl_internal_get_Locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr void VROSC::ScaleData::__cordl_internal_set_Locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locked = value;
}
constexpr bool& VROSC::ScaleData::__cordl_internal_get_Customized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Customized;
}
constexpr bool const& VROSC::ScaleData::__cordl_internal_get_Customized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Customized;
}
constexpr void VROSC::ScaleData::__cordl_internal_set_Customized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Customized = value;
}
inline void VROSC::ScaleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScaleData* VROSC::ScaleData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScaleData*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScaleData::ScaleData()   {
}
