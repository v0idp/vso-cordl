#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchViewerUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithCowatchViewerUpdate)
namespace Oculus::Platform::Models {
class CowatchViewerUpdate;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCowatchViewerUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCowatchViewerUpdate);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithCowatchViewerUpdate
class CORDL_TYPE MessageWithCowatchViewerUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CowatchViewerUpdate*> {
public:
// Declarations
/// @brief Method GetCowatchViewerUpdate, addr 0x2870cf0, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::CowatchViewerUpdate* GetCowatchViewerUpdate() ;

/// @brief Method GetDataFromMessage, addr 0x2870d2c, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::CowatchViewerUpdate* GetDataFromMessage(::System::IntPtr  c_message) ;

static inline ::Oculus::Platform::MessageWithCowatchViewerUpdate* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x286d764, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithCowatchViewerUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchViewerUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithCowatchViewerUpdate(MessageWithCowatchViewerUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchViewerUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithCowatchViewerUpdate(MessageWithCowatchViewerUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCowatchViewerUpdate, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCowatchViewerUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCowatchViewerUpdate*, "Oculus.Platform", "MessageWithCowatchViewerUpdate");
