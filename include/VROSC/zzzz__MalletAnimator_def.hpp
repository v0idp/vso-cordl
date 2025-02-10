#pragma once
// IWYU pragma private; include "VROSC/MalletAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MalletAnimator)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class LocalTransformData;
}
// Forward declare root types
namespace VROSC {
class MalletAnimator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MalletAnimator);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MalletAnimator
class CORDL_TYPE MalletAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnFinished, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFinished, put=__cordl_internal_set_OnFinished)) ::System::Action_1<bool>*  OnFinished;

/// @brief Field _defaultStartPosition, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultStartPosition, put=__cordl_internal_set__defaultStartPosition)) ::VROSC::LocalTransformData*  _defaultStartPosition;

/// @brief Field _enterTimeline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__enterTimeline, put=__cordl_internal_set__enterTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _enterTimeline;

/// @brief Field _exitTimeline, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__exitTimeline, put=__cordl_internal_set__exitTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _exitTimeline;

/// @brief Field _isActive, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _playableDirector, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playableDirector, put=__cordl_internal_set__playableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _playableDirector;

/// @brief Field _startPosition, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityW<::UnityEngine::Transform>  _startPosition;

/// @brief Method Awake, addr 0x1718d50, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GrabbedAt, addr 0x1718e68, size 0x64, virtual false, abstract: false, final false
inline void GrabbedAt(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::MalletAnimator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1718ecc, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayableDirectorStopped, addr 0x1718f5c, size 0x9c, virtual false, abstract: false, final false
inline void OnPlayableDirectorStopped(::UnityEngine::Playables::PlayableDirector*  aDirector) ;

/// @brief Method SetActive, addr 0x1718e14, size 0x54, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnFinished() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnFinished() ;

constexpr ::VROSC::LocalTransformData* const& __cordl_internal_get__defaultStartPosition() const;

constexpr ::VROSC::LocalTransformData*& __cordl_internal_get__defaultStartPosition() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__enterTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__enterTimeline() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__exitTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__exitTimeline() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__playableDirector() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__playableDirector() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__startPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__startPosition() ;

constexpr void __cordl_internal_set_OnFinished(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__defaultStartPosition(::VROSC::LocalTransformData*  value) ;

constexpr void __cordl_internal_set__enterTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__exitTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1718ff8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletAnimator(MalletAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletAnimator(MalletAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{920};

/// @brief Field OnFinished, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnFinished;

/// @brief Field _playableDirector, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____playableDirector;

/// @brief Field _enterTimeline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____enterTimeline;

/// @brief Field _exitTimeline, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____exitTimeline;

/// @brief Field _startPosition, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____startPosition;

/// @brief Field _defaultStartPosition, offset: 0x48, size: 0x8, def value: None
 ::VROSC::LocalTransformData*  ____defaultStartPosition;

/// @brief Field _isActive, offset: 0x50, size: 0x1, def value: None
 bool  ____isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MalletAnimator, ___OnFinished) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____playableDirector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____enterTimeline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____exitTimeline) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____startPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____defaultStartPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletAnimator, ____isActive) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MalletAnimator, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MalletAnimator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletAnimator*, "VROSC", "MalletAnimator");
