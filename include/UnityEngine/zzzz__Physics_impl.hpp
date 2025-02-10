#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Physics_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Physics_ContactEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc5c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics_ContactEventDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics_ContactEventDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Physics_ContactEventDelegate::*)(::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics_ContactEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2fc5cbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics_ContactEventDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics_ContactEventDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics_ContactEventDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics_ContactEventDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Physics_ContactEventDelegate::Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics_ContactEventDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scene, headerArray);
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics_ContactEventDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Physics_ContactEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics_ContactEventDelegate::Physics_ContactEventDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContactModify
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Physics::OnSceneContactModify)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2fc25ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OnSceneContactModify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)()>(&::UnityEngine::Physics::get_gravity)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc26d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_gravity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_invokeCollisionCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_invokeCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2fc2798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_invokeCollisionCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultPhysicsScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PhysicsScene (*)()>(&::UnityEngine::Physics::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2fc27c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_defaultPhysicsScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.IgnoreCollision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, bool)>(&::UnityEngine::Physics::IgnoreCollision)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fc2878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "IgnoreCollision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2fc28cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2fc2b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fc2c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2fc2d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2fc2db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fc307c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fc3158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fc3220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2fc32e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc3380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2fc341c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2fc34a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fc352c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2fc35dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>, float_t)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2fc3694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Raycast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::ByRef<::UnityEngine::RaycastHit>)>(&::UnityEngine::Physics::Raycast)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2fc3734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Internal_RaycastAll)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2fc37c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Internal_RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2fc38d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fc3afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fc3bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fc3c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2fc3cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2fc3db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fc3e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics::RaycastAll)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc3f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fc3fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2fc42a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc4338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc43d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2fc4460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t, int32_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2fc4534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, float_t)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2fc460c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>)>(&::UnityEngine::Physics::RaycastNonAlloc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2fc46d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_SphereCastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Query_SphereCastAll)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fc4794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Query_SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2fc48e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray, float_t, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2fc4a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SphereCastAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::UnityEngine::Ray, float_t, float_t, int32_t)>(&::UnityEngine::Physics::SphereCastAll)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2fc4b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2fc4bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fc4cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> (*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::Physics::OverlapSphere)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fc4d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_reuseCollisionCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Physics::get_reuseCollisionCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2fc4df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_reuseCollisionCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fc4e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>, int32_t)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2fc4ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphereNonAlloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>)>(&::UnityEngine::Physics::OverlapSphereNonAlloc)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2fc4f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool, ::UnityEngine::MeshColliderCookingOptions)>(&::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fc4fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "BakeMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshColliderCookingOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.BakeMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::Physics::BakeMesh)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2fc503c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "BakeMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetColliderByInstanceID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Collider> (*)(int32_t)>(&::UnityEngine::Physics::GetColliderByInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc50c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetColliderByInstanceID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetBodyByInstanceID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (*)(int32_t)>(&::UnityEngine::Physics::GetBodyByInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc5100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetBodyByInstanceID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionEnter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fc513c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionStay)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fc5180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.SendOnCollisionExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::Collision*)>(&::UnityEngine::Physics::SendOnCollisionExit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fc51c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OnSceneContact
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t)>(&::UnityEngine::Physics::OnSceneContact)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2fc5208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OnSceneContact",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.ReportContacts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>)>(&::UnityEngine::Physics::ReportContacts)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2fc5460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "ReportContacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.GetCollisionToReport
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collision* (*)(::ByRef<::UnityEngine::ContactPairHeader>, ::ByRef<::UnityEngine::ContactPair>, bool)>(&::UnityEngine::Physics::GetCollisionToReport)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2fc5a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetCollisionToReport",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_gravity_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Physics::get_gravity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc275c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_gravity_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.get_defaultPhysicsScene_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::PhysicsScene>)>(&::UnityEngine::Physics::get_defaultPhysicsScene_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2fc283c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_defaultPhysicsScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Internal_RaycastAll_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Ray>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Internal_RaycastAll_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fc386c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Internal_RaycastAll_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.Query_SphereCastAll_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>, float_t, ::ByRef<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::Query_SphereCastAll_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2fc485c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Query_SphereCastAll_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics.OverlapSphere_Internal_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> (*)(::ByRef<::UnityEngine::PhysicsScene>, ::ByRef<::UnityEngine::Vector3>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::Physics::OverlapSphere_Internal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2fc4c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere_Internal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics::setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>(std::forward<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEvent()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>();
}
inline void UnityEngine::Physics::setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>(std::forward<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*>(value));
}
inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* UnityEngine::Physics::getStaticF_ContactModifyEventCCD()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*, "ContactModifyEventCCD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>();
}
inline void UnityEngine::Physics::setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>(std::forward<::UnityEngine::Physics_ContactEventDelegate*>(value));
}
inline ::UnityEngine::Physics_ContactEventDelegate* UnityEngine::Physics::getStaticF_ContactEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Physics_ContactEventDelegate*, "ContactEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>();
}
inline void UnityEngine::Physics::setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>(std::forward<::UnityEngine::Collision*>(value));
}
inline ::UnityEngine::Collision* UnityEngine::Physics::getStaticF_s_ReusableCollision()  {
return ::cordl_internals::getStaticField<::UnityEngine::Collision*, "s_ReusableCollision", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get>();
}
inline void UnityEngine::Physics::OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OnSceneContactModify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene, buffer, count, isCCD);
}
inline ::UnityEngine::Vector3 UnityEngine::Physics::get_gravity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_gravity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics::get_invokeCollisionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_invokeCollisionCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::PhysicsScene UnityEngine::Physics::get_defaultPhysicsScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_defaultPhysicsScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Physics::IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2, bool  ignore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "IgnoreCollision",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, collider1, collider2, ignore);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, origin, direction, hitInfo);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, hitInfo, maxDistance);
}
inline bool UnityEngine::Physics::Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Raycast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RaycastHit>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, hitInfo);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Internal_RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, origin, direction, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, origin, direction, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, origin, direction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray, maxDistance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray, maxDistance);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::RaycastAll(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ray, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ray, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ray, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, origin, direction, results, maxDistance, layerMask);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, origin, direction, results, maxDistance);
}
inline int32_t UnityEngine::Physics::RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "RaycastNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, origin, direction, results);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::Query_SphereCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Query_SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, origin, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SphereCastAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, ray, radius, maxDistance, layerMask);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> UnityEngine::Physics::OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>, false>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>, false>(nullptr, ___internal_method, position, radius, layerMask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> UnityEngine::Physics::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>, false>(nullptr, ___internal_method, position, radius);
}
inline bool UnityEngine::Physics::get_reuseCollisionCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_reuseCollisionCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, position, radius, results, layerMask);
}
inline int32_t UnityEngine::Physics::OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphereNonAlloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, position, radius, results);
}
inline void UnityEngine::Physics::BakeMesh(int32_t  meshID, bool  convex, ::UnityEngine::MeshColliderCookingOptions  cookingOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "BakeMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshColliderCookingOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshID, convex, cookingOptions);
}
inline void UnityEngine::Physics::BakeMesh(int32_t  meshID, bool  convex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "BakeMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, meshID, convex);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::Physics::GetColliderByInstanceID(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetColliderByInstanceID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>, false>(nullptr, ___internal_method, instanceID);
}
inline ::UnityW<::UnityEngine::Component> UnityEngine::Physics::GetBodyByInstanceID(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetBodyByInstanceID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::Physics::SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "SendOnCollisionExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component, collision);
}
inline void UnityEngine::Physics::OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OnSceneContact",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene, buffer, count);
}
inline void UnityEngine::Physics::ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "ReportContacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::Collision* UnityEngine::Physics::GetCollisionToReport(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "GetCollisionToReport",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collision*, false>(nullptr, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Physics::get_gravity_Injected(::ByRef<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_gravity_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Physics::get_defaultPhysicsScene_Injected(::ByRef<::UnityEngine::PhysicsScene>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "get_defaultPhysicsScene_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::Internal_RaycastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Internal_RaycastAll_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> UnityEngine::Physics::Query_SphereCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "Query_SphereCastAll_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, false>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> UnityEngine::Physics::OverlapSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Physics*>::get(),
                        "OverlapSphere_Internal_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>, false>(nullptr, ___internal_method, physicsScene, position, radius, layerMask, queryTriggerInteraction);
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics::Physics()   {
}
