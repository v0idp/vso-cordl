#pragma once
// IWYU pragma private; include "VROSC/SmoothMovement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothMovement)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class SmoothMovement;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SmoothMovement);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SmoothMovement
class CORDL_TYPE SmoothMovement : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SmoothPosition, put=set_SmoothPosition)) ::UnityEngine::Vector3  SmoothPosition;

/// @brief Field <SmoothPosition>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__SmoothPosition_k__BackingField, put=__cordl_internal_set__SmoothPosition_k__BackingField)) ::UnityEngine::Vector3  _SmoothPosition_k__BackingField;

/// @brief Field _needsReset, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsReset, put=__cordl_internal_set__needsReset)) bool  _needsReset;

/// @brief Field _smoothingVelocity, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get__smoothingVelocity, put=__cordl_internal_set__smoothingVelocity)) ::UnityEngine::Vector3  _smoothingVelocity;

static inline ::VROSC::SmoothMovement* New_ctor(::UnityEngine::Vector3  position) ;

/// @brief Method ResetSmoothing, addr 0x1715068, size 0xc, virtual false, abstract: false, final false
inline void ResetSmoothing() ;

/// @brief Method Update, addr 0x1714fb0, size 0xb8, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Vector3  position, float_t  smoothing) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__SmoothPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__SmoothPosition_k__BackingField() ;

constexpr bool const& __cordl_internal_get__needsReset() const;

constexpr bool& __cordl_internal_get__needsReset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__smoothingVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__smoothingVelocity() ;

constexpr void __cordl_internal_set__SmoothPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__needsReset(bool  value) ;

constexpr void __cordl_internal_set__smoothingVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1714f74, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position) ;

/// @brief Method get_SmoothPosition, addr 0x1714f68, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_SmoothPosition() ;

/// @brief Method set_SmoothPosition, addr 0x1714f5c, size 0xc, virtual false, abstract: false, final false
inline void set_SmoothPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmoothMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothMovement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothMovement(SmoothMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothMovement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothMovement(SmoothMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{910};

/// @brief Field <SmoothPosition>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____SmoothPosition_k__BackingField;

/// @brief Field _smoothingVelocity, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____smoothingVelocity;

/// @brief Field _needsReset, offset: 0x28, size: 0x1, def value: None
 bool  ____needsReset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SmoothMovement, ____SmoothPosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SmoothMovement, ____smoothingVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SmoothMovement, ____needsReset) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SmoothMovement, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SmoothMovement);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SmoothMovement*, "VROSC", "SmoothMovement");
