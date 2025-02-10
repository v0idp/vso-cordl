#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/Consent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Consent)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class Consent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::Consent);
// Dependencies System.Object
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.Consent
class CORDL_TYPE Consent : public ::System::Object {
public:
// Declarations
/// @brief Method get_Pipl, addr 0x2e9194c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_Pipl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Consent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Consent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Consent(Consent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Consent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Consent(Consent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::Consent, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::Consent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::Consent*, "Unity.Services.Analytics.Internal", "Consent");
