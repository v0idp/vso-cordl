#pragma once
// IWYU pragma private; include "Mono/ValueTuple_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_1)
// Forward declare root types
namespace Mono {
template<typename T1>
struct ValueTuple_1;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_1);
// Dependencies 
namespace Mono {
// cpp template
template<typename T1>
// Is value type: true
// CS Name: Mono.ValueTuple`1<T1>
struct CORDL_TYPE ValueTuple_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ValueTuple_1() ;

// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }]
constexpr ValueTuple_1(T1  Item1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
 T1  Item1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_1, "Mono", "ValueTuple`1");
