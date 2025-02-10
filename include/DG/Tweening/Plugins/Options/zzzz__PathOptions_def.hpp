#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/PathOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__OrientType_def.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
#include "DG/Tweening/zzzz__PathMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PathOptions)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Plugins::Options::PathOptions);
// Dependencies DG.Tweening.AxisConstraint, DG.Tweening.PathMode, DG.Tweening.Plugins.Options.IPlugOptions, DG.Tweening.Plugins.Options.OrientType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace DG::Tweening::Plugins::Options {
// Is value type: true
// CS Name: DG.Tweening.Plugins.Options.PathOptions
struct CORDL_TYPE PathOptions {
public:
// Declarations
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr operator  ::DG::Tweening::Plugins::Options::IPlugOptions*() ;

/// @brief Method Reset, addr 0x18e07bc, size 0xbc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* i___DG__Tweening__Plugins__Options__IPlugOptions() ;

// Ctor Parameters []
// @brief default ctor
constexpr PathOptions() ;

// Ctor Parameters [CppParam { name: "mode", ty: "::DG::Tweening::PathMode", modifiers: "", def_value: None }, CppParam { name: "orientType", ty: "::DG::Tweening::Plugins::Options::OrientType", modifiers: "", def_value: None }, CppParam { name: "lockPositionAxis", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: None }, CppParam { name: "lockRotationAxis", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: None }, CppParam { name: "isClosedPath", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lookAtPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "lookAtTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "lookAhead", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "hasCustomForwardDirection", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "forward", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "useLocalPosition", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "isRigidbody", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startupRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "startupZRot", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "addedExtraStartWp", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "addedExtraEndWp", ty: "bool", modifiers: "", def_value: None }]
constexpr PathOptions(::DG::Tweening::PathMode  mode, ::DG::Tweening::Plugins::Options::OrientType  orientType, ::DG::Tweening::AxisConstraint  lockPositionAxis, ::DG::Tweening::AxisConstraint  lockRotationAxis, bool  isClosedPath, ::UnityEngine::Vector3  lookAtPosition, ::UnityW<::UnityEngine::Transform>  lookAtTransform, float_t  lookAhead, bool  hasCustomForwardDirection, ::UnityEngine::Quaternion  forward, bool  useLocalPosition, ::UnityW<::UnityEngine::Transform>  parent, bool  isRigidbody, ::UnityEngine::Quaternion  startupRot, float_t  startupZRot, bool  addedExtraStartWp, bool  addedExtraEndWp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field mode, offset: 0x0, size: 0x4, def value: None
 ::DG::Tweening::PathMode  mode;

/// @brief Field orientType, offset: 0x4, size: 0x4, def value: None
 ::DG::Tweening::Plugins::Options::OrientType  orientType;

/// @brief Field lockPositionAxis, offset: 0x8, size: 0x4, def value: None
 ::DG::Tweening::AxisConstraint  lockPositionAxis;

/// @brief Field lockRotationAxis, offset: 0xc, size: 0x4, def value: None
 ::DG::Tweening::AxisConstraint  lockRotationAxis;

/// @brief Field isClosedPath, offset: 0x10, size: 0x1, def value: None
 bool  isClosedPath;

/// @brief Field lookAtPosition, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  lookAtPosition;

/// @brief Field lookAtTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  lookAtTransform;

/// @brief Field lookAhead, offset: 0x28, size: 0x4, def value: None
 float_t  lookAhead;

/// @brief Field hasCustomForwardDirection, offset: 0x2c, size: 0x1, def value: None
 bool  hasCustomForwardDirection;

/// @brief Field forward, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  forward;

/// @brief Field useLocalPosition, offset: 0x40, size: 0x1, def value: None
 bool  useLocalPosition;

/// @brief Field parent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Field isRigidbody, offset: 0x50, size: 0x1, def value: None
 bool  isRigidbody;

/// @brief Field startupRot, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Quaternion  startupRot;

/// @brief Field startupZRot, offset: 0x64, size: 0x4, def value: None
 float_t  startupZRot;

/// @brief Field addedExtraStartWp, offset: 0x68, size: 0x1, def value: None
 bool  addedExtraStartWp;

/// @brief Field addedExtraEndWp, offset: 0x69, size: 0x1, def value: None
 bool  addedExtraEndWp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, orientType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, lockPositionAxis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, lockRotationAxis) == 0xc, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, isClosedPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, lookAtPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, lookAtTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, lookAhead) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, hasCustomForwardDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, forward) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, useLocalPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, parent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, isRigidbody) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, startupRot) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, startupZRot) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, addedExtraStartWp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Options::PathOptions, addedExtraEndWp) == 0x69, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Options::PathOptions, 0x70>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Options
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::PathOptions, "DG.Tweening.Plugins.Options", "PathOptions");
