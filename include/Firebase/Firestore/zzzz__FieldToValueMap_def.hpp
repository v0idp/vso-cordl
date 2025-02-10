#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldToValueMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FieldToValueMap)
namespace Firebase::Firestore {
class FieldToValueMapIterator;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class FieldToValueMap;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FieldToValueMap);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FieldToValueMap
class CORDL_TYPE FieldToValueMap : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1904dd8, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1904d3c, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Insert, addr 0x1904f74, size 0xb4, virtual false, abstract: false, final false
inline void Insert(::StringW  key, ::Firebase::Firestore::FieldValueProxy*  value) ;

/// @brief Method Iterator, addr 0x1905028, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FieldToValueMapIterator* Iterator() ;

static inline ::Firebase::Firestore::FieldToValueMap* New_ctor() ;

static inline ::Firebase::Firestore::FieldToValueMap* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1904c80, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18fda70, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x18fdbbc, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::FieldToValueMap*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldToValueMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldToValueMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldToValueMap(FieldToValueMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldToValueMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldToValueMap(FieldToValueMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11099};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FieldToValueMap, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FieldToValueMap, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FieldToValueMap, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FieldToValueMap);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldToValueMap*, "Firebase.Firestore", "FieldToValueMap");
