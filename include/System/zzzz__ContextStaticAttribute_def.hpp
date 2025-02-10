#pragma once
// IWYU pragma private; include "System/ContextStaticAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ContextStaticAttribute)
// Forward declare root types
namespace System {
class ContextStaticAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ContextStaticAttribute);
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.ContextStaticAttribute
class CORDL_TYPE ContextStaticAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::ContextStaticAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x2772d50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextStaticAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextStaticAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextStaticAttribute(ContextStaticAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextStaticAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextStaticAttribute(ContextStaticAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ContextStaticAttribute, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ContextStaticAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ContextStaticAttribute*, "System", "ContextStaticAttribute");
