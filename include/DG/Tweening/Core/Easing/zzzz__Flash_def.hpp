#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Easing/Flash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Flash)
// Forward declare root types
namespace DG::Tweening::Core::Easing {
class Flash;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Easing::Flash);
// Dependencies System.Object
namespace DG::Tweening::Core::Easing {
// Is value type: false
// CS Name: DG.Tweening.Core.Easing.Flash
class CORDL_TYPE Flash : public ::System::Object {
public:
// Declarations
/// @brief Method Ease, addr 0x18eb330, size 0xc4, virtual false, abstract: false, final false
static inline float_t Ease(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method EaseIn, addr 0x18eb3f4, size 0xc8, virtual false, abstract: false, final false
static inline float_t EaseIn(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method EaseInOut, addr 0x18eb590, size 0x104, virtual false, abstract: false, final false
static inline float_t EaseInOut(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method EaseOut, addr 0x18eb4bc, size 0xd4, virtual false, abstract: false, final false
static inline float_t EaseOut(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method WeightedEase, addr 0x18ed7e8, size 0x144, virtual false, abstract: false, final false
static inline float_t WeightedEase(float_t  overshootOrAmplitude, float_t  period, int32_t  stepIndex, float_t  stepDuration, float_t  dir, float_t  res) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Flash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Flash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Flash(Flash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Flash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Flash(Flash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Easing::Flash, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Easing
NEED_NO_BOX(::DG::Tweening::Core::Easing::Flash);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::Flash*, "DG.Tweening.Core.Easing", "Flash");
