#pragma once
// IWYU pragma private; include "UnityEngine/ContactPair.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPair.get_Collider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_Collider)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc5944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_OtherCollider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_OtherCollider)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc59d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_OtherCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc5a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc5b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_IsCollisionStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_IsCollisionStay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc5b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_HasRemovedCollider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_HasRemovedCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fc5844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_HasRemovedCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.ExtractContactsArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ContactPair::*)(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, bool)>(&::UnityEngine::ContactPair::ExtractContactsArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fc2458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "ExtractContactsArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.ExtractContactsArray_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::ContactPair>, ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, bool)>(&::UnityEngine::ContactPair::ExtractContactsArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fc78c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "ExtractContactsArray_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_Collider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_Collider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_OtherCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_OtherCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionEnter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_IsCollisionStay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_IsCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_HasRemovedCollider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "get_HasRemovedCollider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::ExtractContactsArray(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  managedContainer, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "ExtractContactsArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, managedContainer, flipped);
}
inline int32_t UnityEngine::ContactPair::ExtractContactsArray_Injected(::ByRef<::UnityEngine::ContactPair>  _unity_self, ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  managedContainer, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactPair>::get(),
                        "ExtractContactsArray_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self, managedContainer, flipped);
}
// Ctor Parameters [CppParam { name: "m_ColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OtherColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NbPoints", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Events", ty: "::UnityEngine::CollisionPairEventFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ImpulseSum", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactPair::ContactPair(int32_t  m_ColliderID, int32_t  m_OtherColliderID, ::System::IntPtr  m_StartPtr, uint32_t  m_NbPoints, ::UnityEngine::CollisionPairFlags  m_Flags, ::UnityEngine::CollisionPairEventFlags  m_Events, ::UnityEngine::Vector3  m_ImpulseSum) noexcept  {
this->m_ColliderID = m_ColliderID;
this->m_OtherColliderID = m_OtherColliderID;
this->m_StartPtr = m_StartPtr;
this->m_NbPoints = m_NbPoints;
this->m_Flags = m_Flags;
this->m_Events = m_Events;
this->m_ImpulseSum = m_ImpulseSum;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPair::ContactPair()   {
}
