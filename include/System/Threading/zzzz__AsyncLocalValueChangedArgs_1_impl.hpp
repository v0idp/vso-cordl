#pragma once
// IWYU pragma private; include "System/Threading/AsyncLocalValueChangedArgs_1.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1(T  _PreviousValue_k__BackingField, T  _CurrentValue_k__BackingField, bool  _ThreadContextChanged_k__BackingField) noexcept  {
this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1()   {
}
