#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackStoppedState.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackState_impl.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackStoppedState_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackStoppedState.GetCurrentFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackStoppedState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackStoppedState::GetCurrentFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a62f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackStoppedState.DebugString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::LoopPlayerPlaybackStoppedState::*)()>(&::VROSC::LoopPlayerPlaybackStoppedState::DebugString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18a6300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackStoppedState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackStoppedState::*)()>(&::VROSC::LoopPlayerPlaybackStoppedState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x189a604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline float_t VROSC::LoopPlayerPlaybackStoppedState::GetCurrentFade(int32_t  atSample)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, atSample);
}
inline ::StringW VROSC::LoopPlayerPlaybackStoppedState::DebugString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerPlaybackStoppedState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackStoppedState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackStoppedState* VROSC::LoopPlayerPlaybackStoppedState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackStoppedState*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackStoppedState::LoopPlayerPlaybackStoppedState()   {
}
