#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Easing/Bounce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Bounce)
// Forward declare root types
namespace DG::Tweening::Core::Easing {
class Bounce;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Easing::Bounce);
// Dependencies System.Object
namespace DG::Tweening::Core::Easing {
// Is value type: false
// CS Name: DG.Tweening.Core.Easing.Bounce
class CORDL_TYPE Bounce : public ::System::Object {
public:
// Declarations
/// @brief Method EaseIn, addr 0x18ea7a8, size 0x1c, virtual false, abstract: false, final false
static inline float_t EaseIn(float_t  time, float_t  duration, float_t  unusedOvershootOrAmplitude, float_t  unusedPeriod) ;

/// @brief Method EaseInOut, addr 0x18ea880, size 0x50, virtual false, abstract: false, final false
static inline float_t EaseInOut(float_t  time, float_t  duration, float_t  unusedOvershootOrAmplitude, float_t  unusedPeriod) ;

/// @brief Method EaseOut, addr 0x18ea7c4, size 0xbc, virtual false, abstract: false, final false
static inline float_t EaseOut(float_t  time, float_t  duration, float_t  unusedOvershootOrAmplitude, float_t  unusedPeriod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bounce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bounce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bounce(Bounce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bounce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bounce(Bounce const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10864};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Easing::Bounce, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Easing
NEED_NO_BOX(::DG::Tweening::Core::Easing::Bounce);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::Bounce*, "DG.Tweening.Core.Easing", "Bounce");
