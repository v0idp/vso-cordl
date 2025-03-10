#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUILayout)
namespace UnityEngine {
class GUILayoutOption;
}
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayout);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayout
class CORDL_TYPE GUILayout : public ::System::Object {
public:
// Declarations
/// @brief Method Height, addr 0x2faeb34, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::GUILayoutOption* Height(float_t  height) ;

/// @brief Method Width, addr 0x2faeaa0, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::GUILayoutOption* Width(float_t  width) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUILayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUILayout(GUILayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUILayout(GUILayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayout, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
