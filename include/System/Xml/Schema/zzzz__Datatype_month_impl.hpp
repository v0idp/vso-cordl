#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_month.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_month_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_month.get_TypeCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_month::*)()>(&::System::Xml::Schema::Datatype_month::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9e71c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_month*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_month*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_month._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_month::*)()>(&::System::Xml::Schema::Datatype_month::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c97d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_month*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_month::get_TypeCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_month*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_month::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_month*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_month* System::Xml::Schema::Datatype_month::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Datatype_month*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_month::Datatype_month()   {
}
