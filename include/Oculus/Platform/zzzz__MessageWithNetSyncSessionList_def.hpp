#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncSessionList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithNetSyncSessionList)
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSessionList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSessionList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithNetSyncSessionList
class CORDL_TYPE MessageWithNetSyncSessionList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionList*> {
public:
// Declarations
/// @brief Method GetDataFromMessage, addr 0x28721d4, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionList* GetDataFromMessage(::System::IntPtr  c_message) ;

/// @brief Method GetNetSyncSessionList, addr 0x2872198, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList() ;

static inline ::Oculus::Platform::MessageWithNetSyncSessionList* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x2872140, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithNetSyncSessionList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncSessionList(MessageWithNetSyncSessionList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncSessionList(MessageWithNetSyncSessionList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSessionList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSessionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSessionList*, "Oculus.Platform", "MessageWithNetSyncSessionList");
