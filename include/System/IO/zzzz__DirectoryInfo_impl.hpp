#pragma once
// IWYU pragma private; include "System/IO/DirectoryInfo.hpp"
#include "System/IO/zzzz__FileSystemInfo_impl.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26aeadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26ae018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::DirectoryInfo::Init)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x26aebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.get_Parent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (::System::IO::DirectoryInfo::*)()>(&::System::IO::DirectoryInfo::get_Parent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x26aefa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "get_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.EnumerateFileSystemInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (::System::IO::DirectoryInfo::*)(::StringW, ::System::IO::SearchOption)>(&::System::IO::DirectoryInfo::EnumerateFileSystemInfos)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26af484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "EnumerateFileSystemInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.EnumerateFileSystemInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (::System::IO::DirectoryInfo::*)(::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::DirectoryInfo::EnumerateFileSystemInfos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26af638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "EnumerateFileSystemInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.InternalEnumerateInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (*)(::StringW, ::StringW, ::System::IO::SearchTarget, ::System::IO::EnumerationOptions*)>(&::System::IO::DirectoryInfo::InternalEnumerateInfos)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x26af648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "InternalEnumerateInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::DirectoryInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26af800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::DirectoryInfo::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void System::IO::DirectoryInfo::_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline void System::IO::DirectoryInfo::Init(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "get_Parent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* System::IO::DirectoryInfo::EnumerateFileSystemInfos(::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "EnumerateFileSystemInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*, false>(this, ___internal_method, searchPattern, searchOption);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* System::IO::DirectoryInfo::EnumerateFileSystemInfos(::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "EnumerateFileSystemInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*, false>(this, ___internal_method, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* System::IO::DirectoryInfo::InternalEnumerateInfos(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        "InternalEnumerateInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*, false>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
inline void System::IO::DirectoryInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DirectoryInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::StringW  path)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::DirectoryInfo*>(path));
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::DirectoryInfo*>(originalPath, fullPath, fileName, isNormalized));
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::DirectoryInfo*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::DirectoryInfo::DirectoryInfo()   {
}
