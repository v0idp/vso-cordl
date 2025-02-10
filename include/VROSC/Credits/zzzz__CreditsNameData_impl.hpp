#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsNameData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/Credits/zzzz__CreditsNameData_def.hpp"
//  Writing Method size for method: ::VROSC::Credits::CreditsNameData.get_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Credits::CreditsNameData::*)()>(&::VROSC::Credits::CreditsNameData::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsNameData.get_Title
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Credits::CreditsNameData::*)()>(&::VROSC::Credits::CreditsNameData::get_Title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsNameData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsNameData::*)()>(&::VROSC::Credits::CreditsNameData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dd41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Credits::CreditsNameData::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& VROSC::Credits::CreditsNameData::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void VROSC::Credits::CreditsNameData::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::Credits::CreditsNameData::__cordl_internal_get__title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____title;
}
constexpr ::StringW const& VROSC::Credits::CreditsNameData::__cordl_internal_get__title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____title;
}
constexpr void VROSC::Credits::CreditsNameData::__cordl_internal_set__title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::Credits::CreditsNameData::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW VROSC::Credits::CreditsNameData::get_Title()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        "get_Title",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::Credits::CreditsNameData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsNameData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Credits::CreditsNameData* VROSC::Credits::CreditsNameData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Credits::CreditsNameData*>());
}
// Ctor Parameters []
constexpr ::VROSC::Credits::CreditsNameData::CreditsNameData()   {
}
