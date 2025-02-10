#pragma once
// IWYU pragma private; include "VROSC/FloatNode.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__FloatNode_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::VROSC::FloatNode.get_MinValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FloatNode::*)()>(&::VROSC::FloatNode::get_MinValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171a7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_MinValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatNode.get_MaxValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FloatNode::*)()>(&::VROSC::FloatNode::get_MaxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171a7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_MaxValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatNode.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FloatNode::*)()>(&::VROSC::FloatNode::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171a7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatNode.set_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FloatNode::*)(float_t)>(&::VROSC::FloatNode::set_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x171a7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "set_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatNode.SetValueInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FloatNode::*)(float_t)>(&::VROSC::FloatNode::SetValueInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x171a7fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FloatNode._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FloatNode::*)()>(&::VROSC::FloatNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171a85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::FloatNode::__cordl_internal_get__minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr float_t const& VROSC::FloatNode::__cordl_internal_get__minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr void VROSC::FloatNode::__cordl_internal_set__minValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minValue = value;
}
constexpr float_t& VROSC::FloatNode::__cordl_internal_get__maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr float_t const& VROSC::FloatNode::__cordl_internal_get__maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr void VROSC::FloatNode::__cordl_internal_set__maxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxValue = value;
}
constexpr float_t& VROSC::FloatNode::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr float_t const& VROSC::FloatNode::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void VROSC::FloatNode::__cordl_internal_set__value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr ::System::Action_1<float_t>*& VROSC::FloatNode::__cordl_internal_get_OnValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr ::System::Action_1<float_t>* const& VROSC::FloatNode::__cordl_internal_get_OnValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr void VROSC::FloatNode::__cordl_internal_set_OnValueChanged(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::FloatNode::get_MinValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_MinValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::FloatNode::get_MaxValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_MaxValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::FloatNode::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::FloatNode::set_Value(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        "set_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::FloatNode::SetValueInRange(float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline void VROSC::FloatNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FloatNode*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FloatNode* VROSC::FloatNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FloatNode*>());
}
// Ctor Parameters []
constexpr ::VROSC::FloatNode::FloatNode()   {
}
