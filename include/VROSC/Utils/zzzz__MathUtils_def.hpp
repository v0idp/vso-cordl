#pragma once
// IWYU pragma private; include "VROSC/Utils/MathUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtils)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC::Utils {
class MathUtils;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Utils::MathUtils);
// Dependencies System.Object
namespace VROSC::Utils {
// Is value type: false
// CS Name: VROSC.Utils.MathUtils
class CORDL_TYPE MathUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetNormalizedAngle, addr 0x17dc3f8, size 0x68, virtual false, abstract: false, final false
static inline float_t GetNormalizedAngle(float_t  eulerAngle) ;

/// @brief Method GetNormalizedRotation, addr 0x17dc2f8, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetNormalizedRotation(::UnityEngine::Vector3  eulerAngles) ;

/// @brief Method Lerp, addr 0x17dc23c, size 0xbc, virtual false, abstract: false, final false
static inline double_t Lerp(double_t  a, double_t  b, double_t  t) ;

/// @brief Method ToPercent, addr 0x17dc160, size 0xdc, virtual false, abstract: false, final false
static inline int32_t ToPercent(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtils(MathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtils(MathUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Utils::MathUtils, 0x10>, "Size mismatch!");

} // namespace end def VROSC::Utils
NEED_NO_BOX(::VROSC::Utils::MathUtils);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Utils::MathUtils*, "VROSC.Utils", "MathUtils");
