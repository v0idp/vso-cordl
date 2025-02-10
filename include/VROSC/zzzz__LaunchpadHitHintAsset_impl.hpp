#pragma once
// IWYU pragma private; include "VROSC/LaunchpadHitHintAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__LaunchpadHitHintAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__LaunchPadEffectOnSignal_def.hpp"
#include "VROSC/zzzz__LaunchpadHitHintBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::LaunchpadHitHintAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::LaunchpadHitHintAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::LaunchpadHitHintAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1767f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadHitHintAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadHitHintAsset::*)()>(&::VROSC::LaunchpadHitHintAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17680c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LaunchpadHitHintBehaviour*& VROSC::LaunchpadHitHintAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::LaunchpadHitHintBehaviour* const& VROSC::LaunchpadHitHintAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::LaunchpadHitHintAsset::__cordl_internal_set__cordl_template(::VROSC::LaunchpadHitHintBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::LaunchPadEffectOnSignal>>& VROSC::LaunchpadHitHintAsset::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::LaunchPadEffectOnSignal>> const& VROSC::LaunchpadHitHintAsset::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::LaunchpadHitHintAsset::__cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::LaunchPadEffectOnSignal>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline ::UnityEngine::Playables::Playable VROSC::LaunchpadHitHintAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::LaunchpadHitHintAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LaunchpadHitHintAsset* VROSC::LaunchpadHitHintAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LaunchpadHitHintAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::LaunchpadHitHintAsset::LaunchpadHitHintAsset()   {
}
