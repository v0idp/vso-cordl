#pragma once
// IWYU pragma private; include "VROSC/IntField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
//  Writing Method size for method: ::VROSC::IntField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntField::*)(int32_t)>(&::VROSC::IntField::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x171a9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntField.GetNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::IntNode> (::VROSC::IntField::*)()>(&::VROSC::IntField::GetNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "GetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntField.SetNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntField::*)(::VROSC::IntNode*)>(&::VROSC::IntField::SetNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "SetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IntNode*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntField.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::IntField::*)()>(&::VROSC::IntField::get_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x171aa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::IntField::__cordl_internal_get_EnteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr int32_t const& VROSC::IntField::__cordl_internal_get_EnteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr void VROSC::IntField::__cordl_internal_set_EnteredValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnteredValue = value;
}
constexpr ::UnityW<::VROSC::IntNode>& VROSC::IntField::__cordl_internal_get_ConnectedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::IntField::__cordl_internal_get_ConnectedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr void VROSC::IntField::__cordl_internal_set_ConnectedValue(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::IntField::_ctor(int32_t  enteredValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enteredValue);
}
inline ::UnityW<::VROSC::IntNode> VROSC::IntField::GetNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "GetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::IntNode>, false>(this, ___internal_method);
}
inline void VROSC::IntField::SetNode(::VROSC::IntNode*  intNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "SetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IntNode*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, intNode);
}
inline int32_t VROSC::IntField::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::VROSC::IntField* VROSC::IntField::New_ctor(int32_t  enteredValue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IntField*>(enteredValue));
}
// Ctor Parameters []
constexpr ::VROSC::IntField::IntField()   {
}
