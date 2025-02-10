#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IConsentTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConsentTracker)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IConsentTracker;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IConsentTracker);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IConsentTracker
class CORDL_TYPE IConsentTracker {
public:
// Declarations
/// @brief Method FinishOptOutProcess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FinishOptOutProcess() ;

/// @brief Method IsConsentGiven, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsConsentGiven() ;

/// @brief Method IsGeoIpChecked, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsGeoIpChecked() ;

/// @brief Method IsOptingOutInProgress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsOptingOutInProgress() ;

// Ctor Parameters [CppParam { name: "", ty: "IConsentTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConsentTracker(IConsentTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IConsentTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IConsentTracker*, "Unity.Services.Analytics.Internal", "IConsentTracker");
