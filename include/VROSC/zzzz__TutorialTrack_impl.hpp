#pragma once
// IWYU pragma private; include "VROSC/TutorialTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "VROSC/zzzz__TutorialTrack_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialTrack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialTrack::*)()>(&::VROSC::TutorialTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x176eaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TutorialTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialTrack* VROSC::TutorialTrack::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialTrack*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialTrack::TutorialTrack()   {
}
