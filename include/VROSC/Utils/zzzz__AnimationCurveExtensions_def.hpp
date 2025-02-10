#pragma once
// IWYU pragma private; include "VROSC/Utils/AnimationCurveExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationCurveExtensions)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC::Utils {
class AnimationCurveExtensions;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Utils::AnimationCurveExtensions);
// Dependencies System.Object
namespace VROSC::Utils {
// Is value type: false
// CS Name: VROSC.Utils.AnimationCurveExtensions
class CORDL_TYPE AnimationCurveExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method InverseEvaluate, addr 0x17dbba0, size 0xe8, virtual false, abstract: false, final false
static inline float_t InverseEvaluate(::UnityEngine::AnimationCurve*  ac, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurveExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurveExtensions(AnimationCurveExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurveExtensions(AnimationCurveExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Utils::AnimationCurveExtensions, 0x10>, "Size mismatch!");

} // namespace end def VROSC::Utils
NEED_NO_BOX(::VROSC::Utils::AnimationCurveExtensions);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Utils::AnimationCurveExtensions*, "VROSC.Utils", "AnimationCurveExtensions");
