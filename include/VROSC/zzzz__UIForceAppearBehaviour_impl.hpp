#pragma once
// IWYU pragma private; include "VROSC/UIForceAppearBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__UIForceAppearBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::VROSC::UIForceAppearBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIForceAppearBehaviour::*)(::UnityEngine::GameObject*, bool)>(&::VROSC::UIForceAppearBehaviour::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17702c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIForceAppearBehaviour.OnBehaviourPlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIForceAppearBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::VROSC::UIForceAppearBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x17702d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIForceAppearBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIForceAppearBehaviour::*)()>(&::VROSC::UIForceAppearBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177042c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::UIForceAppearBehaviour::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::UIForceAppearBehaviour::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::UIForceAppearBehaviour::__cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UIForceAppearBehaviour::__cordl_internal_get__appear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appear;
}
constexpr bool const& VROSC::UIForceAppearBehaviour::__cordl_internal_get__appear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appear;
}
constexpr void VROSC::UIForceAppearBehaviour::__cordl_internal_set__appear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appear = value;
}
inline void VROSC::UIForceAppearBehaviour::Setup(::UnityEngine::GameObject*  target, bool  appear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, appear);
}
inline void VROSC::UIForceAppearBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void VROSC::UIForceAppearBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIForceAppearBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIForceAppearBehaviour* VROSC::UIForceAppearBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIForceAppearBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIForceAppearBehaviour::UIForceAppearBehaviour()   {
}
