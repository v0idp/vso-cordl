#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchInvitePanelFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLaunchInvitePanelFlowResult)
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchInvitePanelFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLaunchInvitePanelFlowResult
class CORDL_TYPE MessageWithLaunchInvitePanelFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x2871604, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetLaunchInvitePanelFlowResult, addr 0x28715c8, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult() ;

static inline ::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x286dad4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithLaunchInvitePanelFlowResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchInvitePanelFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchInvitePanelFlowResult(MessageWithLaunchInvitePanelFlowResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchInvitePanelFlowResult*, "Oculus.Platform", "MessageWithLaunchInvitePanelFlowResult");
