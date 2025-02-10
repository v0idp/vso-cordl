#pragma once
// IWYU pragma private; include "VROSC/SavWav.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__SavWav_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__SavWav_def.hpp"
//  Writing Method size for method: ::VROSC::SavWav___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SavWav___c__DisplayClass2_0::*)()>(&::VROSC::SavWav___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a5ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SavWav___c__DisplayClass2_0._Save_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SavWav___c__DisplayClass2_0::*)()>(&::VROSC::SavWav___c__DisplayClass2_0::_Save_b__0)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x17a5cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav___c__DisplayClass2_0*>::get(),
                        "<Save>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_filePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr ::StringW const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_filePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_filePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_endSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSample;
}
constexpr int32_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_endSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSample;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_endSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSample = value;
}
constexpr int32_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_startSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSample;
}
constexpr int32_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_startSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSample;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_startSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSample = value;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_audioData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_audioData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_normalizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizeMultiplier;
}
constexpr float_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_normalizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizeMultiplier;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_normalizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalizeMultiplier = value;
}
constexpr int32_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_leadingSilentSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leadingSilentSamples;
}
constexpr int32_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_leadingSilentSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leadingSilentSamples;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_leadingSilentSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leadingSilentSamples = value;
}
constexpr ::System::Action_1<float_t>*& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_onProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr ::System::Action_1<float_t>* const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_onProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_onProgress(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr int32_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleRate = value;
}
constexpr int32_t& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr int32_t const& VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void VROSC::SavWav___c__DisplayClass2_0::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
inline void VROSC::SavWav___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SavWav___c__DisplayClass2_0::_Save_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav___c__DisplayClass2_0*>::get(),
                        "<Save>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SavWav___c__DisplayClass2_0* VROSC::SavWav___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SavWav___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SavWav___c__DisplayClass2_0::SavWav___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::VROSC::SavWav__Save_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SavWav__Save_d__2::*)()>(&::VROSC::SavWav__Save_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x17a5ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav__Save_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SavWav__Save_d__2.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SavWav__Save_d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SavWav__Save_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17a620c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav__Save_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SavWav__Save_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav__Save_d__2>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SavWav__Save_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav__Save_d__2>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SavWav__Save_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SavWav__Save_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalizeMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leadingSilentSamples", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SavWav__Save_d__2::SavWav__Save_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, int32_t  endSample, int32_t  startSample, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, float_t  normalizeMultiplier, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress, int32_t  sampleRate, int32_t  channels, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->filePath = filePath;
this->endSample = endSample;
this->startSample = startSample;
this->audioData = audioData;
this->normalizeMultiplier = normalizeMultiplier;
this->leadingSilentSamples = leadingSilentSamples;
this->onProgress = onProgress;
this->sampleRate = sampleRate;
this->channels = channels;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SavWav__Save_d__2::SavWav__Save_d__2()   {
}
//  Writing Method size for method: ::VROSC::SavWav.Save
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::StringW, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, int32_t, float_t, int32_t, int32_t, int32_t, ::System::Action_1<float_t>*)>(&::VROSC::SavWav::Save)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17a1254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SavWav.CreateEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::VROSC::SavWav::CreateEmpty)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17a5610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "CreateEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SavWav.ConvertAndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::FileStream*, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, float_t, int32_t, int32_t, int32_t, ::System::Action_1<float_t>*)>(&::VROSC::SavWav::ConvertAndWrite)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x17a56ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "ConvertAndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SavWav.WriteHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::FileStream*, int32_t, int32_t, int32_t)>(&::VROSC::SavWav::WriteHeader)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x17a5978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "WriteHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* VROSC::SavWav::Save(::StringW  filePath, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  sampleRate, int32_t  channels, float_t  normalizeMultiplier, int32_t  startSample, int32_t  endSample, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, filePath, audioData, sampleRate, channels, normalizeMultiplier, startSample, endSample, leadingSilentSamples, onProgress);
}
inline ::System::IO::FileStream* VROSC::SavWav::CreateEmpty(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "CreateEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*, false>(nullptr, ___internal_method, filePath);
}
inline void VROSC::SavWav::ConvertAndWrite(::System::IO::FileStream*  fileStream, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, float_t  normalizeMultiplier, int32_t  startSample, int32_t  samples, int32_t  leadingSilentSamples, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "ConvertAndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileStream, audioData, normalizeMultiplier, startSample, samples, leadingSilentSamples, onProgress);
}
inline void VROSC::SavWav::WriteHeader(::System::IO::FileStream*  fileStream, int32_t  samples, int32_t  hz, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SavWav*>::get(),
                        "WriteHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileStream, samples, hz, channels);
}
// Ctor Parameters []
constexpr ::VROSC::SavWav::SavWav()   {
}
