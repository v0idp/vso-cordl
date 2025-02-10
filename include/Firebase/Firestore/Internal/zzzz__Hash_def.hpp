#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Hash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Hash)
// Forward declare root types
namespace Firebase::Firestore::Internal {
class Hash;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Internal::Hash);
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Hash
class CORDL_TYPE Hash : public ::System::Object {
public:
// Declarations
/// @brief Method DoubleBitwiseHash, addr 0x190e018, size 0x10, virtual false, abstract: false, final false
static inline int32_t DoubleBitwiseHash(double_t  d) ;

/// @brief Method LongHash, addr 0x190e00c, size 0xc, virtual false, abstract: false, final false
static inline int32_t LongHash(int64_t  l) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Hash(Hash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hash(Hash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Internal::Hash, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Internal
NEED_NO_BOX(::Firebase::Firestore::Internal::Hash);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::Hash*, "Firebase.Firestore.Internal", "Hash");
