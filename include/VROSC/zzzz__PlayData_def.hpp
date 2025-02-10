#pragma once
// IWYU pragma private; include "VROSC/PlayData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
struct PlayData;
}
// Write type traits
MARK_VAL_T(::VROSC::PlayData);
// Dependencies UnityEngine.Vector3
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PlayData
struct CORDL_TYPE PlayData {
public:
// Declarations
 __declspec(property(get=get_Power)) ::UnityEngine::Vector3  Power;

 __declspec(property(get=get_Velocity)) float_t  Velocity;

/// @brief Method .ctor, addr 0x17b660c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  power, float_t  velocity) ;

/// @brief Method get_None, addr 0x17b65b0, size 0x48, virtual false, abstract: false, final false
static inline ::VROSC::PlayData get_None() ;

/// @brief Method get_Power, addr 0x17b65f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Power() ;

/// @brief Method get_Velocity, addr 0x17b6604, size 0x8, virtual false, abstract: false, final false
inline float_t get_Velocity() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayData() ;

// Ctor Parameters [CppParam { name: "_Power_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Velocity_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr PlayData(::UnityEngine::Vector3  _Power_k__BackingField, float_t  _Velocity_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Power>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Power_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _Velocity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayData, _Power_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayData, _Velocity_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayData, 0x10>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayData, "VROSC", "PlayData");
