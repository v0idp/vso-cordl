#pragma once
// IWYU pragma private; include "System/Net/CookieParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieParser_def.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::System::Net::CookieParser._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieParser::*)(::StringW)>(&::System::Net::CookieParser::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d712d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.Get
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cookie* (::System::Net::CookieParser::*)()>(&::System::Net::CookieParser::Get)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x2d71344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.CheckQuoted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::CookieParser::CheckQuoted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2d6fb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        "CheckQuoted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::CookieTokenizer*& System::Net::CookieParser::__cordl_internal_get_m_tokenizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tokenizer;
}
constexpr ::System::Net::CookieTokenizer* const& System::Net::CookieParser::__cordl_internal_get_m_tokenizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tokenizer;
}
constexpr void System::Net::CookieParser::__cordl_internal_set_m_tokenizer(::System::Net::CookieTokenizer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_tokenizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::CookieParser::_ctor(::StringW  cookieString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookieString);
}
inline ::System::Net::Cookie* System::Net::CookieParser::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cookie*, false>(this, ___internal_method);
}
inline ::StringW System::Net::CookieParser::CheckQuoted(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                        "CheckQuoted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::System::Net::CookieParser* System::Net::CookieParser::New_ctor(::StringW  cookieString)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CookieParser*>(cookieString));
}
// Ctor Parameters []
constexpr ::System::Net::CookieParser::CookieParser()   {
}
