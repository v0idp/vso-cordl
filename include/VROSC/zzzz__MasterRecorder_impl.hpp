#pragma once
// IWYU pragma private; include "VROSC/MasterRecorder.hpp"
#include "VROSC/zzzz__MixerGroupRecorder_impl.hpp"
#include "VROSC/zzzz__MasterRecorder_def.hpp"
//  Writing Method size for method: ::VROSC::MasterRecorder.GetMicrophoneLatency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::MasterRecorder::*)()>(&::VROSC::MasterRecorder::GetMicrophoneLatency)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17cf2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                        "GetMicrophoneLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MasterRecorder.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MasterRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::MasterRecorder::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x17cf3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MasterRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MasterRecorder::*)()>(&::VROSC::MasterRecorder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cf670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t VROSC::MasterRecorder::GetMicrophoneLatency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                        "GetMicrophoneLatency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::MasterRecorder::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::MasterRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MasterRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MasterRecorder* VROSC::MasterRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MasterRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::MasterRecorder::MasterRecorder()   {
}
