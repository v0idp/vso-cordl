#pragma once
// IWYU pragma private; include "VROSC/TextActivationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__TextActivationAsset_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TextActivationBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::TextActivationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::TextActivationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::TextActivationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x176cb68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextActivationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextActivationAsset::*)()>(&::VROSC::TextActivationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176cdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TextActivationBehaviour*& VROSC::TextActivationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::TextActivationBehaviour* const& VROSC::TextActivationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::TextActivationAsset::__cordl_internal_set__cordl_template(::VROSC::TextActivationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>& VROSC::TextActivationAsset::__cordl_internal_get__textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>> const& VROSC::TextActivationAsset::__cordl_internal_get__textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr void VROSC::TextActivationAsset::__cordl_internal_set__textMesh(::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textMesh = value;
}
constexpr ::StringW& VROSC::TextActivationAsset::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::StringW const& VROSC::TextActivationAsset::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::TextActivationAsset::__cordl_internal_set__text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::TextActivationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::TextActivationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextActivationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TextActivationAsset* VROSC::TextActivationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TextActivationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::TextActivationAsset::TextActivationAsset()   {
}
