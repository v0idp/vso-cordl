#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapElementInfoList.hpp"
#include "System/Collections/zzzz__ArrayList_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapElementInfoList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapElementInfoList::*)()>(&::System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c81b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapElementInfoList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlTypeMapElementInfoList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapElementInfoList*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList::XmlTypeMapElementInfoList()   {
}
