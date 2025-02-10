#pragma once
// IWYU pragma private; include "VROSC/IconSwitchOnSignal.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__IconSwitchOnSignal_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::IconSwitchOnSignal.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitchOnSignal::*)(::VROSC::Signal*)>(&::VROSC::IconSwitchOnSignal::NodeBegin)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1740318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IconSwitchOnSignal.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitchOnSignal::*)(::VROSC::Signal*)>(&::VROSC::IconSwitchOnSignal::NodeEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x174036c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IconSwitchOnSignal.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitchOnSignal::*)(bool)>(&::VROSC::IconSwitchOnSignal::SetActive)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1740338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IconSwitchOnSignal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IconSwitchOnSignal::*)()>(&::VROSC::IconSwitchOnSignal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174038c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& VROSC::IconSwitchOnSignal::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& VROSC::IconSwitchOnSignal::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void VROSC::IconSwitchOnSignal::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::IconSwitchOnSignal::__cordl_internal_get__normalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::IconSwitchOnSignal::__cordl_internal_get__normalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMesh;
}
constexpr void VROSC::IconSwitchOnSignal::__cordl_internal_set__normalMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::IconSwitchOnSignal::__cordl_internal_get__activeMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::IconSwitchOnSignal::__cordl_internal_get__activeMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr void VROSC::IconSwitchOnSignal::__cordl_internal_set__activeMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::IconSwitchOnSignal::__cordl_internal_get__isHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovering;
}
constexpr bool const& VROSC::IconSwitchOnSignal::__cordl_internal_get__isHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovering;
}
constexpr void VROSC::IconSwitchOnSignal::__cordl_internal_set__isHovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHovering = value;
}
inline void VROSC::IconSwitchOnSignal::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::IconSwitchOnSignal::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::IconSwitchOnSignal::SetActive(bool  shouldBeActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeActive);
}
inline void VROSC::IconSwitchOnSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IconSwitchOnSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IconSwitchOnSignal* VROSC::IconSwitchOnSignal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IconSwitchOnSignal*>());
}
// Ctor Parameters []
constexpr ::VROSC::IconSwitchOnSignal::IconSwitchOnSignal()   {
}
