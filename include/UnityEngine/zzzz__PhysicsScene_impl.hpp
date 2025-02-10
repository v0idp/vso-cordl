#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsScene.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::PhysicsScene::*)()>(&::UnityEngine::PhysicsScene::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2fc72fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)()>(&::UnityEngine::PhysicsScene::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc73e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::System::Object*)>(&::UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2fc73e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fc7460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2fc29a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastTest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastTest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc7470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastTest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2fc2e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, ::ByRef<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_Raycast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc7558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2fc404c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2fc7650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphereNonAlloc_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fc7744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphereNonAlloc_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphere
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc4ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastTest_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Ray>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastTest_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fc74ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastTest_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_Raycast_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Ray>, float_t, ::ByRef<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_Raycast_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc75d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_Raycast_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastNonAlloc_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Ray>, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc76c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastNonAlloc_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphereNonAlloc_Internal_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc77c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphereNonAlloc_Internal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::PhysicsScene::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::PhysicsScene::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene::Equals(::UnityEngine::PhysicsScene  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastTest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphereNonAlloc_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position, radius, results, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_RaycastTest_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastTest_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_Raycast_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, ::ByRef<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_Raycast_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "Internal_RaycastNonAlloc_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PhysicsScene>::get(),
                        "OverlapSphereNonAlloc_Internal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr  UnityEngine::PhysicsScene::operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* UnityEngine::PhysicsScene::i___System__IEquatable_1___UnityEngine__PhysicsScene_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PhysicsScene::PhysicsScene(int32_t  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsScene::PhysicsScene()   {
}
