#pragma once
// IWYU pragma private; include "VROSC/ParameterLink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__ValueSourceSelector_impl.hpp"
#include "VROSC/zzzz__ParameterLink_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::VROSC::ParameterLink.get_LastSentValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::ParameterLink::*)()>(&::VROSC::ParameterLink::get_LastSentValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1711214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        "get_LastSentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParameterLink.set_LastSentValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParameterLink::*)(float_t)>(&::VROSC::ParameterLink::set_LastSentValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171121c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        "set_LastSentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParameterLink._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParameterLink::*)()>(&::VROSC::ParameterLink::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1711224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::ParameterLink::__cordl_internal_get_Parameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameter;
}
constexpr int32_t const& VROSC::ParameterLink::__cordl_internal_get_Parameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameter;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_Parameter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameter = value;
}
constexpr ::VROSC::ValueSourceSelector_ValueSource& VROSC::ParameterLink::__cordl_internal_get_ValueSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueSource;
}
constexpr ::VROSC::ValueSourceSelector_ValueSource const& VROSC::ParameterLink::__cordl_internal_get_ValueSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueSource;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_ValueSource(::VROSC::ValueSourceSelector_ValueSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueSource = value;
}
constexpr ::VROSC::HandType& VROSC::ParameterLink::__cordl_internal_get_HandType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr ::VROSC::HandType const& VROSC::ParameterLink::__cordl_internal_get_HandType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_HandType(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandType = value;
}
constexpr bool& VROSC::ParameterLink::__cordl_internal_get_LinkHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkHands;
}
constexpr bool const& VROSC::ParameterLink::__cordl_internal_get_LinkHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkHands;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_LinkHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinkHands = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::ParameterLink::__cordl_internal_get_TransformationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::ParameterLink::__cordl_internal_get_TransformationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformationCurve;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_TransformationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TransformationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ParameterLink::__cordl_internal_get_Factor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Factor;
}
constexpr float_t const& VROSC::ParameterLink::__cordl_internal_get_Factor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Factor;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_Factor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Factor = value;
}
constexpr bool& VROSC::ParameterLink::__cordl_internal_get_CenterOnHalf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnHalf;
}
constexpr bool const& VROSC::ParameterLink::__cordl_internal_get_CenterOnHalf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnHalf;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set_CenterOnHalf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterOnHalf = value;
}
constexpr float_t& VROSC::ParameterLink::__cordl_internal_get__LastSentValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSentValue_k__BackingField;
}
constexpr float_t const& VROSC::ParameterLink::__cordl_internal_get__LastSentValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSentValue_k__BackingField;
}
constexpr void VROSC::ParameterLink::__cordl_internal_set__LastSentValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSentValue_k__BackingField = value;
}
inline float_t VROSC::ParameterLink::get_LastSentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        "get_LastSentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::ParameterLink::set_LastSentValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        "set_LastSentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::ParameterLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ParameterLink* VROSC::ParameterLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ParameterLink*>());
}
// Ctor Parameters []
constexpr ::VROSC::ParameterLink::ParameterLink()   {
}
