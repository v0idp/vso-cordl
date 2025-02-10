#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/CoreStatsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/zzzz__ICoreStatsHelper_def.hpp"
CORDL_MODULE_EXPORT(CoreStatsHelper)
// Forward declare root types
namespace Unity::Services::Analytics {
class CoreStatsHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::CoreStatsHelper);
// Dependencies System.Object, Unity.Services.Analytics.ICoreStatsHelper
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.CoreStatsHelper
class CORDL_TYPE CoreStatsHelper : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Analytics::ICoreStatsHelper"
constexpr operator  ::Unity::Services::Analytics::ICoreStatsHelper*() noexcept;

static inline ::Unity::Services::Analytics::CoreStatsHelper* New_ctor() ;

/// @brief Method SetCoreStatsConsent, addr 0x2e8ef1c, size 0xc, virtual true, abstract: false, final true
inline void SetCoreStatsConsent(bool  userProvidedConsent) ;

/// @brief Method .ctor, addr 0x2e8a7ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::ICoreStatsHelper"
constexpr ::Unity::Services::Analytics::ICoreStatsHelper* i___Unity__Services__Analytics__ICoreStatsHelper() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreStatsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreStatsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreStatsHelper(CoreStatsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreStatsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreStatsHelper(CoreStatsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::CoreStatsHelper, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::CoreStatsHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::CoreStatsHelper*, "Unity.Services.Analytics", "CoreStatsHelper");
