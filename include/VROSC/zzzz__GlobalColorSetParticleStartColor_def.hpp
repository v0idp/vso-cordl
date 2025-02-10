#pragma once
// IWYU pragma private; include "VROSC/GlobalColorSetParticleStartColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorSetParticleStartColor)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace VROSC {
struct GlobalColorSetParticleStartColor_Channel;
}
// Forward declare root types
namespace VROSC {
struct GlobalColorSetParticleStartColor_Channel;
}
namespace VROSC {
class GlobalColorSetParticleStartColor;
}
// Write type traits
MARK_VAL_T(::VROSC::GlobalColorSetParticleStartColor_Channel);
MARK_REF_PTR_T(::VROSC::GlobalColorSetParticleStartColor);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.GlobalColorSetParticleStartColor/Channel
struct CORDL_TYPE GlobalColorSetParticleStartColor_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlobalColorSetParticleStartColor_Channel_Unwrapped
enum struct __GlobalColorSetParticleStartColor_Channel_Unwrapped : int32_t {
__E_Channel1 = static_cast<int32_t>(0x0),
__E_Channel2 = static_cast<int32_t>(0x1),
__E_Channel3 = static_cast<int32_t>(0x2),
__E_Channel4 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalColorSetParticleStartColor_Channel_Unwrapped () const noexcept {
return static_cast<__GlobalColorSetParticleStartColor_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorSetParticleStartColor_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalColorSetParticleStartColor_Channel(int32_t  value__) noexcept;

/// @brief Field Channel1 value: I32(0)
static ::VROSC::GlobalColorSetParticleStartColor_Channel const Channel1;

/// @brief Field Channel2 value: I32(1)
static ::VROSC::GlobalColorSetParticleStartColor_Channel const Channel2;

/// @brief Field Channel3 value: I32(2)
static ::VROSC::GlobalColorSetParticleStartColor_Channel const Channel3;

/// @brief Field Channel4 value: I32(3)
static ::VROSC::GlobalColorSetParticleStartColor_Channel const Channel4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorSetParticleStartColor_Channel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorSetParticleStartColor_Channel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.GlobalColorSetParticleStartColor::Channel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalColorSetParticleStartColor
class CORDL_TYPE GlobalColorSetParticleStartColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Channel = ::VROSC::GlobalColorSetParticleStartColor_Channel;

/// @brief Field _channel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) ::VROSC::GlobalColorSetParticleStartColor_Channel  _channel;

/// @brief Field _particleSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Method ColorChanged, addr 0x17b9ce8, size 0xe8, virtual false, abstract: false, final false
inline void ColorChanged(::UnityEngine::Color  color, float_t  multiplier) ;

static inline ::VROSC::GlobalColorSetParticleStartColor* New_ctor() ;

/// @brief Method OnDisable, addr 0x17b9a50, size 0x298, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17b97b8, size 0x298, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel const& __cordl_internal_get__channel() const;

constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel& __cordl_internal_get__channel() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr void __cordl_internal_set__channel(::VROSC::GlobalColorSetParticleStartColor_Channel  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x17b9dd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorSetParticleStartColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorSetParticleStartColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorSetParticleStartColor(GlobalColorSetParticleStartColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorSetParticleStartColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorSetParticleStartColor(GlobalColorSetParticleStartColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1470};

/// @brief Field _channel, offset: 0x20, size: 0x4, def value: None
 ::VROSC::GlobalColorSetParticleStartColor_Channel  ____channel;

/// @brief Field _particleSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorSetParticleStartColor, ____channel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorSetParticleStartColor, ____particleSystem) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorSetParticleStartColor, 0x30>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorSetParticleStartColor_Channel, "VROSC", "GlobalColorSetParticleStartColor/Channel");
NEED_NO_BOX(::VROSC::GlobalColorSetParticleStartColor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorSetParticleStartColor*, "VROSC", "GlobalColorSetParticleStartColor");
