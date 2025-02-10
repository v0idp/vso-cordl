#pragma once
// IWYU pragma private; include "VROSC/AppearAnimationBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "VROSC/zzzz__AppearAnimationBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::VROSC::AppearAnimationBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AppearAnimationBehaviour::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, float_t)>(&::VROSC::AppearAnimationBehaviour::Setup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17660d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AppearAnimationBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AppearAnimationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::AppearAnimationBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x17661b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AppearAnimationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AppearAnimationBehaviour::*)()>(&::VROSC::AppearAnimationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1766488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationBehaviour::__cordl_internal_get__positionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__positionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationBehaviour::__cordl_internal_get__rotationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__rotationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AppearAnimationBehaviour::__cordl_internal_get__scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AppearAnimationBehaviour::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AppearAnimationBehaviour::__cordl_internal_get__start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__start(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____start)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AppearAnimationBehaviour::__cordl_internal_get__end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__end(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____end)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& VROSC::AppearAnimationBehaviour::__cordl_internal_get__randomStartRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomStartRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::AppearAnimationBehaviour::__cordl_internal_get__randomStartRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomStartRotation;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set__randomStartRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____randomStartRotation = value;
}
constexpr float_t& VROSC::AppearAnimationBehaviour::__cordl_internal_get_animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr float_t const& VROSC::AppearAnimationBehaviour::__cordl_internal_get_animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr void VROSC::AppearAnimationBehaviour::__cordl_internal_set_animation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animation = value;
}
inline void VROSC::AppearAnimationBehaviour::Setup(::UnityEngine::Transform*  target, ::UnityEngine::Transform*  start, ::UnityEngine::Transform*  end, ::UnityEngine::AnimationCurve*  positionCurve, ::UnityEngine::AnimationCurve*  rotationCurve, ::UnityEngine::AnimationCurve*  scaleCurve, float_t  randomMidPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, start, end, positionCurve, rotationCurve, scaleCurve, randomMidPoint);
}
inline void VROSC::AppearAnimationBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::AppearAnimationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AppearAnimationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AppearAnimationBehaviour* VROSC::AppearAnimationBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AppearAnimationBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::AppearAnimationBehaviour::AppearAnimationBehaviour()   {
}
