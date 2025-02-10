#pragma once
// IWYU pragma private; include "VROSC/LoopStationButtons.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopStationButtons)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIHoldButton;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class LoopStationButtons;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationButtons);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationButtons
class CORDL_TYPE LoopStationButtons : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDeleteAllPressed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeleteAllPressed, put=__cordl_internal_set_OnDeleteAllPressed)) ::System::Action*  OnDeleteAllPressed;

/// @brief Field OnGlobalVolumeChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGlobalVolumeChanged, put=__cordl_internal_set_OnGlobalVolumeChanged)) ::System::Action_1<float_t>*  OnGlobalVolumeChanged;

/// @brief Field OnPlayAllPressed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayAllPressed, put=__cordl_internal_set_OnPlayAllPressed)) ::System::Action*  OnPlayAllPressed;

/// @brief Field OnStopAllPressed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopAllPressed, put=__cordl_internal_set_OnStopAllPressed)) ::System::Action*  OnStopAllPressed;

/// @brief Field _deleteAllButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteAllButton, put=__cordl_internal_set__deleteAllButton)) ::UnityW<::VROSC::UIHoldButton>  _deleteAllButton;

/// @brief Field _playAllButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playAllButton, put=__cordl_internal_set__playAllButton)) ::UnityW<::VROSC::UIButton>  _playAllButton;

/// @brief Field _stopAllButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopAllButton, put=__cordl_internal_set__stopAllButton)) ::UnityW<::VROSC::UIButton>  _stopAllButton;

/// @brief Field _volumeSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method Awake, addr 0x18bd770, size 0x3fc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteAll, addr 0x18bde00, size 0x1c, virtual false, abstract: false, final false
inline void DeleteAll() ;

static inline ::VROSC::LoopStationButtons* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18bdb6c, size 0x25c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayAllPressed, addr 0x18bddc8, size 0x1c, virtual false, abstract: false, final false
inline void PlayAllPressed() ;

/// @brief Method SetVolume, addr 0x18ae238, size 0x2c, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method StopAllPressed, addr 0x18bdde4, size 0x1c, virtual false, abstract: false, final false
inline void StopAllPressed() ;

/// @brief Method VolumeChanged, addr 0x18bde1c, size 0x1c, virtual false, abstract: false, final false
inline void VolumeChanged(float_t  volume) ;

constexpr ::System::Action* const& __cordl_internal_get_OnDeleteAllPressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnDeleteAllPressed() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnGlobalVolumeChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnGlobalVolumeChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayAllPressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayAllPressed() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStopAllPressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnStopAllPressed() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__deleteAllButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__deleteAllButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__playAllButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__playAllButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__stopAllButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__stopAllButton() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set_OnDeleteAllPressed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGlobalVolumeChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_OnPlayAllPressed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStopAllPressed(::System::Action*  value) ;

constexpr void __cordl_internal_set__deleteAllButton(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set__playAllButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__stopAllButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x18bde38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationButtons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationButtons", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationButtons(LoopStationButtons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationButtons", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationButtons(LoopStationButtons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{747};

/// @brief Field _stopAllButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____stopAllButton;

/// @brief Field _playAllButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____playAllButton;

/// @brief Field _volumeSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _deleteAllButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____deleteAllButton;

/// @brief Field OnPlayAllPressed, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnPlayAllPressed;

/// @brief Field OnStopAllPressed, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnStopAllPressed;

/// @brief Field OnDeleteAllPressed, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnDeleteAllPressed;

/// @brief Field OnGlobalVolumeChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnGlobalVolumeChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationButtons, ____stopAllButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ____playAllButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ____volumeSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ____deleteAllButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ___OnPlayAllPressed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ___OnStopAllPressed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ___OnDeleteAllPressed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationButtons, ___OnGlobalVolumeChanged) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationButtons, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationButtons);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationButtons*, "VROSC", "LoopStationButtons");
