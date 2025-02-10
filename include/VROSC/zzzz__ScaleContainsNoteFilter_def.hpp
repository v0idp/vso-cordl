#pragma once
// IWYU pragma private; include "VROSC/ScaleContainsNoteFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
CORDL_MODULE_EXPORT(ScaleContainsNoteFilter)
namespace VROSC {
class NoteField;
}
namespace VROSC {
class ScaleNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ScaleContainsNoteFilter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleContainsNoteFilter);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleContainsNoteFilter
class CORDL_TYPE ScaleContainsNoteFilter : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _note, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::VROSC::NoteField*  _note;

/// @brief Field _scale, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) ::UnityW<::VROSC::ScaleNode>  _scale;

/// @brief Method FilterSignal, addr 0x172199c, size 0x58, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::ScaleContainsNoteFilter* New_ctor() ;

constexpr ::VROSC::NoteField* const& __cordl_internal_get__note() const;

constexpr ::VROSC::NoteField*& __cordl_internal_get__note() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get__scale() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__note(::VROSC::NoteField*  value) ;

constexpr void __cordl_internal_set__scale(::UnityW<::VROSC::ScaleNode>  value) ;

/// @brief Method .ctor, addr 0x17219f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleContainsNoteFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleContainsNoteFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleContainsNoteFilter(ScaleContainsNoteFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleContainsNoteFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleContainsNoteFilter(ScaleContainsNoteFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{989};

/// @brief Field _scale, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ____scale;

/// @brief Field _note, offset: 0x50, size: 0x8, def value: None
 ::VROSC::NoteField*  ____note;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleContainsNoteFilter, ____scale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleContainsNoteFilter, ____note) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleContainsNoteFilter, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleContainsNoteFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleContainsNoteFilter*, "VROSC", "ScaleContainsNoteFilter");
