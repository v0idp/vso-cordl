#pragma once
// IWYU pragma private; include "UnityEngine/Collision2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision2D.get_relativeVelocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_relativeVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc1fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision2D*>::get(),
                        "get_relativeVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision2D.get_contacts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> (::UnityEngine::Collision2D::*)()>(&::UnityEngine::Collision2D::get_contacts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2fc1fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision2D*>::get(),
                        "get_contacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Collider;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Collider;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Collider(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Collider = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_OtherCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherCollider;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_OtherCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherCollider;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_OtherCollider(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OtherCollider = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Rigidbody(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rigidbody = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_OtherRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherRigidbody;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_OtherRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OtherRigidbody;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_OtherRigidbody(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OtherRigidbody = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Collision2D::__cordl_internal_get_m_RelativeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RelativeVelocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Collision2D::__cordl_internal_get_m_RelativeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RelativeVelocity;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_RelativeVelocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RelativeVelocity = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_Enabled(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Enabled = value;
}
constexpr int32_t& UnityEngine::Collision2D::__cordl_internal_get_m_ContactCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactCount;
}
constexpr int32_t const& UnityEngine::Collision2D::__cordl_internal_get_m_ContactCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactCount;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_ContactCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContactCount = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& UnityEngine::Collision2D::__cordl_internal_get_m_ReusedContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReusedContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& UnityEngine::Collision2D::__cordl_internal_get_m_ReusedContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReusedContacts;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReusedContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>& UnityEngine::Collision2D::__cordl_internal_get_m_LegacyContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> const& UnityEngine::Collision2D::__cordl_internal_get_m_LegacyContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision2D::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LegacyContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector2 UnityEngine::Collision2D::get_relativeVelocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision2D*>::get(),
                        "get_relativeVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*> UnityEngine::Collision2D::get_contacts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision2D*>::get(),
                        "get_contacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint2D,::Array<::UnityEngine::ContactPoint2D>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision2D::Collision2D()   {
}
