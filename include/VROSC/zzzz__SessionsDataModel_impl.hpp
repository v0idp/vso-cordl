#pragma once
// IWYU pragma private; include "VROSC/SessionsDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__SessionsDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__Session_def.hpp"
//  Writing Method size for method: ::VROSC::SessionsDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsDataModel::*)()>(&::VROSC::SessionsDataModel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1857de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*& VROSC::SessionsDataModel::__cordl_internal_get_NewSessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSessions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>* const& VROSC::SessionsDataModel::__cordl_internal_get_NewSessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSessions;
}
constexpr void VROSC::SessionsDataModel::__cordl_internal_set_NewSessions(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::Session*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NewSessions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Session*>*& VROSC::SessionsDataModel::__cordl_internal_get_Sessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sessions;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Session*>* const& VROSC::SessionsDataModel::__cordl_internal_get_Sessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sessions;
}
constexpr void VROSC::SessionsDataModel::__cordl_internal_set_Sessions(::System::Collections::Generic::List_1<::VROSC::Session*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Sessions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionsDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionsDataModel* VROSC::SessionsDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsDataModel::SessionsDataModel()   {
}
