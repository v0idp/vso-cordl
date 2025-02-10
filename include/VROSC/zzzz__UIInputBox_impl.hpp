#pragma once
// IWYU pragma private; include "VROSC/UIInputBox.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__UIButton_impl.hpp"
#include "VROSC/zzzz__UIInputBox_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__UIInputBox_def.hpp"
//  Writing Method size for method: ::VROSC::UIInputBox_AxisParameters.GetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UIInputBox_AxisParameters::*)(float_t)>(&::VROSC::UIInputBox_AxisParameters::GetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17854f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_AxisParameters.GetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UIInputBox_AxisParameters::*)(float_t)>(&::VROSC::UIInputBox_AxisParameters::GetPosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1785350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        "GetPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_AxisParameters._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox_AxisParameters::*)()>(&::VROSC::UIInputBox_AxisParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& VROSC::UIInputBox_AxisParameters::__cordl_internal_get_AnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::UIInputBox_AxisParameters::__cordl_internal_get_AnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationCurve;
}
constexpr void VROSC::UIInputBox_AxisParameters::__cordl_internal_set_AnimationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::UIInputBox_AxisParameters::__cordl_internal_get_Limits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limits;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::UIInputBox_AxisParameters::__cordl_internal_get_Limits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limits;
}
constexpr void VROSC::UIInputBox_AxisParameters::__cordl_internal_set_Limits(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Limits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::UIInputBox_AxisParameters::GetValue(float_t  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        "GetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, position);
}
inline float_t VROSC::UIInputBox_AxisParameters::GetPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        "GetPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline void VROSC::UIInputBox_AxisParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_AxisParameters*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_AxisParameters* VROSC::UIInputBox_AxisParameters::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIInputBox_AxisParameters*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIInputBox_AxisParameters::UIInputBox_AxisParameters()   {
}
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.get_XParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIInputBox_AxisParameters* (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::get_XParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_XParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.get_YParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIInputBox_AxisParameters* (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::get_YParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_YParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.get_ZParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIInputBox_AxisParameters* (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::get_ZParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_ZParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.get_IsUsingDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::get_IsUsingDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_IsUsingDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData.SetDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox_UIInputBoxData::*)(::StringW)>(&::VROSC::UIInputBox_UIInputBoxData::SetDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17855c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox_UIInputBoxData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox_UIInputBoxData::*)()>(&::VROSC::UIInputBox_UIInputBoxData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17855d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void VROSC::UIInputBox_UIInputBoxData::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UIInputBox_AxisParameters*& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__xParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xParameters;
}
constexpr ::VROSC::UIInputBox_AxisParameters* const& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__xParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xParameters;
}
constexpr void VROSC::UIInputBox_UIInputBoxData::__cordl_internal_set__xParameters(::VROSC::UIInputBox_AxisParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UIInputBox_AxisParameters*& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__yParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yParameters;
}
constexpr ::VROSC::UIInputBox_AxisParameters* const& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__yParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yParameters;
}
constexpr void VROSC::UIInputBox_UIInputBoxData::__cordl_internal_set__yParameters(::VROSC::UIInputBox_AxisParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UIInputBox_AxisParameters*& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__zParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zParameters;
}
constexpr ::VROSC::UIInputBox_AxisParameters* const& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__zParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zParameters;
}
constexpr void VROSC::UIInputBox_UIInputBoxData::__cordl_internal_set__zParameters(::VROSC::UIInputBox_AxisParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__isUsingDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUsingDepth;
}
constexpr bool const& VROSC::UIInputBox_UIInputBoxData::__cordl_internal_get__isUsingDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUsingDepth;
}
constexpr void VROSC::UIInputBox_UIInputBoxData::__cordl_internal_set__isUsingDepth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUsingDepth = value;
}
inline ::StringW VROSC::UIInputBox_UIInputBoxData::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_AxisParameters* VROSC::UIInputBox_UIInputBoxData::get_XParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_XParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UIInputBox_AxisParameters*, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_AxisParameters* VROSC::UIInputBox_UIInputBoxData::get_YParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_YParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UIInputBox_AxisParameters*, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_AxisParameters* VROSC::UIInputBox_UIInputBoxData::get_ZParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_ZParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UIInputBox_AxisParameters*, false>(this, ___internal_method);
}
inline bool VROSC::UIInputBox_UIInputBoxData::get_IsUsingDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "get_IsUsingDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox_UIInputBoxData::SetDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        "SetDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName);
}
inline void VROSC::UIInputBox_UIInputBoxData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox_UIInputBoxData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_UIInputBoxData* VROSC::UIInputBox_UIInputBoxData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIInputBox_UIInputBoxData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIInputBox_UIInputBoxData::UIInputBox_UIInputBoxData()   {
}
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBox_d__23::*)(int32_t)>(&::VROSC::UIInputBox__GrabBox_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17852a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBox_d__23::*)()>(&::VROSC::UIInputBox__GrabBox_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17855e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UIInputBox__GrabBox_d__23::*)()>(&::VROSC::UIInputBox__GrabBox_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x17855e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::UIInputBox__GrabBox_d__23::*)()>(&::VROSC::UIInputBox__GrabBox_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBox_d__23::*)()>(&::VROSC::UIInputBox__GrabBox_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1785940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBox_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::UIInputBox__GrabBox_d__23::*)()>(&::VROSC::UIInputBox__GrabBox_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIInputBox>& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::UIInputBox> const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set___4__this(::UnityW<::VROSC::UIInputBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_grabbingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_grabbingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingButton;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbingButton = value;
}
constexpr bool& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_pointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointing;
}
constexpr bool const& VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_get_pointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointing;
}
constexpr void VROSC::UIInputBox__GrabBox_d__23::__cordl_internal_set_pointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointing = value;
}
inline void VROSC::UIInputBox__GrabBox_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::UIInputBox__GrabBox_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::UIInputBox__GrabBox_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::UIInputBox__GrabBox_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox__GrabBox_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::UIInputBox__GrabBox_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBox_d__23*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox__GrabBox_d__23* VROSC::UIInputBox__GrabBox_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIInputBox__GrabBox_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::UIInputBox__GrabBox_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::UIInputBox__GrabBox_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::UIInputBox__GrabBox_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::UIInputBox__GrabBox_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::UIInputBox__GrabBox_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::UIInputBox__GrabBox_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::UIInputBox__GrabBox_d__23::UIInputBox__GrabBox_d__23()   {
}
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)(int32_t)>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x178527c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)()>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1785980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)()>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1785984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)()>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)()>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1785ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox__GrabBoxRemotely_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::UIInputBox__GrabBoxRemotely_d__21::*)()>(&::VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIInputBox>& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::UIInputBox> const& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_set___4__this(::UnityW<::VROSC::UIInputBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get_grabbingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_get_grabbingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingButton;
}
constexpr void VROSC::UIInputBox__GrabBoxRemotely_d__21::__cordl_internal_set_grabbingButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbingButton = value;
}
inline void VROSC::UIInputBox__GrabBoxRemotely_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::UIInputBox__GrabBoxRemotely_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::UIInputBox__GrabBoxRemotely_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::UIInputBox__GrabBoxRemotely_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox__GrabBoxRemotely_d__21* VROSC::UIInputBox__GrabBoxRemotely_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIInputBox__GrabBoxRemotely_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::UIInputBox__GrabBoxRemotely_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::UIInputBox__GrabBoxRemotely_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::UIInputBox__GrabBoxRemotely_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::UIInputBox__GrabBoxRemotely_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::UIInputBox__GrabBoxRemotely_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::UIInputBox__GrabBoxRemotely_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::UIInputBox__GrabBoxRemotely_d__21::UIInputBox__GrabBoxRemotely_d__21()   {
}
//  Writing Method size for method: ::VROSC::UIInputBox.get_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::get_Size)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1784b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIInputBox_UIInputBoxData* (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1784c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1784c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1784cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1784de8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.StopGrabBox
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::UIInputBox::StopGrabBox)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1784fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "StopGrabBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.ButtonWasPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(::VROSC::ClickData*)>(&::VROSC::UIInputBox::ButtonWasPressed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1785050;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.GrabBoxRemotely
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::UIInputBox::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::UIInputBox::GrabBoxRemotely)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1785180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GrabBoxRemotely",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.StopGrabRemotely
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(::VROSC::InputDevice*)>(&::VROSC::UIInputBox::StopGrabRemotely)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1784f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "StopGrabRemotely",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.GrabBox
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::UIInputBox::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton, bool)>(&::VROSC::UIInputBox::GrabBox)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x17851f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GrabBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.GetRectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::GetRectTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1784c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetRectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.GetSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::GetSize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1784b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.GetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::GetPosition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17852cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.SetX
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(float_t, bool)>(&::VROSC::UIInputBox::SetX)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x178537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetX",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.SetY
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(float_t, bool)>(&::VROSC::UIInputBox::SetY)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17853b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.SetZ
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(float_t, bool)>(&::VROSC::UIInputBox::SetZ)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17853e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.SetValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(float_t, float_t, float_t, bool)>(&::VROSC::UIInputBox::SetValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1785418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox.MarkerPositionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)(::UnityEngine::Vector3)>(&::VROSC::UIInputBox::MarkerPositionChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1785440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "MarkerPositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIInputBox._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIInputBox::*)()>(&::VROSC::UIInputBox::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1785528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::UIInputBox::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& VROSC::UIInputBox::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::UIInputBox::__cordl_internal_get__normalIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::UIInputBox::__cordl_internal_get__normalIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalIcon;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__normalIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::UIInputBox::__cordl_internal_get__selectedIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::UIInputBox::__cordl_internal_get__selectedIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedIcon;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__selectedIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UIInputBox_UIInputBoxData*& VROSC::UIInputBox::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::VROSC::UIInputBox_UIInputBoxData* const& VROSC::UIInputBox::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__data(::VROSC::UIInputBox_UIInputBoxData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::UIInputBox::__cordl_internal_get__grabbingDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingDevice;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::UIInputBox::__cordl_internal_get__grabbingDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingDevice;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____grabbingDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::UIInputBox::__cordl_internal_get__grabbingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::UIInputBox::__cordl_internal_get__grabbingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingButton;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__grabbingButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbingButton = value;
}
constexpr bool& VROSC::UIInputBox::__cordl_internal_get__uiHelperActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiHelperActive;
}
constexpr bool const& VROSC::UIInputBox::__cordl_internal_get__uiHelperActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiHelperActive;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__uiHelperActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiHelperActive = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::UIInputBox::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::UIInputBox::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::UIInputBox::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr ::UnityEngine::Vector3 const& VROSC::UIInputBox::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set__value(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& VROSC::UIInputBox::__cordl_internal_get_OnValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& VROSC::UIInputBox::__cordl_internal_get_OnValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnValueChanged;
}
constexpr void VROSC::UIInputBox::__cordl_internal_set_OnValueChanged(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector2 VROSC::UIInputBox::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox_UIInputBoxData* VROSC::UIInputBox::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UIInputBox_UIInputBoxData*, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox::OnDisable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox::StopGrabBox(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "StopGrabBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, button);
}
inline void VROSC::UIInputBox::ButtonWasPressed(::VROSC::ClickData*  clickData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline ::System::Collections::IEnumerator* VROSC::UIInputBox::GrabBoxRemotely(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GrabBoxRemotely",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, device, grabbingButton);
}
inline void VROSC::UIInputBox::StopGrabRemotely(::VROSC::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "StopGrabRemotely",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline ::System::Collections::IEnumerator* VROSC::UIInputBox::GrabBox(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  grabbingButton, bool  pointing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GrabBox",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, device, grabbingButton, pointing);
}
inline void VROSC::UIInputBox::GetRectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetRectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::UIInputBox::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::UIInputBox::GetPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "GetPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::UIInputBox::SetX(float_t  x, bool  invoke)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetX",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, invoke);
}
inline void VROSC::UIInputBox::SetY(float_t  y, bool  invoke)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetY",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, y, invoke);
}
inline void VROSC::UIInputBox::SetZ(float_t  z, bool  invoke)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetZ",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, z, invoke);
}
inline void VROSC::UIInputBox::SetValues(float_t  x, float_t  y, float_t  z, bool  invoke)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "SetValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, z, invoke);
}
inline void VROSC::UIInputBox::MarkerPositionChanged(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        "MarkerPositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::UIInputBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIInputBox*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIInputBox* VROSC::UIInputBox::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIInputBox*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIInputBox::UIInputBox()   {
}
