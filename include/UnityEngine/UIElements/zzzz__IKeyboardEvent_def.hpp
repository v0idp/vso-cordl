#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IKeyboardEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyboardEvent)
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IKeyboardEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IKeyboardEvent);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IKeyboardEvent
class CORDL_TYPE IKeyboardEvent {
public:
// Declarations
 __declspec(property(get=get_character)) char16_t  character;

 __declspec(property(get=get_keyCode)) ::UnityEngine::KeyCode  keyCode;

 __declspec(property(get=get_modifiers)) ::UnityEngine::EventModifiers  modifiers;

/// @brief Method get_character, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline char16_t get_character() ;

/// @brief Method get_keyCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_modifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::EventModifiers get_modifiers() ;

// Ctor Parameters [CppParam { name: "", ty: "IKeyboardEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKeyboardEvent(IKeyboardEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IKeyboardEvent*, "UnityEngine.UIElements", "IKeyboardEvent");
