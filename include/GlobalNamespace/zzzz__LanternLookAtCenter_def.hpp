#pragma once
// IWYU pragma private; include "GlobalNamespace/LanternLookAtCenter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LanternLookAtCenter)
// Forward declare root types
namespace GlobalNamespace {
class LanternLookAtCenter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanternLookAtCenter);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LanternLookAtCenter
class CORDL_TYPE LanternLookAtCenter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Method LookAtCenter, addr 0x16c2ab8, size 0x7c, virtual false, abstract: false, final false
inline void LookAtCenter() ;

static inline ::GlobalNamespace::LanternLookAtCenter* New_ctor() ;

/// @brief Method OnEnable, addr 0x16c2a3c, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr void __cordl_internal_set__height(float_t  value) ;

/// @brief Method .ctor, addr 0x16c2b34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LanternLookAtCenter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LanternLookAtCenter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LanternLookAtCenter(LanternLookAtCenter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LanternLookAtCenter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LanternLookAtCenter(LanternLookAtCenter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{52};

/// @brief Field _height, offset: 0x20, size: 0x4, def value: None
 float_t  ____height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LanternLookAtCenter, ____height) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanternLookAtCenter, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanternLookAtCenter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanternLookAtCenter*, "", "LanternLookAtCenter");
