#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/IMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IMetrics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IMetrics);
// Dependencies 
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Telemetry.Internal.IMetrics
class CORDL_TYPE IMetrics {
public:
// Declarations
/// @brief Method SendSumMetric, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendSumMetric(::StringW  name, double_t  value, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  tags) ;

// Ctor Parameters [CppParam { name: "", ty: "IMetrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMetrics(IMetrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IMetrics*, "Unity.Services.Core.Telemetry.Internal", "IMetrics");
