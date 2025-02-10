#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardDestructionAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__GridNoteboardDestructionAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__GridNoteboardDestructionBehaviour_def.hpp"
#include "VROSC/zzzz__GridNoteboard_def.hpp"
//  Writing Method size for method: ::VROSC::GridNoteboardDestructionAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::GridNoteboardDestructionAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::GridNoteboardDestructionAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x176998c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardDestructionAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardDestructionAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GridNoteboardDestructionAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GridNoteboardDestructionAsset::*)()>(&::VROSC::GridNoteboardDestructionAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1769d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardDestructionAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::GridNoteboardDestructionBehaviour*& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::GridNoteboardDestructionBehaviour* const& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::GridNoteboardDestructionAsset::__cordl_internal_set__cordl_template(::VROSC::GridNoteboardDestructionBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__toPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toPoint;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__toPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toPoint;
}
constexpr void VROSC::GridNoteboardDestructionAsset::__cordl_internal_set__toPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toPoint = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__noteBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>> const& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__noteBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr void VROSC::GridNoteboardDestructionAsset::__cordl_internal_set__noteBoard(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noteBoard = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::GridNoteboardDestructionAsset::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::GridNoteboardDestructionAsset::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::GridNoteboardDestructionAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardDestructionAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::GridNoteboardDestructionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GridNoteboardDestructionAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GridNoteboardDestructionAsset* VROSC::GridNoteboardDestructionAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GridNoteboardDestructionAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::GridNoteboardDestructionAsset::GridNoteboardDestructionAsset()   {
}
