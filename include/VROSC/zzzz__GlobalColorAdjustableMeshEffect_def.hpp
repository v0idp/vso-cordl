#pragma once
// IWYU pragma private; include "VROSC/GlobalColorAdjustableMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorAdjustableMeshEffect)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
struct GlobalColorAdjustableMeshEffect_Channel;
}
// Forward declare root types
namespace VROSC {
struct GlobalColorAdjustableMeshEffect_Channel;
}
namespace VROSC {
class GlobalColorAdjustableMeshEffect;
}
// Write type traits
MARK_VAL_T(::VROSC::GlobalColorAdjustableMeshEffect_Channel);
MARK_REF_PTR_T(::VROSC::GlobalColorAdjustableMeshEffect);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.GlobalColorAdjustableMeshEffect/Channel
struct CORDL_TYPE GlobalColorAdjustableMeshEffect_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlobalColorAdjustableMeshEffect_Channel_Unwrapped
enum struct __GlobalColorAdjustableMeshEffect_Channel_Unwrapped : int32_t {
__E_Channel1 = static_cast<int32_t>(0x0),
__E_Channel2 = static_cast<int32_t>(0x1),
__E_Channel3 = static_cast<int32_t>(0x2),
__E_Channel4 = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalColorAdjustableMeshEffect_Channel_Unwrapped () const noexcept {
return static_cast<__GlobalColorAdjustableMeshEffect_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorAdjustableMeshEffect_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalColorAdjustableMeshEffect_Channel(int32_t  value__) noexcept;

/// @brief Field Channel1 value: I32(0)
static ::VROSC::GlobalColorAdjustableMeshEffect_Channel const Channel1;

/// @brief Field Channel2 value: I32(1)
static ::VROSC::GlobalColorAdjustableMeshEffect_Channel const Channel2;

/// @brief Field Channel3 value: I32(2)
static ::VROSC::GlobalColorAdjustableMeshEffect_Channel const Channel3;

/// @brief Field Channel4 value: I32(3)
static ::VROSC::GlobalColorAdjustableMeshEffect_Channel const Channel4;

/// @brief Field None value: I32(4)
static ::VROSC::GlobalColorAdjustableMeshEffect_Channel const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorAdjustableMeshEffect_Channel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorAdjustableMeshEffect_Channel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.AdjustableMeshEffect, VROSC.GlobalColorAdjustableMeshEffect::Channel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GlobalColorAdjustableMeshEffect
class CORDL_TYPE GlobalColorAdjustableMeshEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
using Channel = ::VROSC::GlobalColorAdjustableMeshEffect_Channel;

/// @brief Field _channel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) ::VROSC::GlobalColorAdjustableMeshEffect_Channel  _channel;

/// @brief Field _color, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _setColor, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__setColor, put=__cordl_internal_set__setColor)) bool  _setColor;

/// @brief Field _uv, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

/// @brief Method GetUVByChannel, addr 0x17b978c, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetUVByChannel() ;

static inline ::VROSC::GlobalColorAdjustableMeshEffect* New_ctor() ;

/// @brief Method OnCreation, addr 0x17b9664, size 0x128, virtual true, abstract: false, final false
inline void OnCreation() ;

constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel const& __cordl_internal_get__channel() const;

constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel& __cordl_internal_get__channel() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr bool const& __cordl_internal_get__setColor() const;

constexpr bool& __cordl_internal_get__setColor() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr void __cordl_internal_set__channel(::VROSC::GlobalColorAdjustableMeshEffect_Channel  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__setColor(bool  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method .ctor, addr 0x17b97b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorAdjustableMeshEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorAdjustableMeshEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorAdjustableMeshEffect(GlobalColorAdjustableMeshEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorAdjustableMeshEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorAdjustableMeshEffect(GlobalColorAdjustableMeshEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1468};

/// @brief Field _channel, offset: 0x28, size: 0x4, def value: None
 ::VROSC::GlobalColorAdjustableMeshEffect_Channel  ____channel;

/// @brief Field _setColor, offset: 0x2c, size: 0x1, def value: None
 bool  ____setColor;

/// @brief Field _color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _uv, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GlobalColorAdjustableMeshEffect, ____channel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorAdjustableMeshEffect, ____setColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorAdjustableMeshEffect, ____color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GlobalColorAdjustableMeshEffect, ____uv) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GlobalColorAdjustableMeshEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorAdjustableMeshEffect_Channel, "VROSC", "GlobalColorAdjustableMeshEffect/Channel");
NEED_NO_BOX(::VROSC::GlobalColorAdjustableMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorAdjustableMeshEffect*, "VROSC", "GlobalColorAdjustableMeshEffect");
