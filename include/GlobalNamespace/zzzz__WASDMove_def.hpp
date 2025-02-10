#pragma once
// IWYU pragma private; include "GlobalNamespace/WASDMove.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WASDMove)
// Forward declare root types
namespace GlobalNamespace {
class WASDMove;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WASDMove);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WASDMove
class CORDL_TYPE WASDMove : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _movementSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__movementSpeed, put=__cordl_internal_set__movementSpeed)) float_t  _movementSpeed;

static inline ::GlobalNamespace::WASDMove* New_ctor() ;

/// @brief Method Update, addr 0x16c2230, size 0x244, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__movementSpeed() const;

constexpr float_t& __cordl_internal_get__movementSpeed() ;

constexpr void __cordl_internal_set__movementSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x16c2474, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WASDMove() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WASDMove", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WASDMove(WASDMove && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WASDMove", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WASDMove(WASDMove const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{49};

/// @brief Field _movementSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ____movementSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WASDMove, ____movementSpeed) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WASDMove, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WASDMove);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WASDMove*, "", "WASDMove");
