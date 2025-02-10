#pragma once
// IWYU pragma private; include "VROSC/SimpleHaptic.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SimpleHaptic_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
//  Writing Method size for method: ::VROSC::SimpleHaptic.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleHaptic::*)(::VROSC::HandType, float_t, float_t)>(&::VROSC::SimpleHaptic::Play)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1889f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleHaptic*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SimpleHaptic._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SimpleHaptic::*)()>(&::VROSC::SimpleHaptic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188a0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleHaptic*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::SimpleHaptic::__cordl_internal_get__useHapticFeedBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHapticFeedBack;
}
constexpr bool const& VROSC::SimpleHaptic::__cordl_internal_get__useHapticFeedBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHapticFeedBack;
}
constexpr void VROSC::SimpleHaptic::__cordl_internal_set__useHapticFeedBack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHapticFeedBack = value;
}
constexpr float_t& VROSC::SimpleHaptic::__cordl_internal_get__amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr float_t const& VROSC::SimpleHaptic::__cordl_internal_get__amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude;
}
constexpr void VROSC::SimpleHaptic::__cordl_internal_set__amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitude = value;
}
constexpr float_t& VROSC::SimpleHaptic::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& VROSC::SimpleHaptic::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void VROSC::SimpleHaptic::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
inline void VROSC::SimpleHaptic::Play(::VROSC::HandType  Hand, float_t  amplitudeMultiplier, float_t  frequencyMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleHaptic*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Hand, amplitudeMultiplier, frequencyMultiplier);
}
inline void VROSC::SimpleHaptic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SimpleHaptic*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SimpleHaptic* VROSC::SimpleHaptic::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SimpleHaptic*>());
}
// Ctor Parameters []
constexpr ::VROSC::SimpleHaptic::SimpleHaptic()   {
}
