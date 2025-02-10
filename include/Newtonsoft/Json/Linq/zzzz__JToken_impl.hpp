#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_impl.hpp"
#include "System/zzzz__ICloneable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x282fd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineNumber;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineNumber;
}
constexpr void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_set_LineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineNumber = value;
}
constexpr int32_t& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LinePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinePosition;
}
constexpr int32_t const& Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_get_LinePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinePosition;
}
constexpr void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::__cordl_internal_set_LinePosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinePosition = value;
}
inline void Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::_ctor(int32_t  lineNumber, int32_t  linePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
inline ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation* Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::New_ctor(int32_t  lineNumber, int32_t  linePosition)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation::JToken_LineInfoAnnotation()   {
}
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Parent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JContainer* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Parent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JToken::set_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Root
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Root)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2821cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Root",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CloneToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JToken::CloneToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_HasValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_HasValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Next
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Next",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Next
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Next",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Previous
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Previous",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Previous
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2828e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Previous",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Path)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2828e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2821104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28291d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.set_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::set_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2829264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_First
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_First)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28292f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.get_Last
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::get_Last)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2829384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Children
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Children)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2829414;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Remove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Remove)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2825d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Replace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::Replace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28242a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Replace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.WriteTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JToken::WriteTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x282946c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>)>(&::Newtonsoft::Json::Linq::JToken::ToString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2829504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.EnsureValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::EnsureValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x282975c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "EnsureValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::GetType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2829870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "GetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ValidateToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, bool)>(&::Newtonsoft::Json::Linq::JToken::ValidateToken)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2829960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ValidateToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_bool
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_bool)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2829a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTimeOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2829c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_bool_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2829e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int64_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282a0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTime_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282a2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__DateTimeOffset_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x282a4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Decimal_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x282a7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_double_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x282a9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_char16_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<char16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282ac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282ae24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int16_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282b008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint16_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282b1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_char16_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282b3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint8_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282b5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_int8_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282b798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int32_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282b97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int16_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282bba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint16_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint16_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282bdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint8_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282bfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int8_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int8_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282c20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__DateTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x282c430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_int64_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282c61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_float_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x282c840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Decimal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282ca60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint32_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint32_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282cc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1_uint64_t_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint64_t> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x282ce68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_double_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282d08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_float_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282d270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___StringW
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___StringW)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x282d454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282d6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x282d8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Guid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x282da94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__Guid_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Guid> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x282dcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__TimeSpan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x282df18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Nullable_1___System__TimeSpan_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x282e114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Explicit___System__Uri_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x282e34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToBigInteger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::ToBigInteger)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x282e548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToBigInteger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToBigIntegerNullable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Numerics::BigInteger> (*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::ToBigIntegerNullable)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x282e694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToBigIntegerNullable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.op_Implicit___Newtonsoft__Json__Linq__JToken_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW)>(&::Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x282e840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x282e8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x282e938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CreateReader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReader* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::CreateReader)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x282e9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "CreateReader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.FromObjectInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Linq::JToken::FromObjectInternal)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x28257d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "FromObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*)>(&::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0xc6c;
  constexpr static std::size_t addrs = 0x282eb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ToObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)(::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Linq::JToken::ToObject)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x282f774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x282f9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ReadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.ReadFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JToken::ReadFrom)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x282fa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ReadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2820178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "SetLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.SetLineInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Linq::JToken::SetLineInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x282fd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "SetLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x282ffcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2830020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2830074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.GetMetaObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Linq::JToken::*)(::System::Linq::Expressions::Expression*)>(&::Newtonsoft::Json::Linq::JToken::GetMetaObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28300c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (::Newtonsoft::Json::Linq::JToken::*)(::System::Linq::Expressions::Expression*)>(&::Newtonsoft::Json::Linq::JToken::System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2830190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28301a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.ICloneable.Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.DeepClone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JToken::*)()>(&::Newtonsoft::Json::Linq::JToken::DeepClone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28301b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "DeepClone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.AddAnnotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JToken::AddAnnotation)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x282fdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "AddAnnotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JToken.CopyAnnotations
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JToken::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JToken::CopyAnnotations)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x282110c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "CopyAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__previous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previous;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previous)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JToken::__cordl_internal_get__annotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr void Newtonsoft::Json::Linq::JToken::__cordl_internal_set__annotations(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BooleanTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_BooleanTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BooleanTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "NumberTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_NumberTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "NumberTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BigIntegerTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BigIntegerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_BigIntegerTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BigIntegerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "StringTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_StringTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "StringTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "GuidTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_GuidTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "GuidTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "TimeSpanTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_TimeSpanTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "TimeSpanTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "UriTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_UriTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "UriTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "CharTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_CharTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "CharTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "DateTimeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_DateTimeTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "DateTimeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline void Newtonsoft::Json::Linq::JToken::setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BytesTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>(std::forward<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>(value));
}
inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> Newtonsoft::Json::Linq::JToken::getStaticF_BytesTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>, "BytesTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get>();
}
inline ::Newtonsoft::Json::Linq::JContainer* Newtonsoft::Json::Linq::JToken::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JContainer*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Parent(::Newtonsoft::Json::Linq::JContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Root()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Root",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JTokenType Newtonsoft::Json::Linq::JToken::get_Type()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JTokenType, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JToken::get_HasValues()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Next()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Next",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Next(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Next",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Previous()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Previous",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::set_Previous(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "set_Previous",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::get_Path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Item(::System::Object*  key)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method, key);
}
inline void Newtonsoft::Json::Linq::JToken::set_Item(::System::Object*  key, ::Newtonsoft::Json::Linq::JToken*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_First()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::get_Last()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Newtonsoft::Json::Linq::JToken::Children()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Remove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::Replace(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Replace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JToken::WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, converters);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::ToString(::Newtonsoft::Json::Formatting  formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, formatting, converters);
}
inline ::Newtonsoft::Json::Linq::JValue* Newtonsoft::Json::Linq::JToken::EnsureValue(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "EnsureValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JValue*, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::GetType(::Newtonsoft::Json::Linq::JToken*  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "GetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Linq::JToken::ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  validTypes, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ValidateToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, o, validTypes, nullable);
}
inline bool Newtonsoft::Json::Linq::JToken::op_Explicit_bool(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTimeOffset Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(nullptr, ___internal_method, value);
}
inline int64_t Newtonsoft::Json::Linq::JToken::op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<char16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<char16_t>, false>(nullptr, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Linq::JToken::op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
inline int16_t Newtonsoft::Json::Linq::JToken::op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
inline uint16_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::Linq::JToken::op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, value);
}
inline uint8_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
inline int8_t Newtonsoft::Json::Linq::JToken::op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int16_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint16_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint8_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int8_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int8_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTime Newtonsoft::Json::Linq::JToken::op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Decimal Newtonsoft::Json::Linq::JToken::op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint32_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint32_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<uint64_t> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
inline double_t Newtonsoft::Json::Linq::JToken::op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
inline float_t Newtonsoft::Json::Linq::JToken::op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Linq::JToken::op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline uint32_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
inline uint64_t Newtonsoft::Json::Linq::JToken::op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
inline ::System::Guid Newtonsoft::Json::Linq::JToken::op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>, false>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan Newtonsoft::Json::Linq::JToken::op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> Newtonsoft::Json::Linq::JToken::op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method, value);
}
inline ::System::Uri* Newtonsoft::Json::Linq::JToken::op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Explicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::BigInteger Newtonsoft::Json::Linq::JToken::ToBigInteger(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToBigInteger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::BigInteger, false>(nullptr, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Numerics::BigInteger> Newtonsoft::Json::Linq::JToken::ToBigIntegerNullable(::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToBigIntegerNullable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Numerics::BigInteger>, false>(nullptr, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::op_Implicit___Newtonsoft__Json__Linq__JToken_(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JToken::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonReader* Newtonsoft::Json::Linq::JToken::CreateReader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "CreateReader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReader*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::FromObjectInternal(::System::Object*  o, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "FromObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, o, jsonSerializer);
}
template<typename T>
inline T Newtonsoft::Json::Linq::JToken::ToObject()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    "ToObject",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectType);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::ToObject(::System::Type*  objectType, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ToObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectType, jsonSerializer);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ReadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::ReadFrom(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "ReadFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(nullptr, ___internal_method, reader, settings);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(::Newtonsoft::Json::IJsonLineInfo*  lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "SetLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IJsonLineInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineInfo, settings);
}
inline void Newtonsoft::Json::Linq::JToken::SetLineInfo(int32_t  lineNumber, int32_t  linePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "SetLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineNumber, linePosition);
}
inline bool Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Linq::JToken::Newtonsoft_Json_IJsonLineInfo_get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Linq::JToken::GetMetaObject(::System::Linq::Expressions::Expression*  parameter)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, parameter);
}
inline ::System::Dynamic::DynamicMetaObject* Newtonsoft::Json::Linq::JToken::System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression*  parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*, false>(this, ___internal_method, parameter);
}
inline ::System::Object* Newtonsoft::Json::Linq::JToken::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "System.ICloneable.Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::DeepClone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "DeepClone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::AddAnnotation(::System::Object*  annotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "AddAnnotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotation);
}
template<typename T>
inline T Newtonsoft::Json::Linq::JToken::Annotation()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                    "Annotation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JToken::CopyAnnotations(::Newtonsoft::Json::Linq::JToken*  target, ::Newtonsoft::Json::Linq::JToken*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JToken*>::get(),
                        "CopyAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, source);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JToken::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JToken*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JToken::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JToken::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Linq::JToken::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Newtonsoft::Json::Linq::JToken::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr  Newtonsoft::Json::Linq::JToken::operator ::System::Dynamic::IDynamicMetaObjectProvider*() noexcept {
return static_cast<::System::Dynamic::IDynamicMetaObjectProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr ::System::Dynamic::IDynamicMetaObjectProvider* Newtonsoft::Json::Linq::JToken::i___System__Dynamic__IDynamicMetaObjectProvider() noexcept {
return static_cast<::System::Dynamic::IDynamicMetaObjectProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JToken::JToken()   {
}
