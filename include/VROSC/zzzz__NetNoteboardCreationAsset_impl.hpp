#pragma once
// IWYU pragma private; include "VROSC/NetNoteboardCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__NetNoteboardCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__NetNoteboardCreationBehaviour_def.hpp"
#include "VROSC/zzzz__NetNoteboard_def.hpp"
//  Writing Method size for method: ::VROSC::NetNoteboardCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::NetNoteboardCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::NetNoteboardCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x176b848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NetNoteboardCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NetNoteboardCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NetNoteboardCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NetNoteboardCreationAsset::*)()>(&::VROSC::NetNoteboardCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176bc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NetNoteboardCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::NetNoteboardCreationBehaviour*& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::NetNoteboardCreationBehaviour* const& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::NetNoteboardCreationAsset::__cordl_internal_set__cordl_template(::VROSC::NetNoteboardCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__fromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__fromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr void VROSC::NetNoteboardCreationAsset::__cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fromPoint = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__noteBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>> const& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__noteBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteBoard;
}
constexpr void VROSC::NetNoteboardCreationAsset::__cordl_internal_set__noteBoard(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noteBoard = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::NetNoteboardCreationAsset::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::NetNoteboardCreationAsset::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::NetNoteboardCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NetNoteboardCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::NetNoteboardCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NetNoteboardCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NetNoteboardCreationAsset* VROSC::NetNoteboardCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NetNoteboardCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::NetNoteboardCreationAsset::NetNoteboardCreationAsset()   {
}
