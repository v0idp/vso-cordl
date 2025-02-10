#pragma once
// IWYU pragma private; include "VROSC/DrumpadHitHintBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__DrumpadHitHintBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__DrumPadEffectOnSignal_def.hpp"
//  Writing Method size for method: ::VROSC::DrumpadHitHintBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadHitHintBehaviour::*)(::VROSC::DrumPadEffectOnSignal*)>(&::VROSC::DrumpadHitHintBehaviour::Setup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1767cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DrumPadEffectOnSignal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadHitHintBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadHitHintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::DrumpadHitHintBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1767d28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadHitHintBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadHitHintBehaviour::*)()>(&::VROSC::DrumpadHitHintBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get__drumEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumEffect;
}
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get__drumEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumEffect;
}
constexpr void VROSC::DrumpadHitHintBehaviour::__cordl_internal_set__drumEffect(::UnityW<::VROSC::DrumPadEffectOnSignal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_CurrentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr float_t const& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_CurrentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentTime;
}
constexpr void VROSC::DrumpadHitHintBehaviour::__cordl_internal_set_CurrentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentTime = value;
}
constexpr float_t& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_HitPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitPower;
}
constexpr float_t const& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_HitPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HitPower;
}
constexpr void VROSC::DrumpadHitHintBehaviour::__cordl_internal_set_HitPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HitPower = value;
}
constexpr ::UnityEngine::Color& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr ::UnityEngine::Color const& VROSC::DrumpadHitHintBehaviour::__cordl_internal_get_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Color;
}
constexpr void VROSC::DrumpadHitHintBehaviour::__cordl_internal_set_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Color = value;
}
inline void VROSC::DrumpadHitHintBehaviour::Setup(::VROSC::DrumPadEffectOnSignal*  drumEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DrumPadEffectOnSignal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, drumEffect);
}
inline void VROSC::DrumpadHitHintBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::DrumpadHitHintBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadHitHintBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DrumpadHitHintBehaviour* VROSC::DrumpadHitHintBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DrumpadHitHintBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::DrumpadHitHintBehaviour::DrumpadHitHintBehaviour()   {
}
