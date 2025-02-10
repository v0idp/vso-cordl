#pragma once
// IWYU pragma private; include "Models/Photo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Models/zzzz__Photo_def.hpp"
//  Writing Method size for method: ::Models::Photo.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Models::Photo::*)()>(&::Models::Photo::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fa6cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Photo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Photo*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Models::Photo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Models::Photo::*)()>(&::Models::Photo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fa6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Photo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Models::Photo::__cordl_internal_get_albumId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albumId;
}
constexpr int32_t const& Models::Photo::__cordl_internal_get_albumId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___albumId;
}
constexpr void Models::Photo::__cordl_internal_set_albumId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___albumId = value;
}
constexpr int32_t& Models::Photo::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Models::Photo::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Models::Photo::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Models::Photo::__cordl_internal_get_title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr ::StringW const& Models::Photo::__cordl_internal_get_title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title;
}
constexpr void Models::Photo::__cordl_internal_set_title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::Photo::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr ::StringW const& Models::Photo::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr void Models::Photo::__cordl_internal_set_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Models::Photo::__cordl_internal_get_thumbnailUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumbnailUrl;
}
constexpr ::StringW const& Models::Photo::__cordl_internal_get_thumbnailUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thumbnailUrl;
}
constexpr void Models::Photo::__cordl_internal_set_thumbnailUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thumbnailUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Models::Photo::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Photo*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Models::Photo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Models::Photo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Models::Photo* Models::Photo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Models::Photo*>());
}
// Ctor Parameters []
constexpr ::Models::Photo::Photo()   {
}
