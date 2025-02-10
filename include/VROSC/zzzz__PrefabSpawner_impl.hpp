#pragma once
// IWYU pragma private; include "VROSC/PrefabSpawner.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__PrefabSpawner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::PrefabSpawner.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&::VROSC::PrefabSpawner::NodeBegin)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x171fd84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PrefabSpawner.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&::VROSC::PrefabSpawner::NodeStay)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x171fff8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PrefabSpawner.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PrefabSpawner::*)(::VROSC::Signal*)>(&::VROSC::PrefabSpawner::NodeEnd)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1720094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PrefabSpawner.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PrefabSpawner::*)()>(&::VROSC::PrefabSpawner::Clear)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1720100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PrefabSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PrefabSpawner::*)()>(&::VROSC::PrefabSpawner::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1720204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SignalNode>& VROSC::PrefabSpawner::__cordl_internal_get__prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr ::UnityW<::VROSC::SignalNode> const& VROSC::PrefabSpawner::__cordl_internal_get__prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefab;
}
constexpr void VROSC::PrefabSpawner::__cordl_internal_set__prefab(::UnityW<::VROSC::SignalNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::PrefabSpawner::__cordl_internal_get__spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::PrefabSpawner::__cordl_internal_get__spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnLocation;
}
constexpr void VROSC::PrefabSpawner::__cordl_internal_set__spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*& VROSC::PrefabSpawner::__cordl_internal_get__instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instances;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>* const& VROSC::PrefabSpawner::__cordl_internal_get__instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instances;
}
constexpr void VROSC::PrefabSpawner::__cordl_internal_set__instances(::System::Collections::Generic::List_1<::UnityW<::VROSC::SignalNode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SignalNode>& VROSC::PrefabSpawner::__cordl_internal_get__currentlySignalingInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlySignalingInstance;
}
constexpr ::UnityW<::VROSC::SignalNode> const& VROSC::PrefabSpawner::__cordl_internal_get__currentlySignalingInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlySignalingInstance;
}
constexpr void VROSC::PrefabSpawner::__cordl_internal_set__currentlySignalingInstance(::UnityW<::VROSC::SignalNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentlySignalingInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PrefabSpawner::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::PrefabSpawner::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::PrefabSpawner::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::PrefabSpawner::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PrefabSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PrefabSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PrefabSpawner* VROSC::PrefabSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PrefabSpawner*>());
}
// Ctor Parameters []
constexpr ::VROSC::PrefabSpawner::PrefabSpawner()   {
}
