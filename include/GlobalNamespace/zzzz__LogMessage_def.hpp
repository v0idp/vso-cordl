#pragma once
// IWYU pragma private; include "GlobalNamespace/LogMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LogMessage)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LogMessage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LogMessage);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LogMessage
class CORDL_TYPE LogMessage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _messages, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__messages, put=__cordl_internal_set__messages)) ::UnityW<::TMPro::TextMeshProUGUI>  _messages;

/// @brief Field _text, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__text, put=setStaticF__text)) ::StringW  _text;

/// @brief Method AddMessage, addr 0x16b6c38, size 0x90, virtual false, abstract: false, final false
static inline void AddMessage(::StringW  message) ;

/// @brief Method Awake, addr 0x16b6b70, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LogMessage* New_ctor() ;

/// @brief Method Update, addr 0x16b6bc0, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__messages() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__messages() ;

constexpr void __cordl_internal_set__messages(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x16b6cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__text() ;

static inline void setStaticF__text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogMessage(LogMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogMessage(LogMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2};

/// @brief Field _messages, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____messages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogMessage, ____messages) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LogMessage, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LogMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LogMessage*, "", "LogMessage");
