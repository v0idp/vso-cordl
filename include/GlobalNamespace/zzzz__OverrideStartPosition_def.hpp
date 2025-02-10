#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideStartPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(OverrideStartPosition)
// Forward declare root types
namespace GlobalNamespace {
class OverrideStartPosition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideStartPosition);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverrideStartPosition
class CORDL_TYPE OverrideStartPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _startPosition, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _startRotation, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startRotation, put=__cordl_internal_set__startRotation)) ::UnityEngine::Vector3  _startRotation;

static inline ::GlobalNamespace::OverrideStartPosition* New_ctor() ;

/// @brief Method Start, addr 0x16c21b0, size 0x78, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startRotation() ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x16c2228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverrideStartPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverrideStartPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverrideStartPosition(OverrideStartPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverrideStartPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverrideStartPosition(OverrideStartPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{48};

/// @brief Field _startPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _startRotation, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverrideStartPosition, ____startPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideStartPosition, ____startRotation) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideStartPosition, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideStartPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideStartPosition*, "", "OverrideStartPosition");
