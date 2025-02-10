#pragma once
// IWYU pragma private; include "UnityEngine/RemoteConfigSettingsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteConfigSettingsHelper)
namespace UnityEngine {
struct RemoteConfigSettingsHelper_Tag;
}
// Forward declare root types
namespace UnityEngine {
struct RemoteConfigSettingsHelper_Tag;
}
namespace UnityEngine {
class RemoteConfigSettingsHelper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RemoteConfigSettingsHelper_Tag);
MARK_REF_PTR_T(::UnityEngine::RemoteConfigSettingsHelper);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RemoteConfigSettingsHelper/Tag
struct CORDL_TYPE RemoteConfigSettingsHelper_Tag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RemoteConfigSettingsHelper_Tag_Unwrapped
enum struct __RemoteConfigSettingsHelper_Tag_Unwrapped : int32_t {
__E_kUnknown = static_cast<int32_t>(0x0),
__E_kIntVal = static_cast<int32_t>(0x1),
__E_kInt64Val = static_cast<int32_t>(0x2),
__E_kUInt64Val = static_cast<int32_t>(0x3),
__E_kDoubleVal = static_cast<int32_t>(0x4),
__E_kBoolVal = static_cast<int32_t>(0x5),
__E_kStringVal = static_cast<int32_t>(0x6),
__E_kArrayVal = static_cast<int32_t>(0x7),
__E_kMixedArrayVal = static_cast<int32_t>(0x8),
__E_kMapVal = static_cast<int32_t>(0x9),
__E_kMaxTags = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RemoteConfigSettingsHelper_Tag_Unwrapped () const noexcept {
return static_cast<__RemoteConfigSettingsHelper_Tag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigSettingsHelper_Tag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RemoteConfigSettingsHelper_Tag(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kArrayVal value: I32(7)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kArrayVal;

/// @brief Field kBoolVal value: I32(5)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kBoolVal;

/// @brief Field kDoubleVal value: I32(4)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kDoubleVal;

/// @brief Field kInt64Val value: I32(2)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kInt64Val;

/// @brief Field kIntVal value: I32(1)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kIntVal;

/// @brief Field kMapVal value: I32(9)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kMapVal;

/// @brief Field kMaxTags value: I32(10)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kMaxTags;

/// @brief Field kMixedArrayVal value: I32(8)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kMixedArrayVal;

/// @brief Field kStringVal value: I32(6)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kStringVal;

/// @brief Field kUInt64Val value: I32(3)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kUInt64Val;

/// @brief Field kUnknown value: I32(0)
static ::UnityEngine::RemoteConfigSettingsHelper_Tag const kUnknown;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RemoteConfigSettingsHelper_Tag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteConfigSettingsHelper_Tag, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RemoteConfigSettingsHelper
class CORDL_TYPE RemoteConfigSettingsHelper : public ::System::Object {
public:
// Declarations
using Tag = ::UnityEngine::RemoteConfigSettingsHelper_Tag;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigSettingsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigSettingsHelper(RemoteConfigSettingsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigSettingsHelper(RemoteConfigSettingsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteConfigSettingsHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettingsHelper_Tag, "UnityEngine", "RemoteConfigSettingsHelper/Tag");
NEED_NO_BOX(::UnityEngine::RemoteConfigSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettingsHelper*, "UnityEngine", "RemoteConfigSettingsHelper");
