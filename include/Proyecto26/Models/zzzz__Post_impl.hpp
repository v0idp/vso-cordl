#pragma once
// IWYU pragma private; include "Proyecto26/Models/Post.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Proyecto26/Models/zzzz__Post_def.hpp"
//  Writing Method size for method: ::Proyecto26::Models::Post.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Proyecto26::Models::Post::*)()>(&::Proyecto26::Models::Post::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fa6b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::Models::Post*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::Models::Post*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Proyecto26::Models::Post._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Proyecto26::Models::Post::*)()>(&::Proyecto26::Models::Post::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fa6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::Models::Post*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Proyecto26::Models::Post::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Proyecto26::Models::Post::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Proyecto26::Models::Post::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr int32_t& Proyecto26::Models::Post::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr int32_t const& Proyecto26::Models::Post::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void Proyecto26::Models::Post::__cordl_internal_set_userId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userId = value;
}
constexpr ::StringW& Proyecto26::Models::Post::__cordl_internal_get_title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr ::StringW const& Proyecto26::Models::Post::__cordl_internal_get_title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr void Proyecto26::Models::Post::__cordl_internal_set_title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Proyecto26::Models::Post::__cordl_internal_get_body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr ::StringW const& Proyecto26::Models::Post::__cordl_internal_get_body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___body;
}
constexpr void Proyecto26::Models::Post::__cordl_internal_set_body(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Proyecto26::Models::Post::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::Models::Post*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Proyecto26::Models::Post::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Proyecto26::Models::Post*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Proyecto26::Models::Post* Proyecto26::Models::Post::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Proyecto26::Models::Post*>());
}
// Ctor Parameters []
constexpr ::Proyecto26::Models::Post::Post()   {
}
