#pragma once
// IWYU pragma private; include "VROSC/FBDebug/DebugMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugMessage)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace VROSC::FBDebug {
class DebugMessage;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FBDebug::DebugMessage);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::FBDebug {
// Is value type: false
// CS Name: VROSC.FBDebug.DebugMessage
class CORDL_TYPE DebugMessage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _message, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__message, put=setStaticF__message)) ::StringW  _message;

/// @brief Field _messageText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageText, put=__cordl_internal_set__messageText)) ::UnityW<::TMPro::TextMeshProUGUI>  _messageText;

/// @brief Method AddMessage, addr 0x17de7d4, size 0x11c, virtual false, abstract: false, final false
static inline void AddMessage(::StringW  message, bool  clear) ;

/// @brief Method Awake, addr 0x17de700, size 0x5c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::FBDebug::DebugMessage* New_ctor() ;

/// @brief Method Update, addr 0x17de75c, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__messageText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__messageText() ;

constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x17de8f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__message() ;

static inline void setStaticF__message(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugMessage(DebugMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugMessage(DebugMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1589};

/// @brief Field _messageText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____messageText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FBDebug::DebugMessage, ____messageText) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FBDebug::DebugMessage, 0x28>, "Size mismatch!");

} // namespace end def VROSC::FBDebug
NEED_NO_BOX(::VROSC::FBDebug::DebugMessage);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FBDebug::DebugMessage*, "VROSC.FBDebug", "DebugMessage");
