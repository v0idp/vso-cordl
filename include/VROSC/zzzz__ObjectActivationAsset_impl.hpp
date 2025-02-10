#pragma once
// IWYU pragma private; include "VROSC/ObjectActivationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__ObjectActivationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__ObjectActivationBehaviour_def.hpp"
#include "VROSC/zzzz__ObjectActivation_def.hpp"
//  Writing Method size for method: ::VROSC::ObjectActivationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::ObjectActivationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::ObjectActivationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x176c8d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ObjectActivationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ObjectActivationAsset::*)()>(&::VROSC::ObjectActivationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176ca04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::ObjectActivationBehaviour*& VROSC::ObjectActivationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::ObjectActivationBehaviour* const& VROSC::ObjectActivationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::ObjectActivationAsset::__cordl_internal_set__cordl_template(::VROSC::ObjectActivationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>& VROSC::ObjectActivationAsset::__cordl_internal_get__objectActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectActivation;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>> const& VROSC::ObjectActivationAsset::__cordl_internal_get__objectActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectActivation;
}
constexpr void VROSC::ObjectActivationAsset::__cordl_internal_set__objectActivation(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectActivation = value;
}
inline ::UnityEngine::Playables::Playable VROSC::ObjectActivationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::ObjectActivationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ObjectActivationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ObjectActivationAsset* VROSC::ObjectActivationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ObjectActivationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::ObjectActivationAsset::ObjectActivationAsset()   {
}
