#pragma once
// IWYU pragma private; include "VROSC/FinalWordsTutorialStep.hpp"
#include "VROSC/zzzz__TutorialStep_impl.hpp"
#include "VROSC/zzzz__FinalWordsTutorialStep_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::VROSC::FinalWordsTutorialStep.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FinalWordsTutorialStep::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::FinalWordsTutorialStep::OnEnter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17d4450;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FinalWordsTutorialStep.EnableEverything
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FinalWordsTutorialStep::*)()>(&::VROSC::FinalWordsTutorialStep::EnableEverything)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17d451c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                        "EnableEverything",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FinalWordsTutorialStep._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FinalWordsTutorialStep::*)()>(&::VROSC::FinalWordsTutorialStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d4604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::FinalWordsTutorialStep::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::FinalWordsTutorialStep::EnableEverything()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                        "EnableEverything",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FinalWordsTutorialStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FinalWordsTutorialStep*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FinalWordsTutorialStep* VROSC::FinalWordsTutorialStep::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FinalWordsTutorialStep*>());
}
// Ctor Parameters []
constexpr ::VROSC::FinalWordsTutorialStep::FinalWordsTutorialStep()   {
}
