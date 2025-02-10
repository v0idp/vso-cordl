#pragma once
// IWYU pragma private; include "System/IO/Compression/InflaterManaged.hpp"
#include "System/IO/Compression/zzzz__BlockType_impl.hpp"
#include "System/IO/Compression/zzzz__InflaterState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__InflaterManaged_def.hpp"
#include "System/IO/Compression/zzzz__HuffmanTree_def.hpp"
#include "System/IO/Compression/zzzz__IFileFormatReader_def.hpp"
#include "System/IO/Compression/zzzz__InputBuffer_def.hpp"
#include "System/IO/Compression/zzzz__OutputWindow_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::InflaterManaged::*)(::System::IO::Compression::IFileFormatReader*, bool)>(&::System::IO::Compression::InflaterManaged::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b0ae84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::IFileFormatReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::InflaterManaged::*)()>(&::System::IO::Compression::InflaterManaged::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0ef70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.SetInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::InflaterManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::InflaterManaged::SetInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b0b6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "SetInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.Finished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::InflaterManaged::*)()>(&::System::IO::Compression::InflaterManaged::Finished)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b0b6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Finished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.Inflate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::InflaterManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::InflaterManaged::Inflate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2b0b500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Inflate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.Decode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::InflaterManaged::*)()>(&::System::IO::Compression::InflaterManaged::Decode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2b0f054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Decode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.DecodeUncompressedBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::InflaterManaged::*)(::ByRef<bool>)>(&::System::IO::Compression::InflaterManaged::DecodeUncompressedBlock)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2b0ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeUncompressedBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.DecodeBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::InflaterManaged::*)(::ByRef<bool>)>(&::System::IO::Compression::InflaterManaged::DecodeBlock)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2b0fbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.DecodeDynamicBlockHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::InflaterManaged::*)()>(&::System::IO::Compression::InflaterManaged::DecodeDynamicBlockHeader)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x2b0f528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeDynamicBlockHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::InflaterManaged.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::InflaterManaged::*)()>(&::System::IO::Compression::InflaterManaged::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b1046c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::OutputWindow*& System::IO::Compression::InflaterManaged::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::System::IO::Compression::OutputWindow* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__output(::System::IO::Compression::OutputWindow*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____output)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::InputBuffer*& System::IO::Compression::InflaterManaged::__cordl_internal_get__input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr ::System::IO::Compression::InputBuffer* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__input(::System::IO::Compression::InputBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::HuffmanTree*& System::IO::Compression::InflaterManaged::__cordl_internal_get__literalLengthTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____literalLengthTree;
}
constexpr ::System::IO::Compression::HuffmanTree* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__literalLengthTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____literalLengthTree;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__literalLengthTree(::System::IO::Compression::HuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____literalLengthTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::HuffmanTree*& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceTree;
}
constexpr ::System::IO::Compression::HuffmanTree* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceTree;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__distanceTree(::System::IO::Compression::HuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____distanceTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::InflaterState& System::IO::Compression::InflaterManaged::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::System::IO::Compression::InflaterState const& System::IO::Compression::InflaterManaged::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__state(::System::IO::Compression::InflaterState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr bool& System::IO::Compression::InflaterManaged::__cordl_internal_get__hasFormatReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasFormatReader;
}
constexpr bool const& System::IO::Compression::InflaterManaged::__cordl_internal_get__hasFormatReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasFormatReader;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__hasFormatReader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasFormatReader = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__bfinal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bfinal;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__bfinal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bfinal;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__bfinal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bfinal = value;
}
constexpr ::System::IO::Compression::BlockType& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockType;
}
constexpr ::System::IO::Compression::BlockType const& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockType;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__blockType(::System::IO::Compression::BlockType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockType = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockLengthBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockLengthBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockLengthBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockLengthBuffer;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__blockLengthBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blockLengthBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockLength;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__blockLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockLength;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__blockLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockLength = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____length;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____length = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceCode;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceCode;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__distanceCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceCode = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__extraBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraBits;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__extraBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraBits;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__extraBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extraBits = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__loopCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopCounter;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__loopCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopCounter;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__loopCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopCounter = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__literalLengthCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____literalLengthCodeCount;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__literalLengthCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____literalLengthCodeCount;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__literalLengthCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____literalLengthCodeCount = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceCodeCount;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__distanceCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceCodeCount;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__distanceCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceCodeCount = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthCodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthCodeCount;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthCodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthCodeCount;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__codeLengthCodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codeLengthCodeCount = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeArraySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeArraySize;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeArraySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeArraySize;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__codeArraySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codeArraySize = value;
}
constexpr int32_t& System::IO::Compression::InflaterManaged::__cordl_internal_get__lengthCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthCode;
}
constexpr int32_t const& System::IO::Compression::InflaterManaged::__cordl_internal_get__lengthCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthCode;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__lengthCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthCode = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeList;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeList;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__codeList(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthTreeCodeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthTreeCodeLength;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthTreeCodeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthTreeCodeLength;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__codeLengthTreeCodeLength(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeLengthTreeCodeLength)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::Compression::InflaterManaged::__cordl_internal_get__deflate64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflate64;
}
constexpr bool const& System::IO::Compression::InflaterManaged::__cordl_internal_get__deflate64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflate64;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__deflate64(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deflate64 = value;
}
constexpr ::System::IO::Compression::HuffmanTree*& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthTree;
}
constexpr ::System::IO::Compression::HuffmanTree* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__codeLengthTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codeLengthTree;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__codeLengthTree(::System::IO::Compression::HuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeLengthTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::IFileFormatReader*& System::IO::Compression::InflaterManaged::__cordl_internal_get__formatReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatReader;
}
constexpr ::System::IO::Compression::IFileFormatReader* const& System::IO::Compression::InflaterManaged::__cordl_internal_get__formatReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatReader;
}
constexpr void System::IO::Compression::InflaterManaged::__cordl_internal_set__formatReader(::System::IO::Compression::IFileFormatReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Compression::InflaterManaged::setStaticF_s_extraLengthBits(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_extraLengthBits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::InflaterManaged::getStaticF_s_extraLengthBits()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_extraLengthBits", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>();
}
inline void System::IO::Compression::InflaterManaged::setStaticF_s_lengthBase(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "s_lengthBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>(std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::IO::Compression::InflaterManaged::getStaticF_s_lengthBase()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "s_lengthBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>();
}
inline void System::IO::Compression::InflaterManaged::setStaticF_s_distanceBasePosition(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "s_distanceBasePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>(std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::IO::Compression::InflaterManaged::getStaticF_s_distanceBasePosition()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "s_distanceBasePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>();
}
inline void System::IO::Compression::InflaterManaged::setStaticF_s_codeOrder(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_codeOrder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::InflaterManaged::getStaticF_s_codeOrder()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_codeOrder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>();
}
inline void System::IO::Compression::InflaterManaged::setStaticF_s_staticDistanceTreeTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_staticDistanceTreeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::InflaterManaged::getStaticF_s_staticDistanceTreeTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_staticDistanceTreeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get>();
}
inline void System::IO::Compression::InflaterManaged::_ctor(::System::IO::Compression::IFileFormatReader*  reader, bool  deflate64)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::IFileFormatReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, deflate64);
}
inline void System::IO::Compression::InflaterManaged::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::InflaterManaged::SetInput(::ArrayW<uint8_t,::Array<uint8_t>*>  inputBytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "SetInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputBytes, offset, length);
}
inline bool System::IO::Compression::InflaterManaged::Finished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Finished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::IO::Compression::InflaterManaged::Inflate(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Inflate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, offset, length);
}
inline bool System::IO::Compression::InflaterManaged::Decode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Decode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Compression::InflaterManaged::DecodeUncompressedBlock(::ByRef<bool>  end_of_block)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeUncompressedBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, end_of_block);
}
inline bool System::IO::Compression::InflaterManaged::DecodeBlock(::ByRef<bool>  end_of_block_code_seen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, end_of_block_code_seen);
}
inline bool System::IO::Compression::InflaterManaged::DecodeDynamicBlockHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "DecodeDynamicBlockHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::Compression::InflaterManaged::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::InflaterManaged*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::Compression::InflaterManaged* System::IO::Compression::InflaterManaged::New_ctor(::System::IO::Compression::IFileFormatReader*  reader, bool  deflate64)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Compression::InflaterManaged*>(reader, deflate64));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::InflaterManaged::InflaterManaged()   {
}
