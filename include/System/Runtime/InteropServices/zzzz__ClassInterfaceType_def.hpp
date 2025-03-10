#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ClassInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClassInterfaceType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ClassInterfaceType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::ClassInterfaceType);
// Dependencies 
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.ClassInterfaceType
struct CORDL_TYPE ClassInterfaceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClassInterfaceType_Unwrapped
enum struct __ClassInterfaceType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AutoDispatch = static_cast<int32_t>(0x1),
__E_AutoDual = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClassInterfaceType_Unwrapped () const noexcept {
return static_cast<__ClassInterfaceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClassInterfaceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClassInterfaceType(int32_t  value__) noexcept;

/// @brief Field AutoDispatch value: I32(1)
static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDispatch;

/// @brief Field AutoDual value: I32(2)
static ::System::Runtime::InteropServices::ClassInterfaceType const AutoDual;

/// @brief Field None value: I32(0)
static ::System::Runtime::InteropServices::ClassInterfaceType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::ClassInterfaceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ClassInterfaceType, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ClassInterfaceType, "System.Runtime.InteropServices", "ClassInterfaceType");
