#pragma once
// IWYU pragma private; include "VROSC/SetInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntChanger_def.hpp"
CORDL_MODULE_EXPORT(SetInt)
namespace VROSC {
class IntField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SetInt;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetInt);
// Dependencies VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetInt
class CORDL_TYPE SetInt : public ::VROSC::IntChanger {
public:
// Declarations
/// @brief Field _maxValue, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxValue, put=__cordl_internal_set__maxValue)) ::VROSC::IntField*  _maxValue;

/// @brief Field _minValue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__minValue, put=__cordl_internal_set__minValue)) ::VROSC::IntField*  _minValue;

/// @brief Field _setTo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__setTo, put=__cordl_internal_set__setTo)) ::VROSC::IntField*  _setTo;

/// @brief Field _useSignalValue, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__useSignalValue, put=__cordl_internal_set__useSignalValue)) bool  _useSignalValue;

static inline ::VROSC::SetInt* New_ctor() ;

/// @brief Method SetValueBySignal, addr 0x171b190, size 0x17c, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__maxValue() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__maxValue() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__minValue() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__minValue() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__setTo() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__setTo() ;

constexpr bool const& __cordl_internal_get__useSignalValue() const;

constexpr bool& __cordl_internal_get__useSignalValue() ;

constexpr void __cordl_internal_set__maxValue(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__minValue(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__setTo(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set__useSignalValue(bool  value) ;

/// @brief Method .ctor, addr 0x171b30c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetInt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetInt(SetInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetInt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetInt(SetInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{942};

/// @brief Field _setTo, offset: 0x58, size: 0x8, def value: None
 ::VROSC::IntField*  ____setTo;

/// @brief Field _useSignalValue, offset: 0x60, size: 0x1, def value: None
 bool  ____useSignalValue;

/// @brief Field _minValue, offset: 0x68, size: 0x8, def value: None
 ::VROSC::IntField*  ____minValue;

/// @brief Field _maxValue, offset: 0x70, size: 0x8, def value: None
 ::VROSC::IntField*  ____maxValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetInt, ____setTo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetInt, ____useSignalValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetInt, ____minValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SetInt, ____maxValue) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetInt, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetInt);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetInt*, "VROSC", "SetInt");
