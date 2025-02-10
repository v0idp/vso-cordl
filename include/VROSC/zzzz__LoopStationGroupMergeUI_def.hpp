#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupMergeUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationGroupMergeUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class UIHoldButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class LoopStationGroupMergeUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationGroupMergeUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationGroupMergeUI
class CORDL_TYPE LoopStationGroupMergeUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__group, put=__cordl_internal_set__group)) ::UnityW<::VROSC::LoopStationGroup>  _group;

/// @brief Field _keepLoopsToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keepLoopsToggle, put=__cordl_internal_set__keepLoopsToggle)) ::UnityW<::VROSC::UISlideToggle>  _keepLoopsToggle;

/// @brief Field _loopStation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _mergeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mergeButton, put=__cordl_internal_set__mergeButton)) ::UnityW<::VROSC::UIHoldButton>  _mergeButton;

/// @brief Field _userRecording, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__userRecording, put=__cordl_internal_set__userRecording)) bool  _userRecording;

/// @brief Method Awake, addr 0x18b6220, size 0x228, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method KeepLoopsToggled, addr 0x18b68ac, size 0x44, virtual false, abstract: false, final false
inline void KeepLoopsToggled(::VROSC::InputDevice*  inputdevice, bool  toggled) ;

/// @brief Method MergePressed, addr 0x18b68f0, size 0x3c, virtual false, abstract: false, final false
inline void MergePressed() ;

static inline ::VROSC::LoopStationGroupMergeUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b64f4, size 0x3b8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGroupLoopCountChanged, addr 0x18b6ad8, size 0x4, virtual false, abstract: false, final false
inline void OnGroupLoopCountChanged(int32_t  groupLoopCount) ;

/// @brief Method OnLoopAmountChanged, addr 0x18b6adc, size 0x4, virtual false, abstract: false, final false
inline void OnLoopAmountChanged(int32_t  loopCount) ;

/// @brief Method OnRecordingStateChanged, addr 0x18b6448, size 0x20, virtual false, abstract: false, final false
inline void OnRecordingStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method Setup, addr 0x18b692c, size 0x1ac, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopStationGroup*  group, ::VROSC::LoopStation*  loopStation) ;

/// @brief Method UpdateCanUseMerge, addr 0x18b6468, size 0x8c, virtual false, abstract: false, final false
inline void UpdateCanUseMerge() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__group() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__group() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__keepLoopsToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__keepLoopsToggle() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__mergeButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__mergeButton() ;

constexpr bool const& __cordl_internal_get__userRecording() const;

constexpr bool& __cordl_internal_get__userRecording() ;

constexpr void __cordl_internal_set__group(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__keepLoopsToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__mergeButton(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set__userRecording(bool  value) ;

/// @brief Method .ctor, addr 0x18b6af8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationGroupMergeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMergeUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationGroupMergeUI(LoopStationGroupMergeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationGroupMergeUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationGroupMergeUI(LoopStationGroupMergeUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{728};

/// @brief Field _mergeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____mergeButton;

/// @brief Field _keepLoopsToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____keepLoopsToggle;

/// @brief Field _group, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____group;

/// @brief Field _loopStation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _userRecording, offset: 0x40, size: 0x1, def value: None
 bool  ____userRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationGroupMergeUI, ____mergeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMergeUI, ____keepLoopsToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMergeUI, ____group) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMergeUI, ____loopStation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationGroupMergeUI, ____userRecording) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationGroupMergeUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationGroupMergeUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupMergeUI*, "VROSC", "LoopStationGroupMergeUI");
