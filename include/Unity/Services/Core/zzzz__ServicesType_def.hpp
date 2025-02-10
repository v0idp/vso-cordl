#pragma once
// IWYU pragma private; include "Unity/Services/Core/ServicesType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServicesType)
// Forward declare root types
namespace Unity::Services::Core {
struct ServicesType;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::ServicesType);
// Dependencies 
namespace Unity::Services::Core {
// Is value type: true
// CS Name: Unity.Services.Core.ServicesType
struct CORDL_TYPE ServicesType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ServicesType_Unwrapped
enum struct __ServicesType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Instance = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServicesType_Unwrapped () const noexcept {
return static_cast<__ServicesType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ServicesType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServicesType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Unity::Services::Core::ServicesType const Default;

/// @brief Field Instance value: I32(1)
static ::Unity::Services::Core::ServicesType const Instance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::ServicesType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::ServicesType, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Core
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::ServicesType, "Unity.Services.Core", "ServicesType");
