#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownUtility.CreateDropdown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IGenericMenu* (*)()>(&::UnityEngine::UIElements::DropdownUtility::CreateDropdown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x30e47d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownUtility*>::get(),
                        "CreateDropdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DropdownUtility::setStaticF_MakeDropdownFunc(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*, "MakeDropdownFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownUtility*>::get>(std::forward<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* UnityEngine::UIElements::DropdownUtility::getStaticF_MakeDropdownFunc()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*, "MakeDropdownFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownUtility*>::get>();
}
inline ::UnityEngine::UIElements::IGenericMenu* UnityEngine::UIElements::DropdownUtility::CreateDropdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownUtility*>::get(),
                        "CreateDropdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IGenericMenu*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownUtility::DropdownUtility()   {
}
