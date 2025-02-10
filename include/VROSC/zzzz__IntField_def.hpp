#pragma once
// IWYU pragma private; include "VROSC/IntField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntField)
namespace VROSC {
class IntNode;
}
// Forward declare root types
namespace VROSC {
class IntField;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IntField);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IntField
class CORDL_TYPE IntField : public ::System::Object {
public:
// Declarations
/// @brief Field ConnectedValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedValue, put=__cordl_internal_set_ConnectedValue)) ::UnityW<::VROSC::IntNode>  ConnectedValue;

/// @brief Field EnteredValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_EnteredValue, put=__cordl_internal_set_EnteredValue)) int32_t  EnteredValue;

 __declspec(property(get=get_Value)) int32_t  Value;

/// @brief Method GetNode, addr 0x171aa10, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::IntNode> GetNode() ;

static inline ::VROSC::IntField* New_ctor(int32_t  enteredValue) ;

/// @brief Method SetNode, addr 0x171aa18, size 0x8, virtual false, abstract: false, final false
inline void SetNode(::VROSC::IntNode*  intNode) ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get_ConnectedValue() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get_ConnectedValue() ;

constexpr int32_t const& __cordl_internal_get_EnteredValue() const;

constexpr int32_t& __cordl_internal_get_EnteredValue() ;

constexpr void __cordl_internal_set_ConnectedValue(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set_EnteredValue(int32_t  value) ;

/// @brief Method .ctor, addr 0x171a9e8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  enteredValue) ;

/// @brief Method get_Value, addr 0x171aa20, size 0x84, virtual false, abstract: false, final false
inline int32_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntField(IntField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntField(IntField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{931};

/// @brief Field EnteredValue, offset: 0x10, size: 0x4, def value: None
 int32_t  ___EnteredValue;

/// @brief Field ConnectedValue, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ___ConnectedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntField, ___EnteredValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntField, ___ConnectedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntField, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IntField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntField*, "VROSC", "IntField");
