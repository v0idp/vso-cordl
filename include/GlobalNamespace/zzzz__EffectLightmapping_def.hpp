#pragma once
// IWYU pragma private; include "GlobalNamespace/EffectLightmapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EffectLightmapping)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EffectLightmapping;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EffectLightmapping);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EffectLightmapping
class CORDL_TYPE EffectLightmapping : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _effectLighting, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectLighting, put=__cordl_internal_set__effectLighting)) ::UnityW<::UnityEngine::GameObject>  _effectLighting;

/// @brief Field _normalLighting, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalLighting, put=__cordl_internal_set__normalLighting)) ::UnityW<::UnityEngine::GameObject>  _normalLighting;

static inline ::GlobalNamespace::EffectLightmapping* New_ctor() ;

/// @brief Method ShowEffectLighting, addr 0x16c2484, size 0x48, virtual false, abstract: false, final false
inline void ShowEffectLighting(bool  showEffects) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__effectLighting() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__effectLighting() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalLighting() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalLighting() ;

constexpr void __cordl_internal_set__effectLighting(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__normalLighting(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x16c24cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EffectLightmapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EffectLightmapping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EffectLightmapping(EffectLightmapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EffectLightmapping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EffectLightmapping(EffectLightmapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{50};

/// @brief Field _normalLighting, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____normalLighting;

/// @brief Field _effectLighting, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____effectLighting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EffectLightmapping, ____normalLighting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectLightmapping, ____effectLighting) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EffectLightmapping, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EffectLightmapping);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectLightmapping*, "", "EffectLightmapping");
