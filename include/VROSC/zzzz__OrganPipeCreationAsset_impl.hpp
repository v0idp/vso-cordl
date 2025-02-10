#pragma once
// IWYU pragma private; include "VROSC/OrganPipeCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__OrganPipeCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__OrganPipeCreationBehaviour_def.hpp"
#include "VROSC/zzzz__OrganPipeRow_def.hpp"
//  Writing Method size for method: ::VROSC::OrganPipeCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::OrganPipeCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::OrganPipeCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x176c3fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeCreationAsset::*)()>(&::VROSC::OrganPipeCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176c628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::OrganPipeCreationBehaviour*& VROSC::OrganPipeCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::OrganPipeCreationBehaviour* const& VROSC::OrganPipeCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::OrganPipeCreationAsset::__cordl_internal_set__cordl_template(::VROSC::OrganPipeCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>& VROSC::OrganPipeCreationAsset::__cordl_internal_get__row()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____row;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>> const& VROSC::OrganPipeCreationAsset::__cordl_internal_get__row() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____row;
}
constexpr void VROSC::OrganPipeCreationAsset::__cordl_internal_set__row(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____row = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeCreationAsset::__cordl_internal_get__startCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeCreationAsset::__cordl_internal_get__startCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startCurve;
}
constexpr void VROSC::OrganPipeCreationAsset::__cordl_internal_set__startCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeCreationAsset::__cordl_internal_get__endCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeCreationAsset::__cordl_internal_get__endCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endCurve;
}
constexpr void VROSC::OrganPipeCreationAsset::__cordl_internal_set__endCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::OrganPipeCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::OrganPipeCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OrganPipeCreationAsset* VROSC::OrganPipeCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OrganPipeCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::OrganPipeCreationAsset::OrganPipeCreationAsset()   {
}
