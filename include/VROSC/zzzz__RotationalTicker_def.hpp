#pragma once
// IWYU pragma private; include "VROSC/RotationalTicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__SignalFilter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationalTicker)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
struct RotationalTicker_TrackedDirection;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct RotationalTicker_TrackedDirection;
}
namespace VROSC {
class RotationalTicker;
}
// Write type traits
MARK_VAL_T(::VROSC::RotationalTicker_TrackedDirection);
MARK_REF_PTR_T(::VROSC::RotationalTicker);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.RotationalTicker/TrackedDirection
struct CORDL_TYPE RotationalTicker_TrackedDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationalTicker_TrackedDirection_Unwrapped
enum struct __RotationalTicker_TrackedDirection_Unwrapped : int32_t {
__E_Clockwise = static_cast<int32_t>(0x0),
__E_CounterClockwise = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationalTicker_TrackedDirection_Unwrapped () const noexcept {
return static_cast<__RotationalTicker_TrackedDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotationalTicker_TrackedDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotationalTicker_TrackedDirection(int32_t  value__) noexcept;

/// @brief Field Clockwise value: I32(0)
static ::VROSC::RotationalTicker_TrackedDirection const Clockwise;

/// @brief Field CounterClockwise value: I32(1)
static ::VROSC::RotationalTicker_TrackedDirection const CounterClockwise;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RotationalTicker_TrackedDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RotationalTicker_TrackedDirection, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Vector3, VROSC.RotationalTicker::TrackedDirection, VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RotationalTicker
class CORDL_TYPE RotationalTicker : public ::VROSC::SignalFilter {
public:
// Declarations
using TrackedDirection = ::VROSC::RotationalTicker_TrackedDirection;

/// @brief Field _angleDifference, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__angleDifference, put=__cordl_internal_set__angleDifference)) float_t  _angleDifference;

/// @brief Field _currentFrameLookDirection, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentFrameLookDirection, put=__cordl_internal_set__currentFrameLookDirection)) ::UnityEngine::Vector3  _currentFrameLookDirection;

/// @brief Field _lastFrameLookDirection, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastFrameLookDirection, put=__cordl_internal_set__lastFrameLookDirection)) ::UnityEngine::Vector3  _lastFrameLookDirection;

/// @brief Field _lastTrackedTransform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastTrackedTransform, put=__cordl_internal_set__lastTrackedTransform)) ::UnityW<::UnityEngine::Transform>  _lastTrackedTransform;

/// @brief Field _rotationalAxis, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotationalAxis, put=__cordl_internal_set__rotationalAxis)) ::UnityEngine::Vector3  _rotationalAxis;

/// @brief Field _tickDegrees, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__tickDegrees, put=__cordl_internal_set__tickDegrees)) float_t  _tickDegrees;

/// @brief Field _tickedLastFrame, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__tickedLastFrame, put=__cordl_internal_set__tickedLastFrame)) bool  _tickedLastFrame;

/// @brief Field _trackedDirection, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__trackedDirection, put=__cordl_internal_set__trackedDirection)) ::VROSC::RotationalTicker_TrackedDirection  _trackedDirection;

/// @brief Field _transformToTrack, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformToTrack, put=__cordl_internal_set__transformToTrack)) ::UnityW<::UnityEngine::Transform>  _transformToTrack;

/// @brief Method FilterSignal, addr 0x1725304, size 0x230, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::RotationalTicker* New_ctor() ;

/// @brief Method TickClockwise, addr 0x1725550, size 0x1c, virtual false, abstract: false, final false
inline void TickClockwise() ;

/// @brief Method TickCounterClockwise, addr 0x1725534, size 0x1c, virtual false, abstract: false, final false
inline void TickCounterClockwise() ;

constexpr float_t const& __cordl_internal_get__angleDifference() const;

constexpr float_t& __cordl_internal_get__angleDifference() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentFrameLookDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentFrameLookDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastFrameLookDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastFrameLookDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__lastTrackedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__lastTrackedTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationalAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationalAxis() ;

constexpr float_t const& __cordl_internal_get__tickDegrees() const;

constexpr float_t& __cordl_internal_get__tickDegrees() ;

constexpr bool const& __cordl_internal_get__tickedLastFrame() const;

constexpr bool& __cordl_internal_get__tickedLastFrame() ;

constexpr ::VROSC::RotationalTicker_TrackedDirection const& __cordl_internal_get__trackedDirection() const;

constexpr ::VROSC::RotationalTicker_TrackedDirection& __cordl_internal_get__trackedDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transformToTrack() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transformToTrack() ;

constexpr void __cordl_internal_set__angleDifference(float_t  value) ;

constexpr void __cordl_internal_set__currentFrameLookDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastFrameLookDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastTrackedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rotationalAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__tickDegrees(float_t  value) ;

constexpr void __cordl_internal_set__tickedLastFrame(bool  value) ;

constexpr void __cordl_internal_set__trackedDirection(::VROSC::RotationalTicker_TrackedDirection  value) ;

constexpr void __cordl_internal_set__transformToTrack(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x172556c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationalTicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationalTicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationalTicker(RotationalTicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationalTicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationalTicker(RotationalTicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1011};

/// @brief Field _trackedDirection, offset: 0x48, size: 0x4, def value: None
 ::VROSC::RotationalTicker_TrackedDirection  ____trackedDirection;

/// @brief Field _transformToTrack, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transformToTrack;

/// @brief Field _lastTrackedTransform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____lastTrackedTransform;

/// @brief Field _tickDegrees, offset: 0x60, size: 0x4, def value: None
 float_t  ____tickDegrees;

/// @brief Field _rotationalAxis, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotationalAxis;

/// @brief Field _lastFrameLookDirection, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastFrameLookDirection;

/// @brief Field _currentFrameLookDirection, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentFrameLookDirection;

/// @brief Field _angleDifference, offset: 0x88, size: 0x4, def value: None
 float_t  ____angleDifference;

/// @brief Field _tickedLastFrame, offset: 0x8c, size: 0x1, def value: None
 bool  ____tickedLastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RotationalTicker, ____trackedDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____transformToTrack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____lastTrackedTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____tickDegrees) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____rotationalAxis) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____lastFrameLookDirection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____currentFrameLookDirection) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____angleDifference) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::RotationalTicker, ____tickedLastFrame) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RotationalTicker, 0x90>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RotationalTicker_TrackedDirection, "VROSC", "RotationalTicker/TrackedDirection");
NEED_NO_BOX(::VROSC::RotationalTicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RotationalTicker*, "VROSC", "RotationalTicker");
