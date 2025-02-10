#pragma once
// IWYU pragma private; include "Models/Todo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Models/zzzz__Todo_def.hpp"
//  Writing Method size for method: ::Models::Todo.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Models::Todo::*)()>(&::Models::Todo::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fa6e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Todo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Todo*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Models::Todo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Models::Todo::*)()>(&::Models::Todo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fa6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Todo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Models::Todo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Models::Todo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Models::Todo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr int32_t& Models::Todo::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr int32_t const& Models::Todo::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void Models::Todo::__cordl_internal_set_userId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userId = value;
}
constexpr ::StringW& Models::Todo::__cordl_internal_get_title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr ::StringW const& Models::Todo::__cordl_internal_get_title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr void Models::Todo::__cordl_internal_set_title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Models::Todo::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Models::Todo::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Models::Todo::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
inline ::StringW Models::Todo::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Todo*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Models::Todo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Todo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Models::Todo* Models::Todo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Models::Todo*>());
}
// Ctor Parameters []
constexpr ::Models::Todo::Todo()   {
}
