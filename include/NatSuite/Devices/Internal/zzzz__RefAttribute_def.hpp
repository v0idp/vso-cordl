#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/RefAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RefAttribute)
// Forward declare root types
namespace NatSuite::Devices::Internal {
class RefAttribute;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Internal::RefAttribute);
// Dependencies System.Attribute
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.RefAttribute
class CORDL_TYPE RefAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::NatSuite::Devices::Internal::RefAttribute* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  keys) ;

/// @brief Method .ctor, addr 0x17ff5f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  keys) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RefAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RefAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RefAttribute(RefAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefAttribute(RefAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::RefAttribute, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
NEED_NO_BOX(::NatSuite::Devices::Internal::RefAttribute);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::RefAttribute*, "NatSuite.Devices.Internal", "RefAttribute");
