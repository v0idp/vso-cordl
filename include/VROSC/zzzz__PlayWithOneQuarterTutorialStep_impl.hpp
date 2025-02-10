#pragma once
// IWYU pragma private; include "VROSC/PlayWithOneQuarterTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__PlayWithOneQuarterTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::PlayWithOneQuarterTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayWithOneQuarterTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::PlayWithOneQuarterTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x17d2298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayWithOneQuarterTutorialStep.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayWithOneQuarterTutorialStep::*)(::VROSC::TutorialEvent)>(&::VROSC::PlayWithOneQuarterTutorialStep::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x17d23a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayWithOneQuarterTutorialStep.NotePlayed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayWithOneQuarterTutorialStep::*)(::VROSC::WidgetSettings_Identifier, ::VROSC::PatchSettings*, double_t)>(&::VROSC::PlayWithOneQuarterTutorialStep::NotePlayed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x17d2564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayWithOneQuarterTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayWithOneQuarterTutorialStep::*)()>(&::VROSC::PlayWithOneQuarterTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d26cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::PlayWithOneQuarterTutorialStep::__cordl_internal_get__notesPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr int32_t const& VROSC::PlayWithOneQuarterTutorialStep::__cordl_internal_get__notesPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr void VROSC::PlayWithOneQuarterTutorialStep::__cordl_internal_set__notesPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notesPlayed = value;
}
inline void VROSC::PlayWithOneQuarterTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::PlayWithOneQuarterTutorialStep::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::PlayWithOneQuarterTutorialStep::NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, patch, predictedDspTime);
}
inline void VROSC::PlayWithOneQuarterTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayWithOneQuarterTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayWithOneQuarterTutorialStep* VROSC::PlayWithOneQuarterTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayWithOneQuarterTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayWithOneQuarterTutorialStep::PlayWithOneQuarterTutorialStep()   {
}
