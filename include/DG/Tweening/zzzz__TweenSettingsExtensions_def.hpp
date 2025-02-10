#pragma once
// IWYU pragma private; include "DG/Tweening/TweenSettingsExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenSettingsExtensions)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
namespace DG::Tweening::Plugins::Options {
struct ColorOptions;
}
namespace DG::Tweening::Plugins::Options {
struct FloatOptions;
}
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
namespace DG::Tweening::Plugins::Options {
struct QuaternionOptions;
}
namespace DG::Tweening::Plugins::Options {
struct RectOptions;
}
namespace DG::Tweening::Plugins::Options {
struct StringOptions;
}
namespace DG::Tweening::Plugins::Options {
struct Vector3ArrayOptions;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
struct AxisConstraint;
}
namespace DG::Tweening {
class EaseFunction;
}
namespace DG::Tweening {
struct Ease;
}
namespace DG::Tweening {
struct LinkBehaviour;
}
namespace DG::Tweening {
struct LoopType;
}
namespace DG::Tweening {
struct ScrambleMode;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
template<typename T>
class TweenCallback_1;
}
namespace DG::Tweening {
class TweenCallback;
}
namespace DG::Tweening {
class TweenParams;
}
namespace DG::Tweening {
class Tween;
}
namespace DG::Tweening {
class Tweener;
}
namespace DG::Tweening {
struct UpdateType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace DG::Tweening {
class TweenSettingsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::TweenSettingsExtensions);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.TweenSettingsExtensions
class CORDL_TYPE TweenSettingsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Append, addr 0x18d10e0, size 0x3c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* Append(::DG::Tweening::Sequence*  s, ::DG::Tweening::Tween*  t) ;

/// @brief Method AppendCallback, addr 0x18d5fd8, size 0x2c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* AppendCallback(::DG::Tweening::Sequence*  s, ::DG::Tweening::TweenCallback*  callback) ;

/// @brief Method AppendInterval, addr 0x18c608c, size 0x2c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* AppendInterval(::DG::Tweening::Sequence*  s, float_t  interval) ;

/// @brief Method From, addr 0x18d6058, size 0x98, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>* From(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t, float_t  fromAlphaValue, bool  setImmediately) ;

/// @brief Method From, addr 0x18d60f0, size 0x94, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* From(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, float_t  fromValue, bool  setImmediately) ;

/// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* From(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  fromValue, bool  setImmediately) ;

/// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T From(T  t) ;

/// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T From(T  t, bool  isRelative) ;

/// @brief Method Insert, addr 0x18d5f7c, size 0x38, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* Insert(::DG::Tweening::Sequence*  s, float_t  atPosition, ::DG::Tweening::Tween*  t) ;

/// @brief Method InsertCallback, addr 0x18d6030, size 0x28, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* InsertCallback(::DG::Tweening::Sequence*  s, float_t  atPosition, ::DG::Tweening::TweenCallback*  callback) ;

/// @brief Method Join, addr 0x18d111c, size 0x3c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* Join(::DG::Tweening::Sequence*  s, ::DG::Tweening::Tween*  t) ;

/// @brief Method OnComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnComplete(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnKill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnKill(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnPause, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnPause(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnPlay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnPlay(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnRewind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnRewind(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnStart(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnStepComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnStepComplete(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnUpdate(T  t, ::DG::Tweening::TweenCallback*  action) ;

/// @brief Method OnWaypointChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T OnWaypointChange(T  t, ::DG::Tweening::TweenCallback_1<int32_t>*  action) ;

/// @brief Method Prepend, addr 0x18d5f44, size 0x38, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* Prepend(::DG::Tweening::Sequence*  s, ::DG::Tweening::Tween*  t) ;

/// @brief Method PrependCallback, addr 0x18d6004, size 0x2c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* PrependCallback(::DG::Tweening::Sequence*  s, ::DG::Tweening::TweenCallback*  callback) ;

/// @brief Method PrependInterval, addr 0x18d5fb4, size 0x24, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* PrependInterval(::DG::Tweening::Sequence*  s, float_t  interval) ;

/// @brief Method SetAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetAs(T  t, ::DG::Tweening::Tween*  asTween) ;

/// @brief Method SetAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetAs(T  t, ::DG::Tweening::TweenParams*  tweenParams) ;

/// @brief Method SetAutoKill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetAutoKill(T  t) ;

/// @brief Method SetAutoKill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetAutoKill(T  t, bool  autoKillOnCompletion) ;

/// @brief Method SetDelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetDelay(T  t, float_t  delay) ;

/// @brief Method SetEase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetEase(T  t, ::UnityEngine::AnimationCurve*  animCurve) ;

/// @brief Method SetEase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetEase(T  t, ::DG::Tweening::EaseFunction*  customEase) ;

/// @brief Method SetEase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetEase(T  t, ::DG::Tweening::Ease  ease) ;

/// @brief Method SetEase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetEase(T  t, ::DG::Tweening::Ease  ease, float_t  amplitude, float_t  period) ;

/// @brief Method SetEase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetEase(T  t, ::DG::Tweening::Ease  ease, float_t  overshoot) ;

/// @brief Method SetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetId(T  t, int32_t  intId) ;

/// @brief Method SetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetId(T  t, ::System::Object*  objectId) ;

/// @brief Method SetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetId(T  t, ::StringW  stringId) ;

/// @brief Method SetLink, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetLink(T  t, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method SetLink, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetLink(T  t, ::UnityEngine::GameObject*  gameObject, ::DG::Tweening::LinkBehaviour  behaviour) ;

/// @brief Method SetLookAt, addr 0x18d671c, size 0x40, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, float_t  lookAhead, ::System::Nullable_1<::UnityEngine::Vector3>  forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3>  up) ;

/// @brief Method SetLookAt, addr 0x18d636c, size 0x3c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::UnityEngine::Vector3  lookAtPosition, ::System::Nullable_1<::UnityEngine::Vector3>  forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3>  up) ;

/// @brief Method SetLookAt, addr 0x18d66d8, size 0x44, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::UnityEngine::Transform*  lookAtTransform, ::System::Nullable_1<::UnityEngine::Vector3>  forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3>  up) ;

/// @brief Method SetLoops, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetLoops(T  t, int32_t  loops) ;

/// @brief Method SetLoops, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetLoops(T  t, int32_t  loops, ::DG::Tweening::LoopType  loopType) ;

/// @brief Method SetOptions, addr 0x18d634c, size 0x20, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, bool  closePath, ::DG::Tweening::AxisConstraint  lockPosition, ::DG::Tweening::AxisConstraint  lockRotation) ;

/// @brief Method SetOptions, addr 0x18d6330, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::DG::Tweening::AxisConstraint  lockPosition, ::DG::Tweening::AxisConstraint  lockRotation) ;

/// @brief Method SetOptions, addr 0x18d6238, size 0xdc, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::StringW,::StringW,::DG::Tweening::Plugins::Options::StringOptions>*  t, bool  richTextEnabled, ::DG::Tweening::ScrambleMode  scrambleMode, ::StringW  scrambleChars) ;

/// @brief Method SetOptions, addr 0x18c337c, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Color,::UnityEngine::Color,::DG::Tweening::Plugins::Options::ColorOptions>*  t, bool  alphaOnly) ;

/// @brief Method SetOptions, addr 0x18d6204, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t, bool  useShortest360Route) ;

/// @brief Method SetOptions, addr 0x18d6220, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Rect,::UnityEngine::Rect,::DG::Tweening::Plugins::Options::RectOptions>*  t, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d61b4, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>*  t, ::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d619c, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>*  t, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d6314, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*  t, ::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18cf934, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*  t, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18cdc54, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, ::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18cdaa0, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>*  t, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d61e8, size 0x1c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4,::UnityEngine::Vector4,::DG::Tweening::Plugins::Options::VectorOptions>*  t, ::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d61d0, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector4,::UnityEngine::Vector4,::DG::Tweening::Plugins::Options::VectorOptions>*  t, bool  snapping) ;

/// @brief Method SetOptions, addr 0x18d6184, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Tweener* SetOptions(::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>*  t, bool  snapping) ;

/// @brief Method SetPathForwardDirection, addr 0x18d63a8, size 0x330, virtual false, abstract: false, final false
static inline void SetPathForwardDirection(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>*  t, ::System::Nullable_1<::UnityEngine::Vector3>  forwardDirection, ::System::Nullable_1<::UnityEngine::Vector3>  up) ;

/// @brief Method SetRecyclable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetRecyclable(T  t) ;

/// @brief Method SetRecyclable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetRecyclable(T  t, bool  recyclable) ;

/// @brief Method SetRelative, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetRelative(T  t) ;

/// @brief Method SetRelative, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetRelative(T  t, bool  isRelative) ;

/// @brief Method SetSpeedBased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetSpeedBased(T  t) ;

/// @brief Method SetSpeedBased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetSpeedBased(T  t, bool  isSpeedBased) ;

/// @brief Method SetTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetTarget(T  t, ::System::Object*  target) ;

/// @brief Method SetUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetUpdate(T  t, bool  isIndependentUpdate) ;

/// @brief Method SetUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetUpdate(T  t, ::DG::Tweening::UpdateType  updateType) ;

/// @brief Method SetUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetUpdate(T  t, ::DG::Tweening::UpdateType  updateType, bool  isIndependentUpdate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenSettingsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenSettingsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenSettingsExtensions(TweenSettingsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenSettingsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenSettingsExtensions(TweenSettingsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10783};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::TweenSettingsExtensions, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::TweenSettingsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenSettingsExtensions*, "DG.Tweening", "TweenSettingsExtensions");
