#pragma once
// IWYU pragma private; include "VROSC/QuantizeUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QuantizeUI)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class TempoSyncDisplay;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class QuantizeUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::QuantizeUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.QuantizeUI
class CORDL_TYPE QuantizeUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hasStartedBeatCounter, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasStartedBeatCounter, put=__cordl_internal_set__hasStartedBeatCounter)) bool  _hasStartedBeatCounter;

/// @brief Field _instrument, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::InstrumentController>  _instrument;

/// @brief Field _quantize, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__quantize, put=__cordl_internal_set__quantize)) ::UnityW<::VROSC::UISpinner>  _quantize;

/// @brief Field _quantizeLateHits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__quantizeLateHits, put=__cordl_internal_set__quantizeLateHits)) ::UnityW<::VROSC::UISlideToggle>  _quantizeLateHits;

/// @brief Field _quantizeMap, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__quantizeMap, put=__cordl_internal_set__quantizeMap)) ::ArrayW<int32_t,::Array<int32_t>*>  _quantizeMap;

/// @brief Field _quantizeSelectionValues, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__quantizeSelectionValues, put=__cordl_internal_set__quantizeSelectionValues)) ::System::Collections::Generic::List_1<::StringW>*  _quantizeSelectionValues;

/// @brief Field _setQuantization, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__setQuantization, put=__cordl_internal_set__setQuantization)) int32_t  _setQuantization;

/// @brief Field _setupDone, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _tempoSyncDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempoSyncDisplay, put=__cordl_internal_set__tempoSyncDisplay)) ::UnityW<::VROSC::TempoSyncDisplay>  _tempoSyncDisplay;

/// @brief Method ApplyInstrumentQuantizeValues, addr 0x17834bc, size 0xe8, virtual false, abstract: false, final false
inline void ApplyInstrumentQuantizeValues() ;

/// @brief Method ChangeQuantizeLateHits, addr 0x17837ac, size 0x2c, virtual false, abstract: false, final false
inline void ChangeQuantizeLateHits(::VROSC::InputDevice*  inputDevice, bool  quantizeLateHits) ;

/// @brief Method CheckIfQuantizationCanBeSet, addr 0x17836a0, size 0x20, virtual false, abstract: false, final false
inline void CheckIfQuantizationCanBeSet(double_t  BPM) ;

static inline ::VROSC::QuantizeUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17835a8, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x17835a4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method QuantizeSelectionChanged, addr 0x17837d8, size 0x120, virtual false, abstract: false, final false
inline void QuantizeSelectionChanged(int32_t  selection) ;

/// @brief Method SetQuantize, addr 0x17836c0, size 0xec, virtual false, abstract: false, final false
inline void SetQuantize(int32_t  quantize) ;

/// @brief Method Setup, addr 0x1782c64, size 0x378, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrument) ;

/// @brief Method ShouldDisableBeatCounter, addr 0x17838f8, size 0xb0, virtual false, abstract: false, final false
inline bool ShouldDisableBeatCounter() ;

constexpr bool const& __cordl_internal_get__hasStartedBeatCounter() const;

constexpr bool& __cordl_internal_get__hasStartedBeatCounter() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrument() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__quantize() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__quantize() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__quantizeLateHits() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__quantizeLateHits() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__quantizeMap() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__quantizeMap() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__quantizeSelectionValues() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__quantizeSelectionValues() ;

constexpr int32_t const& __cordl_internal_get__setQuantization() const;

constexpr int32_t& __cordl_internal_get__setQuantization() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr ::UnityW<::VROSC::TempoSyncDisplay> const& __cordl_internal_get__tempoSyncDisplay() const;

constexpr ::UnityW<::VROSC::TempoSyncDisplay>& __cordl_internal_get__tempoSyncDisplay() ;

constexpr void __cordl_internal_set__hasStartedBeatCounter(bool  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__quantize(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__quantizeLateHits(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__quantizeMap(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__quantizeSelectionValues(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__setQuantization(int32_t  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__tempoSyncDisplay(::UnityW<::VROSC::TempoSyncDisplay>  value) ;

/// @brief Method .ctor, addr 0x1783a28, size 0x3a0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuantizeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuantizeUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuantizeUI(QuantizeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuantizeUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuantizeUI(QuantizeUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1311};

/// @brief Field _quantize, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____quantize;

/// @brief Field _quantizeLateHits, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____quantizeLateHits;

/// @brief Field _tempoSyncDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TempoSyncDisplay>  ____tempoSyncDisplay;

/// @brief Field _instrument, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrument;

/// @brief Field _setQuantization, offset: 0x40, size: 0x4, def value: None
 int32_t  ____setQuantization;

/// @brief Field _setupDone, offset: 0x44, size: 0x1, def value: None
 bool  ____setupDone;

/// @brief Field _quantizeSelectionValues, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____quantizeSelectionValues;

/// @brief Field _quantizeMap, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____quantizeMap;

/// @brief Field _hasStartedBeatCounter, offset: 0x58, size: 0x1, def value: None
 bool  ____hasStartedBeatCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::QuantizeUI, ____quantize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____quantizeLateHits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____tempoSyncDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____instrument) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____setQuantization) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____setupDone) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____quantizeSelectionValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____quantizeMap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::QuantizeUI, ____hasStartedBeatCounter) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::QuantizeUI, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::QuantizeUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::QuantizeUI*, "VROSC", "QuantizeUI");
