#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/BufferSystemCalls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferSystemCalls_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__BufferSystemCalls_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferSystemCalls.GenerateGuid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::Internal::BufferSystemCalls::*)()>(&::Unity::Services::Analytics::Internal::BufferSystemCalls::GenerateGuid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e90498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferSystemCalls*>::get(),
                        "GenerateGuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferSystemCalls._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferSystemCalls::*)()>(&::Unity::Services::Analytics::Internal::BufferSystemCalls::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Analytics::Internal::BufferSystemCalls::GenerateGuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferSystemCalls*>::get(),
                        "GenerateGuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferSystemCalls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::BufferSystemCalls* Unity::Services::Analytics::Internal::BufferSystemCalls::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::BufferSystemCalls*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBufferSystemCalls"
constexpr  Unity::Services::Analytics::Internal::BufferSystemCalls::operator ::Unity::Services::Analytics::Internal::IBufferSystemCalls*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBufferSystemCalls*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IBufferSystemCalls"
constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls* Unity::Services::Analytics::Internal::BufferSystemCalls::i___Unity__Services__Analytics__Internal__IBufferSystemCalls() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBufferSystemCalls*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::BufferSystemCalls::BufferSystemCalls()   {
}
