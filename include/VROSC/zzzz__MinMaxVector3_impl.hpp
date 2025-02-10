#pragma once
// IWYU pragma private; include "VROSC/MinMaxVector3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__MinMaxVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VROSC::MinMaxVector3.get_Min
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MinMaxVector3::*)()>(&::VROSC::MinMaxVector3::get_Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ba1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector3.get_Max
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MinMaxVector3::*)()>(&::VROSC::MinMaxVector3::get_Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ba1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector3._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MinMaxVector3::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::VROSC::MinMaxVector3::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17ba1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector3.Random
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MinMaxVector3::*)(bool)>(&::VROSC::MinMaxVector3::Random)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17ba244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MinMaxVector3.Lerp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MinMaxVector3::*)(float_t, bool)>(&::VROSC::MinMaxVector3::Lerp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17ba2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::MinMaxVector3::__cordl_internal_get__min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr ::UnityEngine::Vector3 const& VROSC::MinMaxVector3::__cordl_internal_get__min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____min;
}
constexpr void VROSC::MinMaxVector3::__cordl_internal_set__min(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____min = value;
}
constexpr ::UnityEngine::Vector3& VROSC::MinMaxVector3::__cordl_internal_get__max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr ::UnityEngine::Vector3 const& VROSC::MinMaxVector3::__cordl_internal_get__max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____max;
}
constexpr void VROSC::MinMaxVector3::__cordl_internal_set__max(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____max = value;
}
inline ::UnityEngine::Vector3 VROSC::MinMaxVector3::get_Min()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "get_Min",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::MinMaxVector3::get_Max()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "get_Max",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::MinMaxVector3::_ctor(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::UnityEngine::Vector3 VROSC::MinMaxVector3::Random(bool  uniform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "Random",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, uniform);
}
inline ::UnityEngine::Vector3 VROSC::MinMaxVector3::Lerp(float_t  amount, bool  clamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MinMaxVector3*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, amount, clamp);
}
inline ::VROSC::MinMaxVector3* VROSC::MinMaxVector3::New_ctor(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MinMaxVector3*>(min, max));
}
// Ctor Parameters []
constexpr ::VROSC::MinMaxVector3::MinMaxVector3()   {
}
