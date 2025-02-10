#pragma once
// IWYU pragma private; include "VROSC/FractureCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__FractureCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__FractureCreationCreationBehaviour_def.hpp"
#include "VROSC/zzzz__FracturedObjectController_def.hpp"
//  Writing Method size for method: ::VROSC::FractureCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::FractureCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::FractureCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1766490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FractureCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FractureCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FractureCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FractureCreationAsset::*)()>(&::VROSC::FractureCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1766874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FractureCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::FractureCreationCreationBehaviour*& VROSC::FractureCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::FractureCreationCreationBehaviour* const& VROSC::FractureCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::FractureCreationAsset::__cordl_internal_set__cordl_template(::VROSC::FractureCreationCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>& VROSC::FractureCreationAsset::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>> const& VROSC::FractureCreationAsset::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::FractureCreationAsset::__cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::FractureCreationAsset::__cordl_internal_get__fracturePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fracturePos;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::FractureCreationAsset::__cordl_internal_get__fracturePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fracturePos;
}
constexpr void VROSC::FractureCreationAsset::__cordl_internal_set__fracturePos(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fracturePos = value;
}
constexpr bool& VROSC::FractureCreationAsset::__cordl_internal_get__assembling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembling;
}
constexpr bool const& VROSC::FractureCreationAsset::__cordl_internal_get__assembling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembling;
}
constexpr void VROSC::FractureCreationAsset::__cordl_internal_set__assembling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assembling = value;
}
inline ::UnityEngine::Playables::Playable VROSC::FractureCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FractureCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::FractureCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FractureCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FractureCreationAsset* VROSC::FractureCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FractureCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::FractureCreationAsset::FractureCreationAsset()   {
}
