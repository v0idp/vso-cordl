#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/EnvironmentVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentVersion)
namespace System {
class Version;
}
// Forward declare root types
namespace Firebase::Firestore::Internal {
class EnvironmentVersion;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Internal::EnvironmentVersion);
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// Is value type: false
// CS Name: Firebase.Firestore.Internal.EnvironmentVersion
class CORDL_TYPE EnvironmentVersion : public ::System::Object {
public:
// Declarations
/// @brief Method FormatVersion, addr 0x190e114, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW FormatVersion(::System::Version*  version) ;

/// @brief Method GetEnvironmentVersion, addr 0x190e0c4, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetEnvironmentVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentVersion(EnvironmentVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentVersion(EnvironmentVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Internal::EnvironmentVersion, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Internal
NEED_NO_BOX(::Firebase::Firestore::Internal::EnvironmentVersion);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::EnvironmentVersion*, "Firebase.Firestore.Internal", "EnvironmentVersion");
