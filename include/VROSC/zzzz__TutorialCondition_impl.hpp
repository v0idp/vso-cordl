#pragma once
// IWYU pragma private; include "VROSC/TutorialCondition.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TutorialCondition_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TutorialStep_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialCondition.SetupTutorialStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialCondition::*)(::VROSC::TutorialStep_Condition*)>(&::VROSC::TutorialCondition::SetupTutorialStep)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17041b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "SetupTutorialStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep_Condition*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialCondition.Deactivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialCondition::*)()>(&::VROSC::TutorialCondition::Deactivate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1704284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialCondition.DisplayConditionText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialCondition::*)(bool)>(&::VROSC::TutorialCondition::DisplayConditionText)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x17042dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "DisplayConditionText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialCondition.ConditionCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialCondition::*)()>(&::VROSC::TutorialCondition::ConditionCompleted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x170448c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "ConditionCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialCondition._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialCondition::*)()>(&::VROSC::TutorialCondition::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170455c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::TutorialCondition::__cordl_internal_get__conditionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::TutorialCondition::__cordl_internal_get__conditionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionText;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conditionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::TutorialCondition::__cordl_internal_get__incompleteIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incompleteIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::TutorialCondition::__cordl_internal_get__incompleteIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incompleteIcon;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__incompleteIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____incompleteIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::TutorialCondition::__cordl_internal_get__completeIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completeIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::TutorialCondition::__cordl_internal_get__completeIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completeIcon;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__completeIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____completeIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::TutorialCondition::__cordl_internal_get__conditionTextIncompleteColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionTextIncompleteColor;
}
constexpr ::UnityEngine::Color const& VROSC::TutorialCondition::__cordl_internal_get__conditionTextIncompleteColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionTextIncompleteColor;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__conditionTextIncompleteColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____conditionTextIncompleteColor = value;
}
constexpr ::UnityEngine::Color& VROSC::TutorialCondition::__cordl_internal_get__conditionTextCompleteColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionTextCompleteColor;
}
constexpr ::UnityEngine::Color const& VROSC::TutorialCondition::__cordl_internal_get__conditionTextCompleteColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____conditionTextCompleteColor;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__conditionTextCompleteColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____conditionTextCompleteColor = value;
}
constexpr ::VROSC::TutorialStep_Condition*& VROSC::TutorialCondition::__cordl_internal_get__condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____condition;
}
constexpr ::VROSC::TutorialStep_Condition* const& VROSC::TutorialCondition::__cordl_internal_get__condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____condition;
}
constexpr void VROSC::TutorialCondition::__cordl_internal_set__condition(::VROSC::TutorialStep_Condition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____condition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TutorialCondition::SetupTutorialStep(::VROSC::TutorialStep_Condition*  condition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "SetupTutorialStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep_Condition*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, condition);
}
inline void VROSC::TutorialCondition::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialCondition::DisplayConditionText(bool  conditionComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "DisplayConditionText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, conditionComplete);
}
inline void VROSC::TutorialCondition::ConditionCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        "ConditionCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TutorialCondition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialCondition*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialCondition* VROSC::TutorialCondition::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialCondition*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialCondition::TutorialCondition()   {
}
