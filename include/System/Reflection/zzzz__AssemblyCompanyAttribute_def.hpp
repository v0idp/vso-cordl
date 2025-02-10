#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyCompanyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyCompanyAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyCompanyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyCompanyAttribute);
// Dependencies System.Attribute
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.AssemblyCompanyAttribute
class CORDL_TYPE AssemblyCompanyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <Company>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Company_k__BackingField, put=__cordl_internal_set__Company_k__BackingField)) ::StringW  _Company_k__BackingField;

static inline ::System::Reflection::AssemblyCompanyAttribute* New_ctor(::StringW  company) ;

constexpr ::StringW const& __cordl_internal_get__Company_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Company_k__BackingField() ;

constexpr void __cordl_internal_set__Company_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2689740, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  company) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssemblyCompanyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCompanyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyCompanyAttribute(AssemblyCompanyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCompanyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyCompanyAttribute(AssemblyCompanyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3097};

/// @brief Field <Company>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Company_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::AssemblyCompanyAttribute, ____Company_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyCompanyAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyCompanyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyCompanyAttribute*, "System.Reflection", "AssemblyCompanyAttribute");
