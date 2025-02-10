#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/EmitParticlesOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__EmitParticlesOnBeat_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::EmitParticlesOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::EmitParticlesOnBeat::*)()>(&::VROSC::AudioReactive::EmitParticlesOnBeat::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17d95f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::EmitParticlesOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::EmitParticlesOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::EmitParticlesOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17d95fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::EmitParticlesOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::EmitParticlesOnBeat::*)()>(&::VROSC::AudioReactive::EmitParticlesOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__system()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____system;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__system() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____system;
}
constexpr void VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_set__system(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____system)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__minAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAmount;
}
constexpr int32_t const& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__minAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minAmount;
}
constexpr void VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_set__minAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minAmount = value;
}
constexpr int32_t& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__maxAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAmount;
}
constexpr int32_t const& VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_get__maxAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxAmount;
}
constexpr void VROSC::AudioReactive::EmitParticlesOnBeat::__cordl_internal_set__maxAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxAmount = value;
}
inline void VROSC::AudioReactive::EmitParticlesOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::EmitParticlesOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::EmitParticlesOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::EmitParticlesOnBeat* VROSC::AudioReactive::EmitParticlesOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::EmitParticlesOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::EmitParticlesOnBeat::EmitParticlesOnBeat()   {
}
