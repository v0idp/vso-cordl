#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/INetworkHandler.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Authentication::INetworkHandler::PostAsync(::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::INetworkHandler*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, url, headers);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Authentication::INetworkHandler::PostAsync(::StringW  url, ::System::Object*  payload, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::INetworkHandler*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, url, payload, headers);
}
