#pragma once
// IWYU pragma private; include "System/Threading/AsyncLocal_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valueChangedHandler;
}
template<typename T>
constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* const& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valueChangedHandler;
}
template<typename T>
constexpr void System::Threading::AsyncLocal_1<T>::__cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_valueChangedHandler, value);
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Threading::AsyncLocal_1<T>::AsyncLocal_1()   {
}
