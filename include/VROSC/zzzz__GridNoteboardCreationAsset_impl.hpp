#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__GridNoteboardCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__GridNoteboardCreationBehaviour_def.hpp"
#include "VROSC/zzzz__GridNoteboard_def.hpp"
//  Writing Method size for method: ::VROSC::GridNoteboardCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::GridNoteboardCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::GridNoteboardCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1768a88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardCreationAsset::*)()>(&::VROSC::GridNoteboardCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1768e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::GridNoteboardCreationBehaviour*& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::GridNoteboardCreationBehaviour* const& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::GridNoteboardCreationAsset::__cordl_internal_set__cordl_template(::VROSC::GridNoteboardCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__fromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__fromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr void VROSC::GridNoteboardCreationAsset::__cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fromPoint = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__noteBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>> const& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__noteBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr void VROSC::GridNoteboardCreationAsset::__cordl_internal_set__noteBoard(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noteBoard = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::GridNoteboardCreationAsset::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::GridNoteboardCreationAsset::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::GridNoteboardCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::GridNoteboardCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GridNoteboardCreationAsset* VROSC::GridNoteboardCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GridNoteboardCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::GridNoteboardCreationAsset::GridNoteboardCreationAsset()   {
}
