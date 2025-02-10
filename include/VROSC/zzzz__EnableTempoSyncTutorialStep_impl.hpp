#pragma once
// IWYU pragma private; include "VROSC/EnableTempoSyncTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__EnableTempoSyncTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
//  Writing Method size for method: ::VROSC::EnableTempoSyncTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnableTempoSyncTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::EnableTempoSyncTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x17d2030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnableTempoSyncTutorialStep.TutorialEventTriggered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnableTempoSyncTutorialStep::*)(::VROSC::TutorialEvent)>(&::VROSC::EnableTempoSyncTutorialStep::TutorialEventTriggered)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x17d2138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::EnableTempoSyncTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnableTempoSyncTutorialStep::*)()>(&::VROSC::EnableTempoSyncTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d2290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::EnableTempoSyncTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::EnableTempoSyncTutorialStep::TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                        "TutorialEventTriggered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::EnableTempoSyncTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnableTempoSyncTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EnableTempoSyncTutorialStep* VROSC::EnableTempoSyncTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EnableTempoSyncTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::EnableTempoSyncTutorialStep::EnableTempoSyncTutorialStep()   {
}
