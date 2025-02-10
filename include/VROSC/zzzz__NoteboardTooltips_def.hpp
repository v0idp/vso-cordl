#pragma once
// IWYU pragma private; include "VROSC/NoteboardTooltips.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteboardTooltips)
namespace VROSC {
class NoteBoardNoteController;
}
// Forward declare root types
namespace VROSC {
class NoteboardTooltips;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteboardTooltips);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteboardTooltips
class CORDL_TYPE NoteboardTooltips : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _noteboardController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteboardController, put=__cordl_internal_set__noteboardController)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteboardController;

/// @brief Field _xAxis, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__xAxis, put=__cordl_internal_set__xAxis)) bool  _xAxis;

/// @brief Field _yAxis, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) bool  _yAxis;

/// @brief Field _zAxis, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__zAxis, put=__cordl_internal_set__zAxis)) bool  _zAxis;

static inline ::VROSC::NoteboardTooltips* New_ctor() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteboardController() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteboardController() ;

constexpr bool const& __cordl_internal_get__xAxis() const;

constexpr bool& __cordl_internal_get__xAxis() ;

constexpr bool const& __cordl_internal_get__yAxis() const;

constexpr bool& __cordl_internal_get__yAxis() ;

constexpr bool const& __cordl_internal_get__zAxis() const;

constexpr bool& __cordl_internal_get__zAxis() ;

constexpr void __cordl_internal_set__noteboardController(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__xAxis(bool  value) ;

constexpr void __cordl_internal_set__yAxis(bool  value) ;

constexpr void __cordl_internal_set__zAxis(bool  value) ;

/// @brief Method .ctor, addr 0x1735b38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteboardTooltips() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteboardTooltips", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteboardTooltips(NoteboardTooltips && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteboardTooltips", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteboardTooltips(NoteboardTooltips const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1080};

/// @brief Field _noteboardController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteboardController;

/// @brief Field _xAxis, offset: 0x28, size: 0x1, def value: None
 bool  ____xAxis;

/// @brief Field _yAxis, offset: 0x29, size: 0x1, def value: None
 bool  ____yAxis;

/// @brief Field _zAxis, offset: 0x2a, size: 0x1, def value: None
 bool  ____zAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteboardTooltips, ____noteboardController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteboardTooltips, ____xAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteboardTooltips, ____yAxis) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteboardTooltips, ____zAxis) == 0x2a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteboardTooltips, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteboardTooltips);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteboardTooltips*, "VROSC", "NoteboardTooltips");
