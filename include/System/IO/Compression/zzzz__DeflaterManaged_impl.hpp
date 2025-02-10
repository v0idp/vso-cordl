#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflaterManaged.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__DeflaterManaged_def.hpp"
#include "System/IO/Compression/zzzz__CopyEncoder_def.hpp"
#include "System/IO/Compression/zzzz__DeflateInput_def.hpp"
#include "System/IO/Compression/zzzz__DeflaterManaged_def.hpp"
#include "System/IO/Compression/zzzz__FastEncoder_def.hpp"
#include "System/IO/Compression/zzzz__OutputBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState::DeflaterManaged_DeflaterState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState::DeflaterManaged_DeflaterState()   {
}
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::NotStarted{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::SlowDownForIncompressible1{static_cast<int32_t>(0x1)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::SlowDownForIncompressible2{static_cast<int32_t>(0x2)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::StartingSmallData{static_cast<int32_t>(0x3)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::CompressThenCheck{static_cast<int32_t>(0x4)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::CheckingForIncompressible{static_cast<int32_t>(0x5)};
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState  System::IO::Compression::DeflaterManaged_DeflaterState::HandlingSmallData{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.NeedsInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflaterManaged::*)()>(&::System::IO::Compression::DeflaterManaged::NeedsInput)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b0c368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "NeedsInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.SetInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflaterManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::DeflaterManaged::SetInput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b0c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "SetInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.GetDeflateOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflaterManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::IO::Compression::DeflaterManaged::GetDeflateOutput)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2b0c12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "GetDeflateOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.Finish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflaterManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::System::IO::Compression::DeflaterManaged::Finish)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b0c528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.UseCompressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflaterManaged::*)(double_t)>(&::System::IO::Compression::DeflaterManaged::UseCompressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b0d380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "UseCompressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.FlushInputWindows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflaterManaged::*)()>(&::System::IO::Compression::DeflaterManaged::FlushInputWindows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b0d3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "FlushInputWindows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.WriteFinal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflaterManaged::*)()>(&::System::IO::Compression::DeflaterManaged::WriteFinal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0d440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "WriteFinal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflaterManaged.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflaterManaged::*)()>(&::System::IO::Compression::DeflaterManaged::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0d468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::FastEncoder*& System::IO::Compression::DeflaterManaged::__cordl_internal_get__deflateEncoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflateEncoder;
}
constexpr ::System::IO::Compression::FastEncoder* const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__deflateEncoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflateEncoder;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__deflateEncoder(::System::IO::Compression::FastEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deflateEncoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::CopyEncoder*& System::IO::Compression::DeflaterManaged::__cordl_internal_get__copyEncoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyEncoder;
}
constexpr ::System::IO::Compression::CopyEncoder* const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__copyEncoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyEncoder;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__copyEncoder(::System::IO::Compression::CopyEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____copyEncoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::DeflateInput*& System::IO::Compression::DeflaterManaged::__cordl_internal_get__input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr ::System::IO::Compression::DeflateInput* const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__input(::System::IO::Compression::DeflateInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::OutputBuffer*& System::IO::Compression::DeflaterManaged::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::System::IO::Compression::OutputBuffer* const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__output(::System::IO::Compression::OutputBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____output)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState& System::IO::Compression::DeflaterManaged::__cordl_internal_get__processingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processingState;
}
constexpr ::System::IO::Compression::DeflaterManaged_DeflaterState const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__processingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processingState;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__processingState(::System::IO::Compression::DeflaterManaged_DeflaterState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processingState = value;
}
constexpr ::System::IO::Compression::DeflateInput*& System::IO::Compression::DeflaterManaged::__cordl_internal_get__inputFromHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFromHistory;
}
constexpr ::System::IO::Compression::DeflateInput* const& System::IO::Compression::DeflaterManaged::__cordl_internal_get__inputFromHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFromHistory;
}
constexpr void System::IO::Compression::DeflaterManaged::__cordl_internal_set__inputFromHistory(::System::IO::Compression::DeflateInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputFromHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::IO::Compression::DeflaterManaged::NeedsInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "NeedsInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflaterManaged::SetInput(::ArrayW<uint8_t,::Array<uint8_t>*>  inputBuffer, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "SetInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputBuffer, startIndex, count);
}
inline int32_t System::IO::Compression::DeflaterManaged::GetDeflateOutput(::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "GetDeflateOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outputBuffer);
}
inline bool System::IO::Compression::DeflaterManaged::Finish(::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::ByRef<int32_t>  bytesRead)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, outputBuffer, bytesRead);
}
inline bool System::IO::Compression::DeflaterManaged::UseCompressed(double_t  ratio)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "UseCompressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ratio);
}
inline void System::IO::Compression::DeflaterManaged::FlushInputWindows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "FlushInputWindows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflaterManaged::WriteFinal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "WriteFinal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflaterManaged::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflaterManaged*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflaterManaged::DeflaterManaged()   {
}
