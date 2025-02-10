#pragma once
// IWYU pragma private; include "VROSC/MinMaxFloat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinMaxFloat)
// Forward declare root types
namespace VROSC {
class MinMaxFloat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MinMaxFloat);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MinMaxFloat
class CORDL_TYPE MinMaxFloat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Max)) float_t  Max;

 __declspec(property(get=get_Min)) float_t  Min;

 __declspec(property(get=get_Range)) float_t  Range;

/// @brief Field _max, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) float_t  _max;

/// @brief Field _min, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) float_t  _min;

/// @brief Method Clamp, addr 0x17b9e78, size 0x18, virtual false, abstract: false, final false
inline float_t Clamp(float_t  value) ;

/// @brief Method InverseLerp, addr 0x17b9e2c, size 0x4c, virtual false, abstract: false, final false
inline float_t InverseLerp(float_t  amount, bool  clamp) ;

/// @brief Method Invert, addr 0x17b9e90, size 0x10, virtual false, abstract: false, final false
inline void Invert() ;

/// @brief Method Lerp, addr 0x17afd24, size 0x34, virtual false, abstract: false, final false
inline float_t Lerp(float_t  amount, bool  clamp) ;

static inline ::VROSC::MinMaxFloat* New_ctor(float_t  min, float_t  max) ;

/// @brief Method Random, addr 0x17b9e20, size 0xc, virtual false, abstract: false, final false
inline float_t Random() ;

constexpr float_t const& __cordl_internal_get__max() const;

constexpr float_t& __cordl_internal_get__max() ;

constexpr float_t const& __cordl_internal_get__min() const;

constexpr float_t& __cordl_internal_get__min() ;

constexpr void __cordl_internal_set__max(float_t  value) ;

constexpr void __cordl_internal_set__min(float_t  value) ;

/// @brief Method .ctor, addr 0x17b9df4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max) ;

/// @brief Method get_Max, addr 0x17b9de0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Max() ;

/// @brief Method get_Min, addr 0x17b9dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Min() ;

/// @brief Method get_Range, addr 0x17b9de8, size 0xc, virtual false, abstract: false, final false
inline float_t get_Range() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxFloat(MinMaxFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxFloat(MinMaxFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1471};

/// @brief Field _min, offset: 0x10, size: 0x4, def value: None
 float_t  ____min;

/// @brief Field _max, offset: 0x14, size: 0x4, def value: None
 float_t  ____max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MinMaxFloat, ____min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MinMaxFloat, ____max) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MinMaxFloat, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MinMaxFloat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxFloat*, "VROSC", "MinMaxFloat");
