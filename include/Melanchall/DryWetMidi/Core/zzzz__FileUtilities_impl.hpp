#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/FileUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__FileUtilities_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::FileUtilities.CreateFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeFileHandle* (*)(::StringW, uint32_t, uint32_t, ::System::IntPtr, uint32_t, uint32_t, ::System::IntPtr)>(&::Melanchall::DryWetMidi::Core::FileUtilities::CreateFile)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x25a4e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "CreateFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::FileUtilities.OpenFileForWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, bool)>(&::Melanchall::DryWetMidi::Core::FileUtilities::OpenFileForWrite)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x25a3e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "OpenFileForWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::FileUtilities.GetFileHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeFileHandle* (*)(::StringW, uint32_t, uint32_t)>(&::Melanchall::DryWetMidi::Core::FileUtilities::GetFileHandle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x25a502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "GetFileHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* Melanchall::DryWetMidi::Core::FileUtilities::CreateFile(::StringW  lpFileName, uint32_t  dwDesiredAccess, uint32_t  dwShareMode, ::System::IntPtr  lpSecurityAttributes, uint32_t  dwCreationDisposition, uint32_t  dwFlagsAndAttributes, ::System::IntPtr  hTemplateFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "CreateFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFileHandle*, false>(nullptr, ___internal_method, lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}
inline ::System::IO::FileStream* Melanchall::DryWetMidi::Core::FileUtilities::OpenFileForWrite(::StringW  filePath, bool  overwriteFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "OpenFileForWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*, false>(nullptr, ___internal_method, filePath, overwriteFile);
}
inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* Melanchall::DryWetMidi::Core::FileUtilities::GetFileHandle(::StringW  filePath, uint32_t  fileAccess, uint32_t  creationDisposition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::FileUtilities*>::get(),
                        "GetFileHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFileHandle*, false>(nullptr, ___internal_method, filePath, fileAccess, creationDisposition);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::FileUtilities::FileUtilities()   {
}
