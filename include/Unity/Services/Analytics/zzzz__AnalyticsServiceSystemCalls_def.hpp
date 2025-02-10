#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsServiceSystemCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsServiceSystemCalls_def.hpp"
CORDL_MODULE_EXPORT(AnalyticsServiceSystemCalls)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class AnalyticsServiceSystemCalls;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::AnalyticsServiceSystemCalls);
// Dependencies System.Object, Unity.Services.Analytics.IAnalyticsServiceSystemCalls
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.AnalyticsServiceSystemCalls
class CORDL_TYPE AnalyticsServiceSystemCalls : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UtcNow)) ::System::DateTime  UtcNow;

/// @brief Convert operator to "::Unity::Services::Analytics::IAnalyticsServiceSystemCalls"
constexpr operator  ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*() noexcept;

static inline ::Unity::Services::Analytics::AnalyticsServiceSystemCalls* New_ctor() ;

/// @brief Method .ctor, addr 0x2e8b2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UtcNow, addr 0x2e8ec78, size 0x50, virtual true, abstract: false, final true
inline ::System::DateTime get_UtcNow() ;

/// @brief Convert to "::Unity::Services::Analytics::IAnalyticsServiceSystemCalls"
constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls* i___Unity__Services__Analytics__IAnalyticsServiceSystemCalls() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsServiceSystemCalls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsServiceSystemCalls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsServiceSystemCalls(AnalyticsServiceSystemCalls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsServiceSystemCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsServiceSystemCalls(AnalyticsServiceSystemCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::AnalyticsServiceSystemCalls, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::AnalyticsServiceSystemCalls);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::AnalyticsServiceSystemCalls*, "Unity.Services.Analytics", "AnalyticsServiceSystemCalls");
