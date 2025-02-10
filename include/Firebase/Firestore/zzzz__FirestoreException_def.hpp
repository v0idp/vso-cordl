#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/zzzz__FirestoreError_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirestoreException)
namespace Firebase::Firestore {
struct FirestoreError;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirestoreException;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreException);
// Dependencies Firebase.Firestore.FirestoreError, System.Exception
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreException
class CORDL_TYPE FirestoreException : public ::System::Exception {
public:
// Declarations
 __declspec(property(put=set_ErrorCode)) ::Firebase::Firestore::FirestoreError  ErrorCode;

/// @brief Field <ErrorCode>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ErrorCode_k__BackingField, put=__cordl_internal_set__ErrorCode_k__BackingField)) ::Firebase::Firestore::FirestoreError  _ErrorCode_k__BackingField;

static inline ::Firebase::Firestore::FirestoreException* New_ctor(::Firebase::Firestore::FirestoreError  errorCode, ::StringW  message) ;

static inline ::Firebase::Firestore::FirestoreException* New_ctor(int32_t  errorCode, ::StringW  message) ;

constexpr ::Firebase::Firestore::FirestoreError const& __cordl_internal_get__ErrorCode_k__BackingField() const;

constexpr ::Firebase::Firestore::FirestoreError& __cordl_internal_get__ErrorCode_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorCode_k__BackingField(::Firebase::Firestore::FirestoreError  value) ;

/// @brief Method .ctor, addr 0x1903e2c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirestoreError  errorCode, ::StringW  message) ;

/// @brief Method .ctor, addr 0x190b8c4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  errorCode, ::StringW  message) ;

/// @brief Method set_ErrorCode, addr 0x191a460, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorCode(::Firebase::Firestore::FirestoreError  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreException(FirestoreException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreException(FirestoreException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11205};

/// @brief Field <ErrorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::Firebase::Firestore::FirestoreError  ____ErrorCode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirestoreException, ____ErrorCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreException, 0x90>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestoreException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreException*, "Firebase.Firestore", "FirestoreException");
