#pragma once
// IWYU pragma private; include "VROSC/ControllerHintAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__ControllerHintAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__ControllerHintBehaviour_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__TouchableObjectsController_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerHintAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::ControllerHintAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::ControllerHintAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1767920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerHintAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintAsset::*)()>(&::VROSC::ControllerHintAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::ControllerHintBehaviour*& VROSC::ControllerHintAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::ControllerHintBehaviour* const& VROSC::ControllerHintAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::ControllerHintAsset::__cordl_internal_set__cordl_template(::VROSC::ControllerHintBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::HighlightControllerComponents>>& VROSC::ControllerHintAsset::__cordl_internal_get__highlighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighting;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::HighlightControllerComponents>> const& VROSC::ControllerHintAsset::__cordl_internal_get__highlighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlighting;
}
constexpr void VROSC::ControllerHintAsset::__cordl_internal_set__highlighting(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::HighlightControllerComponents>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlighting = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>& VROSC::ControllerHintAsset::__cordl_internal_get__touchables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>> const& VROSC::ControllerHintAsset::__cordl_internal_get__touchables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchables;
}
constexpr void VROSC::ControllerHintAsset::__cordl_internal_set__touchables(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchables = value;
}
inline ::UnityEngine::Playables::Playable VROSC::ControllerHintAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::ControllerHintAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerHintAsset* VROSC::ControllerHintAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerHintAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerHintAsset::ControllerHintAsset()   {
}
