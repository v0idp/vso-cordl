#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/zzzz__AnalyticsService_def.hpp"
#include "Unity/Services/Analytics/zzzz__AnalyticsServiceInstance_def.hpp"
inline void Unity::Services::Analytics::AnalyticsService::setStaticF_internalInstance(::Unity::Services::Analytics::AnalyticsServiceInstance*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Analytics::AnalyticsServiceInstance*, "internalInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsService*>::get>(std::forward<::Unity::Services::Analytics::AnalyticsServiceInstance*>(value));
}
inline ::Unity::Services::Analytics::AnalyticsServiceInstance* Unity::Services::Analytics::AnalyticsService::getStaticF_internalInstance()  {
return ::cordl_internals::getStaticField<::Unity::Services::Analytics::AnalyticsServiceInstance*, "internalInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsService*>::get>();
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::AnalyticsService::AnalyticsService()   {
}
