#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetOrCreateSharedMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(::ByRef<::UnityEngine::Hash128>, uint32_t, uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5c00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetOrCreateSharedMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::cordl_internals::Ptr<void> Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory(::ByRef<::UnityEngine::Hash128>  key, uint32_t  size_of, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::LowLevel::BurstCompilerService*>::get(),
                        "GetOrCreateSharedMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Hash128>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, key, size_of, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::BurstCompilerService::BurstCompilerService()   {
}
