#pragma once
// IWYU pragma private; include "System/Xml/Schema/Compositor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor)
// Forward declare root types
namespace System::Xml::Schema {
struct Compositor;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::Compositor);
// Dependencies 
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.Compositor
struct CORDL_TYPE Compositor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Compositor_Unwrapped
enum struct __Compositor_Unwrapped : int32_t {
__E_Root = static_cast<int32_t>(0x0),
__E_Include = static_cast<int32_t>(0x1),
__E_Import = static_cast<int32_t>(0x2),
__E_Redefine = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Compositor_Unwrapped () const noexcept {
return static_cast<__Compositor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Compositor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Compositor(int32_t  value__) noexcept;

/// @brief Field Import value: I32(2)
static ::System::Xml::Schema::Compositor const Import;

/// @brief Field Include value: I32(1)
static ::System::Xml::Schema::Compositor const Include;

/// @brief Field Redefine value: I32(3)
static ::System::Xml::Schema::Compositor const Redefine;

/// @brief Field Root value: I32(0)
static ::System::Xml::Schema::Compositor const Root;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Compositor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Compositor, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Compositor, "System.Xml.Schema", "Compositor");
