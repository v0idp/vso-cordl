#pragma once
// IWYU pragma private; include "System/IO/Compression/IFileFormatWriter.hpp"
#include "System/IO/Compression/zzzz__IFileFormatWriter_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::IFileFormatWriter.GetHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::IO::Compression::IFileFormatWriter::*)()>(&::System::IO::Compression::IFileFormatWriter::GetHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::IFileFormatWriter.UpdateWithBytesRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::IFileFormatWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::IFileFormatWriter::UpdateWithBytesRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::IFileFormatWriter.GetFooter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::IO::Compression::IFileFormatWriter::*)()>(&::System::IO::Compression::IFileFormatWriter::GetFooter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::IFileFormatWriter::GetHeader()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::IO::Compression::IFileFormatWriter::UpdateWithBytesRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  bytesToCopy)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, bytesToCopy);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::IO::Compression::IFileFormatWriter::GetFooter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::IFileFormatWriter*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
