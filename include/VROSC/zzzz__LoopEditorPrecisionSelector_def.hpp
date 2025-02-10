#pragma once
// IWYU pragma private; include "VROSC/LoopEditorPrecisionSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorPrecisionSelector)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class ToggleWithValue;
}
// Forward declare root types
namespace VROSC {
class LoopEditorPrecisionSelector;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorPrecisionSelector);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorPrecisionSelector
class CORDL_TYPE LoopEditorPrecisionSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BeatsAdjustedPrecision)) float_t  BeatsAdjustedPrecision;

/// @brief Field OnPrecisionUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPrecisionUpdated, put=__cordl_internal_set_OnPrecisionUpdated)) ::System::Action_1<float_t>*  OnPrecisionUpdated;

 __declspec(property(get=get_Precision, put=set_Precision)) float_t  Precision;

/// @brief Field <Precision>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Precision_k__BackingField, put=__cordl_internal_set__Precision_k__BackingField)) float_t  _Precision_k__BackingField;

/// @brief Field _currentToggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentToggle, put=__cordl_internal_set__currentToggle)) ::VROSC::ToggleWithValue*  _currentToggle;

/// @brief Field _multiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__multiplier, put=__cordl_internal_set__multiplier)) int32_t  _multiplier;

/// @brief Field _selectedToggleIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedToggleIndex, put=__cordl_internal_set__selectedToggleIndex)) int32_t  _selectedToggleIndex;

/// @brief Field _startingToggleIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingToggleIndex, put=__cordl_internal_set__startingToggleIndex)) int32_t  _startingToggleIndex;

/// @brief Field _toggles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggles, put=__cordl_internal_set__toggles)) ::ArrayW<::VROSC::ToggleWithValue*,::Array<::VROSC::ToggleWithValue*>*>  _toggles;

/// @brief Method Awake, addr 0x18924e8, size 0x14c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableUselessPrecisions, addr 0x18929b0, size 0x80, virtual false, abstract: false, final false
inline void DisableUselessPrecisions(float_t  loopLengthInBars) ;

/// @brief Method GetRoundedValue, addr 0x1892798, size 0x198, virtual false, abstract: false, final false
inline float_t GetRoundedValue(float_t  rawValue, bool  useBeatAdjustedPrecision) ;

static inline ::VROSC::LoopEditorPrecisionSelector* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1892634, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetUI, addr 0x1892930, size 0x80, virtual false, abstract: false, final false
inline void ResetUI() ;

/// @brief Method SetSelectedPrecision, addr 0x1892a30, size 0x40, virtual false, abstract: false, final false
inline void SetSelectedPrecision(int32_t  index) ;

/// @brief Method ToggleSelected, addr 0x1892694, size 0x104, virtual false, abstract: false, final false
inline void ToggleSelected(::VROSC::ToggleWithValue*  toggle) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnPrecisionUpdated() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnPrecisionUpdated() ;

constexpr float_t const& __cordl_internal_get__Precision_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Precision_k__BackingField() ;

constexpr ::VROSC::ToggleWithValue* const& __cordl_internal_get__currentToggle() const;

constexpr ::VROSC::ToggleWithValue*& __cordl_internal_get__currentToggle() ;

constexpr int32_t const& __cordl_internal_get__multiplier() const;

constexpr int32_t& __cordl_internal_get__multiplier() ;

constexpr int32_t const& __cordl_internal_get__selectedToggleIndex() const;

constexpr int32_t& __cordl_internal_get__selectedToggleIndex() ;

constexpr int32_t const& __cordl_internal_get__startingToggleIndex() const;

constexpr int32_t& __cordl_internal_get__startingToggleIndex() ;

constexpr ::ArrayW<::VROSC::ToggleWithValue*,::Array<::VROSC::ToggleWithValue*>*> const& __cordl_internal_get__toggles() const;

constexpr ::ArrayW<::VROSC::ToggleWithValue*,::Array<::VROSC::ToggleWithValue*>*>& __cordl_internal_get__toggles() ;

constexpr void __cordl_internal_set_OnPrecisionUpdated(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__Precision_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__currentToggle(::VROSC::ToggleWithValue*  value) ;

constexpr void __cordl_internal_set__multiplier(int32_t  value) ;

constexpr void __cordl_internal_set__selectedToggleIndex(int32_t  value) ;

constexpr void __cordl_internal_set__startingToggleIndex(int32_t  value) ;

constexpr void __cordl_internal_set__toggles(::ArrayW<::VROSC::ToggleWithValue*,::Array<::VROSC::ToggleWithValue*>*>  value) ;

/// @brief Method .ctor, addr 0x1892a70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BeatsAdjustedPrecision, addr 0x189247c, size 0x6c, virtual false, abstract: false, final false
inline float_t get_BeatsAdjustedPrecision() ;

/// @brief Method get_Precision, addr 0x1892474, size 0x8, virtual false, abstract: false, final false
inline float_t get_Precision() ;

/// @brief Method set_Precision, addr 0x189246c, size 0x8, virtual false, abstract: false, final false
inline void set_Precision(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorPrecisionSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPrecisionSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorPrecisionSelector(LoopEditorPrecisionSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPrecisionSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorPrecisionSelector(LoopEditorPrecisionSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{640};

/// @brief Field <Precision>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____Precision_k__BackingField;

/// @brief Field OnPrecisionUpdated, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnPrecisionUpdated;

/// @brief Field _toggles, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::ToggleWithValue*,::Array<::VROSC::ToggleWithValue*>*>  ____toggles;

/// @brief Field _multiplier, offset: 0x38, size: 0x4, def value: None
 int32_t  ____multiplier;

/// @brief Field _currentToggle, offset: 0x40, size: 0x8, def value: None
 ::VROSC::ToggleWithValue*  ____currentToggle;

/// @brief Field _startingToggleIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____startingToggleIndex;

/// @brief Field _selectedToggleIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____selectedToggleIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____Precision_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ___OnPrecisionUpdated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____toggles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____multiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____currentToggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____startingToggleIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPrecisionSelector, ____selectedToggleIndex) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorPrecisionSelector, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorPrecisionSelector);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorPrecisionSelector*, "VROSC", "LoopEditorPrecisionSelector");
