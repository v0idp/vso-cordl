#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenManager)
namespace DG::Tweening::Core::Enums {
struct FilterType;
}
namespace DG::Tweening::Core::Enums {
struct OperationType;
}
namespace DG::Tweening::Core::Enums {
struct UpdateMode;
}
namespace DG::Tweening::Core {
class TweenLink;
}
namespace DG::Tweening::Core {
struct TweenManager_CapacityIncreaseMode;
}
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tween;
}
namespace DG::Tweening {
struct UpdateType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening::Core {
struct TweenManager_CapacityIncreaseMode;
}
namespace DG::Tweening::Core {
class TweenManager;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode);
MARK_REF_PTR_T(::DG::Tweening::Core::TweenManager);
// Dependencies 
namespace DG::Tweening::Core {
// Is value type: true
// CS Name: DG.Tweening.Core.TweenManager/CapacityIncreaseMode
struct CORDL_TYPE TweenManager_CapacityIncreaseMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TweenManager_CapacityIncreaseMode_Unwrapped
enum struct __TweenManager_CapacityIncreaseMode_Unwrapped : int32_t {
__E_TweenersAndSequences = static_cast<int32_t>(0x0),
__E_TweenersOnly = static_cast<int32_t>(0x1),
__E_SequencesOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TweenManager_CapacityIncreaseMode_Unwrapped () const noexcept {
return static_cast<__TweenManager_CapacityIncreaseMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TweenManager_CapacityIncreaseMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TweenManager_CapacityIncreaseMode(int32_t  value__) noexcept;

/// @brief Field SequencesOnly value: I32(2)
static ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode const SequencesOnly;

/// @brief Field TweenersAndSequences value: I32(0)
static ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode const TweenersAndSequences;

/// @brief Field TweenersOnly value: I32(1)
static ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode const TweenersOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::TweenManager_CapacityIncreaseMode, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.TweenManager
class CORDL_TYPE TweenManager : public ::System::Object {
public:
// Declarations
using CapacityIncreaseMode = ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode;

/// @brief Field _KillList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__KillList, put=setStaticF__KillList)) ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  _KillList;

/// @brief Field _PooledSequences, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PooledSequences, put=setStaticF__PooledSequences)) ::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*  _PooledSequences;

/// @brief Field _TweenLinks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TweenLinks, put=setStaticF__TweenLinks)) ::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*  _TweenLinks;

/// @brief Field _activeTweens, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeTweens, put=setStaticF__activeTweens)) ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  _activeTweens;

/// @brief Field _despawnAllCalledFromUpdateLoopCallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__despawnAllCalledFromUpdateLoopCallback, put=setStaticF__despawnAllCalledFromUpdateLoopCallback)) bool  _despawnAllCalledFromUpdateLoopCallback;

/// @brief Field _maxActiveLookupId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__maxActiveLookupId, put=setStaticF__maxActiveLookupId)) int32_t  _maxActiveLookupId;

/// @brief Field _maxPooledTweenerId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__maxPooledTweenerId, put=setStaticF__maxPooledTweenerId)) int32_t  _maxPooledTweenerId;

/// @brief Field _minPooledTweenerId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__minPooledTweenerId, put=setStaticF__minPooledTweenerId)) int32_t  _minPooledTweenerId;

/// @brief Field _pooledTweeners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pooledTweeners, put=setStaticF__pooledTweeners)) ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  _pooledTweeners;

/// @brief Field _reorganizeFromId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__reorganizeFromId, put=setStaticF__reorganizeFromId)) int32_t  _reorganizeFromId;

/// @brief Field _requiresActiveReorganization, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__requiresActiveReorganization, put=setStaticF__requiresActiveReorganization)) bool  _requiresActiveReorganization;

/// @brief Field _totTweenLinks, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__totTweenLinks, put=setStaticF__totTweenLinks)) int32_t  _totTweenLinks;

/// @brief Field hasActiveDefaultTweens, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveDefaultTweens, put=setStaticF_hasActiveDefaultTweens)) bool  hasActiveDefaultTweens;

/// @brief Field hasActiveFixedTweens, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveFixedTweens, put=setStaticF_hasActiveFixedTweens)) bool  hasActiveFixedTweens;

/// @brief Field hasActiveLateTweens, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveLateTweens, put=setStaticF_hasActiveLateTweens)) bool  hasActiveLateTweens;

/// @brief Field hasActiveManualTweens, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveManualTweens, put=setStaticF_hasActiveManualTweens)) bool  hasActiveManualTweens;

/// @brief Field hasActiveTweens, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveTweens, put=setStaticF_hasActiveTweens)) bool  hasActiveTweens;

/// @brief Field isDebugBuild, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isDebugBuild, put=setStaticF_isDebugBuild)) bool  isDebugBuild;

/// @brief Field isUnityEditor, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isUnityEditor, put=setStaticF_isUnityEditor)) bool  isUnityEditor;

/// @brief Field isUpdateLoop, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isUpdateLoop, put=setStaticF_isUpdateLoop)) bool  isUpdateLoop;

/// @brief Field maxActive, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxActive, put=setStaticF_maxActive)) int32_t  maxActive;

/// @brief Field maxSequences, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxSequences, put=setStaticF_maxSequences)) int32_t  maxSequences;

/// @brief Field maxTweeners, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxTweeners, put=setStaticF_maxTweeners)) int32_t  maxTweeners;

/// @brief Field totActiveDefaultTweens, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveDefaultTweens, put=setStaticF_totActiveDefaultTweens)) int32_t  totActiveDefaultTweens;

/// @brief Field totActiveFixedTweens, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveFixedTweens, put=setStaticF_totActiveFixedTweens)) int32_t  totActiveFixedTweens;

/// @brief Field totActiveLateTweens, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveLateTweens, put=setStaticF_totActiveLateTweens)) int32_t  totActiveLateTweens;

/// @brief Field totActiveManualTweens, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveManualTweens, put=setStaticF_totActiveManualTweens)) int32_t  totActiveManualTweens;

/// @brief Field totActiveSequences, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveSequences, put=setStaticF_totActiveSequences)) int32_t  totActiveSequences;

/// @brief Field totActiveTweeners, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveTweeners, put=setStaticF_totActiveTweeners)) int32_t  totActiveTweeners;

/// @brief Field totActiveTweens, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totActiveTweens, put=setStaticF_totActiveTweens)) int32_t  totActiveTweens;

/// @brief Field totPooledSequences, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totPooledSequences, put=setStaticF_totPooledSequences)) int32_t  totPooledSequences;

/// @brief Field totPooledTweeners, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totPooledTweeners, put=setStaticF_totPooledTweeners)) int32_t  totPooledTweeners;

/// @brief Field totSequences, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totSequences, put=setStaticF_totSequences)) int32_t  totSequences;

/// @brief Field totTweeners, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totTweeners, put=setStaticF_totTweeners)) int32_t  totTweeners;

/// @brief Method AddActiveTween, addr 0x18e684c, size 0x2d4, virtual false, abstract: false, final false
static inline void AddActiveTween(::DG::Tweening::Tween*  t) ;

/// @brief Method AddActiveTweenToSequence, addr 0x18e6f80, size 0x54, virtual false, abstract: false, final false
static inline void AddActiveTweenToSequence(::DG::Tweening::Tween*  t) ;

/// @brief Method AddTweenLink, addr 0x18e7d60, size 0x180, virtual false, abstract: false, final false
static inline void AddTweenLink(::DG::Tweening::Tween*  t, ::DG::Tweening::Core::TweenLink*  tweenLink) ;

/// @brief Method ClearTweenArray, addr 0x18e7aa4, size 0x78, virtual false, abstract: false, final false
static inline void ClearTweenArray(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  tweens) ;

/// @brief Method Complete, addr 0x18e915c, size 0xd8, virtual false, abstract: false, final false
static inline bool Complete(::DG::Tweening::Tween*  t, bool  modifyActiveLists, ::DG::Tweening::Core::Enums::UpdateMode  updateMode) ;

/// @brief Method Despawn, addr 0x18e75d4, size 0x4d0, virtual false, abstract: false, final false
static inline void Despawn(::DG::Tweening::Tween*  t, bool  modifyActiveLists) ;

/// @brief Method DespawnActiveTweens, addr 0x18e84c4, size 0xb8, virtual false, abstract: false, final false
static inline void DespawnActiveTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  tweens) ;

/// @brief Method DespawnAll, addr 0x18e7444, size 0x190, virtual false, abstract: false, final false
static inline int32_t DespawnAll() ;

/// @brief Method EvaluateTweenLink, addr 0x18e857c, size 0x240, virtual false, abstract: false, final false
static inline void EvaluateTweenLink(::DG::Tweening::Tween*  t) ;

/// @brief Method FilteredOperation, addr 0x18e87bc, size 0x8f0, virtual false, abstract: false, final false
static inline int32_t FilteredOperation(::DG::Tweening::Core::Enums::OperationType  operationType, ::DG::Tweening::Core::Enums::FilterType  filterType, ::System::Object*  id, bool  optionalBool, float_t  optionalFloat, ::System::Object*  optionalObj, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  optionalArray) ;

/// @brief Method Flip, addr 0x18e9234, size 0x28, virtual false, abstract: false, final false
static inline bool Flip(::DG::Tweening::Tween*  t) ;

/// @brief Method ForceInit, addr 0x18e90ac, size 0xb0, virtual false, abstract: false, final false
static inline void ForceInit(::DG::Tweening::Tween*  t, bool  isSequenced) ;

/// @brief Method GetActiveTweens, addr 0x18e9a7c, size 0x200, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetActiveTweens(bool  playing, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method GetSequence, addr 0x18e6568, size 0x2e4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* GetSequence() ;

/// @brief Method GetTweener, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* GetTweener() ;

/// @brief Method GetTweensById, addr 0x18e9c7c, size 0x2f0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetTweensById(::System::Object*  id, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method GetTweensByTarget, addr 0x18e9f6c, size 0x214, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetTweensByTarget(::System::Object*  target, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList) ;

/// @brief Method Goto, addr 0x18e925c, size 0x13c, virtual false, abstract: false, final false
static inline bool Goto(::DG::Tweening::Tween*  t, float_t  to, bool  andPlay, ::DG::Tweening::Core::Enums::UpdateMode  updateMode) ;

/// @brief Method IncreaseCapacities, addr 0x18e6b20, size 0x21c, virtual false, abstract: false, final false
static inline void IncreaseCapacities(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode  increaseMode) ;

/// @brief Method ManageOnRewindCallbackWhenAlreadyRewinded, addr 0x18e9874, size 0xa0, virtual false, abstract: false, final false
static inline void ManageOnRewindCallbackWhenAlreadyRewinded(::DG::Tweening::Tween*  t, bool  isPlayBackwardsOrSmoothRewind) ;

/// @brief Method MarkForKilling, addr 0x18e83f0, size 0xd4, virtual false, abstract: false, final false
static inline void MarkForKilling(::DG::Tweening::Tween*  t) ;

/// @brief Method Pause, addr 0x18e7f60, size 0x3c, virtual false, abstract: false, final false
static inline bool Pause(::DG::Tweening::Tween*  t) ;

/// @brief Method Play, addr 0x18e7ee0, size 0x80, virtual false, abstract: false, final false
static inline bool Play(::DG::Tweening::Tween*  t) ;

/// @brief Method PlayBackwards, addr 0x18e9398, size 0xd8, virtual false, abstract: false, final false
static inline bool PlayBackwards(::DG::Tweening::Tween*  t) ;

/// @brief Method PlayForward, addr 0x18e9470, size 0xb0, virtual false, abstract: false, final false
static inline bool PlayForward(::DG::Tweening::Tween*  t) ;

/// @brief Method PurgeAll, addr 0x18e7b1c, size 0x124, virtual false, abstract: false, final false
static inline void PurgeAll() ;

/// @brief Method PurgePools, addr 0x18e7c40, size 0xcc, virtual false, abstract: false, final false
static inline void PurgePools() ;

/// @brief Method RemoveActiveTween, addr 0x18e6fd4, size 0x470, virtual false, abstract: false, final false
static inline void RemoveActiveTween(::DG::Tweening::Tween*  t) ;

/// @brief Method RemoveTweenLink, addr 0x18e7f9c, size 0xdc, virtual false, abstract: false, final false
static inline void RemoveTweenLink(::DG::Tweening::Tween*  t) ;

/// @brief Method ReorganizeActiveTweens, addr 0x18e81f8, size 0x1f8, virtual false, abstract: false, final false
static inline void ReorganizeActiveTweens() ;

/// @brief Method ResetCapacities, addr 0x18e7d0c, size 0x54, virtual false, abstract: false, final false
static inline void ResetCapacities() ;

/// @brief Method Restart, addr 0x18e9520, size 0xc8, virtual false, abstract: false, final false
static inline bool Restart(::DG::Tweening::Tween*  t, bool  includeDelay, float_t  changeDelayTo) ;

/// @brief Method Rewind, addr 0x18e95e8, size 0x120, virtual false, abstract: false, final false
static inline bool Rewind(::DG::Tweening::Tween*  t, bool  includeDelay) ;

/// @brief Method SetCapacities, addr 0x18e5578, size 0xe0, virtual false, abstract: false, final false
static inline void SetCapacities(int32_t  tweenersCapacity, int32_t  sequencesCapacity) ;

/// @brief Method SetUpdateType, addr 0x18e6d3c, size 0x244, virtual false, abstract: false, final false
static inline void SetUpdateType(::DG::Tweening::Tween*  t, ::DG::Tweening::UpdateType  updateType, bool  isIndependentUpdate) ;

/// @brief Method SmoothRewind, addr 0x18e9708, size 0xfc, virtual false, abstract: false, final false
static inline bool SmoothRewind(::DG::Tweening::Tween*  t) ;

/// @brief Method TogglePause, addr 0x18e9804, size 0x70, virtual false, abstract: false, final false
static inline bool TogglePause(::DG::Tweening::Tween*  t) ;

/// @brief Method TotalPlayingTweens, addr 0x18e9970, size 0x10c, virtual false, abstract: false, final false
static inline int32_t TotalPlayingTweens() ;

/// @brief Method TotalPooledTweens, addr 0x18e9914, size 0x5c, virtual false, abstract: false, final false
static inline int32_t TotalPooledTweens() ;

/// @brief Method Update, addr 0x18e488c, size 0x3f0, virtual false, abstract: false, final false
static inline void Update(::DG::Tweening::UpdateType  updateType, float_t  deltaTime, float_t  independentTime) ;

/// @brief Method Validate, addr 0x18e8078, size 0x180, virtual false, abstract: false, final false
static inline int32_t Validate() ;

static inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* getStaticF__KillList() ;

static inline ::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>* getStaticF__PooledSequences() ;

static inline ::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>* getStaticF__TweenLinks() ;

static inline ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*> getStaticF__activeTweens() ;

static inline bool getStaticF__despawnAllCalledFromUpdateLoopCallback() ;

static inline int32_t getStaticF__maxActiveLookupId() ;

static inline int32_t getStaticF__maxPooledTweenerId() ;

static inline int32_t getStaticF__minPooledTweenerId() ;

static inline ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*> getStaticF__pooledTweeners() ;

static inline int32_t getStaticF__reorganizeFromId() ;

static inline bool getStaticF__requiresActiveReorganization() ;

static inline int32_t getStaticF__totTweenLinks() ;

static inline bool getStaticF_hasActiveDefaultTweens() ;

static inline bool getStaticF_hasActiveFixedTweens() ;

static inline bool getStaticF_hasActiveLateTweens() ;

static inline bool getStaticF_hasActiveManualTweens() ;

static inline bool getStaticF_hasActiveTweens() ;

static inline bool getStaticF_isDebugBuild() ;

static inline bool getStaticF_isUnityEditor() ;

static inline bool getStaticF_isUpdateLoop() ;

static inline int32_t getStaticF_maxActive() ;

static inline int32_t getStaticF_maxSequences() ;

static inline int32_t getStaticF_maxTweeners() ;

static inline int32_t getStaticF_totActiveDefaultTweens() ;

static inline int32_t getStaticF_totActiveFixedTweens() ;

static inline int32_t getStaticF_totActiveLateTweens() ;

static inline int32_t getStaticF_totActiveManualTweens() ;

static inline int32_t getStaticF_totActiveSequences() ;

static inline int32_t getStaticF_totActiveTweeners() ;

static inline int32_t getStaticF_totActiveTweens() ;

static inline int32_t getStaticF_totPooledSequences() ;

static inline int32_t getStaticF_totPooledTweeners() ;

static inline int32_t getStaticF_totSequences() ;

static inline int32_t getStaticF_totTweeners() ;

static inline void setStaticF__KillList(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  value) ;

static inline void setStaticF__PooledSequences(::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*  value) ;

static inline void setStaticF__TweenLinks(::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*  value) ;

static inline void setStaticF__activeTweens(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  value) ;

static inline void setStaticF__despawnAllCalledFromUpdateLoopCallback(bool  value) ;

static inline void setStaticF__maxActiveLookupId(int32_t  value) ;

static inline void setStaticF__maxPooledTweenerId(int32_t  value) ;

static inline void setStaticF__minPooledTweenerId(int32_t  value) ;

static inline void setStaticF__pooledTweeners(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  value) ;

static inline void setStaticF__reorganizeFromId(int32_t  value) ;

static inline void setStaticF__requiresActiveReorganization(bool  value) ;

static inline void setStaticF__totTweenLinks(int32_t  value) ;

static inline void setStaticF_hasActiveDefaultTweens(bool  value) ;

static inline void setStaticF_hasActiveFixedTweens(bool  value) ;

static inline void setStaticF_hasActiveLateTweens(bool  value) ;

static inline void setStaticF_hasActiveManualTweens(bool  value) ;

static inline void setStaticF_hasActiveTweens(bool  value) ;

static inline void setStaticF_isDebugBuild(bool  value) ;

static inline void setStaticF_isUnityEditor(bool  value) ;

static inline void setStaticF_isUpdateLoop(bool  value) ;

static inline void setStaticF_maxActive(int32_t  value) ;

static inline void setStaticF_maxSequences(int32_t  value) ;

static inline void setStaticF_maxTweeners(int32_t  value) ;

static inline void setStaticF_totActiveDefaultTweens(int32_t  value) ;

static inline void setStaticF_totActiveFixedTweens(int32_t  value) ;

static inline void setStaticF_totActiveLateTweens(int32_t  value) ;

static inline void setStaticF_totActiveManualTweens(int32_t  value) ;

static inline void setStaticF_totActiveSequences(int32_t  value) ;

static inline void setStaticF_totActiveTweeners(int32_t  value) ;

static inline void setStaticF_totActiveTweens(int32_t  value) ;

static inline void setStaticF_totPooledSequences(int32_t  value) ;

static inline void setStaticF_totPooledTweeners(int32_t  value) ;

static inline void setStaticF_totSequences(int32_t  value) ;

static inline void setStaticF_totTweeners(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenManager(TweenManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenManager(TweenManager const& ) = delete;

/// @brief Field _DefaultMaxSequences offset 0xffffffff size 0x4
static constexpr int32_t  _DefaultMaxSequences{static_cast<int32_t>(0x32)};

/// @brief Field _DefaultMaxTweeners offset 0xffffffff size 0x4
static constexpr int32_t  _DefaultMaxTweeners{static_cast<int32_t>(0xc8)};

/// @brief Field _EpsilonVsTimeCheck offset 0xffffffff size 0x4
static constexpr float_t  _EpsilonVsTimeCheck{static_cast<float_t>(1e-6f)};

/// @brief Field _MaxTweensReached offset 0xffffffff size 0x8
static constexpr ::ConstString  _MaxTweensReached{u"Max Tweens reached: capacity has automatically been increased from #0 to #1. Use DOTween.SetTweensCapacity to set it manually at startup"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::TweenManager, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode, "DG.Tweening.Core", "TweenManager/CapacityIncreaseMode");
NEED_NO_BOX(::DG::Tweening::Core::TweenManager);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::TweenManager*, "DG.Tweening.Core", "TweenManager");
