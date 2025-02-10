#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::NamespaceList_ListType::NamespaceList_ListType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceList_ListType::NamespaceList_ListType()   {
}
constexpr ::System::Xml::Schema::NamespaceList_ListType  System::Xml::Schema::NamespaceList_ListType::Any{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::NamespaceList_ListType  System::Xml::Schema::NamespaceList_ListType::Other{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::NamespaceList_ListType  System::Xml::Schema::NamespaceList_ListType::Set{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5e014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceList::*)(::StringW, ::StringW)>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2b5e01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Clone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::Clone)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b5e2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList_ListType (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5e3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Excluded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Excluded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5e3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Excluded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Enumerate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Enumerate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b5e3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Enumerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::StringW)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b5e454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b5e4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Allows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::ToString)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x2b5e4f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.IsSubset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*)>(&::System::Xml::Schema::NamespaceList::IsSubset)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2b5ea00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "IsSubset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Union
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, bool)>(&::System::Xml::Schema::NamespaceList::Union)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x2b5ede4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Union",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.CompareSetToOther
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::NamespaceList::*)(::System::Xml::Schema::NamespaceList*)>(&::System::Xml::Schema::NamespaceList::CompareSetToOther)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2b5f37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "CompareSetToOther",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Intersection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (*)(::System::Xml::Schema::NamespaceList*, ::System::Xml::Schema::NamespaceList*, bool)>(&::System::Xml::Schema::NamespaceList::Intersection)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2b5f4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Intersection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.RemoveNamespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceList::*)(::StringW)>(&::System::Xml::Schema::NamespaceList::RemoveNamespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b5f9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "RemoveNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::NamespaceList_ListType& System::Xml::Schema::NamespaceList::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Xml::Schema::NamespaceList_ListType const& System::Xml::Schema::NamespaceList::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_type(::System::Xml::Schema::NamespaceList_ListType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::NamespaceList::__cordl_internal_get_set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::NamespaceList::__cordl_internal_get_set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_set(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___set)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::NamespaceList::__cordl_internal_get_targetNamespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::NamespaceList::__cordl_internal_get_targetNamespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNamespace;
}
constexpr void System::Xml::Schema::NamespaceList::__cordl_internal_set_targetNamespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::NamespaceList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::NamespaceList::_ctor(::StringW  namespaces, ::StringW  targetNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namespaces, targetNamespace);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::NamespaceList_ListType System::Xml::Schema::NamespaceList::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList_ListType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::NamespaceList::get_Excluded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Excluded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Schema::NamespaceList::get_Enumerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "get_Enumerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::StringW  ns)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ns);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::System::Xml::XmlQualifiedName*  qname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Allows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline ::StringW System::Xml::Schema::NamespaceList::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::NamespaceList::IsSubset(::System::Xml::Schema::NamespaceList*  sub, ::System::Xml::Schema::NamespaceList*  super)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "IsSubset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sub, super);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Union(::System::Xml::Schema::NamespaceList*  o1, ::System::Xml::Schema::NamespaceList*  o2, bool  v1Compat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Union",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(nullptr, ___internal_method, o1, o2, v1Compat);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::CompareSetToOther(::System::Xml::Schema::NamespaceList*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "CompareSetToOther",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::Intersection(::System::Xml::Schema::NamespaceList*  o1, ::System::Xml::Schema::NamespaceList*  o2, bool  v1Compat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "Intersection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(nullptr, ___internal_method, o1, o2, v1Compat);
}
inline void System::Xml::Schema::NamespaceList::RemoveNamespace(::StringW  tns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                        "RemoveNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tns);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::NamespaceList*>());
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor(::StringW  namespaces, ::StringW  targetNamespace)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::NamespaceList*>(namespaces, targetNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceList::NamespaceList()   {
}
