#pragma once
// IWYU pragma private; include "VROSC/ServicesWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ServicesWrapper_def.hpp"
#include "VROSC/zzzz__FirebaseWrapper_def.hpp"
inline void VROSC::ServicesWrapper::setStaticF_Firebase(::VROSC::FirebaseWrapper*  value)  {
::cordl_internals::setStaticField<::VROSC::FirebaseWrapper*, "Firebase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ServicesWrapper*>::get>(std::forward<::VROSC::FirebaseWrapper*>(value));
}
inline ::VROSC::FirebaseWrapper* VROSC::ServicesWrapper::getStaticF_Firebase()  {
return ::cordl_internals::getStaticField<::VROSC::FirebaseWrapper*, "Firebase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ServicesWrapper*>::get>();
}
// Ctor Parameters []
constexpr ::VROSC::ServicesWrapper::ServicesWrapper()   {
}
