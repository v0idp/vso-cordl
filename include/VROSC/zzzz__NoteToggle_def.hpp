#pragma once
// IWYU pragma private; include "VROSC/NoteToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntChanger_def.hpp"
CORDL_MODULE_EXPORT(NoteToggle)
namespace VROSC {
class NoteNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class NoteToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteToggle);
// Dependencies VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteToggle
class CORDL_TYPE NoteToggle : public ::VROSC::IntChanger {
public:
// Declarations
/// @brief Field _note, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::UnityW<::VROSC::NoteNode>  _note;

static inline ::VROSC::NoteToggle* New_ctor() ;

/// @brief Method SetValueBySignal, addr 0x171ad9c, size 0x104, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::VROSC::NoteNode> const& __cordl_internal_get__note() const;

constexpr ::UnityW<::VROSC::NoteNode>& __cordl_internal_get__note() ;

constexpr void __cordl_internal_set__note(::UnityW<::VROSC::NoteNode>  value) ;

/// @brief Method .ctor, addr 0x171aea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteToggle(NoteToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteToggle(NoteToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{937};

/// @brief Field _note, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteNode>  ____note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteToggle, ____note) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteToggle, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteToggle*, "VROSC", "NoteToggle");
