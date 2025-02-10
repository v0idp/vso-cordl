#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchUnblockFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLaunchUnblockFlowResult)
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchUnblockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchUnblockFlowResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLaunchUnblockFlowResult
class CORDL_TYPE MessageWithLaunchUnblockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x28717fc, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetLaunchUnblockFlowResult, addr 0x28717c0, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult() ;

static inline ::Oculus::Platform::MessageWithLaunchUnblockFlowResult* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x286db2c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithLaunchUnblockFlowResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchUnblockFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchUnblockFlowResult*, "Oculus.Platform", "MessageWithLaunchUnblockFlowResult");
