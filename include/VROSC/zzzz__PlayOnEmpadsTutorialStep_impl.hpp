#pragma once
// IWYU pragma private; include "VROSC/PlayOnEmpadsTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__PlayOnEmpadsTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::PlayOnEmpadsTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnEmpadsTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::PlayOnEmpadsTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x17d1b18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayOnEmpadsTutorialStep.NotePlayed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnEmpadsTutorialStep::*)(::VROSC::WidgetSettings_Identifier, ::VROSC::PatchSettings*, double_t)>(&::VROSC::PlayOnEmpadsTutorialStep::NotePlayed)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x17d1c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayOnEmpadsTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayOnEmpadsTutorialStep::*)()>(&::VROSC::PlayOnEmpadsTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d1d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::PlayOnEmpadsTutorialStep::__cordl_internal_get__notesPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr int32_t const& VROSC::PlayOnEmpadsTutorialStep::__cordl_internal_get__notesPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notesPlayed;
}
constexpr void VROSC::PlayOnEmpadsTutorialStep::__cordl_internal_set__notesPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notesPlayed = value;
}
inline void VROSC::PlayOnEmpadsTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::PlayOnEmpadsTutorialStep::NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                        "NotePlayed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, patch, predictedDspTime);
}
inline void VROSC::PlayOnEmpadsTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayOnEmpadsTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayOnEmpadsTutorialStep* VROSC::PlayOnEmpadsTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayOnEmpadsTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayOnEmpadsTutorialStep::PlayOnEmpadsTutorialStep()   {
}
