#pragma once
// IWYU pragma private; include "VROSC/UpdateTouchablesAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__UpdateTouchablesAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TouchableObjectsController_def.hpp"
#include "VROSC/zzzz__UpdateTouchablesBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::UpdateTouchablesAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::UpdateTouchablesAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::UpdateTouchablesAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x17683e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UpdateTouchablesAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UpdateTouchablesAsset::*)()>(&::VROSC::UpdateTouchablesAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176853c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UpdateTouchablesBehaviour*& VROSC::UpdateTouchablesAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::UpdateTouchablesBehaviour* const& VROSC::UpdateTouchablesAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::UpdateTouchablesAsset::__cordl_internal_set__cordl_template(::VROSC::UpdateTouchablesBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>& VROSC::UpdateTouchablesAsset::__cordl_internal_get__touchables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>> const& VROSC::UpdateTouchablesAsset::__cordl_internal_get__touchables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr void VROSC::UpdateTouchablesAsset::__cordl_internal_set__touchables(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchables = value;
}
inline ::UnityEngine::Playables::Playable VROSC::UpdateTouchablesAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::UpdateTouchablesAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UpdateTouchablesAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UpdateTouchablesAsset* VROSC::UpdateTouchablesAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UpdateTouchablesAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::UpdateTouchablesAsset::UpdateTouchablesAsset()   {
}
