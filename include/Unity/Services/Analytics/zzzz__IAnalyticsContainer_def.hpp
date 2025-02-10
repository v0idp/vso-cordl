#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/IAnalyticsContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnalyticsContainer)
// Forward declare root types
namespace Unity::Services::Analytics {
class IAnalyticsContainer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::IAnalyticsContainer);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.IAnalyticsContainer
class CORDL_TYPE IAnalyticsContainer {
public:
// Declarations
/// @brief Method Disable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Enable() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnalyticsContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalyticsContainer(IAnalyticsContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::IAnalyticsContainer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::IAnalyticsContainer*, "Unity.Services.Analytics", "IAnalyticsContainer");
