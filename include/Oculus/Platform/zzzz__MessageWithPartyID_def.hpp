#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPartyID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPartyID)
namespace Oculus::Platform::Models {
class PartyID;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyID;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPartyID);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPartyID
class CORDL_TYPE MessageWithPartyID : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyID*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x28728e4, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PartyID* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetPartyID, addr 0x28728a8, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PartyID* GetPartyID() ;

static inline ::Oculus::Platform::MessageWithPartyID* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x2872850, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithPartyID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithPartyID(MessageWithPartyID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithPartyID(MessageWithPartyID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPartyID, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPartyID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPartyID*, "Oculus.Platform", "MessageWithPartyID");
