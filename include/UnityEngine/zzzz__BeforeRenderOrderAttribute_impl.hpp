#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderOrderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__BeforeRenderOrderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::BeforeRenderOrderAttribute.get_order
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::BeforeRenderOrderAttribute::*)()>(&::UnityEngine::BeforeRenderOrderAttribute::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f67f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderOrderAttribute*>::get(),
                        "get_order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::BeforeRenderOrderAttribute::__cordl_internal_get__order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr int32_t const& UnityEngine::BeforeRenderOrderAttribute::__cordl_internal_get__order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr void UnityEngine::BeforeRenderOrderAttribute::__cordl_internal_set__order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_k__BackingField = value;
}
inline int32_t UnityEngine::BeforeRenderOrderAttribute::get_order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderOrderAttribute*>::get(),
                        "get_order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderOrderAttribute::BeforeRenderOrderAttribute()   {
}
