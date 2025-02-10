#pragma once
// IWYU pragma private; include "VROSC/CopyVRCameraPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopyVRCameraPosition)
// Forward declare root types
namespace VROSC {
class CopyVRCameraPosition;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CopyVRCameraPosition);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CopyVRCameraPosition
class CORDL_TYPE CopyVRCameraPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method LateUpdate, addr 0x1740394, size 0x118, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::CopyVRCameraPosition* New_ctor() ;

/// @brief Method .ctor, addr 0x17404ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyVRCameraPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyVRCameraPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyVRCameraPosition(CopyVRCameraPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyVRCameraPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyVRCameraPosition(CopyVRCameraPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::CopyVRCameraPosition, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CopyVRCameraPosition);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CopyVRCameraPosition*, "VROSC", "CopyVRCameraPosition");
