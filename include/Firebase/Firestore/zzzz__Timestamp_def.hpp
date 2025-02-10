#pragma once
// IWYU pragma private; include "Firebase/Firestore/Timestamp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Timestamp)
namespace Firebase::Firestore {
class TimestampProxy;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
struct Timestamp;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::Timestamp);
// Dependencies System.DateTime, System.IComparable, System.IComparable`1<T>, System.IEquatable`1<T>
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.Timestamp
struct CORDL_TYPE Timestamp {
public:
// Declarations
/// @brief Field s_unixEpoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_unixEpoch, put=setStaticF_s_unixEpoch)) ::System::DateTime  s_unixEpoch;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::Firebase::Firestore::Timestamp>"
constexpr operator  ::System::IComparable_1<::Firebase::Firestore::Timestamp>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::Timestamp>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::Timestamp>*() ;

/// @brief Method CompareTo, addr 0x1918a24, size 0x104, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method CompareTo, addr 0x19189d0, size 0x54, virtual true, abstract: false, final true
inline int32_t CompareTo(::Firebase::Firestore::Timestamp  other) ;

/// @brief Method ConvertFromProxy, addr 0x1915574, size 0x50, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Timestamp ConvertFromProxy(::Firebase::Firestore::TimestampProxy*  obj) ;

/// @brief Method ConvertToProxy, addr 0x191042c, size 0x64, virtual false, abstract: false, final false
inline ::Firebase::Firestore::TimestampProxy* ConvertToProxy() ;

/// @brief Method Equals, addr 0x19188d8, size 0xb8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1918990, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::Timestamp  other) ;

/// @brief Method FromDateTime, addr 0x1910e58, size 0xe4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Timestamp FromDateTime(::System::DateTime  dateTime) ;

/// @brief Method FromDateTimeOffset, addr 0x19111d8, size 0x98, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Timestamp FromDateTimeOffset(::System::DateTimeOffset  dateTimeOffset) ;

/// @brief Method GetHashCode, addr 0x19189b4, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToDateTime, addr 0x1910fc4, size 0xd4, virtual false, abstract: false, final false
inline ::System::DateTime ToDateTime() ;

/// @brief Method ToDateTimeOffset, addr 0x19112f8, size 0xb0, virtual false, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset() ;

/// @brief Method ToString, addr 0x1918b28, size 0x2c4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x19187e8, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(int64_t  seconds, int32_t  nanoseconds) ;

static inline ::System::DateTime getStaticF_s_unixEpoch() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::Firebase::Firestore::Timestamp>"
constexpr ::System::IComparable_1<::Firebase::Firestore::Timestamp>* i___System__IComparable_1___Firebase__Firestore__Timestamp_() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::Timestamp>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::Timestamp>* i___System__IEquatable_1___Firebase__Firestore__Timestamp_() ;

static inline void setStaticF_s_unixEpoch(::System::DateTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Timestamp() ;

// Ctor Parameters [CppParam { name: "_seconds", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_nanoseconds", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Timestamp(int64_t  _seconds, int32_t  _nanoseconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _seconds, offset: 0x0, size: 0x8, def value: None
 int64_t  _seconds;

/// @brief Field _nanoseconds, offset: 0x8, size: 0x4, def value: None
 int32_t  _nanoseconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Timestamp, _seconds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Timestamp, _nanoseconds) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Timestamp, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Timestamp, "Firebase.Firestore", "Timestamp");
