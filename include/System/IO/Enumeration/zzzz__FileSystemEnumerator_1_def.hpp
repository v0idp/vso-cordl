#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemEnumerator_1)
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
template<typename TResult>
class FileSystemEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerator_1);
// Dependencies Interop::Sys::DirectoryEntry, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.IntPtr, System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace System::IO::Enumeration {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemEnumerator`1<TResult>
class CORDL_TYPE FileSystemEnumerator_1 : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
 __declspec(property(get=get_Current)) TResult  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field _current, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) TResult  _current;

/// @brief Field _currentPath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPath, put=__cordl_internal_set__currentPath)) ::StringW  _currentPath;

/// @brief Field _directoryHandle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__directoryHandle, put=__cordl_internal_set__directoryHandle)) ::System::IntPtr  _directoryHandle;

/// @brief Field _entry, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__entry, put=__cordl_internal_set__entry)) ::GlobalNamespace::Sys_Interop_DirectoryEntry  _entry;

/// @brief Field _entryBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryBuffer, put=__cordl_internal_set__entryBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _entryBuffer;

/// @brief Field _lastEntryFound, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastEntryFound, put=__cordl_internal_set__lastEntryFound)) bool  _lastEntryFound;

/// @brief Field _lock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _options, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__options, put=__cordl_internal_set__options)) ::System::IO::EnumerationOptions*  _options;

/// @brief Field _originalRootDirectory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalRootDirectory, put=__cordl_internal_set__originalRootDirectory)) ::StringW  _originalRootDirectory;

/// @brief Field _pathBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__pathBuffer, put=__cordl_internal_set__pathBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _pathBuffer;

/// @brief Field _pending, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__pending, put=__cordl_internal_set__pending)) ::System::Collections::Generic::Queue_1<::StringW>*  _pending;

/// @brief Field _rootDirectory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootDirectory, put=__cordl_internal_set__rootDirectory)) ::StringW  _rootDirectory;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CloseDirectoryHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CloseDirectoryHandle() ;

/// @brief Method ContinueOnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ContinueOnError(int32_t  error) ;

/// @brief Method CreateDirectoryHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::IntPtr CreateDirectoryHandle(::StringW  path, bool  ignoreNotFound) ;

/// @brief Method DequeueNextDirectory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool DequeueNextDirectory() ;

/// @brief Method DirectoryFinished, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DirectoryFinished() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindNextEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FindNextEntry() ;

/// @brief Method FindNextEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FindNextEntry(::cordl_internals::Ptr<uint8_t>  entryBufferPtr, int32_t  bufferLength) ;

/// @brief Method InternalContinueOnError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool InternalContinueOnError(::GlobalNamespace::Interop_ErrorInfo  info, bool  ignoreNotFound) ;

/// @brief Method InternalDispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InternalDispose(bool  disposing) ;

/// @brief Method IsAccessError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsAccessError(::GlobalNamespace::Interop_ErrorInfo  info) ;

/// @brief Method IsDirectoryNotFound, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsDirectoryNotFound(::GlobalNamespace::Interop_ErrorInfo  info) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* New_ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method OnDirectoryFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t>  directory) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method ShouldIncludeEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ShouldIncludeEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

/// @brief Method ShouldRecurseIntoEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ShouldRecurseIntoEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method TransformEntry, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TResult TransformEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

constexpr TResult const& __cordl_internal_get__current() const;

constexpr TResult& __cordl_internal_get__current() ;

constexpr ::StringW const& __cordl_internal_get__currentPath() const;

constexpr ::StringW& __cordl_internal_get__currentPath() ;

constexpr ::System::IntPtr const& __cordl_internal_get__directoryHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get__directoryHandle() ;

constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry const& __cordl_internal_get__entry() const;

constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry& __cordl_internal_get__entry() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__entryBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__entryBuffer() ;

constexpr bool const& __cordl_internal_get__lastEntryFound() const;

constexpr bool& __cordl_internal_get__lastEntryFound() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr ::System::IO::EnumerationOptions* const& __cordl_internal_get__options() const;

constexpr ::System::IO::EnumerationOptions*& __cordl_internal_get__options() ;

constexpr ::StringW const& __cordl_internal_get__originalRootDirectory() const;

constexpr ::StringW& __cordl_internal_get__originalRootDirectory() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__pathBuffer() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__pathBuffer() ;

constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& __cordl_internal_get__pending() const;

constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get__pending() ;

constexpr ::StringW const& __cordl_internal_get__rootDirectory() const;

constexpr ::StringW& __cordl_internal_get__rootDirectory() ;

constexpr void __cordl_internal_set__current(TResult  value) ;

constexpr void __cordl_internal_set__currentPath(::StringW  value) ;

constexpr void __cordl_internal_set__directoryHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__entry(::GlobalNamespace::Sys_Interop_DirectoryEntry  value) ;

constexpr void __cordl_internal_set__entryBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__lastEntryFound(bool  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__options(::System::IO::EnumerationOptions*  value) ;

constexpr void __cordl_internal_set__originalRootDirectory(::StringW  value) ;

constexpr void __cordl_internal_set__pathBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__pending(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__rootDirectory(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  directory, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemEnumerator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemEnumerator_1(FileSystemEnumerator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemEnumerator_1(FileSystemEnumerator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3304};

/// @brief Field _originalRootDirectory, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____originalRootDirectory;

/// @brief Field _rootDirectory, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____rootDirectory;

/// @brief Field _options, offset: 0x20, size: 0x8, def value: None
 ::System::IO::EnumerationOptions*  ____options;

/// @brief Field _lock, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _currentPath, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____currentPath;

/// @brief Field _directoryHandle, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ____directoryHandle;

/// @brief Field _lastEntryFound, offset: 0x40, size: 0x1, def value: None
 bool  ____lastEntryFound;

/// @brief Field _pending, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::StringW>*  ____pending;

/// @brief Field _entry, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::Sys_Interop_DirectoryEntry  ____entry;

/// @brief Field _current, offset: 0x60, size: 0x8, def value: None
 TResult  ____current;

/// @brief Field _pathBuffer, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____pathBuffer;

/// @brief Field _entryBuffer, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____entryBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerator_1, "System.IO.Enumeration", "FileSystemEnumerator`1");
