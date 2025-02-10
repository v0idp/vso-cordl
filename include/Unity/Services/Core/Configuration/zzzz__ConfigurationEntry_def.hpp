#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ConfigurationEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigurationEntry)
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ConfigurationEntry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ConfigurationEntry);
// Dependencies System.Object
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.ConfigurationEntry
class CORDL_TYPE ConfigurationEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Field m_IsReadOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsReadOnly, put=__cordl_internal_set_m_IsReadOnly)) bool  m_IsReadOnly;

/// @brief Field m_Value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) ::StringW  m_Value;

static inline ::Unity::Services::Core::Configuration::ConfigurationEntry* New_ctor() ;

static inline ::Unity::Services::Core::Configuration::ConfigurationEntry* New_ctor(::StringW  value, bool  isReadOnly) ;

/// @brief Method TrySetValue, addr 0x2e9ad8c, size 0x18, virtual false, abstract: false, final false
inline bool TrySetValue(::StringW  value) ;

constexpr bool const& __cordl_internal_get_m_IsReadOnly() const;

constexpr bool& __cordl_internal_get_m_IsReadOnly() ;

constexpr ::StringW const& __cordl_internal_get_m_Value() const;

constexpr ::StringW& __cordl_internal_get_m_Value() ;

constexpr void __cordl_internal_set_m_IsReadOnly(bool  value) ;

constexpr void __cordl_internal_set_m_Value(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e9adb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2e9adbc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  value, bool  isReadOnly) ;

/// @brief Method get_IsReadOnly, addr 0x2e9adac, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Value, addr 0x2e9ada4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method op_Implicit, addr 0x2e9ad74, size 0x18, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Unity::Services::Core::Configuration::ConfigurationEntry*  entry) ;

/// @brief Method op_Implicit, addr 0x2e9ad14, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::Configuration::ConfigurationEntry* op_Implicit___Unity__Services__Core__Configuration__ConfigurationEntry_(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationEntry(ConfigurationEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationEntry(ConfigurationEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12466};

/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Value;

/// @brief Field m_IsReadOnly, offset: 0x18, size: 0x1, def value: None
 bool  ___m_IsReadOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Configuration::ConfigurationEntry, ___m_Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::ConfigurationEntry, ___m_IsReadOnly) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ConfigurationEntry, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ConfigurationEntry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ConfigurationEntry*, "Unity.Services.Core.Configuration", "ConfigurationEntry");
