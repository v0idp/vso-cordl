#pragma once
// IWYU pragma private; include "VROSC/ValueSourceSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueSourceSelector)
namespace VROSC {
class Signal;
}
namespace VROSC {
struct ValueSourceSelector_ValueSource;
}
// Forward declare root types
namespace VROSC {
struct ValueSourceSelector_ValueSource;
}
namespace VROSC {
class ValueSourceSelector;
}
// Write type traits
MARK_VAL_T(::VROSC::ValueSourceSelector_ValueSource);
MARK_REF_PTR_T(::VROSC::ValueSourceSelector);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ValueSourceSelector/ValueSource
struct CORDL_TYPE ValueSourceSelector_ValueSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValueSourceSelector_ValueSource_Unwrapped
enum struct __ValueSourceSelector_ValueSource_Unwrapped : int32_t {
__E_PositionX = static_cast<int32_t>(0x0),
__E_PositionY = static_cast<int32_t>(0x1),
__E_PositionZ = static_cast<int32_t>(0x2),
__E_RotationX = static_cast<int32_t>(0x3),
__E_RotationY = static_cast<int32_t>(0x4),
__E_RotationZ = static_cast<int32_t>(0x5),
__E_Velocity = static_cast<int32_t>(0x6),
__E_IndexTrigger = static_cast<int32_t>(0x7),
__E_GripTrigger = static_cast<int32_t>(0x8),
__E_StickPadX = static_cast<int32_t>(0x9),
__E_StickPadY = static_cast<int32_t>(0xa),
__E_DistanceBetweenControllers = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValueSourceSelector_ValueSource_Unwrapped () const noexcept {
return static_cast<__ValueSourceSelector_ValueSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ValueSourceSelector_ValueSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueSourceSelector_ValueSource(int32_t  value__) noexcept;

/// @brief Field DistanceBetweenControllers value: I32(11)
static ::VROSC::ValueSourceSelector_ValueSource const DistanceBetweenControllers;

/// @brief Field GripTrigger value: I32(8)
static ::VROSC::ValueSourceSelector_ValueSource const GripTrigger;

/// @brief Field IndexTrigger value: I32(7)
static ::VROSC::ValueSourceSelector_ValueSource const IndexTrigger;

/// @brief Field PositionX value: I32(0)
static ::VROSC::ValueSourceSelector_ValueSource const PositionX;

/// @brief Field PositionY value: I32(1)
static ::VROSC::ValueSourceSelector_ValueSource const PositionY;

/// @brief Field PositionZ value: I32(2)
static ::VROSC::ValueSourceSelector_ValueSource const PositionZ;

/// @brief Field RotationX value: I32(3)
static ::VROSC::ValueSourceSelector_ValueSource const RotationX;

/// @brief Field RotationY value: I32(4)
static ::VROSC::ValueSourceSelector_ValueSource const RotationY;

/// @brief Field RotationZ value: I32(5)
static ::VROSC::ValueSourceSelector_ValueSource const RotationZ;

/// @brief Field StickPadX value: I32(9)
static ::VROSC::ValueSourceSelector_ValueSource const StickPadX;

/// @brief Field StickPadY value: I32(10)
static ::VROSC::ValueSourceSelector_ValueSource const StickPadY;

/// @brief Field Velocity value: I32(6)
static ::VROSC::ValueSourceSelector_ValueSource const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ValueSourceSelector_ValueSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ValueSourceSelector_ValueSource, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SignalNode, VROSC.ValueSourceSelector::ValueSource
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ValueSourceSelector
class CORDL_TYPE ValueSourceSelector : public ::VROSC::SignalNode {
public:
// Declarations
using ValueSource = ::VROSC::ValueSourceSelector_ValueSource;

/// @brief Field _valueSource, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueSource, put=__cordl_internal_set__valueSource)) ::VROSC::ValueSourceSelector_ValueSource  _valueSource;

/// @brief Method GetSignalValue, addr 0x1721e20, size 0x300, virtual false, abstract: false, final false
static inline float_t GetSignalValue(::VROSC::Signal*  signal, ::VROSC::ValueSourceSelector_ValueSource  valueSource) ;

static inline ::VROSC::ValueSourceSelector* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721df4, size 0x2c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x172214c, size 0x2c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1722120, size 0x2c, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr ::VROSC::ValueSourceSelector_ValueSource const& __cordl_internal_get__valueSource() const;

constexpr ::VROSC::ValueSourceSelector_ValueSource& __cordl_internal_get__valueSource() ;

constexpr void __cordl_internal_set__valueSource(::VROSC::ValueSourceSelector_ValueSource  value) ;

/// @brief Method .ctor, addr 0x1722178, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueSourceSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueSourceSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueSourceSelector(ValueSourceSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueSourceSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueSourceSelector(ValueSourceSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{996};

/// @brief Field _valueSource, offset: 0x48, size: 0x4, def value: None
 ::VROSC::ValueSourceSelector_ValueSource  ____valueSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ValueSourceSelector, ____valueSource) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ValueSourceSelector, 0x50>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ValueSourceSelector_ValueSource, "VROSC", "ValueSourceSelector/ValueSource");
NEED_NO_BOX(::VROSC::ValueSourceSelector);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ValueSourceSelector*, "VROSC", "ValueSourceSelector");
