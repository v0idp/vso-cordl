#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyElement.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyElement_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement.IsElementDefined
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::XmlTypeMapMemberAnyElement::IsElementDefined)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2c7f8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        "IsElementDefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement.get_IsDefaultAny
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberAnyElement::get_IsDefaultAny)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2c826cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        "get_IsDefaultAny",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyElement._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberAnyElement::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberAnyElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c829b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline bool System::Xml::Serialization::XmlTypeMapMemberAnyElement::IsElementDefined(::StringW  name, ::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        "IsElementDefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, ns);
}
inline bool System::Xml::Serialization::XmlTypeMapMemberAnyElement::get_IsDefaultAny()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        "get_IsDefaultAny",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberAnyElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* System::Xml::Serialization::XmlTypeMapMemberAnyElement::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyElement::XmlTypeMapMemberAnyElement()   {
}
