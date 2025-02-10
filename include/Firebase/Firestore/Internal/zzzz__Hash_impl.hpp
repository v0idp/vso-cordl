#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Hash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Internal/zzzz__Hash_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Internal::Hash.LongHash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int64_t)>(&::Firebase::Firestore::Internal::Hash::LongHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x190e00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Hash*>::get(),
                        "LongHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Internal::Hash.DoubleBitwiseHash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(double_t)>(&::Firebase::Firestore::Internal::Hash::DoubleBitwiseHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x190e018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Hash*>::get(),
                        "DoubleBitwiseHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline int32_t Firebase::Firestore::Internal::Hash::LongHash(int64_t  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Hash*>::get(),
                        "LongHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, l);
}
inline int32_t Firebase::Firestore::Internal::Hash::DoubleBitwiseHash(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::Hash*>::get(),
                        "DoubleBitwiseHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Internal::Hash::Hash()   {
}
