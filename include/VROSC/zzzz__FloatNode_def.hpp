#pragma once
// IWYU pragma private; include "VROSC/FloatNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatNode)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace VROSC {
class FloatNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FloatNode);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FloatNode
class CORDL_TYPE FloatNode : public ::VROSC::Node {
public:
// Declarations
 __declspec(property(get=get_MaxValue)) float_t  MaxValue;

 __declspec(property(get=get_MinValue)) float_t  MinValue;

/// @brief Field OnValueChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<float_t>*  OnValueChanged;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field _maxValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) float_t  _maxValue;

/// @brief Field _minValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) float_t  _minValue;

/// @brief Field _value, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

static inline ::VROSC::FloatNode* New_ctor() ;

/// @brief Method SetValueInRange, addr 0x171a7fc, size 0x60, virtual true, abstract: false, final false
inline float_t SetValueInRange(float_t  value) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr float_t const& __cordl_internal_get__maxValue() const;

constexpr float_t& __cordl_internal_get__maxValue() ;

constexpr float_t const& __cordl_internal_get__minValue() const;

constexpr float_t& __cordl_internal_get__minValue() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__maxValue(float_t  value) ;

constexpr void __cordl_internal_set__minValue(float_t  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0x171a85c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxValue, addr 0x171a7e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxValue() ;

/// @brief Method get_MinValue, addr 0x171a7d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinValue() ;

/// @brief Method get_Value, addr 0x171a7e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// @brief Method set_Value, addr 0x171a7f0, size 0xc, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatNode(FloatNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatNode(FloatNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{928};

/// @brief Field _minValue, offset: 0x20, size: 0x4, def value: None
 float_t  ____minValue;

/// @brief Field _maxValue, offset: 0x24, size: 0x4, def value: None
 float_t  ____maxValue;

/// @brief Field _value, offset: 0x28, size: 0x4, def value: None
 float_t  ____value;

/// @brief Field OnValueChanged, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FloatNode, ____minValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FloatNode, ____maxValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::FloatNode, ____value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FloatNode, ___OnValueChanged) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FloatNode, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FloatNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FloatNode*, "VROSC", "FloatNode");
