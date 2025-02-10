#pragma once
// IWYU pragma private; include "VROSC/TutorialHapticAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__TutorialHapticAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TutorialHapticBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialHapticAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::TutorialHapticAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::TutorialHapticAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x176f61c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialHapticAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialHapticAsset::*)()>(&::VROSC::TutorialHapticAsset::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x176f728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::HandType& VROSC::TutorialHapticAsset::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::VROSC::HandType const& VROSC::TutorialHapticAsset::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void VROSC::TutorialHapticAsset::__cordl_internal_set__hand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr float_t& VROSC::TutorialHapticAsset::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& VROSC::TutorialHapticAsset::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void VROSC::TutorialHapticAsset::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr float_t& VROSC::TutorialHapticAsset::__cordl_internal_get__amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr float_t const& VROSC::TutorialHapticAsset::__cordl_internal_get__amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr void VROSC::TutorialHapticAsset::__cordl_internal_set__amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitude = value;
}
constexpr ::VROSC::TutorialHapticBehaviour*& VROSC::TutorialHapticAsset::__cordl_internal_get_animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr ::VROSC::TutorialHapticBehaviour* const& VROSC::TutorialHapticAsset::__cordl_internal_get_animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr void VROSC::TutorialHapticAsset::__cordl_internal_set_animation(::VROSC::TutorialHapticBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::Playable VROSC::TutorialHapticAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::TutorialHapticAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialHapticAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialHapticAsset* VROSC::TutorialHapticAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialHapticAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialHapticAsset::TutorialHapticAsset()   {
}
