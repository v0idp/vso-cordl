#pragma once
// IWYU pragma private; include "VROSC/BitMaskAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BitMaskAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace VROSC {
class BitMaskAttribute;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BitMaskAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BitMaskAttribute
class CORDL_TYPE BitMaskAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field propType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_propType, put=__cordl_internal_set_propType)) ::System::Type*  propType;

static inline ::VROSC::BitMaskAttribute* New_ctor(::System::Type*  aType) ;

constexpr ::System::Type* const& __cordl_internal_get_propType() const;

constexpr ::System::Type*& __cordl_internal_get_propType() ;

constexpr void __cordl_internal_set_propType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x182cc24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  aType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitMaskAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitMaskAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitMaskAttribute(BitMaskAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitMaskAttribute(BitMaskAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{307};

/// @brief Field propType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___propType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BitMaskAttribute, ___propType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BitMaskAttribute, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BitMaskAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BitMaskAttribute*, "VROSC", "BitMaskAttribute");
