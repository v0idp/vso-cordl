#pragma once
// IWYU pragma private; include "Firebase/AppOptionsInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppOptionsInternal)
namespace System {
struct IntPtr;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Firebase {
class AppOptionsInternal;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::AppOptionsInternal);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase {
// Is value type: false
// CS Name: Firebase.AppOptionsInternal
class CORDL_TYPE AppOptionsInternal : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ApiKey)) ::StringW  ApiKey;

 __declspec(property(get=get_AppId)) ::StringW  AppId;

 __declspec(property(get=get_DatabaseUrl)) ::System::Uri*  DatabaseUrl;

 __declspec(property(get=get_MessageSenderId)) ::StringW  MessageSenderId;

 __declspec(property(get=get_PackageName)) ::StringW  PackageName;

 __declspec(property(get=get_ProjectId)) ::StringW  ProjectId;

 __declspec(property(get=get_StorageBucket)) ::StringW  StorageBucket;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18f3c18, size 0x19c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18f3b84, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetDatabaseUrlInternal, addr 0x18f3e18, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetDatabaseUrlInternal() ;

static inline ::Firebase::AppOptionsInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18f3968, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method get_ApiKey, addr 0x18f3f38, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_ApiKey() ;

/// @brief Method get_AppId, addr 0x18f3ea8, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_AppId() ;

/// @brief Method get_DatabaseUrl, addr 0x18f3db4, size 0x64, virtual false, abstract: false, final false
inline ::System::Uri* get_DatabaseUrl() ;

/// @brief Method get_MessageSenderId, addr 0x18f3fc8, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_MessageSenderId() ;

/// @brief Method get_PackageName, addr 0x18f4178, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_PackageName() ;

/// @brief Method get_ProjectId, addr 0x18f40e8, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_ProjectId() ;

/// @brief Method get_StorageBucket, addr 0x18f4058, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_StorageBucket() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppOptionsInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppOptionsInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppOptionsInternal(AppOptionsInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppOptionsInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppOptionsInternal(AppOptionsInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11825};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::AppOptionsInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::AppOptionsInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::AppOptionsInternal, 0x28>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::AppOptionsInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppOptionsInternal*, "Firebase", "AppOptionsInternal");
