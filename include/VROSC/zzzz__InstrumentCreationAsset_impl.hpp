#pragma once
// IWYU pragma private; include "VROSC/InstrumentCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "VROSC/zzzz__InstrumentCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__InstrumentCreationBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::InstrumentCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::InstrumentCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17688a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentCreationAsset::*)()>(&::VROSC::InstrumentCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17689c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::InstrumentCreationBehaviour*& VROSC::InstrumentCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::InstrumentCreationBehaviour* const& VROSC::InstrumentCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::InstrumentCreationAsset::__cordl_internal_set__cordl_template(::VROSC::InstrumentCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::InstrumentCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::InstrumentCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentCreationAsset* VROSC::InstrumentCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentCreationAsset::InstrumentCreationAsset()   {
}
