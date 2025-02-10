#pragma once
// IWYU pragma private; include "VROSC/MinMaxVector4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "VROSC/zzzz__MinMaxVector4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::VROSC::MinMaxVector4.get_Min
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::VROSC::MinMaxVector4::*)()>(&::VROSC::MinMaxVector4::get_Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ba30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector4.get_Max
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::VROSC::MinMaxVector4::*)()>(&::VROSC::MinMaxVector4::get_Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ba318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector4._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MinMaxVector4::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::VROSC::MinMaxVector4::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17ba324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector4.Random
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::VROSC::MinMaxVector4::*)(bool)>(&::VROSC::MinMaxVector4::Random)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ba38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector4.Lerp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::VROSC::MinMaxVector4::*)(float_t, bool)>(&::VROSC::MinMaxVector4::Lerp)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17ba400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& VROSC::MinMaxVector4::__cordl_internal_get__min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr ::UnityEngine::Vector4 const& VROSC::MinMaxVector4::__cordl_internal_get__min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr void VROSC::MinMaxVector4::__cordl_internal_set__min(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____min = value;
}
constexpr ::UnityEngine::Vector4& VROSC::MinMaxVector4::__cordl_internal_get__max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr ::UnityEngine::Vector4 const& VROSC::MinMaxVector4::__cordl_internal_get__max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr void VROSC::MinMaxVector4::__cordl_internal_set__max(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____max = value;
}
inline ::UnityEngine::Vector4 VROSC::MinMaxVector4::get_Min()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 VROSC::MinMaxVector4::get_Max()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method);
}
inline void VROSC::MinMaxVector4::_ctor(::UnityEngine::Vector4  min, ::UnityEngine::Vector4  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::UnityEngine::Vector4 VROSC::MinMaxVector4::Random(bool  uniform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, uniform);
}
inline ::UnityEngine::Vector4 VROSC::MinMaxVector4::Lerp(float_t  amount, bool  clamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector4*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, amount, clamp);
}
inline ::VROSC::MinMaxVector4* VROSC::MinMaxVector4::New_ctor(::UnityEngine::Vector4  min, ::UnityEngine::Vector4  max)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MinMaxVector4*>(min, max));
}
// Ctor Parameters []
constexpr ::VROSC::MinMaxVector4::MinMaxVector4()   {
}
