#pragma once
// IWYU pragma private; include "UnityEngine/RangeInt.hpp"
#include "UnityEngine/zzzz__RangeInt_def.hpp"
//  Writing Method size for method: ::UnityEngine::RangeInt.get_end
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::RangeInt::*)()>(&::UnityEngine::RangeInt::get_end)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f8cd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeInt>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RangeInt._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RangeInt::*)(int32_t, int32_t)>(&::UnityEngine::RangeInt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8cd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeInt>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::RangeInt::get_end()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeInt>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::RangeInt::_ctor(int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeInt>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, length);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RangeInt::RangeInt(int32_t  start, int32_t  length) noexcept  {
this->start = start;
this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::RangeInt::RangeInt()   {
}
