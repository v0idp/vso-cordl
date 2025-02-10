#pragma once
// IWYU pragma private; include "VROSC/NoteNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntNode_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteNode)
namespace VROSC {
struct Note;
}
// Forward declare root types
namespace VROSC {
class NoteNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteNode);
// Dependencies VROSC.IntNode, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteNode
class CORDL_TYPE NoteNode : public ::VROSC::IntNode {
public:
// Declarations
 __declspec(property(get=get_Note, put=set_Note)) ::VROSC::Note  Note;

/// @brief Field _note, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::VROSC::Note  _note;

static inline ::VROSC::NoteNode* New_ctor() ;

/// @brief Method OnValidate, addr 0x171ad50, size 0x24, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetValueInRange, addr 0x171ad74, size 0x18, virtual true, abstract: false, final false
inline int32_t SetValueInRange(int32_t  value) ;

constexpr ::VROSC::Note const& __cordl_internal_get__note() const;

constexpr ::VROSC::Note& __cordl_internal_get__note() ;

constexpr void __cordl_internal_set__note(::VROSC::Note  value) ;

/// @brief Method .ctor, addr 0x171ad8c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Note, addr 0x171ad3c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Note get_Note() ;

/// @brief Method set_Note, addr 0x171ad44, size 0xc, virtual false, abstract: false, final false
inline void set_Note(::VROSC::Note  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteNode(NoteNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteNode(NoteNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{936};

/// @brief Field _note, offset: 0x38, size: 0x4, def value: None
 ::VROSC::Note  ____note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteNode, ____note) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteNode, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteNode*, "VROSC", "NoteNode");
