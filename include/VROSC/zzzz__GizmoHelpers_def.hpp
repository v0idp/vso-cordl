#pragma once
// IWYU pragma private; include "VROSC/GizmoHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GizmoHelpers)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class GizmoHelpers;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GizmoHelpers);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GizmoHelpers
class CORDL_TYPE GizmoHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method DrawGizmoRect, addr 0x1889998, size 0x178, virtual false, abstract: false, final false
static inline void DrawGizmoRect(::UnityEngine::Transform*  transform, ::UnityEngine::Rect  rect) ;

/// @brief Method DrawGizmoWireBox, addr 0x1889b10, size 0x7c, virtual false, abstract: false, final false
static inline void DrawGizmoWireBox(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size) ;

/// @brief Method DrawGizmoWireBox, addr 0x1889b8c, size 0x380, virtual false, abstract: false, final false
static inline void DrawGizmoWireBox(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  localOffset) ;

/// @brief Method GetParentRecursive, addr 0x18898c0, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW GetParentRecursive(::UnityEngine::Transform*  transform, ::StringW  text) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoHelpers(GizmoHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoHelpers(GizmoHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::GizmoHelpers, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GizmoHelpers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GizmoHelpers*, "VROSC", "GizmoHelpers");
