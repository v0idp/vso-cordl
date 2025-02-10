#pragma once
// IWYU pragma private; include "System/IO/Compression/OutputBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__OutputBuffer_def.hpp"
#include "System/IO/Compression/zzzz__OutputBuffer_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer_BufferState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer_BufferState::*)(int32_t, uint32_t, int32_t)>(&::System::IO::Compression::OutputBuffer_BufferState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b10814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer_BufferState>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::OutputBuffer_BufferState::_ctor(int32_t  pos, uint32_t  bitBuf, int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer_BufferState>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, bitBuf, bitCount);
}
// Ctor Parameters [CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bitBuf", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bitCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::OutputBuffer_BufferState::OutputBuffer_BufferState(int32_t  _pos, uint32_t  _bitBuf, int32_t  _bitCount) noexcept  {
this->_pos = _pos;
this->_bitBuf = _bitBuf;
this->_bitCount = _bitCount;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::OutputBuffer_BufferState::OutputBuffer_BufferState()   {
}
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.UpdateBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::IO::Compression::OutputBuffer::UpdateBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0d358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "UpdateBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.get_BytesWritten
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::OutputBuffer::*)()>(&::System::IO::Compression::OutputBuffer::get_BytesWritten)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b10780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_BytesWritten",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.get_FreeBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::OutputBuffer::*)()>(&::System::IO::Compression::OutputBuffer::get_FreeBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b0a93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_FreeBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.WriteUInt16
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(uint16_t)>(&::System::IO::Compression::OutputBuffer::WriteUInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b0ab5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteUInt16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.WriteBits
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(int32_t, uint32_t)>(&::System::IO::Compression::OutputBuffer::WriteBits)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b0a97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.FlushBits
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)()>(&::System::IO::Compression::OutputBuffer::FlushBits)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b0aa14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "FlushBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.WriteBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::OutputBuffer::WriteBytes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b0aae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.WriteBytesUnaligned
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::OutputBuffer::WriteBytesUnaligned)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b10788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBytesUnaligned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.WriteByteUnaligned
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(uint8_t)>(&::System::IO::Compression::OutputBuffer::WriteByteUnaligned)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b10808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteByteUnaligned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.get_BitsInBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::OutputBuffer::*)()>(&::System::IO::Compression::OutputBuffer::get_BitsInBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b0a960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_BitsInBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.DumpState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::OutputBuffer_BufferState (::System::IO::Compression::OutputBuffer::*)()>(&::System::IO::Compression::OutputBuffer::DumpState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0d364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "DumpState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::OutputBuffer.RestoreState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::OutputBuffer::*)(::System::IO::Compression::OutputBuffer_BufferState)>(&::System::IO::Compression::OutputBuffer::RestoreState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b0d390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "RestoreState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer_BufferState>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::OutputBuffer::__cordl_internal_get__byteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::OutputBuffer::__cordl_internal_get__byteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr void System::IO::Compression::OutputBuffer::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::IO::Compression::OutputBuffer::__cordl_internal_get__pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos;
}
constexpr int32_t const& System::IO::Compression::OutputBuffer::__cordl_internal_get__pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos;
}
constexpr void System::IO::Compression::OutputBuffer::__cordl_internal_set__pos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pos = value;
}
constexpr uint32_t& System::IO::Compression::OutputBuffer::__cordl_internal_get__bitBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitBuf;
}
constexpr uint32_t const& System::IO::Compression::OutputBuffer::__cordl_internal_get__bitBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitBuf;
}
constexpr void System::IO::Compression::OutputBuffer::__cordl_internal_set__bitBuf(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitBuf = value;
}
constexpr int32_t& System::IO::Compression::OutputBuffer::__cordl_internal_get__bitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitCount;
}
constexpr int32_t const& System::IO::Compression::OutputBuffer::__cordl_internal_get__bitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitCount;
}
constexpr void System::IO::Compression::OutputBuffer::__cordl_internal_set__bitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitCount = value;
}
inline void System::IO::Compression::OutputBuffer::UpdateBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "UpdateBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline int32_t System::IO::Compression::OutputBuffer::get_BytesWritten()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_BytesWritten",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::IO::Compression::OutputBuffer::get_FreeBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_FreeBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::OutputBuffer::WriteUInt16(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteUInt16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::Compression::OutputBuffer::WriteBits(int32_t  n, uint32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, bits);
}
inline void System::IO::Compression::OutputBuffer::FlushBits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "FlushBits",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::OutputBuffer::WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  byteArray, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, byteArray, offset, count);
}
inline void System::IO::Compression::OutputBuffer::WriteBytesUnaligned(::ArrayW<uint8_t,::Array<uint8_t>*>  byteArray, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteBytesUnaligned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, byteArray, offset, count);
}
inline void System::IO::Compression::OutputBuffer::WriteByteUnaligned(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "WriteByteUnaligned",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline int32_t System::IO::Compression::OutputBuffer::get_BitsInBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "get_BitsInBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IO::Compression::OutputBuffer_BufferState System::IO::Compression::OutputBuffer::DumpState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "DumpState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::OutputBuffer_BufferState, false>(this, ___internal_method);
}
inline void System::IO::Compression::OutputBuffer::RestoreState(::System::IO::Compression::OutputBuffer_BufferState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::OutputBuffer*>::get(),
                        "RestoreState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer_BufferState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::OutputBuffer::OutputBuffer()   {
}
