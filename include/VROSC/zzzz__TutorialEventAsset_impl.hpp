#pragma once
// IWYU pragma private; include "VROSC/TutorialEventAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "VROSC/zzzz__TutorialEvent_impl.hpp"
#include "VROSC/zzzz__TutorialEventAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TutorialEventBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialEventAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::TutorialEventAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::TutorialEventAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x176f2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialEventAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventAsset::*)()>(&::VROSC::TutorialEventAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176f3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TutorialEventBehaviour*& VROSC::TutorialEventAsset::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::VROSC::TutorialEventBehaviour* const& VROSC::TutorialEventAsset::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void VROSC::TutorialEventAsset::__cordl_internal_set_settings(::VROSC::TutorialEventBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TutorialEvent& VROSC::TutorialEventAsset::__cordl_internal_get__startEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEvent;
}
constexpr ::VROSC::TutorialEvent const& VROSC::TutorialEventAsset::__cordl_internal_get__startEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEvent;
}
constexpr void VROSC::TutorialEventAsset::__cordl_internal_set__startEvent(::VROSC::TutorialEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startEvent = value;
}
constexpr ::VROSC::TutorialEvent& VROSC::TutorialEventAsset::__cordl_internal_get__endEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endEvent;
}
constexpr ::VROSC::TutorialEvent const& VROSC::TutorialEventAsset::__cordl_internal_get__endEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endEvent;
}
constexpr void VROSC::TutorialEventAsset::__cordl_internal_set__endEvent(::VROSC::TutorialEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endEvent = value;
}
inline ::UnityEngine::Playables::Playable VROSC::TutorialEventAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::TutorialEventAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialEventAsset* VROSC::TutorialEventAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialEventAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialEventAsset::TutorialEventAsset()   {
}
