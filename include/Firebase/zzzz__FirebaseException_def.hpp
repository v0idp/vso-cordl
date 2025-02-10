#pragma once
// IWYU pragma private; include "Firebase/FirebaseException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirebaseException)
// Forward declare root types
namespace Firebase {
class FirebaseException;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::FirebaseException);
// Dependencies System.Exception
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FirebaseException
class CORDL_TYPE FirebaseException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_ErrorCode, put=set_ErrorCode)) int32_t  ErrorCode;

/// @brief Field <ErrorCode>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ErrorCode_k__BackingField, put=__cordl_internal_set__ErrorCode_k__BackingField)) int32_t  _ErrorCode_k__BackingField;

static inline ::Firebase::FirebaseException* New_ctor(int32_t  errorCode, ::StringW  message) ;

constexpr int32_t const& __cordl_internal_get__ErrorCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ErrorCode_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorCode_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x18f4b50, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  errorCode, ::StringW  message) ;

/// @brief Method get_ErrorCode, addr 0x18f6bd8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ErrorCode() ;

/// @brief Method set_ErrorCode, addr 0x18f6be0, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorCode(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseException(FirebaseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseException(FirebaseException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11842};

/// @brief Field <ErrorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____ErrorCode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FirebaseException, ____ErrorCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FirebaseException, 0x90>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::FirebaseException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseException*, "Firebase", "FirebaseException");
