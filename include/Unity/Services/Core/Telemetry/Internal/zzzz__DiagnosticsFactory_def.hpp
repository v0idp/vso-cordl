#pragma once
// IWYU pragma private; include "Unity/Services/Core/Telemetry/Internal/DiagnosticsFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DiagnosticsFactory)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DiagnosticsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory);
// Dependencies System.Object, Unity.Services.Core.Internal.IServiceComponent, Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory
class CORDL_TYPE DiagnosticsFactory : public ::System::Object {
public:
// Declarations
/// @brief Field <CommonTags>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CommonTags_k__BackingField, put=__cordl_internal_set__CommonTags_k__BackingField)) ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*  _CommonTags_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
constexpr operator  ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*() noexcept;

static inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory* New_ctor() ;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__CommonTags_k__BackingField() const;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*& __cordl_internal_get__CommonTags_k__BackingField() ;

constexpr void __cordl_internal_set__CommonTags_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x2ea6f44, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsFactory() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiagnosticsFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticsFactory(DiagnosticsFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticsFactory(DiagnosticsFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12527};

/// @brief Field <CommonTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::StringW>*  ____CommonTags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, ____CommonTags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DiagnosticsFactory*, "Unity.Services.Core.Telemetry.Internal", "DiagnosticsFactory");
