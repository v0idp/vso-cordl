#pragma once
// IWYU pragma private; include "VROSC/ClustrDataModel.hpp"
#include "VROSC/zzzz__SynthDataModel_impl.hpp"
#include "VROSC/zzzz__ClustrDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::ClustrDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrDataModel::*)()>(&::VROSC::ClustrDataModel::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x183cff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::ClustrDataModel::__cordl_internal_get_Strum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strum;
}
constexpr bool const& VROSC::ClustrDataModel::__cordl_internal_get_Strum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Strum;
}
constexpr void VROSC::ClustrDataModel::__cordl_internal_set_Strum(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Strum = value;
}
constexpr int32_t& VROSC::ClustrDataModel::__cordl_internal_get_StrumSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StrumSpeed;
}
constexpr int32_t const& VROSC::ClustrDataModel::__cordl_internal_get_StrumSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StrumSpeed;
}
constexpr void VROSC::ClustrDataModel::__cordl_internal_set_StrumSpeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StrumSpeed = value;
}
constexpr bool& VROSC::ClustrDataModel::__cordl_internal_get_AvoidTritone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidTritone;
}
constexpr bool const& VROSC::ClustrDataModel::__cordl_internal_get_AvoidTritone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidTritone;
}
constexpr void VROSC::ClustrDataModel::__cordl_internal_set_AvoidTritone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvoidTritone = value;
}
constexpr int32_t& VROSC::ClustrDataModel::__cordl_internal_get_BassOctave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BassOctave;
}
constexpr int32_t const& VROSC::ClustrDataModel::__cordl_internal_get_BassOctave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BassOctave;
}
constexpr void VROSC::ClustrDataModel::__cordl_internal_set_BassOctave(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BassOctave = value;
}
inline void VROSC::ClustrDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ClustrDataModel* VROSC::ClustrDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ClustrDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::ClustrDataModel::ClustrDataModel()   {
}
