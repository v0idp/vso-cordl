#pragma once
// IWYU pragma private; include "VROSC/FloatField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatField)
namespace VROSC {
class FloatNode;
}
// Forward declare root types
namespace VROSC {
class FloatField;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FloatField);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FloatField
class CORDL_TYPE FloatField : public ::System::Object {
public:
// Declarations
/// @brief Field ConnectedValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedValue, put=__cordl_internal_set_ConnectedValue)) ::UnityW<::VROSC::FloatNode>  ConnectedValue;

/// @brief Field EnteredValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_EnteredValue, put=__cordl_internal_set_EnteredValue)) float_t  EnteredValue;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Method GetNode, addr 0x171a744, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::FloatNode> GetNode() ;

static inline ::VROSC::FloatField* New_ctor(float_t  enteredValue) ;

/// @brief Method SetNode, addr 0x171a74c, size 0x8, virtual false, abstract: false, final false
inline void SetNode(::VROSC::FloatNode*  floatNode) ;

constexpr ::UnityW<::VROSC::FloatNode> const& __cordl_internal_get_ConnectedValue() const;

constexpr ::UnityW<::VROSC::FloatNode>& __cordl_internal_get_ConnectedValue() ;

constexpr float_t const& __cordl_internal_get_EnteredValue() const;

constexpr float_t& __cordl_internal_get_EnteredValue() ;

constexpr void __cordl_internal_set_ConnectedValue(::UnityW<::VROSC::FloatNode>  value) ;

constexpr void __cordl_internal_set_EnteredValue(float_t  value) ;

/// @brief Method .ctor, addr 0x171a71c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(float_t  enteredValue) ;

/// @brief Method get_Value, addr 0x171a754, size 0x84, virtual false, abstract: false, final false
inline float_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatField(FloatField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatField(FloatField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{927};

/// @brief Field EnteredValue, offset: 0x10, size: 0x4, def value: None
 float_t  ___EnteredValue;

/// @brief Field ConnectedValue, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::FloatNode>  ___ConnectedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FloatField, ___EnteredValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FloatField, ___ConnectedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FloatField, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FloatField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FloatField*, "VROSC", "FloatField");
