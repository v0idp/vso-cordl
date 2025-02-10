#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppear.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedAppear)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class AnimatedAppearData;
}
namespace VROSC {
class AnimatedAppearSettings;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
namespace VROSC {
class TimelinePlaybackHelper;
}
// Forward declare root types
namespace VROSC {
struct AnimatedAppear_Mode;
}
namespace VROSC {
class AnimatedAppear;
}
// Write type traits
MARK_VAL_T(::VROSC::AnimatedAppear_Mode);
MARK_REF_PTR_T(::VROSC::AnimatedAppear);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.AnimatedAppear/Mode
struct CORDL_TYPE AnimatedAppear_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimatedAppear_Mode_Unwrapped
enum struct __AnimatedAppear_Mode_Unwrapped : int32_t {
__E_LeftToRight = static_cast<int32_t>(0x0),
__E_UpToDown = static_cast<int32_t>(0x1),
__E_CenteredHorizontal = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatedAppear_Mode_Unwrapped () const noexcept {
return static_cast<__AnimatedAppear_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppear_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatedAppear_Mode(int32_t  value__) noexcept;

/// @brief Field CenteredHorizontal value: I32(2)
static ::VROSC::AnimatedAppear_Mode const CenteredHorizontal;

/// @brief Field LeftToRight value: I32(0)
static ::VROSC::AnimatedAppear_Mode const LeftToRight;

/// @brief Field UpToDown value: I32(1)
static ::VROSC::AnimatedAppear_Mode const UpToDown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppear_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppear_Mode, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppear
class CORDL_TYPE AnimatedAppear : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::VROSC::AnimatedAppear_Mode;

 __declspec(property(get=get_Enter)) ::VROSC::AnimatedAppearSettings*  Enter;

 __declspec(property(get=get_Exit)) ::VROSC::AnimatedAppearSettings*  Exit;

 __declspec(property(get=get_IsAnimating)) bool  IsAnimating;

/// @brief Field _data, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::VROSC::AnimatedAppearData*  _data;

/// @brief Field _enter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__enter, put=__cordl_internal_set__enter)) ::VROSC::AnimatedAppearSettings*  _enter;

/// @brief Field _exit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__exit, put=__cordl_internal_set__exit)) ::VROSC::AnimatedAppearSettings*  _exit;

/// @brief Field _forceLayoutUpdate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceLayoutUpdate, put=__cordl_internal_set__forceLayoutUpdate)) bool  _forceLayoutUpdate;

/// @brief Field _move, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__move, put=__cordl_internal_set__move)) float_t  _move;

/// @brief Field _playbackHelper, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__playbackHelper, put=__cordl_internal_set__playbackHelper)) ::VROSC::TimelinePlaybackHelper*  _playbackHelper;

/// @brief Field _rectTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _setupDone, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupDone, put=__cordl_internal_set__setupDone)) bool  _setupDone;

/// @brief Field _startAnimationPlaying, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__startAnimationPlaying, put=__cordl_internal_set__startAnimationPlaying)) bool  _startAnimationPlaying;

/// @brief Field _startPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _startPositionSet, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__startPositionSet, put=__cordl_internal_set__startPositionSet)) bool  _startPositionSet;

/// @brief Method AnimationHasFinished, addr 0x17a8978, size 0x50, virtual false, abstract: false, final false
inline void AnimationHasFinished() ;

/// @brief Method Clear, addr 0x17a89e4, size 0x14, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method EditorLoadDirector, addr 0x17a8e70, size 0x38, virtual false, abstract: false, final false
inline void EditorLoadDirector(bool  enter) ;

/// @brief Method EditorUnloadDirector, addr 0x17a8c7c, size 0x11c, virtual false, abstract: false, final false
inline void EditorUnloadDirector() ;

/// @brief Method FixLayoutGroups, addr 0x17a83c0, size 0x134, virtual false, abstract: false, final false
inline void FixLayoutGroups() ;

/// @brief Method GetMovementData, addr 0x17a8a14, size 0x104, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetMovementData(bool  enter) ;

static inline ::VROSC::AnimatedAppear* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17a7fd4, size 0xcc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17a89d0, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x17a8bb4, size 0xc8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17a89c8, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x17a8664, size 0xa4, virtual false, abstract: false, final false
inline void Play(bool  playEnterAnimation) ;

/// @brief Method SetAppearActive, addr 0x17a89f8, size 0x14, virtual false, abstract: false, final false
inline void SetAppearActive(bool  appearing) ;

/// @brief Method Setup, addr 0x17a80a0, size 0x1b0, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Stop, addr 0x17a8898, size 0x78, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x17a882c, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAppearAmount, addr 0x17a84f4, size 0x18, virtual false, abstract: false, final false
inline void UpdateAppearAmount(float_t  amount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash, bool  force) ;

constexpr ::VROSC::AnimatedAppearData* const& __cordl_internal_get__data() const;

constexpr ::VROSC::AnimatedAppearData*& __cordl_internal_get__data() ;

constexpr ::VROSC::AnimatedAppearSettings* const& __cordl_internal_get__enter() const;

constexpr ::VROSC::AnimatedAppearSettings*& __cordl_internal_get__enter() ;

constexpr ::VROSC::AnimatedAppearSettings* const& __cordl_internal_get__exit() const;

constexpr ::VROSC::AnimatedAppearSettings*& __cordl_internal_get__exit() ;

constexpr bool const& __cordl_internal_get__forceLayoutUpdate() const;

constexpr bool& __cordl_internal_get__forceLayoutUpdate() ;

constexpr float_t const& __cordl_internal_get__move() const;

constexpr float_t& __cordl_internal_get__move() ;

constexpr ::VROSC::TimelinePlaybackHelper* const& __cordl_internal_get__playbackHelper() const;

constexpr ::VROSC::TimelinePlaybackHelper*& __cordl_internal_get__playbackHelper() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__setupDone() const;

constexpr bool& __cordl_internal_get__setupDone() ;

constexpr bool const& __cordl_internal_get__startAnimationPlaying() const;

constexpr bool& __cordl_internal_get__startAnimationPlaying() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr bool const& __cordl_internal_get__startPositionSet() const;

constexpr bool& __cordl_internal_get__startPositionSet() ;

constexpr void __cordl_internal_set__data(::VROSC::AnimatedAppearData*  value) ;

constexpr void __cordl_internal_set__enter(::VROSC::AnimatedAppearSettings*  value) ;

constexpr void __cordl_internal_set__exit(::VROSC::AnimatedAppearSettings*  value) ;

constexpr void __cordl_internal_set__forceLayoutUpdate(bool  value) ;

constexpr void __cordl_internal_set__move(float_t  value) ;

constexpr void __cordl_internal_set__playbackHelper(::VROSC::TimelinePlaybackHelper*  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__setupDone(bool  value) ;

constexpr void __cordl_internal_set__startAnimationPlaying(bool  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startPositionSet(bool  value) ;

/// @brief Method .ctor, addr 0x17a8ea8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enter, addr 0x17a7f04, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AnimatedAppearSettings* get_Enter() ;

/// @brief Method get_Exit, addr 0x17a7f0c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AnimatedAppearSettings* get_Exit() ;

/// @brief Method get_IsAnimating, addr 0x17a7f14, size 0x38, virtual false, abstract: false, final false
inline bool get_IsAnimating() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppear() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppear", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppear(AnimatedAppear && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppear", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppear(AnimatedAppear const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1398};

/// @brief Field _move, offset: 0x20, size: 0x4, def value: None
 float_t  ____move;

/// @brief Field _enter, offset: 0x28, size: 0x8, def value: None
 ::VROSC::AnimatedAppearSettings*  ____enter;

/// @brief Field _exit, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AnimatedAppearSettings*  ____exit;

/// @brief Field _rectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _forceLayoutUpdate, offset: 0x40, size: 0x1, def value: None
 bool  ____forceLayoutUpdate;

/// @brief Field _playbackHelper, offset: 0x48, size: 0x8, def value: None
 ::VROSC::TimelinePlaybackHelper*  ____playbackHelper;

/// @brief Field _data, offset: 0x50, size: 0x8, def value: None
 ::VROSC::AnimatedAppearData*  ____data;

/// @brief Field _startPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _startPositionSet, offset: 0x64, size: 0x1, def value: None
 bool  ____startPositionSet;

/// @brief Field _startAnimationPlaying, offset: 0x65, size: 0x1, def value: None
 bool  ____startAnimationPlaying;

/// @brief Field _setupDone, offset: 0x66, size: 0x1, def value: None
 bool  ____setupDone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppear, ____move) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____enter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____exit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____rectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____forceLayoutUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____playbackHelper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____data) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____startPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____startPositionSet) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____startAnimationPlaying) == 0x65, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppear, ____setupDone) == 0x66, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppear, 0x68>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppear_Mode, "VROSC", "AnimatedAppear/Mode");
NEED_NO_BOX(::VROSC::AnimatedAppear);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppear*, "VROSC", "AnimatedAppear");
