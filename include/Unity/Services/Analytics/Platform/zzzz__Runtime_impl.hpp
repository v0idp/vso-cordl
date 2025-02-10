#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Platform/Runtime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Platform/zzzz__Runtime_def.hpp"
#include "Unity/Services/Analytics/Platform/zzzz__UA2PlatformCode_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Platform::Runtime.Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Analytics::Platform::Runtime::Name)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e8d628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::Runtime*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Platform::Runtime.GetPlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::Platform::UA2PlatformCode (*)()>(&::Unity::Services::Analytics::Platform::Runtime::GetPlatform)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e8ef88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::Runtime*>::get(),
                        "GetPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Analytics::Platform::Runtime::Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::Runtime*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Unity::Services::Analytics::Platform::UA2PlatformCode Unity::Services::Analytics::Platform::Runtime::GetPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::Runtime*>::get(),
                        "GetPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::Platform::UA2PlatformCode, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Platform::Runtime::Runtime()   {
}
