#pragma once
// IWYU pragma private; include "VROSC/Droppable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TransformMover_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Droppable)
namespace VROSC {
struct Droppable_Types;
}
// Forward declare root types
namespace VROSC {
struct Droppable_Types;
}
namespace VROSC {
class Droppable;
}
// Write type traits
MARK_VAL_T(::VROSC::Droppable_Types);
MARK_REF_PTR_T(::VROSC::Droppable);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Droppable/Types
struct CORDL_TYPE Droppable_Types {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Droppable_Types_Unwrapped
enum struct __Droppable_Types_Unwrapped : int32_t {
__E_Loop = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Droppable_Types_Unwrapped () const noexcept {
return static_cast<__Droppable_Types_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Droppable_Types() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Droppable_Types(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(0)
static ::VROSC::Droppable_Types const Loop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Droppable_Types, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Droppable_Types, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.TransformMover
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Droppable
class CORDL_TYPE Droppable : public ::VROSC::TransformMover {
public:
// Declarations
using Types = ::VROSC::Droppable_Types;

static inline ::VROSC::Droppable* New_ctor() ;

/// @brief Method UpdateGrab, addr 0x173ab18, size 0x4, virtual true, abstract: false, final false
inline void UpdateGrab() ;

/// @brief Method .ctor, addr 0x173afa4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Droppable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Droppable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Droppable(Droppable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Droppable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Droppable(Droppable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Droppable, 0xf0>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Droppable_Types, "VROSC", "Droppable/Types");
NEED_NO_BOX(::VROSC::Droppable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Droppable*, "VROSC", "Droppable");
