#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/User.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__User_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__ExternalIdentity_def.hpp"
#include "Unity/Services/Authentication/zzzz__UsernameInfo_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::User._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::User::*)()>(&::Unity::Services::Authentication::User::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e985a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::User*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::User::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& Unity::Services::Authentication::User::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Unity::Services::Authentication::User::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::User::__cordl_internal_get_CreatedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedAt;
}
constexpr ::StringW const& Unity::Services::Authentication::User::__cordl_internal_get_CreatedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedAt;
}
constexpr void Unity::Services::Authentication::User::__cordl_internal_set_CreatedAt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CreatedAt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*& Unity::Services::Authentication::User::__cordl_internal_get_ExternalIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalIds;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>* const& Unity::Services::Authentication::User::__cordl_internal_get_ExternalIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalIds;
}
constexpr void Unity::Services::Authentication::User::__cordl_internal_set_ExternalIds(::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExternalIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::User::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& Unity::Services::Authentication::User::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void Unity::Services::Authentication::User::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Username)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::UsernameInfo*& Unity::Services::Authentication::User::__cordl_internal_get_UsernameInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsernameInfo;
}
constexpr ::Unity::Services::Authentication::UsernameInfo* const& Unity::Services::Authentication::User::__cordl_internal_get_UsernameInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsernameInfo;
}
constexpr void Unity::Services::Authentication::User::__cordl_internal_set_UsernameInfo(::Unity::Services::Authentication::UsernameInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UsernameInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::User::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::User*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::User* Unity::Services::Authentication::User::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::User*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::User::User()   {
}
