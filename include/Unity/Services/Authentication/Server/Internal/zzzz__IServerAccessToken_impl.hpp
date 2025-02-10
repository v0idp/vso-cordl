#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Server/Internal/IServerAccessToken.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IAccessToken_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_impl.hpp"
#include "Unity/Services/Authentication/Server/Internal/zzzz__IServerAccessToken_def.hpp"
/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IAccessToken"
constexpr  Unity::Services::Authentication::Server::Internal::IServerAccessToken::operator ::Unity::Services::Authentication::Internal::IAccessToken*() noexcept {
return static_cast<::Unity::Services::Authentication::Internal::IAccessToken*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::Internal::IAccessToken"
constexpr ::Unity::Services::Authentication::Internal::IAccessToken* Unity::Services::Authentication::Server::Internal::IServerAccessToken::i___Unity__Services__Authentication__Internal__IAccessToken() noexcept {
return static_cast<::Unity::Services::Authentication::Internal::IAccessToken*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr  Unity::Services::Authentication::Server::Internal::IServerAccessToken::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Authentication::Server::Internal::IServerAccessToken::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
