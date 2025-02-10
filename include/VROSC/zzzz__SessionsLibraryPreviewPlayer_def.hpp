#pragma once
// IWYU pragma private; include "VROSC/SessionsLibraryPreviewPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SessionsLibraryPreviewPlayer)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class PreviewOptionsUI;
}
namespace VROSC {
class SessionItemData;
}
namespace VROSC {
class TimeSlider;
}
// Forward declare root types
namespace VROSC {
class SessionsLibraryPreviewPlayer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionsLibraryPreviewPlayer);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsLibraryPreviewPlayer
class CORDL_TYPE SessionsLibraryPreviewPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

/// @brief Field OnPlayingStateChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayingStateChanged, put=__cordl_internal_set_OnPlayingStateChanged)) ::System::Action_1<bool>*  OnPlayingStateChanged;

/// @brief Field <IsPlaying>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying_k__BackingField, put=__cordl_internal_set__IsPlaying_k__BackingField)) bool  _IsPlaying_k__BackingField;

/// @brief Field _currentPreviewNormalizeMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPreviewNormalizeMultiplier, put=__cordl_internal_set__currentPreviewNormalizeMultiplier)) float_t  _currentPreviewNormalizeMultiplier;

/// @brief Field _itemData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemData, put=__cordl_internal_set__itemData)) ::VROSC::SessionItemData*  _itemData;

/// @brief Field _previewAudio, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewAudio, put=__cordl_internal_set__previewAudio)) ::UnityW<::UnityEngine::AudioSource>  _previewAudio;

/// @brief Field _previewOptionsUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewOptionsUI, put=__cordl_internal_set__previewOptionsUI)) ::UnityW<::VROSC::PreviewOptionsUI>  _previewOptionsUI;

/// @brief Field _timeSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSlider, put=__cordl_internal_set__timeSlider)) ::UnityW<::VROSC::TimeSlider>  _timeSlider;

/// @brief Method GetPreviewLength, addr 0x1759ae0, size 0xa8, virtual false, abstract: false, final false
inline float_t GetPreviewLength() ;

static inline ::VROSC::SessionsLibraryPreviewPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x175c604, size 0x2c0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x175c3f4, size 0x1ac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSessionSelected, addr 0x175c8c4, size 0x18c, virtual false, abstract: false, final false
inline void OnSessionSelected(::VROSC::SessionItemData*  item) ;

/// @brief Method PausePreview, addr 0x1759cbc, size 0xd0, virtual false, abstract: false, final false
inline void PausePreview() ;

/// @brief Method PlayPreview, addr 0x1759d8c, size 0x108, virtual false, abstract: false, final false
inline void PlayPreview() ;

/// @brief Method PreviewLoadFailed, addr 0x175cd00, size 0x80, virtual false, abstract: false, final false
inline void PreviewLoadFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method PreviewLoadSucceeded, addr 0x175cb34, size 0x1cc, virtual false, abstract: false, final false
inline void PreviewLoadSucceeded(::StringW  sessionId, ::UnityEngine::AudioClip*  preview, float_t  normalizeMultiplier) ;

/// @brief Method SetVolume, addr 0x1759c6c, size 0x28, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method StopPreview, addr 0x175ca50, size 0xe4, virtual false, abstract: false, final false
inline void StopPreview() ;

/// @brief Method Update, addr 0x175c5a0, size 0x64, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnPlayingStateChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnPlayingStateChanged() ;

constexpr bool const& __cordl_internal_get__IsPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlaying_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__currentPreviewNormalizeMultiplier() const;

constexpr float_t& __cordl_internal_get__currentPreviewNormalizeMultiplier() ;

constexpr ::VROSC::SessionItemData* const& __cordl_internal_get__itemData() const;

constexpr ::VROSC::SessionItemData*& __cordl_internal_get__itemData() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__previewAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__previewAudio() ;

constexpr ::UnityW<::VROSC::PreviewOptionsUI> const& __cordl_internal_get__previewOptionsUI() const;

constexpr ::UnityW<::VROSC::PreviewOptionsUI>& __cordl_internal_get__previewOptionsUI() ;

constexpr ::UnityW<::VROSC::TimeSlider> const& __cordl_internal_get__timeSlider() const;

constexpr ::UnityW<::VROSC::TimeSlider>& __cordl_internal_get__timeSlider() ;

constexpr void __cordl_internal_set_OnPlayingStateChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__currentPreviewNormalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__itemData(::VROSC::SessionItemData*  value) ;

constexpr void __cordl_internal_set__previewAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__previewOptionsUI(::UnityW<::VROSC::PreviewOptionsUI>  value) ;

constexpr void __cordl_internal_set__timeSlider(::UnityW<::VROSC::TimeSlider>  value) ;

/// @brief Method .ctor, addr 0x175cd80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsPlaying, addr 0x175c3e0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method set_IsPlaying, addr 0x175c3e8, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsLibraryPreviewPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryPreviewPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsLibraryPreviewPlayer(SessionsLibraryPreviewPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsLibraryPreviewPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsLibraryPreviewPlayer(SessionsLibraryPreviewPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1167};

/// @brief Field _previewOptionsUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::PreviewOptionsUI>  ____previewOptionsUI;

/// @brief Field _previewAudio, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____previewAudio;

/// @brief Field _timeSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TimeSlider>  ____timeSlider;

/// @brief Field _currentPreviewNormalizeMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ____currentPreviewNormalizeMultiplier;

/// @brief Field _itemData, offset: 0x40, size: 0x8, def value: None
 ::VROSC::SessionItemData*  ____itemData;

/// @brief Field <IsPlaying>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsPlaying_k__BackingField;

/// @brief Field OnPlayingStateChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnPlayingStateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____previewOptionsUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____previewAudio) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____timeSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____currentPreviewNormalizeMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____itemData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ____IsPlaying_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsLibraryPreviewPlayer, ___OnPlayingStateChanged) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsLibraryPreviewPlayer, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionsLibraryPreviewPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsLibraryPreviewPlayer*, "VROSC", "SessionsLibraryPreviewPlayer");
