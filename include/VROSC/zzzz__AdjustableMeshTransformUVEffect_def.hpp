#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTransformUVEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdjustableMeshTransformUVEffect)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
struct AdjustableMeshTransformUVEffect_Channel;
}
// Forward declare root types
namespace VROSC {
struct AdjustableMeshTransformUVEffect_Channel;
}
namespace VROSC {
class AdjustableMeshTransformUVEffect;
}
// Write type traits
MARK_VAL_T(::VROSC::AdjustableMeshTransformUVEffect_Channel);
MARK_REF_PTR_T(::VROSC::AdjustableMeshTransformUVEffect);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.AdjustableMeshTransformUVEffect/Channel
struct CORDL_TYPE AdjustableMeshTransformUVEffect_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AdjustableMeshTransformUVEffect_Channel_Unwrapped
enum struct __AdjustableMeshTransformUVEffect_Channel_Unwrapped : int32_t {
__E_Uv1 = static_cast<int32_t>(0x0),
__E_Uv2 = static_cast<int32_t>(0x1),
__E_Uv3 = static_cast<int32_t>(0x2),
__E_Uv4 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AdjustableMeshTransformUVEffect_Channel_Unwrapped () const noexcept {
return static_cast<__AdjustableMeshTransformUVEffect_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshTransformUVEffect_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AdjustableMeshTransformUVEffect_Channel(int32_t  value__) noexcept;

/// @brief Field Uv1 value: I32(0)
static ::VROSC::AdjustableMeshTransformUVEffect_Channel const Uv1;

/// @brief Field Uv2 value: I32(1)
static ::VROSC::AdjustableMeshTransformUVEffect_Channel const Uv2;

/// @brief Field Uv3 value: I32(2)
static ::VROSC::AdjustableMeshTransformUVEffect_Channel const Uv3;

/// @brief Field Uv4 value: I32(3)
static ::VROSC::AdjustableMeshTransformUVEffect_Channel const Uv4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshTransformUVEffect_Channel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshTransformUVEffect_Channel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Vector2, VROSC.AdjustableMeshEffect, VROSC.AdjustableMeshTransformUVEffect::Channel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshTransformUVEffect
class CORDL_TYPE AdjustableMeshTransformUVEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
using Channel = ::VROSC::AdjustableMeshTransformUVEffect_Channel;

/// @brief Field _channel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) ::VROSC::AdjustableMeshTransformUVEffect_Channel  _channel;

/// @brief Field _offset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector2  _offset;

/// @brief Field _originalUv, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalUv, put=__cordl_internal_set__originalUv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _originalUv;

/// @brief Field _uv, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

static inline ::VROSC::AdjustableMeshTransformUVEffect* New_ctor() ;

/// @brief Method SetOffset, addr 0x17a7338, size 0x8, virtual false, abstract: false, final false
inline void SetOffset(::UnityEngine::Vector2  offset) ;

constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel const& __cordl_internal_get__channel() const;

constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel& __cordl_internal_get__channel() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__offset() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__originalUv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__originalUv() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr void __cordl_internal_set__channel(::VROSC::AdjustableMeshTransformUVEffect_Channel  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__originalUv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method .ctor, addr 0x17a7340, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshTransformUVEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTransformUVEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshTransformUVEffect(AdjustableMeshTransformUVEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTransformUVEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshTransformUVEffect(AdjustableMeshTransformUVEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1392};

/// @brief Field _offset, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____offset;

/// @brief Field _channel, offset: 0x30, size: 0x4, def value: None
 ::VROSC::AdjustableMeshTransformUVEffect_Channel  ____channel;

/// @brief Field _originalUv, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____originalUv;

/// @brief Field _uv, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshTransformUVEffect, ____offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTransformUVEffect, ____channel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTransformUVEffect, ____originalUv) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTransformUVEffect, ____uv) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshTransformUVEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTransformUVEffect_Channel, "VROSC", "AdjustableMeshTransformUVEffect/Channel");
NEED_NO_BOX(::VROSC::AdjustableMeshTransformUVEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTransformUVEffect*, "VROSC", "AdjustableMeshTransformUVEffect");
