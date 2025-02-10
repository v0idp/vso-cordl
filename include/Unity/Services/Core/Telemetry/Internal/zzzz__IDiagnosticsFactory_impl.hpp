#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IDiagnosticsFactory.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
