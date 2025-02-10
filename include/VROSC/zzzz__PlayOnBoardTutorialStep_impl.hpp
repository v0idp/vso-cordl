#pragma once
// IWYU pragma private; include "VROSC/PlayOnBoardTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__PlayOnBoardTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::PlayOnBoardTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnBoardTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::PlayOnBoardTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x17d08bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayOnBoardTutorialStep.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnBoardTutorialStep::*)(::VROSC::TutorialEvent)>(&::VROSC::PlayOnBoardTutorialStep::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x17d09c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayOnBoardTutorialStep.NotePlayed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnBoardTutorialStep::*)(::VROSC::WidgetSettings_Identifier, ::VROSC::PatchSettings*, double_t)>(&::VROSC::PlayOnBoardTutorialStep::NotePlayed)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x17d0acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayOnBoardTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnBoardTutorialStep::*)()>(&::VROSC::PlayOnBoardTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d0ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::PlayOnBoardTutorialStep::__cordl_internal_get__notesPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr int32_t const& VROSC::PlayOnBoardTutorialStep::__cordl_internal_get__notesPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr void VROSC::PlayOnBoardTutorialStep::__cordl_internal_set__notesPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notesPlayed = value;
}
inline void VROSC::PlayOnBoardTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::PlayOnBoardTutorialStep::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::PlayOnBoardTutorialStep::NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, patch, predictedDspTime);
}
inline void VROSC::PlayOnBoardTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnBoardTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayOnBoardTutorialStep* VROSC::PlayOnBoardTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayOnBoardTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayOnBoardTutorialStep::PlayOnBoardTutorialStep()   {
}
