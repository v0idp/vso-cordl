#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreDiagnostics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CoreDiagnostics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsComponentProvider;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreDiagnostics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreDiagnostics);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreDiagnostics
class CORDL_TYPE CoreDiagnostics : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_DiagnosticsComponentProvider)) ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  DiagnosticsComponentProvider;

/// @brief Field <CoreTags>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CoreTags_k__BackingField, put=__cordl_internal_set__CoreTags_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _CoreTags_k__BackingField;

/// @brief Field <DiagnosticsComponentProvider>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DiagnosticsComponentProvider_k__BackingField, put=__cordl_internal_set__DiagnosticsComponentProvider_k__BackingField)) ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  _DiagnosticsComponentProvider_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Unity::Services::Core::Internal::CoreDiagnostics*  _Instance_k__BackingField;

static inline ::Unity::Services::Core::Internal::CoreDiagnostics* New_ctor() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__CoreTags_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__CoreTags_k__BackingField() ;

constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* const& __cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() const;

constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*& __cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() ;

constexpr void __cordl_internal_set__CoreTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__DiagnosticsComponentProvider_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  value) ;

/// @brief Method .ctor, addr 0x2ea21ec, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Services::Core::Internal::CoreDiagnostics* getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x2ea2150, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::Internal::CoreDiagnostics* get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics*  value) ;

/// @brief Method set_DiagnosticsComponentProvider, addr 0x2ea21e4, size 0x8, virtual false, abstract: false, final false
inline void set_DiagnosticsComponentProvider(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  value) ;

/// @brief Method set_Instance, addr 0x2ea2198, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Core::Internal::CoreDiagnostics*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreDiagnostics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreDiagnostics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreDiagnostics(CoreDiagnostics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreDiagnostics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreDiagnostics(CoreDiagnostics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12005};

/// @brief Field <CoreTags>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____CoreTags_k__BackingField;

/// @brief Field <DiagnosticsComponentProvider>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  ____DiagnosticsComponentProvider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreDiagnostics, ____CoreTags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreDiagnostics, ____DiagnosticsComponentProvider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreDiagnostics, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreDiagnostics*, "Unity.Services.Core.Internal", "CoreDiagnostics");
