#pragma once
// IWYU pragma private; include "System/IO/Compression/CopyEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__CopyEncoder_def.hpp"
#include "System/IO/Compression/zzzz__DeflateInput_def.hpp"
#include "System/IO/Compression/zzzz__OutputBuffer_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::CopyEncoder.GetBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::CopyEncoder::*)(::System::IO::Compression::DeflateInput*, ::System::IO::Compression::OutputBuffer*, bool)>(&::System::IO::Compression::CopyEncoder::GetBlock)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2b0a818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::CopyEncoder*>::get(),
                        "GetBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::CopyEncoder.WriteLenNLen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::CopyEncoder::*)(uint16_t, ::System::IO::Compression::OutputBuffer*)>(&::System::IO::Compression::CopyEncoder::WriteLenNLen)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b0aab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::CopyEncoder*>::get(),
                        "WriteLenNLen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::CopyEncoder::GetBlock(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, bool  isFinal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::CopyEncoder*>::get(),
                        "GetBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::DeflateInput*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, isFinal);
}
inline void System::IO::Compression::CopyEncoder::WriteLenNLen(uint16_t  len, ::System::IO::Compression::OutputBuffer*  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::CopyEncoder*>::get(),
                        "WriteLenNLen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::OutputBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, len, output);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::CopyEncoder::CopyEncoder()   {
}
