#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableDirector);
// Dependencies UnityEngine.Behaviour, UnityEngine.IExposedPropertyTable
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_extrapolationMode, put=set_extrapolationMode)) ::UnityEngine::Playables::DirectorWrapMode  extrapolationMode;

/// @brief Field paused, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  paused;

 __declspec(property(get=get_playableAsset, put=set_playableAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  playableAsset;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

/// @brief Field played, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  played;

 __declspec(property(get=get_state)) ::UnityEngine::Playables::PlayState  state;

/// @brief Field stopped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopped, put=__cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  stopped;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr operator  ::UnityEngine::IExposedPropertyTable*() noexcept;

/// @brief Method Evaluate, addr 0x2fa8fd8, size 0x3c, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method GetGenericBinding, addr 0x2fa91b8, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method GetGraphHandle, addr 0x2fa8b64, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle() ;

/// @brief Method GetGraphHandle_Injected, addr 0x2fa91fc, size 0x44, virtual false, abstract: false, final false
inline void GetGraphHandle_Injected(::ByRef<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetPlayState, addr 0x2fa88c0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetReferenceValue, addr 0x2fa910c, size 0x58, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName  id, ::ByRef<bool>  idValid) ;

/// @brief Method GetReferenceValue_Injected, addr 0x2fa9164, size 0x54, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue_Injected(::ByRef<::UnityEngine::PropertyName>  id, ::ByRef<bool>  idValid) ;

/// @brief Method GetWrapMode, addr 0x2fa89c0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode() ;

/// @brief Method Internal_GetPlayableAsset, addr 0x2fa8a9c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset() ;

/// @brief Method Internal_SetGenericBinding, addr 0x2fa8efc, size 0x54, virtual false, abstract: false, final false
inline void Internal_SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

/// @brief Method Pause, addr 0x2fa9094, size 0x3c, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x2fa8e6c, size 0x3c, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x2fa8c48, size 0xec, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method Play, addr 0x2fa8d34, size 0x138, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Play, addr 0x2fa8bb8, size 0x48, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame, addr 0x2fa8c00, size 0x48, virtual false, abstract: false, final false
inline void PlayOnFrame(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame_Injected, addr 0x2fa9014, size 0x44, virtual false, abstract: false, final false
inline void PlayOnFrame_Injected(::ByRef<::UnityEngine::Playables::FrameRate>  frameRate) ;

/// @brief Method Resume, addr 0x2fa90d0, size 0x3c, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method SendOnPlayableDirectorPause, addr 0x2fa93c0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPause() ;

/// @brief Method SendOnPlayableDirectorPlay, addr 0x2fa93a0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPlay() ;

/// @brief Method SendOnPlayableDirectorStop, addr 0x2fa93e0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorStop() ;

/// @brief Method SetGenericBinding, addr 0x2fa8ea8, size 0x54, virtual false, abstract: false, final false
inline void SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

/// @brief Method SetPlayableAsset, addr 0x2fa8b1c, size 0x44, virtual false, abstract: false, final false
inline void SetPlayableAsset(::UnityEngine::ScriptableObject*  asset) ;

/// @brief Method SetWrapMode, addr 0x2fa8940, size 0x44, virtual false, abstract: false, final false
inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Stop, addr 0x2fa9058, size 0x3c, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_paused() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_played() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_stopped() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped() ;

constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method add_stopped, addr 0x2fa9240, size 0xb0, virtual false, abstract: false, final false
inline void add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method get_extrapolationMode, addr 0x2fa8984, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode() ;

/// @brief Method get_playableAsset, addr 0x2fa89fc, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset() ;

/// @brief Method get_playableGraph, addr 0x2fa8b60, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_state, addr 0x2fa8884, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_time, addr 0x2fa8f9c, size 0x3c, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

/// @brief Method remove_stopped, addr 0x2fa92f0, size 0xb0, virtual false, abstract: false, final false
inline void remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method set_extrapolationMode, addr 0x2fa88fc, size 0x44, virtual false, abstract: false, final false
inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode  value) ;

/// @brief Method set_playableAsset, addr 0x2fa8ad8, size 0x44, virtual false, abstract: false, final false
inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method set_time, addr 0x2fa8f50, size 0x4c, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableDirector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableDirector(PlayableDirector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableDirector(PlayableDirector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12419};

/// @brief Field played, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___played;

/// @brief Field paused, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___paused;

/// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___stopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
