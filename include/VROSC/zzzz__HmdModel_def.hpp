#pragma once
// IWYU pragma private; include "VROSC/HmdModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HmdModel)
// Forward declare root types
namespace VROSC {
struct HmdModel;
}
// Write type traits
MARK_VAL_T(::VROSC::HmdModel);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HmdModel
struct CORDL_TYPE HmdModel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HmdModel_Unwrapped
enum struct __HmdModel_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_RiftLegacy = static_cast<int32_t>(0x1),
__E_RiftS = static_cast<int32_t>(0x2),
__E_QuestAndroid = static_cast<int32_t>(0x3),
__E_Quest2Android = static_cast<int32_t>(0x4),
__E_QuestLink = static_cast<int32_t>(0x5),
__E_Quest2Link = static_cast<int32_t>(0x6),
__E_QuestProAndroid = static_cast<int32_t>(0x7),
__E_QuestProLink = static_cast<int32_t>(0x8),
__E_Quest3Android = static_cast<int32_t>(0x9),
__E_Quest3Link = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HmdModel_Unwrapped () const noexcept {
return static_cast<__HmdModel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HmdModel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HmdModel(int32_t  value__) noexcept;

/// @brief Field Quest2Android value: I32(4)
static ::VROSC::HmdModel const Quest2Android;

/// @brief Field Quest2Link value: I32(6)
static ::VROSC::HmdModel const Quest2Link;

/// @brief Field Quest3Android value: I32(9)
static ::VROSC::HmdModel const Quest3Android;

/// @brief Field Quest3Link value: I32(10)
static ::VROSC::HmdModel const Quest3Link;

/// @brief Field QuestAndroid value: I32(3)
static ::VROSC::HmdModel const QuestAndroid;

/// @brief Field QuestLink value: I32(5)
static ::VROSC::HmdModel const QuestLink;

/// @brief Field QuestProAndroid value: I32(7)
static ::VROSC::HmdModel const QuestProAndroid;

/// @brief Field QuestProLink value: I32(8)
static ::VROSC::HmdModel const QuestProLink;

/// @brief Field RiftLegacy value: I32(1)
static ::VROSC::HmdModel const RiftLegacy;

/// @brief Field RiftS value: I32(2)
static ::VROSC::HmdModel const RiftS;

/// @brief Field Unknown value: I32(0)
static ::VROSC::HmdModel const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HmdModel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HmdModel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HmdModel, "VROSC", "HmdModel");
