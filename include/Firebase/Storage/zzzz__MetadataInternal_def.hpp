#pragma once
// IWYU pragma private; include "Firebase/Storage/MetadataInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MetadataInternal)
namespace Firebase::Storage {
class FirebaseStorage;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Storage {
class MetadataInternal;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::MetadataInternal);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MetadataInternal
class CORDL_TYPE MetadataInternal : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_ContentType)) ::StringW  ContentType;

/// @brief Field storage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_storage, put=__cordl_internal_set_storage)) ::Firebase::Storage::FirebaseStorage*  storage;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Copy, addr 0x1927ab0, size 0x24, virtual false, abstract: false, final false
inline ::Firebase::Storage::MetadataInternal* Copy() ;

/// @brief Method CopyCppObject, addr 0x1927ad4, size 0xf4, virtual false, abstract: false, final false
inline ::Firebase::Storage::MetadataInternal* CopyCppObject() ;

/// @brief Method Dispose, addr 0x1927914, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1927878, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Storage::MetadataInternal* New_ctor() ;

static inline ::Firebase::Storage::MetadataInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::Firebase::Storage::MetadataInternal* New_ctor(::Firebase::Storage::FirebaseStorage*  storage) ;

constexpr ::Firebase::Storage::FirebaseStorage* const& __cordl_internal_get_storage() const;

constexpr ::Firebase::Storage::FirebaseStorage*& __cordl_internal_get_storage() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_storage(::Firebase::Storage::FirebaseStorage*  value) ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x19277b4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x192773c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x1927790, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::FirebaseStorage*  storage) ;

/// @brief Method getCPtr, addr 0x1927490, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Storage::MetadataInternal*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_ContentType, addr 0x1927bc8, size 0xa0, virtual false, abstract: false, final false
inline void set_ContentType(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataInternal(MetadataInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataInternal(MetadataInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11683};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field storage, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Storage::FirebaseStorage*  ___storage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MetadataInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MetadataInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MetadataInternal, ___storage) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MetadataInternal, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::MetadataInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MetadataInternal*, "Firebase.Storage", "MetadataInternal");
