#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_impl.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::System::IO::TextReader*)>(&::Newtonsoft::Json::JsonTextReader::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27d4a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_PropertyNameTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonNameTable* (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d4b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_PropertyNameTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.set_PropertyNameTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::JsonNameTable*)>(&::Newtonsoft::Json::JsonTextReader::set_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d4b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "set_PropertyNameTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonNameTable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBufferNotEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27d4ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureBufferNotEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.SetNewLine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::SetNewLine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27d4bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "SetNewLine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.OnNewLine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t)>(&::Newtonsoft::Json::JsonTextReader::OnNewLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27d4c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "OnNewLine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27d4c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseReadString)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x27d51cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseReadString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BlockCopyChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27d55c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "BlockCopyChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ShiftBufferIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27d4cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ShiftBufferIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27d55d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.PrepareBufferForReadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x27d5674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "PrepareBufferForReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27d55e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::EnsureChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27d580c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::ReadChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27d582c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Read)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x27d589c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsInt32
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27d6704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27d6b60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27d70a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x27d710c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadStringValue)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x27d6bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadStringValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x27d79b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadQuotedStringValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.CreateUnexpectedCharacterException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27d7730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "CreateUnexpectedCharacterException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBoolean
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x27d7e7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessValueComma
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessValueComma)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27d76c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessValueComma",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberValue)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x27d6794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27d83ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadQuotedNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27d8574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDecimal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27d8640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27d870c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HandleNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HandleNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27d75f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "HandleNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x27d7864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNullChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNullChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27d75a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNullChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27d5ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x27d4d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadStringIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadStringIntoBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27d88fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadStringIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.WriteCharToBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::WriteCharToBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27d88ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "WriteCharToBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ConvertUnicode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ConvertUnicode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27d8994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ConvertUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnicode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnicode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27d886c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27d8ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberCharIntoBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x27d8b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberCharIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ClearRecentString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ClearRecentString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27d8ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ClearRecentString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePostValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParsePostValue)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27d60bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParsePostValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x27d5f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseProperty)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x27d8cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ValidIdentifierChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ValidIdentifierChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27d8f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ValidIdentifierChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnquotedProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27d8f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUnquotedProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadUnquotedPropertyReportIfDone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27d9088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadUnquotedPropertyReportIfDone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseValue)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x27d5b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessLineFeed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessLineFeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27d7848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessLineFeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27d7800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessCarriageReturn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EatWhitespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EatWhitespace)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27d6364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EatWhitespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseConstructor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x27d9388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumber)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27d7c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ParseReadNumber)> {
  constexpr static std::size_t size = 0xfcc;
  constexpr static std::size_t addrs = 0x27d9754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseReadNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ThrowReaderError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Exception*)>(&::Newtonsoft::Json::JsonTextReader::ThrowReaderError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27da720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ThrowReaderError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BigIntegerParse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW, ::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonTextReader::BigIntegerParse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27da79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "BigIntegerParse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseComment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParseComment)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x27d6478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseComment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EndComment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::EndComment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27da824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EndComment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27da884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool, ::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27da8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27d7ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValueWithTrailingSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.IsSeparator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::IsSeparator)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x27da9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "IsSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseTrue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27d91d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseTrue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseNull)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27d87c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUndefined
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUndefined)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27d96a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUndefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseFalse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseFalse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27d92b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseFalse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27d7bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNegativeInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27dab18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNegativeInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27d7d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberPositiveInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27dac6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberPositiveInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27d7e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNaN",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27dadc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNaN",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Close)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27daf14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HasLineInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27daf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LineNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27daf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LinePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dafc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__safeAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeAsync = value;
}
constexpr ::System::IO::TextReader*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr ::System::IO::TextReader* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chars;
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chars;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charsUsed;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charsUsed;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charsUsed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charsUsed = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineStartPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineStartPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineStartPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineStartPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineNumber;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineNumber;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineNumber = value;
}
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEndOfFile;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEndOfFile;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__isEndOfFile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEndOfFile = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringBuffer;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringBuffer;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringBuffer = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringReference;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringReference;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringReference = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrayPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonNameTable*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyNameTable_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonNameTable* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyNameTable_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PropertyNameTable_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::JsonTextReader::_ctor(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::Newtonsoft::Json::JsonNameTable* Newtonsoft::Json::JsonTextReader::get_PropertyNameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_PropertyNameTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonNameTable*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "set_PropertyNameTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonNameTable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureBufferNotEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::SetNewLine(bool  hasNextChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "SetNewLine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasNextChar);
}
inline void Newtonsoft::Json::JsonTextReader::OnNewLine(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "OnNewLine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline void Newtonsoft::Json::JsonTextReader::ParseString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseReadString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::BlockCopyChars(::ArrayW<char16_t,::Array<char16_t>*>  src, int32_t  srcOffset, ::ArrayW<char16_t,::Array<char16_t>*>  dst, int32_t  dstOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "BlockCopyChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ShiftBufferIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool  append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData(bool  append, int32_t  charsRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "PrepareBufferForReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, append, charsRequired);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool  append, int32_t  charsRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, append, charsRequired);
}
inline bool Newtonsoft::Json::JsonTextReader::EnsureChars(int32_t  relativePosition, bool  append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadChars(int32_t  relativePosition, bool  append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadChars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::Read()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonTextReader::ReadAsInt32()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonTextReader::ReadAsDateTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonTextReader::ReadAsString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Newtonsoft::Json::JsonTextReader::ReadAsBytes()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadStringValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadStringValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadQuotedStringValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "CreateUnexpectedCharacterException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*, false>(this, ___internal_method, c);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonTextReader::ReadAsBoolean()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessValueComma()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessValueComma",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadNumberValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadQuotedNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonTextReader::ReadAsDecimal()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonTextReader::ReadAsDouble()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::HandleNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "HandleNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNullChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNullChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EnsureBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer(char16_t  quote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadStringIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quote);
}
inline void Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer(int32_t  charPos, int32_t  initialPosition, int32_t  lastWritePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "FinishReadStringIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, charPos, initialPosition, lastWritePosition);
}
inline void Newtonsoft::Json::JsonTextReader::WriteCharToBuffer(char16_t  writeChar, int32_t  lastWritePosition, int32_t  writeToPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "WriteCharToBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writeChar, lastWritePosition, writeToPosition);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ConvertUnicode(bool  enoughChars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ConvertUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, enoughChars);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ParseUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUnicode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer(char16_t  currentChar, int32_t  charPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadNumberCharIntoBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentChar, charPos);
}
inline void Newtonsoft::Json::JsonTextReader::ClearRecentString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ClearRecentString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParsePostValue(bool  ignoreComments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParsePostValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ignoreComments);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ValidIdentifierChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ValidIdentifierChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUnquotedProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone(char16_t  currentChar, int32_t  initialPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ReadUnquotedPropertyReportIfDone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentChar, initialPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessLineFeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessLineFeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn(bool  append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ProcessCarriageReturn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::EatWhitespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EatWhitespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNumber(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadNumber(::Newtonsoft::Json::ReadType  readType, char16_t  firstChar, int32_t  initialPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseReadNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readType, firstChar, initialPosition);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::ThrowReaderError(::StringW  message, ::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ThrowReaderError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*, false>(this, ___internal_method, message, ex);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::BigIntegerParse(::StringW  number, ::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "BigIntegerParse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, number, culture);
}
inline void Newtonsoft::Json::JsonTextReader::ParseComment(bool  setToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseComment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setToken);
}
inline void Newtonsoft::Json::JsonTextReader::EndComment(bool  setToken, int32_t  initialPosition, int32_t  endPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "EndComment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setToken, initialPosition, endPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(bool  enoughChars, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enoughChars, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "MatchValueWithTrailingSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::IsSeparator(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "IsSeparator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline void Newtonsoft::Json::JsonTextReader::ParseTrue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseTrue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUndefined()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseUndefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseFalse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseFalse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNegativeInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNegativeInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberPositiveInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberPositiveInfinity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNaN",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "ParseNumberNaN",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReadType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, readType, matched);
}
inline void Newtonsoft::Json::JsonTextReader::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextReader*>::get(),
                        "get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonTextReader* Newtonsoft::Json::JsonTextReader::New_ctor(::System::IO::TextReader*  reader)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonTextReader*>(reader));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr  Newtonsoft::Json::JsonTextReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::JsonTextReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader::JsonTextReader()   {
}
