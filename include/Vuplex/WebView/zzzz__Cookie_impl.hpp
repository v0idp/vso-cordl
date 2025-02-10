#pragma once
// IWYU pragma private; include "Vuplex/WebView/Cookie.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Cookie.get_IsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Cookie::*)()>(&::Vuplex::WebView::Cookie::get_IsValid)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x16ddb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "get_IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Cookie.ArrayFromJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*> (*)(::StringW)>(&::Vuplex::WebView::Cookie::ArrayFromJson)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x16ddcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "ArrayFromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Cookie.FromJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::Cookie* (*)(::StringW)>(&::Vuplex::WebView::Cookie::FromJson)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16ddd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Cookie.ToJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Cookie::*)()>(&::Vuplex::WebView::Cookie::ToJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16dde1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "ToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Cookie.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Vuplex::WebView::Cookie::*)()>(&::Vuplex::WebView::Cookie::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16dde24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Cookie._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Cookie::*)()>(&::Vuplex::WebView::Cookie::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16dde2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Cookie::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Vuplex::WebView::Cookie::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Cookie::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::StringW const& Vuplex::WebView::Cookie::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Cookie::__cordl_internal_get_Domain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Domain;
}
constexpr ::StringW const& Vuplex::WebView::Cookie::__cordl_internal_get_Domain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Domain;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_Domain(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Vuplex::WebView::Cookie::__cordl_internal_get_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr ::StringW const& Vuplex::WebView::Cookie::__cordl_internal_get_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Vuplex::WebView::Cookie::__cordl_internal_get_ExpirationDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationDate;
}
constexpr int32_t const& Vuplex::WebView::Cookie::__cordl_internal_get_ExpirationDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationDate;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_ExpirationDate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpirationDate = value;
}
constexpr bool& Vuplex::WebView::Cookie::__cordl_internal_get_HttpOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpOnly;
}
constexpr bool const& Vuplex::WebView::Cookie::__cordl_internal_get_HttpOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpOnly;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_HttpOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpOnly = value;
}
constexpr bool& Vuplex::WebView::Cookie::__cordl_internal_get_Secure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Secure;
}
constexpr bool const& Vuplex::WebView::Cookie::__cordl_internal_get_Secure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Secure;
}
constexpr void Vuplex::WebView::Cookie::__cordl_internal_set_Secure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Secure = value;
}
inline bool Vuplex::WebView::Cookie::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "get_IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*> Vuplex::WebView::Cookie::ArrayFromJson(::StringW  serializedCookies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "ArrayFromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>, false>(nullptr, ___internal_method, serializedCookies);
}
inline ::Vuplex::WebView::Cookie* Vuplex::WebView::Cookie::FromJson(::StringW  serializedCookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "FromJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::Cookie*, false>(nullptr, ___internal_method, serializedCookie);
}
inline ::StringW Vuplex::WebView::Cookie::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        "ToJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Vuplex::WebView::Cookie::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Cookie::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Cookie*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Cookie* Vuplex::WebView::Cookie::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Cookie*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Cookie::Cookie()   {
}
