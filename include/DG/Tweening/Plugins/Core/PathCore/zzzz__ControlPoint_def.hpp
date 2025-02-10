#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/ControlPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControlPoint)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core::PathCore {
struct ControlPoint;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Core::PathCore::ControlPoint);
// Dependencies UnityEngine.Vector3
namespace DG::Tweening::Plugins::Core::PathCore {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Core.PathCore.ControlPoint
struct CORDL_TYPE ControlPoint {
public:
// Declarations
/// @brief Method ToString, addr 0x18e1a50, size 0x118, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x18e12bc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method op_Addition, addr 0x18e1a20, size 0x30, virtual false, abstract: false, final false
static inline ::DG::Tweening::Plugins::Core::PathCore::ControlPoint op_Addition(::DG::Tweening::Plugins::Core::PathCore::ControlPoint  cp, ::UnityEngine::Vector3  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControlPoint() ;

// Ctor Parameters [CppParam { name: "a", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "b", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr ControlPoint(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10826};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field a, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  a;

/// @brief Field b, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::ControlPoint, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::ControlPoint, b) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PathCore::ControlPoint, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core::PathCore
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::ControlPoint, "DG.Tweening.Plugins.Core.PathCore", "ControlPoint");
