#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldValueProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldValueProxy)
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
namespace Firebase::Firestore {
struct FieldValueProxy_Type;
}
namespace Firebase::Firestore {
class GeoPointProxy;
}
namespace Firebase::Firestore {
class SWIGTYPE_p_unsigned_char;
}
namespace Firebase::Firestore {
class TimestampProxy;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
struct FieldValueProxy_Type;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::FieldValueProxy_Type);
MARK_REF_PTR_T(::Firebase::Firestore::FieldValueProxy);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.FieldValueProxy/Type
struct CORDL_TYPE FieldValueProxy_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FieldValueProxy_Type_Unwrapped
enum struct __FieldValueProxy_Type_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_Boolean = static_cast<int32_t>(0x1),
__E_Integer = static_cast<int32_t>(0x2),
__E_Double = static_cast<int32_t>(0x3),
__E_Timestamp = static_cast<int32_t>(0x4),
__E_String = static_cast<int32_t>(0x5),
__E_Blob = static_cast<int32_t>(0x6),
__E_Reference = static_cast<int32_t>(0x7),
__E_GeoPoint = static_cast<int32_t>(0x8),
__E_Array = static_cast<int32_t>(0x9),
__E_Map = static_cast<int32_t>(0xa),
__E_Delete = static_cast<int32_t>(0xb),
__E_ServerTimestamp = static_cast<int32_t>(0xc),
__E_ArrayUnion = static_cast<int32_t>(0xd),
__E_ArrayRemove = static_cast<int32_t>(0xe),
__E_IncrementInteger = static_cast<int32_t>(0xf),
__E_IncrementDouble = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FieldValueProxy_Type_Unwrapped () const noexcept {
return static_cast<__FieldValueProxy_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FieldValueProxy_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FieldValueProxy_Type(int32_t  value__) noexcept;

/// @brief Field Array value: I32(9)
static ::Firebase::Firestore::FieldValueProxy_Type const Array;

/// @brief Field ArrayRemove value: I32(14)
static ::Firebase::Firestore::FieldValueProxy_Type const ArrayRemove;

/// @brief Field ArrayUnion value: I32(13)
static ::Firebase::Firestore::FieldValueProxy_Type const ArrayUnion;

/// @brief Field Blob value: I32(6)
static ::Firebase::Firestore::FieldValueProxy_Type const Blob;

/// @brief Field Boolean value: I32(1)
static ::Firebase::Firestore::FieldValueProxy_Type const Boolean;

/// @brief Field Delete value: I32(11)
static ::Firebase::Firestore::FieldValueProxy_Type const Delete;

/// @brief Field Double value: I32(3)
static ::Firebase::Firestore::FieldValueProxy_Type const Double;

/// @brief Field GeoPoint value: I32(8)
static ::Firebase::Firestore::FieldValueProxy_Type const GeoPoint;

/// @brief Field IncrementDouble value: I32(16)
static ::Firebase::Firestore::FieldValueProxy_Type const IncrementDouble;

/// @brief Field IncrementInteger value: I32(15)
static ::Firebase::Firestore::FieldValueProxy_Type const IncrementInteger;

/// @brief Field Integer value: I32(2)
static ::Firebase::Firestore::FieldValueProxy_Type const Integer;

/// @brief Field Map value: I32(10)
static ::Firebase::Firestore::FieldValueProxy_Type const Map;

/// @brief Field Null value: I32(0)
static ::Firebase::Firestore::FieldValueProxy_Type const Null;

/// @brief Field Reference value: I32(7)
static ::Firebase::Firestore::FieldValueProxy_Type const Reference;

/// @brief Field ServerTimestamp value: I32(12)
static ::Firebase::Firestore::FieldValueProxy_Type const ServerTimestamp;

/// @brief Field String value: I32(5)
static ::Firebase::Firestore::FieldValueProxy_Type const String;

/// @brief Field Timestamp value: I32(4)
static ::Firebase::Firestore::FieldValueProxy_Type const Timestamp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FieldValueProxy_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FieldValueProxy_Type, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FieldValueProxy
class CORDL_TYPE FieldValueProxy : public ::System::Object {
public:
// Declarations
using Type = ::Firebase::Firestore::FieldValueProxy_Type;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Blob, addr 0x1908694, size 0x108, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Blob(::Firebase::Firestore::SWIGTYPE_p_unsigned_char*  value, uint32_t  size) ;

/// @brief Method Boolean, addr 0x19081c0, size 0xe4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Boolean(bool  value) ;

/// @brief Method Delete, addr 0x1909424, size 0xdc, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Delete() ;

/// @brief Method Dispose, addr 0x1908024, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Double, addr 0x1908388, size 0xec, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Double(double_t  value) ;

/// @brief Method Finalize, addr 0x1907f88, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GeoPoint, addr 0x1908894, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* GeoPoint(::Firebase::Firestore::GeoPointProxy*  value) ;

/// @brief Method Integer, addr 0x19082a4, size 0xe4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Integer(int64_t  value) ;

/// @brief Method IntegerIncrement, addr 0x19095dc, size 0xe4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* IntegerIncrement(int64_t  byValue) ;

static inline ::Firebase::Firestore::FieldValueProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method Null, addr 0x1909348, size 0xdc, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Null() ;

/// @brief Method Reference, addr 0x190879c, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Reference(::Firebase::Firestore::DocumentReferenceProxy*  value) ;

/// @brief Method ServerTimestamp, addr 0x1909500, size 0xdc, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ServerTimestamp() ;

/// @brief Method String, addr 0x19085b0, size 0xe4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* String(::StringW  value) ;

/// @brief Method Timestamp, addr 0x1908474, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Timestamp(::Firebase::Firestore::TimestampProxy*  value) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18fdc7c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method blob_size, addr 0x1908ffc, size 0x90, virtual false, abstract: false, final false
inline uint32_t blob_size() ;

/// @brief Method blob_value, addr 0x1908f08, size 0xf4, virtual false, abstract: false, final false
inline ::Firebase::Firestore::SWIGTYPE_p_unsigned_char* blob_value() ;

/// @brief Method boolean_value, addr 0x1908b80, size 0x90, virtual false, abstract: false, final false
inline bool boolean_value() ;

/// @brief Method double_value, addr 0x1908ca0, size 0x98, virtual false, abstract: false, final false
inline double_t double_value() ;

/// @brief Method geo_point_value, addr 0x1909178, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::GeoPointProxy* geo_point_value() ;

/// @brief Method getCPtr, addr 0x18fd9b0, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::FieldValueProxy*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method integer_value, addr 0x1908c10, size 0x90, virtual false, abstract: false, final false
inline int64_t integer_value() ;

/// @brief Method is_map, addr 0x1908af0, size 0x90, virtual false, abstract: false, final false
inline bool is_map() ;

/// @brief Method is_null, addr 0x1908a60, size 0x90, virtual false, abstract: false, final false
inline bool is_null() ;

/// @brief Method is_valid, addr 0x19092b8, size 0x90, virtual false, abstract: false, final false
inline bool is_valid() ;

/// @brief Method reference_value, addr 0x190908c, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReferenceProxy* reference_value() ;

/// @brief Method string_value, addr 0x1908e78, size 0x90, virtual false, abstract: false, final false
inline ::StringW string_value() ;

/// @brief Method timestamp_value, addr 0x1908d38, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::TimestampProxy* timestamp_value() ;

/// @brief Method type, addr 0x19089d0, size 0x90, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy_Type type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldValueProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldValueProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldValueProxy(FieldValueProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldValueProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldValueProxy(FieldValueProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11112};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FieldValueProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FieldValueProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FieldValueProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldValueProxy_Type, "Firebase.Firestore", "FieldValueProxy/Type");
NEED_NO_BOX(::Firebase::Firestore::FieldValueProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldValueProxy*, "Firebase.Firestore", "FieldValueProxy");
