#pragma once
// IWYU pragma private; include "VROSC/IndividualHintNoteAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__IndividualHintNoteAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__IndividualHintNoteBehaviour_def.hpp"
#include "VROSC/zzzz__TouchableObject_def.hpp"
//  Writing Method size for method: ::VROSC::IndividualHintNoteAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::IndividualHintNoteAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::IndividualHintNoteAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1767d5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IndividualHintNoteAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IndividualHintNoteAsset::*)()>(&::VROSC::IndividualHintNoteAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::IndividualHintNoteBehaviour*& VROSC::IndividualHintNoteAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::IndividualHintNoteBehaviour* const& VROSC::IndividualHintNoteAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::IndividualHintNoteAsset::__cordl_internal_set__cordl_template(::VROSC::IndividualHintNoteBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObject>>& VROSC::IndividualHintNoteAsset::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObject>> const& VROSC::IndividualHintNoteAsset::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::IndividualHintNoteAsset::__cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline ::UnityEngine::Playables::Playable VROSC::IndividualHintNoteAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::IndividualHintNoteAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IndividualHintNoteAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IndividualHintNoteAsset* VROSC::IndividualHintNoteAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IndividualHintNoteAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::IndividualHintNoteAsset::IndividualHintNoteAsset()   {
}
