#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/Analytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Analytics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
namespace UnityEngine::Analytics {
class CustomEventData;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class Analytics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::Analytics);
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.Analytics
class CORDL_TYPE Analytics : public ::System::Object {
public:
// Declarations
/// @brief Method CustomEvent, addr 0x31924cc, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult CustomEvent(::StringW  customEventName) ;

/// @brief Method CustomEvent, addr 0x3192594, size 0x1dc, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult CustomEvent(::StringW  customEventName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData) ;

/// @brief Method IsInitialized, addr 0x3192344, size 0x28, virtual false, abstract: false, final false
static inline bool IsInitialized() ;

/// @brief Method RegisterEvent, addr 0x3192770, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, ::StringW  prefix) ;

/// @brief Method RegisterEvent, addr 0x3192800, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo) ;

/// @brief Method RegisterEventWithLimit, addr 0x31923e4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEventWithLimit(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo, bool  notifyServer) ;

/// @brief Method SendCustomEvent, addr 0x31923a8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendCustomEvent(::UnityEngine::Analytics::CustomEventData*  eventData) ;

/// @brief Method SendCustomEventName, addr 0x319236c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendCustomEventName(::StringW  customEventName) ;

/// @brief Method SendEvent, addr 0x3192920, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendEvent(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix) ;

/// @brief Method SendEventWithLimit, addr 0x3192470, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendEventWithLimit(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Analytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Analytics(Analytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Analytics(Analytics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::Analytics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::Analytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::Analytics*, "UnityEngine.Analytics", "Analytics");
