#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint2D.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPoint2D.get_normal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ContactPoint2D::*)()>(&::UnityEngine::ContactPoint2D::get_normal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc2058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPoint2D>::get(),
                        "get_normal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::ContactPoint2D::get_normal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPoint2D>::get(),
                        "get_normal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Rigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D(::UnityEngine::Vector2  m_Point, ::UnityEngine::Vector2  m_Normal, ::UnityEngine::Vector2  m_RelativeVelocity, float_t  m_Separation, float_t  m_NormalImpulse, float_t  m_TangentImpulse, int32_t  m_Collider, int32_t  m_OtherCollider, int32_t  m_Rigidbody, int32_t  m_OtherRigidbody, int32_t  m_Enabled) noexcept  {
this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_RelativeVelocity = m_RelativeVelocity;
this->m_Separation = m_Separation;
this->m_NormalImpulse = m_NormalImpulse;
this->m_TangentImpulse = m_TangentImpulse;
this->m_Collider = m_Collider;
this->m_OtherCollider = m_OtherCollider;
this->m_Rigidbody = m_Rigidbody;
this->m_OtherRigidbody = m_OtherRigidbody;
this->m_Enabled = m_Enabled;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPoint2D::ContactPoint2D()   {
}
