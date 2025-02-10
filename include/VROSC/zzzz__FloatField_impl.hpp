#pragma once
// IWYU pragma private; include "VROSC/FloatField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__FloatField_def.hpp"
#include "VROSC/zzzz__FloatNode_def.hpp"
//  Writing Method size for method: ::VROSC::FloatField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FloatField::*)(float_t)>(&::VROSC::FloatField::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x171a71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatField.GetNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::FloatNode> (::VROSC::FloatField::*)()>(&::VROSC::FloatField::GetNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171a744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "GetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatField.SetNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FloatField::*)(::VROSC::FloatNode*)>(&::VROSC::FloatField::SetNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171a74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "SetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FloatNode*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatField.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FloatField::*)()>(&::VROSC::FloatField::get_Value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x171a754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::FloatField::__cordl_internal_get_EnteredValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr float_t const& VROSC::FloatField::__cordl_internal_get_EnteredValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnteredValue;
}
constexpr void VROSC::FloatField::__cordl_internal_set_EnteredValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnteredValue = value;
}
constexpr ::UnityW<::VROSC::FloatNode>& VROSC::FloatField::__cordl_internal_get_ConnectedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr ::UnityW<::VROSC::FloatNode> const& VROSC::FloatField::__cordl_internal_get_ConnectedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedValue;
}
constexpr void VROSC::FloatField::__cordl_internal_set_ConnectedValue(::UnityW<::VROSC::FloatNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectedValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FloatField::_ctor(float_t  enteredValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enteredValue);
}
inline ::UnityW<::VROSC::FloatNode> VROSC::FloatField::GetNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "GetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::FloatNode>, false>(this, ___internal_method);
}
inline void VROSC::FloatField::SetNode(::VROSC::FloatNode*  floatNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "SetNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FloatNode*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, floatNode);
}
inline float_t VROSC::FloatField::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatField*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::VROSC::FloatField* VROSC::FloatField::New_ctor(float_t  enteredValue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FloatField*>(enteredValue));
}
// Ctor Parameters []
constexpr ::VROSC::FloatField::FloatField()   {
}
