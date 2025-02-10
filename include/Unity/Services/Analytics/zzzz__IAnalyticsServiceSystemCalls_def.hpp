#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/IAnalyticsServiceSystemCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnalyticsServiceSystemCalls)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class IAnalyticsServiceSystemCalls;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::IAnalyticsServiceSystemCalls);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.IAnalyticsServiceSystemCalls
class CORDL_TYPE IAnalyticsServiceSystemCalls {
public:
// Declarations
 __declspec(property(get=get_UtcNow)) ::System::DateTime  UtcNow;

/// @brief Method get_UtcNow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::DateTime get_UtcNow() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsServiceSystemCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalyticsServiceSystemCalls(IAnalyticsServiceSystemCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11851};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::IAnalyticsServiceSystemCalls);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*, "Unity.Services.Analytics", "IAnalyticsServiceSystemCalls");
