#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IAnalyticsForgetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAnalyticsForgetter)
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IAnalyticsForgetter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IAnalyticsForgetter);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IAnalyticsForgetter
class CORDL_TYPE IAnalyticsForgetter {
public:
// Declarations
 __declspec(property(get=get_DeletionInProgress)) bool  DeletionInProgress;

/// @brief Method AttemptToForget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AttemptToForget(::StringW  userId, ::StringW  installationId, ::StringW  playerId, ::StringW  timestamp, ::StringW  callingMethod, ::System::Action*  successfulUploadCallback) ;

/// @brief Method get_DeletionInProgress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_DeletionInProgress() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsForgetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalyticsForgetter(IAnalyticsForgetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IAnalyticsForgetter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IAnalyticsForgetter*, "Unity.Services.Analytics.Internal", "IAnalyticsForgetter");
