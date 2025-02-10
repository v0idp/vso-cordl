#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAssetFileDownloadResult)
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDownloadResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadResult
class CORDL_TYPE MessageWithAssetFileDownloadResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*> {
public:
// Declarations
/// @brief Method GetAssetFileDownloadResult, addr 0x2870670, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult() ;

/// @brief Method GetDataFromMessage, addr 0x28706ac, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetDataFromMessage(::System::IntPtr  c_message) ;

static inline ::Oculus::Platform::MessageWithAssetFileDownloadResult* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x286d4a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithAssetFileDownloadResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDownloadResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDownloadResult*, "Oculus.Platform", "MessageWithAssetFileDownloadResult");
