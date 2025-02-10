#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/SerializableProjectConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializableProjectConfiguration)
namespace Unity::Services::Core::Configuration {
class ConfigurationEntry;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Configuration::SerializableProjectConfiguration);
// Dependencies 
namespace Unity::Services::Core::Configuration {
// Is value type: true
// CS Name: Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct CORDL_TYPE SerializableProjectConfiguration {
public:
// Declarations
/// @brief Method get_Empty, addr 0x2e9b084, size 0xf4, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::Configuration::SerializableProjectConfiguration get_Empty() ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableProjectConfiguration() ;

// Ctor Parameters [CppParam { name: "Keys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "Values", ty: "::ArrayW<::Unity::Services::Core::Configuration::ConfigurationEntry*,::Array<::Unity::Services::Core::Configuration::ConfigurationEntry*>*>", modifiers: "", def_value: None }]
constexpr SerializableProjectConfiguration(::ArrayW<::StringW,::Array<::StringW>*>  Keys, ::ArrayW<::Unity::Services::Core::Configuration::ConfigurationEntry*,::Array<::Unity::Services::Core::Configuration::ConfigurationEntry*>*>  Values) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Keys, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  Keys;

/// @brief Field Values, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Unity::Services::Core::Configuration::ConfigurationEntry*,::Array<::Unity::Services::Core::Configuration::ConfigurationEntry*>*>  Values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Configuration::SerializableProjectConfiguration, Keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::SerializableProjectConfiguration, Values) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::SerializableProjectConfiguration, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::SerializableProjectConfiguration, "Unity.Services.Core.Configuration", "SerializableProjectConfiguration");
