#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementDefinitionList.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinition_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementDefinitionList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementDefinitionList::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AchievementDefinitionList::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x286f328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinitionList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Models::AchievementDefinitionList::_ctor(::System::IntPtr  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementDefinitionList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::Models::AchievementDefinitionList::New_ctor(::System::IntPtr  a)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AchievementDefinitionList*>(a));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AchievementDefinitionList::AchievementDefinitionList()   {
}
