#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/DocAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocAttribute)
// Forward declare root types
namespace NatSuite::Devices::Internal {
class DocAttribute;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Internal::DocAttribute);
// Dependencies System.Attribute
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.DocAttribute
class CORDL_TYPE DocAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::NatSuite::Devices::Internal::DocAttribute* New_ctor(::StringW  descriptionKey) ;

static inline ::NatSuite::Devices::Internal::DocAttribute* New_ctor(::StringW  summaryKey, ::StringW  descriptionKey) ;

/// @brief Method .ctor, addr 0x17ff5e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  descriptionKey) ;

/// @brief Method .ctor, addr 0x17ff5e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  summaryKey, ::StringW  descriptionKey) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocAttribute(DocAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocAttribute(DocAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::DocAttribute, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
NEED_NO_BOX(::NatSuite::Devices::Internal::DocAttribute);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::DocAttribute*, "NatSuite.Devices.Internal", "DocAttribute");
