#pragma once
// IWYU pragma private; include "VROSC/MinMaxInt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__MinMaxInt_def.hpp"
//  Writing Method size for method: ::VROSC::MinMaxInt.get_Min
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::MinMaxInt::*)()>(&::VROSC::MinMaxInt::get_Min)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b9ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxInt.get_Max
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::MinMaxInt::*)()>(&::VROSC::MinMaxInt::get_Max)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b9ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxInt._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MinMaxInt::*)(int32_t, int32_t)>(&::VROSC::MinMaxInt::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17b9eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxInt.Random
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::MinMaxInt::*)()>(&::VROSC::MinMaxInt::Random)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17b9edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::MinMaxInt::__cordl_internal_get__min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr int32_t const& VROSC::MinMaxInt::__cordl_internal_get__min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr void VROSC::MinMaxInt::__cordl_internal_set__min(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____min = value;
}
constexpr int32_t& VROSC::MinMaxInt::__cordl_internal_get__max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr int32_t const& VROSC::MinMaxInt::__cordl_internal_get__max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr void VROSC::MinMaxInt::__cordl_internal_set__max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____max = value;
}
inline int32_t VROSC::MinMaxInt::get_Min()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::MinMaxInt::get_Max()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::MinMaxInt::_ctor(int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline int32_t VROSC::MinMaxInt::Random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxInt*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::VROSC::MinMaxInt* VROSC::MinMaxInt::New_ctor(int32_t  min, int32_t  max)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MinMaxInt*>(min, max));
}
// Ctor Parameters []
constexpr ::VROSC::MinMaxInt::MinMaxInt()   {
}
