#pragma once
// IWYU pragma private; include "VROSC/WaveminOctaveControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaveminOctaveControl)
namespace VROSC {
class IntNode;
}
// Forward declare root types
namespace VROSC {
class WaveminOctaveControl;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WaveminOctaveControl);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaveminOctaveControl
class CORDL_TYPE WaveminOctaveControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastNoteValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastNoteValue, put=__cordl_internal_set__lastNoteValue)) int32_t  _lastNoteValue;

/// @brief Field _lastOctaveValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastOctaveValue, put=__cordl_internal_set__lastOctaveValue)) int32_t  _lastOctaveValue;

/// @brief Field _note, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::UnityW<::VROSC::IntNode>  _note;

/// @brief Field _octave, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__octave, put=__cordl_internal_set__octave)) ::UnityW<::VROSC::IntNode>  _octave;

/// @brief Method Awake, addr 0x1796128, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::WaveminOctaveControl* New_ctor() ;

/// @brief Method NoteChanged, addr 0x179644c, size 0x8, virtual false, abstract: false, final false
inline void NoteChanged(int32_t  note) ;

/// @brief Method OctaveChanged, addr 0x1796408, size 0x44, virtual false, abstract: false, final false
inline void OctaveChanged(int32_t  octave) ;

/// @brief Method OnDestroy, addr 0x17962a4, size 0x164, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr int32_t const& __cordl_internal_get__lastNoteValue() const;

constexpr int32_t& __cordl_internal_get__lastNoteValue() ;

constexpr int32_t const& __cordl_internal_get__lastOctaveValue() const;

constexpr int32_t& __cordl_internal_get__lastOctaveValue() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__note() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__note() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__octave() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__octave() ;

constexpr void __cordl_internal_set__lastNoteValue(int32_t  value) ;

constexpr void __cordl_internal_set__lastOctaveValue(int32_t  value) ;

constexpr void __cordl_internal_set__note(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__octave(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x1796454, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveminOctaveControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveminOctaveControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveminOctaveControl(WaveminOctaveControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveminOctaveControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveminOctaveControl(WaveminOctaveControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1349};

/// @brief Field _octave, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____octave;

/// @brief Field _note, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____note;

/// @brief Field _lastNoteValue, offset: 0x30, size: 0x4, def value: None
 int32_t  ____lastNoteValue;

/// @brief Field _lastOctaveValue, offset: 0x34, size: 0x4, def value: None
 int32_t  ____lastOctaveValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveminOctaveControl, ____octave) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveminOctaveControl, ____note) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveminOctaveControl, ____lastNoteValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveminOctaveControl, ____lastOctaveValue) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveminOctaveControl, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WaveminOctaveControl);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveminOctaveControl*, "VROSC", "WaveminOctaveControl");
