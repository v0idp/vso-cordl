#pragma once
// IWYU pragma private; include "VROSC/PlayBehaviourNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntNode_def.hpp"
#include "VROSC/zzzz__NoteBoardPlayer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayBehaviourNode)
namespace VROSC {
struct NoteBoardPlayer_PlayBehaviour;
}
// Forward declare root types
namespace VROSC {
class PlayBehaviourNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PlayBehaviourNode);
// Dependencies VROSC.IntNode, VROSC.NoteBoardPlayer::PlayBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlayBehaviourNode
class CORDL_TYPE PlayBehaviourNode : public ::VROSC::IntNode {
public:
// Declarations
 __declspec(property(get=get_PlayBehaviour, put=set_PlayBehaviour)) ::VROSC::NoteBoardPlayer_PlayBehaviour  PlayBehaviour;

/// @brief Field _playBehaviour, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__playBehaviour, put=__cordl_internal_set__playBehaviour)) ::VROSC::NoteBoardPlayer_PlayBehaviour  _playBehaviour;

static inline ::VROSC::PlayBehaviourNode* New_ctor() ;

/// @brief Method OnValidate, addr 0x171af48, size 0x24, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetValueInRange, addr 0x171af6c, size 0x18, virtual true, abstract: false, final false
inline int32_t SetValueInRange(int32_t  value) ;

constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour const& __cordl_internal_get__playBehaviour() const;

constexpr ::VROSC::NoteBoardPlayer_PlayBehaviour& __cordl_internal_get__playBehaviour() ;

constexpr void __cordl_internal_set__playBehaviour(::VROSC::NoteBoardPlayer_PlayBehaviour  value) ;

/// @brief Method .ctor, addr 0x171af84, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayBehaviour, addr 0x171af34, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteBoardPlayer_PlayBehaviour get_PlayBehaviour() ;

/// @brief Method set_PlayBehaviour, addr 0x171af3c, size 0xc, virtual false, abstract: false, final false
inline void set_PlayBehaviour(::VROSC::NoteBoardPlayer_PlayBehaviour  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayBehaviourNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayBehaviourNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayBehaviourNode(PlayBehaviourNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayBehaviourNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayBehaviourNode(PlayBehaviourNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{939};

/// @brief Field _playBehaviour, offset: 0x38, size: 0x4, def value: None
 ::VROSC::NoteBoardPlayer_PlayBehaviour  ____playBehaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayBehaviourNode, ____playBehaviour) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayBehaviourNode, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PlayBehaviourNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayBehaviourNode*, "VROSC", "PlayBehaviourNode");
