#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Platform/DeviceVolumeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Platform/zzzz__DeviceVolumeProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Platform::DeviceVolumeProvider.GetDeviceVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<float_t> (*)()>(&::Unity::Services::Analytics::Platform::DeviceVolumeProvider::GetDeviceVolume)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2e8e9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::DeviceVolumeProvider*>::get(),
                        "GetDeviceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<float_t> Unity::Services::Analytics::Platform::DeviceVolumeProvider::GetDeviceVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Platform::DeviceVolumeProvider*>::get(),
                        "GetDeviceVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Platform::DeviceVolumeProvider::DeviceVolumeProvider()   {
}
