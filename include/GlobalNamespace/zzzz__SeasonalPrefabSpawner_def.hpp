#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonalPrefabSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SeasonalPrefabSpawner)
namespace GlobalNamespace {
class SeasonDatabase;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SeasonalPrefabSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SeasonalPrefabSpawner);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonalPrefabSpawner
class CORDL_TYPE SeasonalPrefabSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field defaultPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPrefab, put=__cordl_internal_set_defaultPrefab)) ::UnityW<::UnityEngine::GameObject>  defaultPrefab;

/// @brief Field seasonDatabase, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_seasonDatabase, put=__cordl_internal_set_seasonDatabase)) ::UnityW<::GlobalNamespace::SeasonDatabase>  seasonDatabase;

/// @brief Field winterPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_winterPrefab, put=__cordl_internal_set_winterPrefab)) ::UnityW<::UnityEngine::GameObject>  winterPrefab;

static inline ::GlobalNamespace::SeasonalPrefabSpawner* New_ctor() ;

/// @brief Method Start, addr 0x16c2f40, size 0x330, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_defaultPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_defaultPrefab() ;

constexpr ::UnityW<::GlobalNamespace::SeasonDatabase> const& __cordl_internal_get_seasonDatabase() const;

constexpr ::UnityW<::GlobalNamespace::SeasonDatabase>& __cordl_internal_get_seasonDatabase() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_winterPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_winterPrefab() ;

constexpr void __cordl_internal_set_defaultPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_seasonDatabase(::UnityW<::GlobalNamespace::SeasonDatabase>  value) ;

constexpr void __cordl_internal_set_winterPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x16c3270, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonalPrefabSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonalPrefabSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonalPrefabSpawner(SeasonalPrefabSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonalPrefabSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonalPrefabSpawner(SeasonalPrefabSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{54};

/// @brief Field seasonDatabase, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SeasonDatabase>  ___seasonDatabase;

/// @brief Field winterPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___winterPrefab;

/// @brief Field defaultPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___defaultPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonalPrefabSpawner, ___seasonDatabase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonalPrefabSpawner, ___winterPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonalPrefabSpawner, ___defaultPrefab) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonalPrefabSpawner, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SeasonalPrefabSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonalPrefabSpawner*, "", "SeasonalPrefabSpawner");
