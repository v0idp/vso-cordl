#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsNameListData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/Credits/zzzz__CreditsNameListData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/Credits/zzzz__CreditsNameData_def.hpp"
//  Writing Method size for method: ::VROSC::Credits::CreditsNameListData.get_Header
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Credits::CreditsNameListData::*)()>(&::VROSC::Credits::CreditsNameListData::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Header",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsNameListData.get_Footer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Credits::CreditsNameListData::*)()>(&::VROSC::Credits::CreditsNameListData::get_Footer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Footer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsNameListData.get_Names
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* (::VROSC::Credits::CreditsNameListData::*)()>(&::VROSC::Credits::CreditsNameListData::get_Names)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsNameListData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsNameListData::*)()>(&::VROSC::Credits::CreditsNameListData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Credits::CreditsNameListData::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::StringW const& VROSC::Credits::CreditsNameListData::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void VROSC::Credits::CreditsNameListData::__cordl_internal_set__header(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*& VROSC::Credits::CreditsNameListData::__cordl_internal_get__names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____names;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* const& VROSC::Credits::CreditsNameListData::__cordl_internal_get__names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____names;
}
constexpr void VROSC::Credits::CreditsNameListData::__cordl_internal_set__names(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____names)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Credits::CreditsNameListData::__cordl_internal_get__footer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footer;
}
constexpr ::StringW const& VROSC::Credits::CreditsNameListData::__cordl_internal_get__footer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footer;
}
constexpr void VROSC::Credits::CreditsNameListData::__cordl_internal_set__footer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____footer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::Credits::CreditsNameListData::get_Header()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Header",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW VROSC::Credits::CreditsNameListData::get_Footer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Footer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* VROSC::Credits::CreditsNameListData::get_Names()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*, false>(this, ___internal_method);
}
inline void VROSC::Credits::CreditsNameListData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameListData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Credits::CreditsNameListData* VROSC::Credits::CreditsNameListData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Credits::CreditsNameListData*>());
}
// Ctor Parameters []
constexpr ::VROSC::Credits::CreditsNameListData::CreditsNameListData()   {
}
