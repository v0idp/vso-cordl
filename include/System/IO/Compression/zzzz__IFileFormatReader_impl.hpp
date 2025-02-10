#pragma once
// IWYU pragma private; include "System/IO/Compression/IFileFormatReader.hpp"
#include "System/IO/Compression/zzzz__IFileFormatReader_def.hpp"
#include "System/IO/Compression/zzzz__InputBuffer_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::IFileFormatReader.ReadHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::IFileFormatReader::*)(::System::IO::Compression::InputBuffer*)>(&::System::IO::Compression::IFileFormatReader::ReadHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::IFileFormatReader.ReadFooter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::IFileFormatReader::*)(::System::IO::Compression::InputBuffer*)>(&::System::IO::Compression::IFileFormatReader::ReadFooter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::IFileFormatReader.UpdateWithBytesRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::IFileFormatReader::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::IFileFormatReader::UpdateWithBytesRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::IFileFormatReader.Validate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::IFileFormatReader::*)()>(&::System::IO::Compression::IFileFormatReader::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::IFileFormatReader::ReadHeader(::System::IO::Compression::InputBuffer*  input)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline bool System::IO::Compression::IFileFormatReader::ReadFooter(::System::IO::Compression::InputBuffer*  input)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, input);
}
inline void System::IO::Compression::IFileFormatReader::UpdateWithBytesRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  bytesToCopy)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, bytesToCopy);
}
inline void System::IO::Compression::IFileFormatReader::Validate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatReader*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
