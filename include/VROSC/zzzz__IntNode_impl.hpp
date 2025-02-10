#pragma once
// IWYU pragma private; include "VROSC/IntNode.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::IntNode_OverflowBehaviour::IntNode_OverflowBehaviour(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::IntNode_OverflowBehaviour::IntNode_OverflowBehaviour()   {
}
constexpr ::VROSC::IntNode_OverflowBehaviour  VROSC::IntNode_OverflowBehaviour::Limit{static_cast<int32_t>(0x0)};
constexpr ::VROSC::IntNode_OverflowBehaviour  VROSC::IntNode_OverflowBehaviour::Wrap{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::IntNode.get_MinValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::IntNode::*)()>(&::VROSC::IntNode::get_MinValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_MinValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode.get_MaxValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::IntNode::*)()>(&::VROSC::IntNode::get_MaxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_MaxValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::IntNode::*)()>(&::VROSC::IntNode::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode.set_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntNode::*)(int32_t)>(&::VROSC::IntNode::set_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171a5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "set_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntNode::*)()>(&::VROSC::IntNode::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171aabc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode.SetValueInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::IntNode::*)(int32_t)>(&::VROSC::IntNode::SetValueInRange)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x171aacc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntNode::*)()>(&::VROSC::IntNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171ab88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::IntNode::__cordl_internal_get__minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr int32_t const& VROSC::IntNode::__cordl_internal_get__minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr void VROSC::IntNode::__cordl_internal_set__minValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minValue = value;
}
constexpr int32_t& VROSC::IntNode::__cordl_internal_get__maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr int32_t const& VROSC::IntNode::__cordl_internal_get__maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr void VROSC::IntNode::__cordl_internal_set__maxValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxValue = value;
}
constexpr ::VROSC::IntNode_OverflowBehaviour& VROSC::IntNode::__cordl_internal_get__overflowBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflowBehaviour;
}
constexpr ::VROSC::IntNode_OverflowBehaviour const& VROSC::IntNode::__cordl_internal_get__overflowBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflowBehaviour;
}
constexpr void VROSC::IntNode::__cordl_internal_set__overflowBehaviour(::VROSC::IntNode_OverflowBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overflowBehaviour = value;
}
constexpr int32_t& VROSC::IntNode::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr int32_t const& VROSC::IntNode::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void VROSC::IntNode::__cordl_internal_set__value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr ::System::Action_1<int32_t>*& VROSC::IntNode::__cordl_internal_get_OnValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr ::System::Action_1<int32_t>* const& VROSC::IntNode::__cordl_internal_get_OnValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr void VROSC::IntNode::__cordl_internal_set_OnValueChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::IntNode::get_MinValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_MinValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::IntNode::get_MaxValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_MaxValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::IntNode::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::IntNode::set_Value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        "set_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::IntNode::OnValidate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::IntNode::SetValueInRange(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void VROSC::IntNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IntNode* VROSC::IntNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IntNode*>());
}
// Ctor Parameters []
constexpr ::VROSC::IntNode::IntNode()   {
}
