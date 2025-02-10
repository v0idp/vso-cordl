#pragma once
// IWYU pragma private; include "VROSC/AppearAnimationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__AppearAnimationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__AppearAnimationBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::AppearAnimationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::AppearAnimationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::AppearAnimationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1765f48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AppearAnimationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AppearAnimationAsset::*)()>(&::VROSC::AppearAnimationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17661a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AppearAnimationBehaviour*& VROSC::AppearAnimationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::AppearAnimationBehaviour* const& VROSC::AppearAnimationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__cordl_template(::VROSC::AppearAnimationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::AppearAnimationAsset::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::AppearAnimationAsset::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::AppearAnimationAsset::__cordl_internal_get__start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::AppearAnimationAsset::__cordl_internal_get__start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__start(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____start = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::AppearAnimationAsset::__cordl_internal_get__end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::AppearAnimationAsset::__cordl_internal_get__end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__end(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____end = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationAsset::__cordl_internal_get__positionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationAsset::__cordl_internal_get__positionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationAsset::__cordl_internal_get__rotationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationAsset::__cordl_internal_get__rotationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationAsset::__cordl_internal_get__scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationAsset::__cordl_internal_get__scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AppearAnimationAsset::__cordl_internal_get__randomStartRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomStartRotation;
}
constexpr float_t const& VROSC::AppearAnimationAsset::__cordl_internal_get__randomStartRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomStartRotation;
}
constexpr void VROSC::AppearAnimationAsset::__cordl_internal_set__randomStartRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____randomStartRotation = value;
}
inline ::UnityEngine::Playables::Playable VROSC::AppearAnimationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::AppearAnimationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AppearAnimationAsset* VROSC::AppearAnimationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AppearAnimationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::AppearAnimationAsset::AppearAnimationAsset()   {
}
