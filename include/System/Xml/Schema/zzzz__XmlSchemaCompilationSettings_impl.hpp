#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCompilationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&::System::Xml::Schema::XmlSchemaCompilationSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2badb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaCompilationSettings.get_EnableUpaCheck
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchemaCompilationSettings::*)()>(&::System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2badb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                        "get_EnableUpaCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_get_enableUpaCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableUpaCheck;
}
constexpr bool const& System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_get_enableUpaCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableUpaCheck;
}
constexpr void System::Xml::Schema::XmlSchemaCompilationSettings::__cordl_internal_set_enableUpaCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableUpaCheck = value;
}
inline void System::Xml::Schema::XmlSchemaCompilationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaCompilationSettings::get_EnableUpaCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get(),
                        "get_EnableUpaCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaCompilationSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaCompilationSettings*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings::XmlSchemaCompilationSettings()   {
}
