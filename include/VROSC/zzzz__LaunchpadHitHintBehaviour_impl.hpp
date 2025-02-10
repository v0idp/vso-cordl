#pragma once
// IWYU pragma private; include "VROSC/LaunchpadHitHintBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__LaunchpadHitHintBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__LaunchPadEffectOnSignal_def.hpp"
//  Writing Method size for method: ::VROSC::LaunchpadHitHintBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadHitHintBehaviour::*)(::VROSC::LaunchPadEffectOnSignal*)>(&::VROSC::LaunchpadHitHintBehaviour::Setup)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x176806c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LaunchPadEffectOnSignal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadHitHintBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadHitHintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::LaunchpadHitHintBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17680d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LaunchpadHitHintBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LaunchpadHitHintBehaviour::*)()>(&::VROSC::LaunchpadHitHintBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17680f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal>& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get__effect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effect;
}
constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal> const& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get__effect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effect;
}
constexpr void VROSC::LaunchpadHitHintBehaviour::__cordl_internal_set__effect(::UnityW<::VROSC::LaunchPadEffectOnSignal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get_CurrentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr float_t const& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get_CurrentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr void VROSC::LaunchpadHitHintBehaviour::__cordl_internal_set_CurrentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTime = value;
}
constexpr ::UnityEngine::Color& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr ::UnityEngine::Color const& VROSC::LaunchpadHitHintBehaviour::__cordl_internal_get_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr void VROSC::LaunchpadHitHintBehaviour::__cordl_internal_set_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Color = value;
}
inline void VROSC::LaunchpadHitHintBehaviour::Setup(::VROSC::LaunchPadEffectOnSignal*  effect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LaunchPadEffectOnSignal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effect);
}
inline void VROSC::LaunchpadHitHintBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::LaunchpadHitHintBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LaunchpadHitHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LaunchpadHitHintBehaviour* VROSC::LaunchpadHitHintBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LaunchpadHitHintBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::LaunchpadHitHintBehaviour::LaunchpadHitHintBehaviour()   {
}
