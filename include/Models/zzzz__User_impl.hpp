#pragma once
// IWYU pragma private; include "Models/User.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Models::User.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Models::User::*)()>(&::Models::User::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fa6f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::User*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::User*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Models::User._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Models::User::*)()>(&::Models::User::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fa700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::User*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Models::User::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Models::User::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Models::User::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Models::User::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Models::User::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Models::User::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::User::__cordl_internal_get_username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr ::StringW const& Models::User::__cordl_internal_get_username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr void Models::User::__cordl_internal_set_username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___username)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::User::__cordl_internal_get_email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___email;
}
constexpr ::StringW const& Models::User::__cordl_internal_get_email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___email;
}
constexpr void Models::User::__cordl_internal_set_email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___email)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::User::__cordl_internal_get_phone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phone;
}
constexpr ::StringW const& Models::User::__cordl_internal_get_phone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phone;
}
constexpr void Models::User::__cordl_internal_set_phone(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___phone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::User::__cordl_internal_get_website()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___website;
}
constexpr ::StringW const& Models::User::__cordl_internal_get_website() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___website;
}
constexpr void Models::User::__cordl_internal_set_website(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___website)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Models::User::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::User*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Models::User::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::User*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Models::User* Models::User::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Models::User*>());
}
// Ctor Parameters []
constexpr ::Models::User::User()   {
}
