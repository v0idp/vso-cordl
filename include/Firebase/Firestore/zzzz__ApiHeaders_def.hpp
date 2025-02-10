#pragma once
// IWYU pragma private; include "Firebase/Firestore/ApiHeaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ApiHeaders)
// Forward declare root types
namespace Firebase::Firestore {
class ApiHeaders;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ApiHeaders);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ApiHeaders
class CORDL_TYPE ApiHeaders : public ::System::Object {
public:
// Declarations
/// @brief Method SetClientLanguage, addr 0x19056e8, size 0x80, virtual false, abstract: false, final false
static inline void SetClientLanguage(::StringW  languageToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApiHeaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApiHeaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApiHeaders(ApiHeaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApiHeaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApiHeaders(ApiHeaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ApiHeaders, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ApiHeaders);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ApiHeaders*, "Firebase.Firestore", "ApiHeaders");
