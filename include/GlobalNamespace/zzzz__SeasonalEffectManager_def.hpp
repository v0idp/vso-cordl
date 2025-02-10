#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonalEffectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SeasonalEffectManager)
namespace GlobalNamespace {
class SeasonDatabase;
}
namespace GlobalNamespace {
class SeasonMaterialChanger;
}
// Forward declare root types
namespace GlobalNamespace {
class SeasonalEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SeasonalEffectManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonalEffectManager
class CORDL_TYPE SeasonalEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field materialChanger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialChanger, put=__cordl_internal_set_materialChanger)) ::UnityW<::GlobalNamespace::SeasonMaterialChanger>  materialChanger;

/// @brief Field seasonDatabase, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_seasonDatabase, put=__cordl_internal_set_seasonDatabase)) ::UnityW<::GlobalNamespace::SeasonDatabase>  seasonDatabase;

static inline ::GlobalNamespace::SeasonalEffectManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16c2f1c, size 0x1c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x16c2b3c, size 0xfc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::SeasonMaterialChanger> const& __cordl_internal_get_materialChanger() const;

constexpr ::UnityW<::GlobalNamespace::SeasonMaterialChanger>& __cordl_internal_get_materialChanger() ;

constexpr ::UnityW<::GlobalNamespace::SeasonDatabase> const& __cordl_internal_get_seasonDatabase() const;

constexpr ::UnityW<::GlobalNamespace::SeasonDatabase>& __cordl_internal_get_seasonDatabase() ;

constexpr void __cordl_internal_set_materialChanger(::UnityW<::GlobalNamespace::SeasonMaterialChanger>  value) ;

constexpr void __cordl_internal_set_seasonDatabase(::UnityW<::GlobalNamespace::SeasonDatabase>  value) ;

/// @brief Method .ctor, addr 0x16c2f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonalEffectManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonalEffectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonalEffectManager(SeasonalEffectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonalEffectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonalEffectManager(SeasonalEffectManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{53};

/// @brief Field seasonDatabase, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SeasonDatabase>  ___seasonDatabase;

/// @brief Field materialChanger, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SeasonMaterialChanger>  ___materialChanger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonalEffectManager, ___seasonDatabase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonalEffectManager, ___materialChanger) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonalEffectManager, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SeasonalEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonalEffectManager*, "", "SeasonalEffectManager");
