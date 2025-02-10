#pragma once
// IWYU pragma private; include "VROSC/TMPTextAppearAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__TMPTextAppearAsset_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TMPTextAppearBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::TMPTextAppearAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::TMPTextAppearAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::TMPTextAppearAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x176fa90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TMPTextAppearAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TMPTextAppearAsset::*)()>(&::VROSC::TMPTextAppearAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176fbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TMPTextAppearBehaviour*& VROSC::TMPTextAppearAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::TMPTextAppearBehaviour* const& VROSC::TMPTextAppearAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::TMPTextAppearAsset::__cordl_internal_set__cordl_template(::VROSC::TMPTextAppearBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>& VROSC::TMPTextAppearAsset::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>> const& VROSC::TMPTextAppearAsset::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::TMPTextAppearAsset::__cordl_internal_set__text(::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
inline ::UnityEngine::Playables::Playable VROSC::TMPTextAppearAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::TMPTextAppearAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TMPTextAppearAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TMPTextAppearAsset* VROSC::TMPTextAppearAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TMPTextAppearAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::TMPTextAppearAsset::TMPTextAppearAsset()   {
}
