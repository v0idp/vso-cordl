#pragma once
// IWYU pragma private; include "VROSC/MicrophoneRecorder.hpp"
#include "VROSC/zzzz__SourceRecorder_impl.hpp"
#include "VROSC/zzzz__MicrophoneRecorder_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneRecorder.SetMicrophoneData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneRecorder::*)(::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::MicrophoneRecorder::SetMicrophoneData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17ce038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "SetMicrophoneData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneRecorder.ClearMicrophoneData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneRecorder::*)()>(&::VROSC::MicrophoneRecorder::ClearMicrophoneData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17ce07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "ClearMicrophoneData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneRecorder.GetRawMicrophoneRecordingData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::VROSC::MicrophoneRecorder::*)()>(&::VROSC::MicrophoneRecorder::GetRawMicrophoneRecordingData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cf6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "GetRawMicrophoneRecordingData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneRecorder.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::MicrophoneRecorder::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17cf6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneRecorder::*)()>(&::VROSC::MicrophoneRecorder::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17cf854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneRecorder::__cordl_internal_get__effectData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectData;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneRecorder::__cordl_internal_get__effectData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectData;
}
constexpr void VROSC::MicrophoneRecorder::__cordl_internal_set__effectData(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneRecorder::__cordl_internal_get__microphoneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneData;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneRecorder::__cordl_internal_get__microphoneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneData;
}
constexpr void VROSC::MicrophoneRecorder::__cordl_internal_set__microphoneData(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::MicrophoneRecorder::SetMicrophoneData(::ArrayW<float_t,::Array<float_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "SetMicrophoneData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void VROSC::MicrophoneRecorder::ClearMicrophoneData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "ClearMicrophoneData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<float_t,::Array<float_t>*> VROSC::MicrophoneRecorder::GetRawMicrophoneRecordingData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "GetRawMicrophoneRecordingData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneRecorder::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::MicrophoneRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MicrophoneRecorder* VROSC::MicrophoneRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneRecorder::MicrophoneRecorder()   {
}
