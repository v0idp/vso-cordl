#pragma once
// IWYU pragma private; include "VROSC/TransformMoverRelay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Grabable_def.hpp"
CORDL_MODULE_EXPORT(TransformMoverRelay)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class TransformMoverRelay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformMoverRelay);
// Dependencies VROSC.Grabable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformMoverRelay
class CORDL_TYPE TransformMoverRelay : public ::VROSC::Grabable {
public:
// Declarations
 __declspec(property(get=get_Target)) ::UnityW<::VROSC::TransformMover>  Target;

/// @brief Field _target, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::TransformMover>  _target;

/// @brief Method Grab, addr 0x1740058, size 0xb4, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

static inline ::VROSC::TransformMoverRelay* New_ctor() ;

/// @brief Method ResetRelay, addr 0x173ffd8, size 0x80, virtual false, abstract: false, final false
inline void ResetRelay() ;

/// @brief Method SetHovering, addr 0x174010c, size 0x108, virtual true, abstract: false, final false
inline void SetHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  controllerIsHovering) ;

/// @brief Method SetTarget, addr 0x1740214, size 0x8c, virtual false, abstract: false, final false
inline void SetTarget(::VROSC::TransformMover*  transformMover) ;

/// @brief Method Start, addr 0x173ff58, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::TransformMover>  value) ;

/// @brief Method .ctor, addr 0x17402a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Target, addr 0x173ff50, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> get_Target() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformMoverRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformMoverRelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformMoverRelay(TransformMoverRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformMoverRelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformMoverRelay(TransformMoverRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1109};

/// @brief Field _target, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformMoverRelay, ____target) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformMoverRelay, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformMoverRelay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMoverRelay*, "VROSC", "TransformMoverRelay");
