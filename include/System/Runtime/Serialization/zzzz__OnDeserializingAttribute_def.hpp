#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/OnDeserializingAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnDeserializingAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnDeserializingAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.OnDeserializingAttribute
class CORDL_TYPE OnDeserializingAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Runtime::Serialization::OnDeserializingAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x2664e04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDeserializingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeserializingAttribute(OnDeserializingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeserializingAttribute(OnDeserializingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnDeserializingAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializingAttribute*, "System.Runtime.Serialization", "OnDeserializingAttribute");
