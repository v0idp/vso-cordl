#pragma once
// IWYU pragma private; include "VROSC/ScalePresets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScalePresets)
namespace VROSC {
class ScalePreset;
}
// Forward declare root types
namespace VROSC {
class ScalePresets;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScalePresets);
// Dependencies UnityEngine.ScriptableObject, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScalePresets
class CORDL_TYPE ScalePresets : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field Presets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Presets, put=__cordl_internal_set_Presets)) ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>  Presets;

/// @brief Field SelectedScaleIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedScaleIndex, put=__cordl_internal_set_SelectedScaleIndex)) int32_t  SelectedScaleIndex;

/// @brief Field SelectedStartNote, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedStartNote, put=__cordl_internal_set_SelectedStartNote)) ::VROSC::Note  SelectedStartNote;

static inline ::VROSC::ScalePresets* New_ctor() ;

/// @brief Method OnValidate, addr 0x16f77a4, size 0x5c, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*> const& __cordl_internal_get_Presets() const;

constexpr ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>& __cordl_internal_get_Presets() ;

constexpr int32_t const& __cordl_internal_get_SelectedScaleIndex() const;

constexpr int32_t& __cordl_internal_get_SelectedScaleIndex() ;

constexpr ::VROSC::Note const& __cordl_internal_get_SelectedStartNote() const;

constexpr ::VROSC::Note& __cordl_internal_get_SelectedStartNote() ;

constexpr void __cordl_internal_set_Presets(::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>  value) ;

constexpr void __cordl_internal_set_SelectedScaleIndex(int32_t  value) ;

constexpr void __cordl_internal_set_SelectedStartNote(::VROSC::Note  value) ;

/// @brief Method .ctor, addr 0x16f7800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePresets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePresets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePresets(ScalePresets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePresets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePresets(ScalePresets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{794};

/// @brief Field SelectedScaleIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___SelectedScaleIndex;

/// @brief Field SelectedStartNote, offset: 0x1c, size: 0x4, def value: None
 ::VROSC::Note  ___SelectedStartNote;

/// @brief Field Presets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::ScalePreset*,::Array<::VROSC::ScalePreset*>*>  ___Presets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScalePresets, ___SelectedScaleIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePresets, ___SelectedStartNote) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePresets, ___Presets) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScalePresets, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScalePresets);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePresets*, "VROSC", "ScalePresets");
