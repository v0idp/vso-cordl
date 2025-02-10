#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> const& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Result;
}
constexpr void UnityEngine::AsyncInstantiateOperation::__cordl_internal_set_m_Result(::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperation::AsyncInstantiateOperation()   {
}
