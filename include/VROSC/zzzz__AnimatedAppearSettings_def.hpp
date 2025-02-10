#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppearSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
CORDL_MODULE_EXPORT(AnimatedAppearSettings)
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class AnimatedAppearSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AnimatedAppearSettings);
// Dependencies System.Object, VROSC.AnimatedAppear::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearSettings
class CORDL_TYPE AnimatedAppearSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Mode)) ::VROSC::AnimatedAppear_Mode  Mode;

 __declspec(property(get=get_Play)) bool  Play;

 __declspec(property(get=get_Timeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  Timeline;

/// @brief Field _director, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__director, put=__cordl_internal_set__director)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _director;

/// @brief Field _mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::VROSC::AnimatedAppear_Mode  _mode;

/// @brief Field _play, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__play, put=__cordl_internal_set__play)) bool  _play;

/// @brief Field _timeline, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeline, put=__cordl_internal_set__timeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _timeline;

/// @brief Method GetDir, addr 0x17a8b18, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDir() ;

/// @brief Method GetOrAddDirector, addr 0x17a9d48, size 0xc0, virtual false, abstract: false, final false
inline void GetOrAddDirector(::UnityEngine::GameObject*  target) ;

static inline ::VROSC::AnimatedAppearSettings* New_ctor() ;

/// @brief Method SetTimelineActive, addr 0x17a8774, size 0xb8, virtual false, abstract: false, final false
inline void SetTimelineActive(::UnityEngine::GameObject*  target, bool  play) ;

/// @brief Method Stop, addr 0x17a8910, size 0x34, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Unload, addr 0x17a8dac, size 0xc4, virtual false, abstract: false, final false
inline void Unload(::UnityEngine::GameObject*  target) ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__director() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__director() ;

constexpr ::VROSC::AnimatedAppear_Mode const& __cordl_internal_get__mode() const;

constexpr ::VROSC::AnimatedAppear_Mode& __cordl_internal_get__mode() ;

constexpr bool const& __cordl_internal_get__play() const;

constexpr bool& __cordl_internal_get__play() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__timeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__timeline() ;

constexpr void __cordl_internal_set__director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__mode(::VROSC::AnimatedAppear_Mode  value) ;

constexpr void __cordl_internal_set__play(bool  value) ;

constexpr void __cordl_internal_set__timeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

/// @brief Method .ctor, addr 0x17a9e08, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsPlaying, addr 0x17a7f4c, size 0x88, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_Mode, addr 0x17a9d38, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AnimatedAppear_Mode get_Mode() ;

/// @brief Method get_Play, addr 0x17a9d40, size 0x8, virtual false, abstract: false, final false
inline bool get_Play() ;

/// @brief Method get_Timeline, addr 0x17a9d30, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_Timeline() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearSettings(AnimatedAppearSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearSettings(AnimatedAppearSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1405};

/// @brief Field _play, offset: 0x10, size: 0x1, def value: None
 bool  ____play;

/// @brief Field _timeline, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____timeline;

/// @brief Field _mode, offset: 0x20, size: 0x4, def value: None
 ::VROSC::AnimatedAppear_Mode  ____mode;

/// @brief Field _director, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____director;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearSettings, ____play) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearSettings, ____timeline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearSettings, ____mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearSettings, ____director) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearSettings, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AnimatedAppearSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearSettings*, "VROSC", "AnimatedAppearSettings");
