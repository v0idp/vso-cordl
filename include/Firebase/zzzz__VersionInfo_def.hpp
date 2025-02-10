#pragma once
// IWYU pragma private; include "Firebase/VersionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionInfo)
// Forward declare root types
namespace Firebase {
class VersionInfo;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::VersionInfo);
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.VersionInfo
class CORDL_TYPE VersionInfo : public ::System::Object {
public:
// Declarations
/// @brief Method get_SdkVersion, addr 0x18f35c4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SdkVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionInfo(VersionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionInfo(VersionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::VersionInfo, 0x10>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::VersionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::VersionInfo*, "Firebase", "VersionInfo");
