#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SteamManager)
// Forward declare root types
namespace GlobalNamespace {
class SteamManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamManager
class CORDL_TYPE SteamManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SteamManager* New_ctor() ;

/// @brief Method .ctor, addr 0x16bfc40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0x16bfc38, size 0x8, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamManager(SteamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamManager(SteamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamManager, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamManager*, "", "SteamManager");
