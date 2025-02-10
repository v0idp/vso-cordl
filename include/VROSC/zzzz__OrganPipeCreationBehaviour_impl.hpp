#pragma once
// IWYU pragma private; include "VROSC/OrganPipeCreationBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__OrganPipeCreationBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "VROSC/zzzz__OrganPipeRow_def.hpp"
//  Writing Method size for method: ::VROSC::OrganPipeCreationBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeCreationBehaviour::*)(::VROSC::OrganPipeRow*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*)>(&::VROSC::OrganPipeCreationBehaviour::Setup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x176c530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OrganPipeRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeCreationBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeCreationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::OrganPipeCreationBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x176c630;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeCreationBehaviour.GetAnimationValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::OrganPipeCreationBehaviour::*)(float_t, float_t)>(&::VROSC::OrganPipeCreationBehaviour::GetAnimationValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x176c77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "GetAnimationValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeCreationBehaviour.OnPlayableDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeCreationBehaviour::*)()>(&::VROSC::OrganPipeCreationBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x176c804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "OnPlayableDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrganPipeCreationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrganPipeCreationBehaviour::*)()>(&::VROSC::OrganPipeCreationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176c8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::OrganPipeRow>& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__row()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____row;
}
constexpr ::UnityW<::VROSC::OrganPipeRow> const& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__row() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____row;
}
constexpr void VROSC::OrganPipeCreationBehaviour::__cordl_internal_set__row(::UnityW<::VROSC::OrganPipeRow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____row)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get_Appear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Appear;
}
constexpr float_t const& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get_Appear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Appear;
}
constexpr void VROSC::OrganPipeCreationBehaviour::__cordl_internal_set_Appear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Appear = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__animationStartCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStartCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__animationStartCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationStartCurve;
}
constexpr void VROSC::OrganPipeCreationBehaviour::__cordl_internal_set__animationStartCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationStartCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__animateionEndCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateionEndCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::OrganPipeCreationBehaviour::__cordl_internal_get__animateionEndCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animateionEndCurve;
}
constexpr void VROSC::OrganPipeCreationBehaviour::__cordl_internal_set__animateionEndCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animateionEndCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::OrganPipeCreationBehaviour::Setup(::VROSC::OrganPipeRow*  row, ::UnityEngine::AnimationCurve*  animationStartCurve, ::UnityEngine::AnimationCurve*  animateionEndCurve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::OrganPipeRow*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, animationStartCurve, animateionEndCurve);
}
inline void VROSC::OrganPipeCreationBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline float_t VROSC::OrganPipeCreationBehaviour::GetAnimationValue(float_t  note, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "GetAnimationValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, note, time);
}
inline void VROSC::OrganPipeCreationBehaviour::OnPlayableDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        "OnPlayableDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrganPipeCreationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrganPipeCreationBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OrganPipeCreationBehaviour* VROSC::OrganPipeCreationBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OrganPipeCreationBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::OrganPipeCreationBehaviour::OrganPipeCreationBehaviour()   {
}
