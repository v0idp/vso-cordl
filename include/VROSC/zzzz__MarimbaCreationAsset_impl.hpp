#pragma once
// IWYU pragma private; include "VROSC/MarimbaCreationAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "VROSC/zzzz__MarimbaCreationAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__MarimbaCreationBehaviour_def.hpp"
#include "VROSC/zzzz__Marimba_def.hpp"
//  Writing Method size for method: ::VROSC::MarimbaCreationAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::MarimbaCreationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::MarimbaCreationAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x176a88c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaCreationAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaCreationAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MarimbaCreationAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MarimbaCreationAsset::*)()>(&::VROSC::MarimbaCreationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176ae7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MarimbaCreationBehaviour*& VROSC::MarimbaCreationAsset::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::VROSC::MarimbaCreationBehaviour* const& VROSC::MarimbaCreationAsset::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void VROSC::MarimbaCreationAsset::__cordl_internal_set__cordl_template(::VROSC::MarimbaCreationBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& VROSC::MarimbaCreationAsset::__cordl_internal_get__fromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& VROSC::MarimbaCreationAsset::__cordl_internal_get__fromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromPoint;
}
constexpr void VROSC::MarimbaCreationAsset::__cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fromPoint = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>& VROSC::MarimbaCreationAsset::__cordl_internal_get__marimba()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____marimba;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>> const& VROSC::MarimbaCreationAsset::__cordl_internal_get__marimba() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____marimba;
}
constexpr void VROSC::MarimbaCreationAsset::__cordl_internal_set__marimba(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::Marimba>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____marimba = value;
}
constexpr float_t& VROSC::MarimbaCreationAsset::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr float_t const& VROSC::MarimbaCreationAsset::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void VROSC::MarimbaCreationAsset::__cordl_internal_set__posOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posOffset = value;
}
constexpr float_t& VROSC::MarimbaCreationAsset::__cordl_internal_get__rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr float_t const& VROSC::MarimbaCreationAsset::__cordl_internal_get__rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr void VROSC::MarimbaCreationAsset::__cordl_internal_set__rotOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotOffset = value;
}
inline ::UnityEngine::Playables::Playable VROSC::MarimbaCreationAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaCreationAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::MarimbaCreationAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaCreationAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MarimbaCreationAsset* VROSC::MarimbaCreationAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MarimbaCreationAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::MarimbaCreationAsset::MarimbaCreationAsset()   {
}
