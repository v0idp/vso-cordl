#pragma once
// IWYU pragma private; include "Firebase/Firestore/Blob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Blob)
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
struct Blob;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::Blob);
// Dependencies System.IEquatable`1<T>
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.Blob
struct CORDL_TYPE Blob {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::Blob>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::Blob>*() ;

/// @brief Method CopyFrom, addr 0x1910be8, size 0x28, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Blob CopyFrom(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method Equals, addr 0x191ddcc, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191de44, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::Blob  other) ;

/// @brief Method GetHashCode, addr 0x191dee4, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToBytes, addr 0x1910b04, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToBytes() ;

/// @brief Method ToString, addr 0x191df40, size 0x1c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x191dd0c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method get_Length, addr 0x191ddb0, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::Blob>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::Blob>* i___System__IEquatable_1___Firebase__Firestore__Blob_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Blob() ;

// Ctor Parameters [CppParam { name: "_bytes", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Blob(::ArrayW<uint8_t,::Array<uint8_t>*>  _bytes, int32_t  _hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _bytes, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  _bytes;

/// @brief Field _hash, offset: 0x8, size: 0x4, def value: None
 int32_t  _hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Blob, _bytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Blob, _hash) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Blob, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Blob, "Firebase.Firestore", "Blob");
