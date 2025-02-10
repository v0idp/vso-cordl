#pragma once
// IWYU pragma private; include "VROSC/Utils/TransformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC::Utils {
class TransformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Utils::TransformExtensions);
// Dependencies System.Object
namespace VROSC::Utils {
// Is value type: false
// CS Name: VROSC.Utils.TransformExtensions
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method GetNormalizedPointInTransfrom, addr 0x17dbc88, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetNormalizedPointInTransfrom(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider) ;

/// @brief Method GetRelativeVelocity, addr 0x17dbde8, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetRelativeVelocity(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  sourceVelocity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformExtensions(TransformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformExtensions(TransformExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Utils::TransformExtensions, 0x10>, "Size mismatch!");

} // namespace end def VROSC::Utils
NEED_NO_BOX(::VROSC::Utils::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Utils::TransformExtensions*, "VROSC.Utils", "TransformExtensions");
