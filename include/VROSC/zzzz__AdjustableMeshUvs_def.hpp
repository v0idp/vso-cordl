#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshUvs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdjustableMeshUvs)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
struct AdjustableMeshUvs_Channel;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
struct AdjustableMeshUvs_Channel;
}
namespace VROSC {
class AdjustableMeshUvs;
}
// Write type traits
MARK_VAL_T(::VROSC::AdjustableMeshUvs_Channel);
MARK_REF_PTR_T(::VROSC::AdjustableMeshUvs);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.AdjustableMeshUvs/Channel
struct CORDL_TYPE AdjustableMeshUvs_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AdjustableMeshUvs_Channel_Unwrapped
enum struct __AdjustableMeshUvs_Channel_Unwrapped : int32_t {
__E_Uv1 = static_cast<int32_t>(0x0),
__E_Uv2 = static_cast<int32_t>(0x1),
__E_Uv3 = static_cast<int32_t>(0x2),
__E_Uv4 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AdjustableMeshUvs_Channel_Unwrapped () const noexcept {
return static_cast<__AdjustableMeshUvs_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshUvs_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AdjustableMeshUvs_Channel(int32_t  value__) noexcept;

/// @brief Field Uv1 value: I32(0)
static ::VROSC::AdjustableMeshUvs_Channel const Uv1;

/// @brief Field Uv2 value: I32(1)
static ::VROSC::AdjustableMeshUvs_Channel const Uv2;

/// @brief Field Uv3 value: I32(2)
static ::VROSC::AdjustableMeshUvs_Channel const Uv3;

/// @brief Field Uv4 value: I32(3)
static ::VROSC::AdjustableMeshUvs_Channel const Uv4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshUvs_Channel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshUvs_Channel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.AdjustableMeshUvs::Channel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshUvs
class CORDL_TYPE AdjustableMeshUvs : public ::System::Object {
public:
// Declarations
using Channel = ::VROSC::AdjustableMeshUvs_Channel;

/// @brief Field _adjustableMesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _channel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) ::VROSC::AdjustableMeshUvs_Channel  _channel;

/// @brief Field _originalUv, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalUv, put=__cordl_internal_set__originalUv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _originalUv;

/// @brief Field _uv, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

static inline ::VROSC::AdjustableMeshUvs* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::AdjustableMeshUvs_Channel  channel, bool  useOriginalAsUVSource) ;

/// @brief Method OffsetUv, addr 0x17ac174, size 0xdc, virtual false, abstract: false, final false
inline void OffsetUv(::UnityEngine::Vector2  offset) ;

/// @brief Method SetAllUVs, addr 0x17ac250, size 0xbc, virtual false, abstract: false, final false
inline void SetAllUVs(::UnityEngine::Vector2  uv) ;

/// @brief Method SetOriginalUV, addr 0x17ab084, size 0x80, virtual false, abstract: false, final false
inline void SetOriginalUV(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv) ;

/// @brief Method SetUVs, addr 0x17ac0ac, size 0xc8, virtual false, abstract: false, final false
inline void SetUVs(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv) ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr ::VROSC::AdjustableMeshUvs_Channel const& __cordl_internal_get__channel() const;

constexpr ::VROSC::AdjustableMeshUvs_Channel& __cordl_internal_get__channel() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__originalUv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__originalUv() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__channel(::VROSC::AdjustableMeshUvs_Channel  value) ;

constexpr void __cordl_internal_set__originalUv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method .ctor, addr 0x17abee0, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::AdjustableMeshUvs_Channel  channel, bool  useOriginalAsUVSource) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshUvs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshUvs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshUvs(AdjustableMeshUvs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshUvs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshUvs(AdjustableMeshUvs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1418};

/// @brief Field _channel, offset: 0x10, size: 0x4, def value: None
 ::VROSC::AdjustableMeshUvs_Channel  ____channel;

/// @brief Field _adjustableMesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _originalUv, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____originalUv;

/// @brief Field _uv, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshUvs, ____channel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshUvs, ____adjustableMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshUvs, ____originalUv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshUvs, ____uv) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshUvs, 0x30>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshUvs_Channel, "VROSC", "AdjustableMeshUvs/Channel");
NEED_NO_BOX(::VROSC::AdjustableMeshUvs);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshUvs*, "VROSC", "AdjustableMeshUvs");
