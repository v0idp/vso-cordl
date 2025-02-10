#pragma once
// IWYU pragma private; include "VROSC/HapticRequest.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__HapticRequest_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
//  Writing Method size for method: ::VROSC::HapticRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HapticRequest::*)(float_t, float_t, ::VROSC::HandType, bool)>(&::VROSC::HapticRequest::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1889fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticRequest>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::HapticRequest::_ctor(float_t  amplitude, float_t  frequency, ::VROSC::HandType  hand, bool  isMetronome)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HapticRequest>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amplitude, frequency, hand, isMetronome);
}
// Ctor Parameters [CppParam { name: "IsMetronome", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Amplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Frequency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hand", ty: "::VROSC::HandType", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HapticRequest::HapticRequest(bool  IsMetronome, float_t  Amplitude, float_t  Frequency, ::VROSC::HandType  Hand) noexcept  {
this->IsMetronome = IsMetronome;
this->Amplitude = Amplitude;
this->Frequency = Frequency;
this->Hand = Hand;
}
// Ctor Parameters []
constexpr ::VROSC::HapticRequest::HapticRequest()   {
}
