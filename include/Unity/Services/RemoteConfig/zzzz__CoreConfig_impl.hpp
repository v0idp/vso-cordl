#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/CoreConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__CoreConfig_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IAccessToken_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IPlayerId_def.hpp"
inline void Unity::Services::RemoteConfig::CoreConfig::setStaticF_analyticsUserId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "analyticsUserId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Unity::Services::RemoteConfig::CoreConfig::getStaticF_analyticsUserId()  {
return ::cordl_internals::getStaticField<::StringW, "analyticsUserId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>();
}
inline void Unity::Services::RemoteConfig::CoreConfig::setStaticF_installationId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "installationId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Unity::Services::RemoteConfig::CoreConfig::getStaticF_installationId()  {
return ::cordl_internals::getStaticField<::StringW, "installationId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>();
}
inline void Unity::Services::RemoteConfig::CoreConfig::setStaticF_Itoken(::Unity::Services::Authentication::Internal::IAccessToken*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Authentication::Internal::IAccessToken*, "Itoken", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>(std::forward<::Unity::Services::Authentication::Internal::IAccessToken*>(value));
}
inline ::Unity::Services::Authentication::Internal::IAccessToken* Unity::Services::RemoteConfig::CoreConfig::getStaticF_Itoken()  {
return ::cordl_internals::getStaticField<::Unity::Services::Authentication::Internal::IAccessToken*, "Itoken", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>();
}
inline void Unity::Services::RemoteConfig::CoreConfig::setStaticF_IplayerId(::Unity::Services::Authentication::Internal::IPlayerId*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Authentication::Internal::IPlayerId*, "IplayerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>(std::forward<::Unity::Services::Authentication::Internal::IPlayerId*>(value));
}
inline ::Unity::Services::Authentication::Internal::IPlayerId* Unity::Services::RemoteConfig::CoreConfig::getStaticF_IplayerId()  {
return ::cordl_internals::getStaticField<::Unity::Services::Authentication::Internal::IPlayerId*, "IplayerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::CoreConfig*>::get>();
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::CoreConfig::CoreConfig()   {
}
