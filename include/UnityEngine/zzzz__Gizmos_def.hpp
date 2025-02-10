#pragma once
// IWYU pragma private; include "UnityEngine/Gizmos.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Gizmos)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gizmos);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gizmos
class CORDL_TYPE Gizmos : public ::System::Object {
public:
// Declarations
/// @brief Method DrawLine, addr 0x2f67c94, size 0x50, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method DrawLine_Injected, addr 0x2f67ce4, size 0x44, virtual false, abstract: false, final false
static inline void DrawLine_Injected(::ByRef<::UnityEngine::Vector3>  from, ::ByRef<::UnityEngine::Vector3>  to) ;

/// @brief Method DrawSphere, addr 0x2f67dc8, size 0x54, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawSphere_Injected, addr 0x2f67e1c, size 0x4c, virtual false, abstract: false, final false
static inline void DrawSphere_Injected(::ByRef<::UnityEngine::Vector3>  center, float_t  radius) ;

/// @brief Method DrawWireSphere, addr 0x2f67d28, size 0x54, virtual false, abstract: false, final false
static inline void DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawWireSphere_Injected, addr 0x2f67d7c, size 0x4c, virtual false, abstract: false, final false
static inline void DrawWireSphere_Injected(::ByRef<::UnityEngine::Vector3>  center, float_t  radius) ;

/// @brief Method set_color, addr 0x2f67e68, size 0x44, virtual false, abstract: false, final false
static inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x2f67eac, size 0x3c, virtual false, abstract: false, final false
static inline void set_color_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_matrix, addr 0x2f67ee8, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_matrix_Injected, addr 0x2f67f24, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gizmos(Gizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gizmos(Gizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8434};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Gizmos, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
