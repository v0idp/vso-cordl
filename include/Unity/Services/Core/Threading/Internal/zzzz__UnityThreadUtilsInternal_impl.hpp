#pragma once
// IWYU pragma private; include "Unity/Services/Core/Threading/Internal/UnityThreadUtilsInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Threading/Internal/zzzz__IUnityThreadUtils_impl.hpp"
#include "Unity/Services/Core/Threading/Internal/zzzz__UnityThreadUtilsInternal_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::*)()>(&::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea710c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*>());
}
/// @brief Convert operator to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
constexpr  Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::operator ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*() noexcept {
return static_cast<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Threading::Internal::IUnityThreadUtils"
constexpr ::Unity::Services::Core::Threading::Internal::IUnityThreadUtils* Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::i___Unity__Services__Core__Threading__Internal__IUnityThreadUtils() noexcept {
return static_cast<::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal::UnityThreadUtilsInternal()   {
}
