#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MathUtils_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint64_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntLength)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x27f2504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "IntLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntToHex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int32_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntToHex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f26c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "IntToHex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.ApproxEquals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double_t, double_t)>(&::Newtonsoft::Json::Utilities::MathUtils::ApproxEquals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27f26e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "ApproxEquals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline int32_t Newtonsoft::Json::Utilities::MathUtils::IntLength(uint64_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "IntLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, i);
}
inline char16_t Newtonsoft::Json::Utilities::MathUtils::IntToHex(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "IntToHex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, n);
}
inline bool Newtonsoft::Json::Utilities::MathUtils::ApproxEquals(double_t  d1, double_t  d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::MathUtils*>::get(),
                        "ApproxEquals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::MathUtils::MathUtils()   {
}
