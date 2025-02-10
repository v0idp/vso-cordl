#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ProjectConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProjectConfiguration)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace Unity::Services::Core::Configuration {
class ConfigurationEntry;
}
namespace Unity::Services::Core::Internal::Serialization {
class IJsonSerializer;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ProjectConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ProjectConfiguration);
// Dependencies System.Object, Unity.Services.Core.Configuration.Internal.IProjectConfiguration, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.ProjectConfiguration
class CORDL_TYPE ProjectConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field <Serializer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Serializer_k__BackingField, put=__cordl_internal_set__Serializer_k__BackingField)) ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  _Serializer_k__BackingField;

/// @brief Field m_ConfigValues, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConfigValues, put=__cordl_internal_set_m_ConfigValues)) ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  m_ConfigValues;

/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
constexpr operator  ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method GetString, addr 0x2e9afac, size 0xd8, virtual true, abstract: false, final true
inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

static inline ::Unity::Services::Core::Configuration::ProjectConfiguration* New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  configValues, ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* const& __cordl_internal_get__Serializer_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*& __cordl_internal_get__Serializer_k__BackingField() ;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>* const& __cordl_internal_get_m_ConfigValues() const;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*& __cordl_internal_get_m_ConfigValues() ;

constexpr void __cordl_internal_set__Serializer_k__BackingField(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  value) ;

constexpr void __cordl_internal_set_m_ConfigValues(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  value) ;

/// @brief Method .ctor, addr 0x2e9af80, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  configValues, ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IProjectConfiguration"
constexpr ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* i___Unity__Services__Core__Configuration__Internal__IProjectConfiguration() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectConfiguration(ProjectConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectConfiguration(ProjectConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12470};

/// @brief Field m_ConfigValues, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  ___m_ConfigValues;

/// @brief Field <Serializer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  ____Serializer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Configuration::ProjectConfiguration, ___m_ConfigValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::ProjectConfiguration, ____Serializer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ProjectConfiguration, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ProjectConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ProjectConfiguration*, "Unity.Services.Core.Configuration", "ProjectConfiguration");
