#pragma once
// IWYU pragma private; include "VROSC/PlayMoreOnBoardTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__PlayMoreOnBoardTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::PlayMoreOnBoardTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayMoreOnBoardTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::PlayMoreOnBoardTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x17d0cb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayMoreOnBoardTutorialStep.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayMoreOnBoardTutorialStep::*)(::VROSC::TutorialEvent)>(&::VROSC::PlayMoreOnBoardTutorialStep::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x17d0db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayMoreOnBoardTutorialStep.ButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayMoreOnBoardTutorialStep::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::PlayMoreOnBoardTutorialStep::ButtonPressed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x17d0f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "ButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayMoreOnBoardTutorialStep.NotePlayed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayMoreOnBoardTutorialStep::*)(::VROSC::WidgetSettings_Identifier, ::VROSC::PatchSettings*, double_t)>(&::VROSC::PlayMoreOnBoardTutorialStep::NotePlayed)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x17d103c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayMoreOnBoardTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayMoreOnBoardTutorialStep::*)()>(&::VROSC::PlayMoreOnBoardTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d1240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__notesPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr int32_t const& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__notesPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr void VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_set__notesPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notesPlayed = value;
}
constexpr bool& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__triggerPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed;
}
constexpr bool const& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__triggerPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed;
}
constexpr void VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_set__triggerPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerPressed = value;
}
constexpr bool& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__gripPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed;
}
constexpr bool const& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__gripPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed;
}
constexpr void VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_set__gripPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPressed = value;
}
constexpr bool& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__thumbPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbPressed;
}
constexpr bool const& VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_get__thumbPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbPressed;
}
constexpr void VROSC::PlayMoreOnBoardTutorialStep::__cordl_internal_set__thumbPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbPressed = value;
}
inline void VROSC::PlayMoreOnBoardTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::PlayMoreOnBoardTutorialStep::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::PlayMoreOnBoardTutorialStep::ButtonPressed(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "ButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, button);
}
inline void VROSC::PlayMoreOnBoardTutorialStep::NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, patch, predictedDspTime);
}
inline void VROSC::PlayMoreOnBoardTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayMoreOnBoardTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayMoreOnBoardTutorialStep* VROSC::PlayMoreOnBoardTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayMoreOnBoardTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayMoreOnBoardTutorialStep::PlayMoreOnBoardTutorialStep()   {
}
