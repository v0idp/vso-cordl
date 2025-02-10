#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnalyticsService)
namespace Unity::Services::Analytics {
class AnalyticsServiceInstance;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class AnalyticsService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::AnalyticsService);
// Dependencies System.Object
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.AnalyticsService
class CORDL_TYPE AnalyticsService : public ::System::Object {
public:
// Declarations
/// @brief Field internalInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_internalInstance, put=setStaticF_internalInstance)) ::Unity::Services::Analytics::AnalyticsServiceInstance*  internalInstance;

static inline ::Unity::Services::Analytics::AnalyticsServiceInstance* getStaticF_internalInstance() ;

static inline void setStaticF_internalInstance(::Unity::Services::Analytics::AnalyticsServiceInstance*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsService(AnalyticsService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsService(AnalyticsService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::AnalyticsService, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::AnalyticsService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::AnalyticsService*, "Unity.Services.Analytics", "AnalyticsService");
