#pragma once
// IWYU pragma private; include "VROSC/DrumPadInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(DrumPadInitializer)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class IntNode;
}
namespace VROSC {
class NoteBoard;
}
namespace VROSC {
class NotePlayer;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class DrumPadInitializer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumPadInitializer);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumPadInitializer
class CORDL_TYPE DrumPadInitializer : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _closeButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _noteBoard, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoard, put=__cordl_internal_set__noteBoard)) ::UnityW<::VROSC::NoteBoard>  _noteBoard;

/// @brief Field _noteNode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteNode, put=__cordl_internal_set__noteNode)) ::UnityW<::VROSC::IntNode>  _noteNode;

/// @brief Field _notePlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__notePlayer, put=__cordl_internal_set__notePlayer)) ::UnityW<::VROSC::NotePlayer>  _notePlayer;

/// @brief Method CloseButtonPressed, addr 0x1723114, size 0x6c, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

/// @brief Method GetNoteBoardRecursive, addr 0x1723060, size 0xb4, virtual false, abstract: false, final false
inline void GetNoteBoardRecursive(::UnityEngine::Transform*  t) ;

static inline ::VROSC::DrumPadInitializer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1722ee4, size 0x17c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method OnDestroy, addr 0x1723180, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::VROSC::NoteBoard> const& __cordl_internal_get__noteBoard() const;

constexpr ::UnityW<::VROSC::NoteBoard>& __cordl_internal_get__noteBoard() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__noteNode() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__noteNode() ;

constexpr ::UnityW<::VROSC::NotePlayer> const& __cordl_internal_get__notePlayer() const;

constexpr ::UnityW<::VROSC::NotePlayer>& __cordl_internal_get__notePlayer() ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__noteBoard(::UnityW<::VROSC::NoteBoard>  value) ;

constexpr void __cordl_internal_set__noteNode(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__notePlayer(::UnityW<::VROSC::NotePlayer>  value) ;

/// @brief Method .ctor, addr 0x1723244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumPadInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumPadInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumPadInitializer(DrumPadInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumPadInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumPadInitializer(DrumPadInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1000};

/// @brief Field _noteNode, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____noteNode;

/// @brief Field _notePlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::NotePlayer>  ____notePlayer;

/// @brief Field _closeButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _noteBoard, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoard>  ____noteBoard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumPadInitializer, ____noteNode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadInitializer, ____notePlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadInitializer, ____closeButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadInitializer, ____noteBoard) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumPadInitializer, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumPadInitializer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumPadInitializer*, "VROSC", "DrumPadInitializer");
