#pragma once
// IWYU pragma private; include "GlobalNamespace/CloudPillarTiming.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StaticBatchable_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudPillarTiming)
namespace GlobalNamespace {
struct CloudPillarTiming_Channel;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct CloudPillarTiming_Channel;
}
namespace GlobalNamespace {
class CloudPillarTiming;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CloudPillarTiming_Channel);
MARK_REF_PTR_T(::GlobalNamespace::CloudPillarTiming);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CloudPillarTiming/Channel
struct CORDL_TYPE CloudPillarTiming_Channel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloudPillarTiming_Channel_Unwrapped
enum struct __CloudPillarTiming_Channel_Unwrapped : int32_t {
__E_Channel1 = static_cast<int32_t>(0x0),
__E_Channel2 = static_cast<int32_t>(0x1),
__E_Channel3 = static_cast<int32_t>(0x2),
__E_Channel4 = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloudPillarTiming_Channel_Unwrapped () const noexcept {
return static_cast<__CloudPillarTiming_Channel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloudPillarTiming_Channel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CloudPillarTiming_Channel(int32_t  value__) noexcept;

/// @brief Field Channel1 value: I32(0)
static ::GlobalNamespace::CloudPillarTiming_Channel const Channel1;

/// @brief Field Channel2 value: I32(1)
static ::GlobalNamespace::CloudPillarTiming_Channel const Channel2;

/// @brief Field Channel3 value: I32(2)
static ::GlobalNamespace::CloudPillarTiming_Channel const Channel3;

/// @brief Field Channel4 value: I32(3)
static ::GlobalNamespace::CloudPillarTiming_Channel const Channel4;

/// @brief Field None value: I32(4)
static ::GlobalNamespace::CloudPillarTiming_Channel const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{71};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CloudPillarTiming_Channel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CloudPillarTiming_Channel, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CloudPillarTiming::Channel, StaticBatchable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CloudPillarTiming
class CORDL_TYPE CloudPillarTiming : public ::GlobalNamespace::StaticBatchable {
public:
// Declarations
using Channel = ::GlobalNamespace::CloudPillarTiming_Channel;

/// @brief Field _channel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel, put=__cordl_internal_set__channel)) ::GlobalNamespace::CloudPillarTiming_Channel  _channel;

/// @brief Field _meshFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilter, put=__cordl_internal_set__meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  _meshFilter;

/// @brief Field _uv, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uv, put=__cordl_internal_set__uv)) ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  _uv;

/// @brief Method Bake, addr 0x16c57cc, size 0x13c, virtual false, abstract: false, final false
inline void Bake() ;

/// @brief Method BeforeBatching, addr 0x16c592c, size 0x38, virtual true, abstract: false, final false
inline void BeforeBatching() ;

/// @brief Method GetOffset, addr 0x16c5908, size 0x24, virtual false, abstract: false, final false
inline float_t GetOffset() ;

static inline ::GlobalNamespace::CloudPillarTiming* New_ctor() ;

constexpr ::GlobalNamespace::CloudPillarTiming_Channel const& __cordl_internal_get__channel() const;

constexpr ::GlobalNamespace::CloudPillarTiming_Channel& __cordl_internal_get__channel() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter() ;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get__uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& __cordl_internal_get__uv() ;

constexpr void __cordl_internal_set__channel(::GlobalNamespace::CloudPillarTiming_Channel  value) ;

constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

/// @brief Method .ctor, addr 0x16c5964, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudPillarTiming() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudPillarTiming", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudPillarTiming(CloudPillarTiming && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudPillarTiming", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudPillarTiming(CloudPillarTiming const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{72};

/// @brief Field _channel, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CloudPillarTiming_Channel  ____channel;

/// @brief Field _meshFilter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____meshFilter;

/// @brief Field _uv, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  ____uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CloudPillarTiming, ____channel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudPillarTiming, ____meshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudPillarTiming, ____uv) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CloudPillarTiming, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudPillarTiming_Channel, "", "CloudPillarTiming/Channel");
NEED_NO_BOX(::GlobalNamespace::CloudPillarTiming);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudPillarTiming*, "", "CloudPillarTiming");
