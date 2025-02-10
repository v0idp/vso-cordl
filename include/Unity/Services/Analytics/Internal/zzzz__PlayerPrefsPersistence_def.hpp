#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/PlayerPrefsPersistence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IPersistence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefsPersistence)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class PlayerPrefsPersistence;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::PlayerPrefsPersistence);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IPersistence
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.PlayerPrefsPersistence
class CORDL_TYPE PlayerPrefsPersistence : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IPersistence"
constexpr operator  ::Unity::Services::Analytics::Internal::IPersistence*() noexcept;

/// @brief Method LoadValue, addr 0x2e92e2c, size 0x34, virtual true, abstract: false, final true
inline int32_t LoadValue(::StringW  key) ;

static inline ::Unity::Services::Analytics::Internal::PlayerPrefsPersistence* New_ctor() ;

/// @brief Method SaveValue, addr 0x2e92e0c, size 0x20, virtual true, abstract: false, final true
inline void SaveValue(::StringW  key, int32_t  value) ;

/// @brief Method .ctor, addr 0x2e8b1c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IPersistence"
constexpr ::Unity::Services::Analytics::Internal::IPersistence* i___Unity__Services__Analytics__Internal__IPersistence() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefsPersistence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsPersistence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefsPersistence(PlayerPrefsPersistence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefsPersistence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefsPersistence(PlayerPrefsPersistence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::PlayerPrefsPersistence, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::PlayerPrefsPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::PlayerPrefsPersistence*, "Unity.Services.Analytics.Internal", "PlayerPrefsPersistence");
