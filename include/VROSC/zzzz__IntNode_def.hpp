#pragma once
// IWYU pragma private; include "VROSC/IntNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntNode)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
struct IntNode_OverflowBehaviour;
}
// Forward declare root types
namespace VROSC {
struct IntNode_OverflowBehaviour;
}
namespace VROSC {
class IntNode;
}
// Write type traits
MARK_VAL_T(::VROSC::IntNode_OverflowBehaviour);
MARK_REF_PTR_T(::VROSC::IntNode);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.IntNode/OverflowBehaviour
struct CORDL_TYPE IntNode_OverflowBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IntNode_OverflowBehaviour_Unwrapped
enum struct __IntNode_OverflowBehaviour_Unwrapped : int32_t {
__E_Limit = static_cast<int32_t>(0x0),
__E_Wrap = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IntNode_OverflowBehaviour_Unwrapped () const noexcept {
return static_cast<__IntNode_OverflowBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IntNode_OverflowBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IntNode_OverflowBehaviour(int32_t  value__) noexcept;

/// @brief Field Limit value: I32(0)
static ::VROSC::IntNode_OverflowBehaviour const Limit;

/// @brief Field Wrap value: I32(1)
static ::VROSC::IntNode_OverflowBehaviour const Wrap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{932};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntNode_OverflowBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntNode_OverflowBehaviour, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.IntNode::OverflowBehaviour, VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IntNode
class CORDL_TYPE IntNode : public ::VROSC::Node {
public:
// Declarations
using OverflowBehaviour = ::VROSC::IntNode_OverflowBehaviour;

 __declspec(property(get=get_MaxValue)) int32_t  MaxValue;

 __declspec(property(get=get_MinValue)) int32_t  MinValue;

/// @brief Field OnValueChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<int32_t>*  OnValueChanged;

 __declspec(property(get=get_Value, put=set_Value)) int32_t  Value;

/// @brief Field _maxValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) int32_t  _maxValue;

/// @brief Field _minValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) int32_t  _minValue;

/// @brief Field _overflowBehaviour, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__overflowBehaviour, put=__cordl_internal_set__overflowBehaviour)) ::VROSC::IntNode_OverflowBehaviour  _overflowBehaviour;

/// @brief Field _value, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) int32_t  _value;

static inline ::VROSC::IntNode* New_ctor() ;

/// @brief Method OnValidate, addr 0x171aabc, size 0x10, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetValueInRange, addr 0x171aacc, size 0xbc, virtual true, abstract: false, final false
inline int32_t SetValueInRange(int32_t  value) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr int32_t const& __cordl_internal_get__maxValue() const;

constexpr int32_t& __cordl_internal_get__maxValue() ;

constexpr int32_t const& __cordl_internal_get__minValue() const;

constexpr int32_t& __cordl_internal_get__minValue() ;

constexpr ::VROSC::IntNode_OverflowBehaviour const& __cordl_internal_get__overflowBehaviour() const;

constexpr ::VROSC::IntNode_OverflowBehaviour& __cordl_internal_get__overflowBehaviour() ;

constexpr int32_t const& __cordl_internal_get__value() const;

constexpr int32_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__maxValue(int32_t  value) ;

constexpr void __cordl_internal_set__minValue(int32_t  value) ;

constexpr void __cordl_internal_set__overflowBehaviour(::VROSC::IntNode_OverflowBehaviour  value) ;

constexpr void __cordl_internal_set__value(int32_t  value) ;

/// @brief Method .ctor, addr 0x171ab88, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxValue, addr 0x171aaac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxValue() ;

/// @brief Method get_MinValue, addr 0x171aaa4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinValue() ;

/// @brief Method get_Value, addr 0x171aab4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Method set_Value, addr 0x171a5b4, size 0xc, virtual false, abstract: false, final false
inline void set_Value(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntNode(IntNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntNode(IntNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{933};

/// @brief Field _minValue, offset: 0x20, size: 0x4, def value: None
 int32_t  ____minValue;

/// @brief Field _maxValue, offset: 0x24, size: 0x4, def value: None
 int32_t  ____maxValue;

/// @brief Field _overflowBehaviour, offset: 0x28, size: 0x4, def value: None
 ::VROSC::IntNode_OverflowBehaviour  ____overflowBehaviour;

/// @brief Field _value, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____value;

/// @brief Field OnValueChanged, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntNode, ____minValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntNode, ____maxValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntNode, ____overflowBehaviour) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntNode, ____value) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntNode, ___OnValueChanged) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntNode, 0x38>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntNode_OverflowBehaviour, "VROSC", "IntNode/OverflowBehaviour");
NEED_NO_BOX(::VROSC::IntNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntNode*, "VROSC", "IntNode");
