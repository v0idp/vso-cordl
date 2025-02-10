#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipGenericExtraField.hpp"
#include "System/IO/Compression/zzzz__ZipGenericExtraField_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.get_Tag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::IO::Compression::ZipGenericExtraField::*)()>(&::System::IO::Compression::ZipGenericExtraField::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b17798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Tag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.get_Size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::IO::Compression::ZipGenericExtraField::*)()>(&::System::IO::Compression::ZipGenericExtraField::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b177a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::IO::Compression::ZipGenericExtraField::*)()>(&::System::IO::Compression::ZipGenericExtraField::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b177a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.WriteBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipGenericExtraField::*)(::System::IO::Stream*)>(&::System::IO::Compression::ZipGenericExtraField::WriteBlock)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b177b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.TryReadBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, int64_t, ::ByRef<::System::IO::Compression::ZipGenericExtraField>)>(&::System::IO::Compression::ZipGenericExtraField::TryReadBlock)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b1785c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipGenericExtraField>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.ParseExtraField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* (*)(::System::IO::Stream*)>(&::System::IO::Compression::ZipGenericExtraField::ParseExtraField)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2b17934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "ParseExtraField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.TotalSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*)>(&::System::IO::Compression::ZipGenericExtraField::TotalSize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2b15888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "TotalSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipGenericExtraField.WriteAllBlocks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*, ::System::IO::Stream*)>(&::System::IO::Compression::ZipGenericExtraField::WriteAllBlocks)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2b15c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "WriteAllBlocks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
inline uint16_t System::IO::Compression::ZipGenericExtraField::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Tag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline uint16_t System::IO::Compression::ZipGenericExtraField::get_Size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::ZipGenericExtraField::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipGenericExtraField::WriteBlock(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline bool System::IO::Compression::ZipGenericExtraField::TryReadBlock(::System::IO::BinaryReader*  reader, int64_t  endExtraField, ::ByRef<::System::IO::Compression::ZipGenericExtraField>  field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipGenericExtraField>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, endExtraField, field);
}
inline ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* System::IO::Compression::ZipGenericExtraField::ParseExtraField(::System::IO::Stream*  extraFieldData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "ParseExtraField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*, false>(nullptr, ___internal_method, extraFieldData);
}
inline int32_t System::IO::Compression::ZipGenericExtraField::TotalSize(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  fields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "TotalSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fields);
}
inline void System::IO::Compression::ZipGenericExtraField::WriteAllBlocks(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  fields, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipGenericExtraField>::get(),
                        "WriteAllBlocks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fields, stream);
}
// Ctor Parameters [CppParam { name: "_tag", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_size", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipGenericExtraField::ZipGenericExtraField(uint16_t  _tag, uint16_t  _size, ::ArrayW<uint8_t,::Array<uint8_t>*>  _data) noexcept  {
this->_tag = _tag;
this->_size = _size;
this->_data = _data;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipGenericExtraField::ZipGenericExtraField()   {
}
