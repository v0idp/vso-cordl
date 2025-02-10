#pragma once
// IWYU pragma private; include "VROSC/ValueMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(ValueMultiplier)
namespace VROSC {
class FloatField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ValueMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ValueMultiplier);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ValueMultiplier
class CORDL_TYPE ValueMultiplier : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _centerOnHalf, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__centerOnHalf, put=__cordl_internal_set__centerOnHalf)) bool  _centerOnHalf;

/// @brief Field _factor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__factor, put=__cordl_internal_set__factor)) ::VROSC::FloatField*  _factor;

static inline ::VROSC::ValueMultiplier* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721aa0, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1721b2c, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721b28, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method TransformValue, addr 0x1721aa4, size 0x84, virtual false, abstract: false, final false
inline ::VROSC::Signal* TransformValue(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__centerOnHalf() const;

constexpr bool& __cordl_internal_get__centerOnHalf() ;

constexpr ::VROSC::FloatField* const& __cordl_internal_get__factor() const;

constexpr ::VROSC::FloatField*& __cordl_internal_get__factor() ;

constexpr void __cordl_internal_set__centerOnHalf(bool  value) ;

constexpr void __cordl_internal_set__factor(::VROSC::FloatField*  value) ;

/// @brief Method .ctor, addr 0x1721b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueMultiplier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueMultiplier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueMultiplier(ValueMultiplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueMultiplier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueMultiplier(ValueMultiplier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{993};

/// @brief Field _factor, offset: 0x48, size: 0x8, def value: None
 ::VROSC::FloatField*  ____factor;

/// @brief Field _centerOnHalf, offset: 0x50, size: 0x1, def value: None
 bool  ____centerOnHalf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ValueMultiplier, ____factor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ValueMultiplier, ____centerOnHalf) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ValueMultiplier, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ValueMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ValueMultiplier*, "VROSC", "ValueMultiplier");
