#pragma once
// IWYU pragma private; include "VROSC/Transpose.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__Transpose_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::Transpose.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Transpose::*)(::VROSC::Signal*)>(&::VROSC::Transpose::SetValueBySignal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x171b540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Transpose.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Transpose::*)(::VROSC::Signal*)>(&::VROSC::Transpose::NodeEnd)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x171b59c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Transpose._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Transpose::*)()>(&::VROSC::Transpose::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171b638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::IntField*& VROSC::Transpose::__cordl_internal_get__transposeAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transposeAmount;
}
constexpr ::VROSC::IntField* const& VROSC::Transpose::__cordl_internal_get__transposeAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transposeAmount;
}
constexpr void VROSC::Transpose::__cordl_internal_set__transposeAmount(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transposeAmount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Transpose::__cordl_internal_get__resetOnNodeEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetOnNodeEnd;
}
constexpr bool const& VROSC::Transpose::__cordl_internal_get__resetOnNodeEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetOnNodeEnd;
}
constexpr void VROSC::Transpose::__cordl_internal_set__resetOnNodeEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetOnNodeEnd = value;
}
constexpr int32_t& VROSC::Transpose::__cordl_internal_get_changeAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAmount;
}
constexpr int32_t const& VROSC::Transpose::__cordl_internal_get_changeAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAmount;
}
constexpr void VROSC::Transpose::__cordl_internal_set_changeAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeAmount = value;
}
inline void VROSC::Transpose::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Transpose::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Transpose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Transpose*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Transpose* VROSC::Transpose::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Transpose*>());
}
// Ctor Parameters []
constexpr ::VROSC::Transpose::Transpose()   {
}
