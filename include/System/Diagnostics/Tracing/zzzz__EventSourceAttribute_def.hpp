#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSourceAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventSourceAttribute)
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSourceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::EventSourceAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// CS Name: System.Diagnostics.Tracing.EventSourceAttribute
class CORDL_TYPE EventSourceAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_Guid)) ::StringW  Guid;

 __declspec(property(put=set_Name)) ::StringW  Name;

/// @brief Field <Guid>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Guid_k__BackingField, put=__cordl_internal_set__Guid_k__BackingField)) ::StringW  _Guid_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::System::Diagnostics::Tracing::EventSourceAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Guid_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Guid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Guid_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2714660, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_Guid, addr 0x2714650, size 0x8, virtual false, abstract: false, final false
inline void set_Guid(::StringW  value) ;

/// @brief Method set_Name, addr 0x2714658, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSourceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSourceAttribute(EventSourceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSourceAttribute(EventSourceAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3396};

/// @brief Field <Guid>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Guid_k__BackingField;

/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventSourceAttribute, ____Guid_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Tracing::EventSourceAttribute, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventSourceAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSourceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSourceAttribute*, "System.Diagnostics.Tracing", "EventSourceAttribute");
