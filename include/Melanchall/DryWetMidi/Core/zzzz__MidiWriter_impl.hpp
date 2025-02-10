#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiWriter.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WriterSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::System::IO::Stream*, ::Melanchall::DryWetMidi::Core::WriterSettings*)>(&::Melanchall::DryWetMidi::Core::MidiWriter::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x25a4800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WriterSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(uint8_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteByte)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a18dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a0d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteSByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(int8_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteSByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25a26f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteSByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteWord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(uint16_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteWord)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x259f7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteDword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(uint32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteDword)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x259f99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteDword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteInt16
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(int16_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteInt16)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x259f83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteInt16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::StringW)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x259f92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteVlqNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(int32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteVlqNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a350c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteVlqNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteVlqNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(int64_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteVlqNumber)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25a0c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteVlqNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.Write3ByteDword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(uint32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::Write3ByteDword)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25a29f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Write3ByteDword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.PrepareBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)()>(&::Melanchall::DryWetMidi::Core::MidiWriter::PrepareBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25a49a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "PrepareBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25a4a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.FlushBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)()>(&::Melanchall::DryWetMidi::Core::MidiWriter::FlushBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25a4a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "FlushBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteBytesWithBuffering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteBytesWithBuffering)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25a4b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytesWithBuffering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.WriteBytesToBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Melanchall::DryWetMidi::Core::MidiWriter::WriteBytesToBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25a4bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytesToBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)()>(&::Melanchall::DryWetMidi::Core::MidiWriter::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a4c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::MidiWriter.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::MidiWriter::*)(bool)>(&::Melanchall::DryWetMidi::Core::MidiWriter::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25a4c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Melanchall::DryWetMidi::Core::WriterSettings*& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Melanchall::DryWetMidi::Core::WriterSettings* const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__settings(::Melanchall::DryWetMidi::Core::WriterSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__numberBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__numberBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberBuffer;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__numberBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____numberBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__useBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useBuffering;
}
constexpr bool const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__useBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useBuffering;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__useBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useBuffering = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__bufferPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferPosition;
}
constexpr int32_t const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__bufferPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferPosition;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__bufferPosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferPosition = value;
}
constexpr int64_t& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr int64_t const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__length(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____length = value;
}
constexpr bool& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Melanchall::DryWetMidi::Core::MidiWriter::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::_ctor(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::WriterSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WriterSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, settings);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteSByte(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteSByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteWord(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteDword(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteDword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteInt16(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteInt16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteVlqNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteVlqNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteVlqNumber(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteVlqNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::Write3ByteDword(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Write3ByteDword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::PrepareBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "PrepareBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, offset, length);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::FlushBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "FlushBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteBytesWithBuffering(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytesWithBuffering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, offset, length);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::WriteBytesToBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "WriteBytesToBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, offset, length);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::MidiWriter::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Melanchall::DryWetMidi::Core::MidiWriter* Melanchall::DryWetMidi::Core::MidiWriter::New_ctor(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::WriterSettings*  settings)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::MidiWriter*>(stream, settings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Melanchall::DryWetMidi::Core::MidiWriter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Melanchall::DryWetMidi::Core::MidiWriter::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::MidiWriter::MidiWriter()   {
}
