#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/IUnstructuredEventRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnstructuredEventRecorder)
// Forward declare root types
namespace Unity::Services::Analytics {
class IUnstructuredEventRecorder;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::IUnstructuredEventRecorder);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.IUnstructuredEventRecorder
class CORDL_TYPE IUnstructuredEventRecorder {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IUnstructuredEventRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnstructuredEventRecorder(IUnstructuredEventRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::IUnstructuredEventRecorder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::IUnstructuredEventRecorder*, "Unity.Services.Analytics", "IUnstructuredEventRecorder");
