#pragma once
// IWYU pragma private; include "VROSC/ValueMultiplier.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ValueMultiplier_def.hpp"
#include "VROSC/zzzz__FloatField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::ValueMultiplier.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueMultiplier::*)(::VROSC::Signal*)>(&::VROSC::ValueMultiplier::NodeBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueMultiplier.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueMultiplier::*)(::VROSC::Signal*)>(&::VROSC::ValueMultiplier::NodeStay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721b28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueMultiplier.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueMultiplier::*)(::VROSC::Signal*)>(&::VROSC::ValueMultiplier::NodeEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1721b2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueMultiplier.TransformValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Signal* (::VROSC::ValueMultiplier::*)(::VROSC::Signal*)>(&::VROSC::ValueMultiplier::TransformValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1721aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                        "TransformValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueMultiplier._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueMultiplier::*)()>(&::VROSC::ValueMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1721b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::FloatField*& VROSC::ValueMultiplier::__cordl_internal_get__factor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factor;
}
constexpr ::VROSC::FloatField* const& VROSC::ValueMultiplier::__cordl_internal_get__factor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factor;
}
constexpr void VROSC::ValueMultiplier::__cordl_internal_set__factor(::VROSC::FloatField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____factor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ValueMultiplier::__cordl_internal_get__centerOnHalf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerOnHalf;
}
constexpr bool const& VROSC::ValueMultiplier::__cordl_internal_get__centerOnHalf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerOnHalf;
}
constexpr void VROSC::ValueMultiplier::__cordl_internal_set__centerOnHalf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____centerOnHalf = value;
}
inline void VROSC::ValueMultiplier::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueMultiplier::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueMultiplier::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline ::VROSC::Signal* VROSC::ValueMultiplier::TransformValue(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                        "TransformValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Signal*, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueMultiplier*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ValueMultiplier* VROSC::ValueMultiplier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ValueMultiplier*>());
}
// Ctor Parameters []
constexpr ::VROSC::ValueMultiplier::ValueMultiplier()   {
}
