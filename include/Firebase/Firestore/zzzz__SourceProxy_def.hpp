#pragma once
// IWYU pragma private; include "Firebase/Firestore/SourceProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceProxy)
// Forward declare root types
namespace Firebase::Firestore {
struct SourceProxy;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::SourceProxy);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.SourceProxy
struct CORDL_TYPE SourceProxy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SourceProxy_Unwrapped
enum struct __SourceProxy_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Server = static_cast<int32_t>(0x1),
__E_Cache = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SourceProxy_Unwrapped () const noexcept {
return static_cast<__SourceProxy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SourceProxy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SourceProxy(int32_t  value__) noexcept;

/// @brief Field Cache value: I32(2)
static ::Firebase::Firestore::SourceProxy const Cache;

/// @brief Field Default value: I32(0)
static ::Firebase::Firestore::SourceProxy const Default;

/// @brief Field Server value: I32(1)
static ::Firebase::Firestore::SourceProxy const Server;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::SourceProxy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SourceProxy, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SourceProxy, "Firebase.Firestore", "SourceProxy");
