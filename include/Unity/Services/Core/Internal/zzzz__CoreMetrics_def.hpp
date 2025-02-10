#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CoreMetrics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Type;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreMetrics);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreMetrics
class CORDL_TYPE CoreMetrics : public ::System::Object {
public:
// Declarations
/// @brief Field <AllPackageMetrics>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AllPackageMetrics_k__BackingField, put=__cordl_internal_set__AllPackageMetrics_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*  _AllPackageMetrics_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Unity::Services::Core::Internal::CoreMetrics*  _Instance_k__BackingField;

static inline ::Unity::Services::Core::Internal::CoreMetrics* New_ctor() ;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>* const& __cordl_internal_get__AllPackageMetrics_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*& __cordl_internal_get__AllPackageMetrics_k__BackingField() ;

constexpr void __cordl_internal_set__AllPackageMetrics_k__BackingField(::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*  value) ;

/// @brief Method .ctor, addr 0x2ea22b4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Services::Core::Internal::CoreMetrics* getStaticF__Instance_k__BackingField() ;

static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics*  value) ;

/// @brief Method set_Instance, addr 0x2ea2268, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Core::Internal::CoreMetrics*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreMetrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreMetrics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreMetrics(CoreMetrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreMetrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreMetrics(CoreMetrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12006};

/// @brief Field <AllPackageMetrics>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*  ____AllPackageMetrics_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreMetrics, ____AllPackageMetrics_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreMetrics, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreMetrics*, "Unity.Services.Core.Internal", "CoreMetrics");
