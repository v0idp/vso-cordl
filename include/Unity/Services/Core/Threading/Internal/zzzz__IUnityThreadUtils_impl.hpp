#pragma once
// IWYU pragma private; include "Unity/Services/Core/Threading/Internal/IUnityThreadUtils.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Threading/Internal/zzzz__IUnityThreadUtils_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Threading::Internal::IUnityThreadUtils::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Threading::Internal::IUnityThreadUtils::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
