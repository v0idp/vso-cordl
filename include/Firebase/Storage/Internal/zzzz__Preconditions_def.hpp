#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/Preconditions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Preconditions)
// Forward declare root types
namespace Firebase::Storage::Internal {
class Preconditions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::Internal::Preconditions);
// Dependencies System.Object
namespace Firebase::Storage::Internal {
// Is value type: false
// CS Name: Firebase.Storage.Internal.Preconditions
class CORDL_TYPE Preconditions : public ::System::Object {
public:
// Declarations
/// @brief Method CheckArgument, addr 0x192a388, size 0x4c, virtual false, abstract: false, final false
static inline void CheckArgument(bool  expression, ::StringW  errorMessage) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Preconditions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Preconditions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Preconditions(Preconditions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Preconditions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Preconditions(Preconditions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11710};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::Internal::Preconditions, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Storage::Internal
NEED_NO_BOX(::Firebase::Storage::Internal::Preconditions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::Internal::Preconditions*, "Firebase.Storage.Internal", "Preconditions");
