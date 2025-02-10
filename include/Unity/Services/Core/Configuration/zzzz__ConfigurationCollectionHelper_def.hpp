#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ConfigurationCollectionHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigurationCollectionHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Unity::Services::Core::Configuration {
class ConfigurationEntry;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ConfigurationCollectionHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ConfigurationCollectionHelper);
// Dependencies System.Object
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.ConfigurationCollectionHelper
class CORDL_TYPE ConfigurationCollectionHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FillWith, addr 0x2e9a770, size 0x90, virtual false, abstract: false, final false
static inline void FillWith(::System::Collections::Generic::IDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  self, ::Unity::Services::Core::Configuration::SerializableProjectConfiguration  config) ;

/// @brief Method FillWith, addr 0x2e9a990, size 0x384, virtual false, abstract: false, final false
static inline void FillWith(::System::Collections::Generic::IDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  self, ::Unity::Services::Core::InitializationOptions*  options) ;

/// @brief Method SetOrCreateEntry, addr 0x2e9a800, size 0x190, virtual false, abstract: false, final false
static inline void SetOrCreateEntry(::System::Collections::Generic::IDictionary_2<::StringW,::Unity::Services::Core::Configuration::ConfigurationEntry*>*  self, ::StringW  key, ::Unity::Services::Core::Configuration::ConfigurationEntry*  entry) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationCollectionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationCollectionHelper(ConfigurationCollectionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationCollectionHelper(ConfigurationCollectionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ConfigurationCollectionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*, "Unity.Services.Core.Configuration", "ConfigurationCollectionHelper");
