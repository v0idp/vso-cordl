#pragma once
// IWYU pragma private; include "System/IO/Compression/FastEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__FastEncoder_def.hpp"
#include "System/IO/Compression/zzzz__DeflateInput_def.hpp"
#include "System/IO/Compression/zzzz__FastEncoderWindow_def.hpp"
#include "System/IO/Compression/zzzz__Match_def.hpp"
#include "System/IO/Compression/zzzz__OutputBuffer_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.get_BytesInHistory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::FastEncoder::*)()>(&::System::IO::Compression::FastEncoder::get_BytesInHistory)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b0d338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_BytesInHistory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.get_UnprocessedInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::DeflateInput* (::System::IO::Compression::FastEncoder::*)()>(&::System::IO::Compression::FastEncoder::get_UnprocessedInput)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0d3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_UnprocessedInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.FlushInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)()>(&::System::IO::Compression::FastEncoder::FlushInput)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0d3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "FlushInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.get_LastCompressionRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::IO::Compression::FastEncoder::*)()>(&::System::IO::Compression::FastEncoder::get_LastCompressionRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0d4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_LastCompressionRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::DeflateInput*, ::System::IO::Compression::OutputBuffer*, int32_t)>(&::System::IO::Compression::FastEncoder::GetBlock)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0d3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetCompressedData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::DeflateInput*, ::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::GetCompressedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0d378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetBlockHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::GetBlockHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0d370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlockHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetBlockFooter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::GetBlockFooter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0d3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlockFooter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetCompressedOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::DeflateInput*, ::System::IO::Compression::OutputBuffer*, int32_t)>(&::System::IO::Compression::FastEncoder::GetCompressedOutput)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2b0d584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.GetCompressedOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::GetCompressedOutput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b0d828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.InputAvailable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::DeflateInput*)>(&::System::IO::Compression::FastEncoder::InputAvailable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b0d900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "InputAvailable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.SafeToWriteTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::SafeToWriteTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b0d8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "SafeToWriteTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.WriteEndOfBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::FastEncoder::*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::WriteEndOfBlock)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b0d748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteEndOfBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.WriteMatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, ::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::WriteMatch)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2b0dbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.WriteChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, ::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::WriteChar)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b0db3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::FastEncoder.WriteDeflatePreamble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::FastEncoder::WriteDeflatePreamble)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b0d500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteDeflatePreamble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::FastEncoderWindow*& System::IO::Compression::FastEncoder::__cordl_internal_get__inputWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputWindow;
}
constexpr ::System::IO::Compression::FastEncoderWindow* const& System::IO::Compression::FastEncoder::__cordl_internal_get__inputWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputWindow;
}
constexpr void System::IO::Compression::FastEncoder::__cordl_internal_set__inputWindow(::System::IO::Compression::FastEncoderWindow*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputWindow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::Match*& System::IO::Compression::FastEncoder::__cordl_internal_get__currentMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMatch;
}
constexpr ::System::IO::Compression::Match* const& System::IO::Compression::FastEncoder::__cordl_internal_get__currentMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMatch;
}
constexpr void System::IO::Compression::FastEncoder::__cordl_internal_set__currentMatch(::System::IO::Compression::Match*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentMatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& System::IO::Compression::FastEncoder::__cordl_internal_get__lastCompressionRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCompressionRatio;
}
constexpr double_t const& System::IO::Compression::FastEncoder::__cordl_internal_get__lastCompressionRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCompressionRatio;
}
constexpr void System::IO::Compression::FastEncoder::__cordl_internal_set__lastCompressionRatio(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCompressionRatio = value;
}
inline int32_t System::IO::Compression::FastEncoder::get_BytesInHistory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_BytesInHistory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IO::Compression::DeflateInput* System::IO::Compression::FastEncoder::get_UnprocessedInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_UnprocessedInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::DeflateInput*, false>(this, ___internal_method);
}
inline void System::IO::Compression::FastEncoder::FlushInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "FlushInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t System::IO::Compression::FastEncoder::get_LastCompressionRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "get_LastCompressionRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::FastEncoder::GetBlock(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, int32_t  maxBytesToCopy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, maxBytesToCopy);
}
inline void System::IO::Compression::FastEncoder::GetCompressedData(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
inline void System::IO::Compression::FastEncoder::GetBlockHeader(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlockHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void System::IO::Compression::FastEncoder::GetBlockFooter(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetBlockFooter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void System::IO::Compression::FastEncoder::GetCompressedOutput(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, int32_t  maxBytesToCopy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, maxBytesToCopy);
}
inline void System::IO::Compression::FastEncoder::GetCompressedOutput(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "GetCompressedOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline bool System::IO::Compression::FastEncoder::InputAvailable(::System::IO::Compression::DeflateInput*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "InputAvailable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::IO::Compression::FastEncoder::SafeToWriteTo(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "SafeToWriteTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, output);
}
inline void System::IO::Compression::FastEncoder::WriteEndOfBlock(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteEndOfBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void System::IO::Compression::FastEncoder::WriteMatch(int32_t  matchLen, int32_t  matchPos, ::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteMatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, matchLen, matchPos, output);
}
inline void System::IO::Compression::FastEncoder::WriteChar(uint8_t  b, ::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, b, output);
}
inline void System::IO::Compression::FastEncoder::WriteDeflatePreamble(::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::FastEncoder*>::get(),
                        "WriteDeflatePreamble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::FastEncoder::FastEncoder()   {
}
