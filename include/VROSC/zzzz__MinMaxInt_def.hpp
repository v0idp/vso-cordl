#pragma once
// IWYU pragma private; include "VROSC/MinMaxInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxInt)
// Forward declare root types
namespace VROSC {
class MinMaxInt;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MinMaxInt);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MinMaxInt
class CORDL_TYPE MinMaxInt : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Max)) int32_t  Max;

 __declspec(property(get=get_Min)) int32_t  Min;

/// @brief Field _max, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) int32_t  _max;

/// @brief Field _min, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) int32_t  _min;

static inline ::VROSC::MinMaxInt* New_ctor(int32_t  min, int32_t  max) ;

/// @brief Method Random, addr 0x17b9edc, size 0x10, virtual false, abstract: false, final false
inline int32_t Random() ;

constexpr int32_t const& __cordl_internal_get__max() const;

constexpr int32_t& __cordl_internal_get__max() ;

constexpr int32_t const& __cordl_internal_get__min() const;

constexpr int32_t& __cordl_internal_get__min() ;

constexpr void __cordl_internal_set__max(int32_t  value) ;

constexpr void __cordl_internal_set__min(int32_t  value) ;

/// @brief Method .ctor, addr 0x17b9eb0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  min, int32_t  max) ;

/// @brief Method get_Max, addr 0x17b9ea8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Max() ;

/// @brief Method get_Min, addr 0x17b9ea0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Min() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxInt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxInt(MinMaxInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxInt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxInt(MinMaxInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1472};

/// @brief Field _min, offset: 0x10, size: 0x4, def value: None
 int32_t  ____min;

/// @brief Field _max, offset: 0x14, size: 0x4, def value: None
 int32_t  ____max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MinMaxInt, ____min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MinMaxInt, ____max) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MinMaxInt, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MinMaxInt);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxInt*, "VROSC", "MinMaxInt");
