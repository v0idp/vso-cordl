#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTintAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__AnimatedAppear_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshTintAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__AdjustableMeshTintBehaviour_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshTintAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::AdjustableMeshTintAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::AdjustableMeshTintAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x176f860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshTintAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTintAsset::*)()>(&::VROSC::AdjustableMeshTintAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176f9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AdjustableMeshTintBehaviour*& VROSC::AdjustableMeshTintAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::AdjustableMeshTintBehaviour* const& VROSC::AdjustableMeshTintAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::AdjustableMeshTintAsset::__cordl_internal_set__cordl_template(::VROSC::AdjustableMeshTintBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>& VROSC::AdjustableMeshTintAsset::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>> const& VROSC::AdjustableMeshTintAsset::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::AdjustableMeshTintAsset::__cordl_internal_set__mesh(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::VROSC::AnimatedAppear_Mode& VROSC::AdjustableMeshTintAsset::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::VROSC::AnimatedAppear_Mode const& VROSC::AdjustableMeshTintAsset::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void VROSC::AdjustableMeshTintAsset::__cordl_internal_set_mode(::VROSC::AnimatedAppear_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
inline ::UnityEngine::Playables::Playable VROSC::AdjustableMeshTintAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::AdjustableMeshTintAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AdjustableMeshTintAsset* VROSC::AdjustableMeshTintAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshTintAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshTintAsset::AdjustableMeshTintAsset()   {
}
