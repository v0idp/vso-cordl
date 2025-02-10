#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/Metrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Metrics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class Metrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::Metrics);
// Dependencies System.Object, Unity.Services.Core.Telemetry.Internal.IMetrics
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Telemetry.Internal.Metrics
class CORDL_TYPE Metrics : public ::System::Object {
public:
// Declarations
/// @brief Field <PackageTags>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackageTags_k__BackingField, put=__cordl_internal_set__PackageTags_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _PackageTags_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr operator  ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept;

static inline ::Unity::Services::Core::Telemetry::Internal::Metrics* New_ctor() ;

/// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric, addr 0x2ea6fc0, size 0x4, virtual true, abstract: false, final true
inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW  name, double_t  value, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  tags) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__PackageTags_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__PackageTags_k__BackingField() ;

constexpr void __cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x2ea6fc4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Metrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Metrics(Metrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Metrics(Metrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12528};

/// @brief Field <PackageTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____PackageTags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metrics, ____PackageTags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::Metrics, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::Metrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::Metrics*, "Unity.Services.Core.Telemetry.Internal", "Metrics");
