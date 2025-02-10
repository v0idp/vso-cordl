#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/EmitParticlesEffectData.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_impl.hpp"
#include "VROSC/AudioReactive/zzzz__EmitParticlesEffectData_def.hpp"
#include "VROSC/zzzz__MinMaxInt_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::EmitParticlesEffectData.get_Amount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxInt* (::VROSC::AudioReactive::EmitParticlesEffectData::*)()>(&::VROSC::AudioReactive::EmitParticlesEffectData::get_Amount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesEffectData*>::get(),
                        "get_Amount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::EmitParticlesEffectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::EmitParticlesEffectData::*)()>(&::VROSC::AudioReactive::EmitParticlesEffectData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d925c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MinMaxInt*& VROSC::AudioReactive::EmitParticlesEffectData::__cordl_internal_get__amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr ::VROSC::MinMaxInt* const& VROSC::AudioReactive::EmitParticlesEffectData::__cordl_internal_get__amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr void VROSC::AudioReactive::EmitParticlesEffectData::__cordl_internal_set__amount(::VROSC::MinMaxInt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____amount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::MinMaxInt* VROSC::AudioReactive::EmitParticlesEffectData::get_Amount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesEffectData*>::get(),
                        "get_Amount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxInt*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::EmitParticlesEffectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::EmitParticlesEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::EmitParticlesEffectData* VROSC::AudioReactive::EmitParticlesEffectData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::EmitParticlesEffectData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::EmitParticlesEffectData::EmitParticlesEffectData()   {
}
