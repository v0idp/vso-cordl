#pragma once
// IWYU pragma private; include "VROSC/DirectionalFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__SignalFilter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalFilter)
namespace VROSC {
struct DirectionalFilter_Space;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct DirectionalFilter_Space;
}
namespace VROSC {
class DirectionalFilter;
}
// Write type traits
MARK_VAL_T(::VROSC::DirectionalFilter_Space);
MARK_REF_PTR_T(::VROSC::DirectionalFilter);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.DirectionalFilter/Space
struct CORDL_TYPE DirectionalFilter_Space {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectionalFilter_Space_Unwrapped
enum struct __DirectionalFilter_Space_Unwrapped : int32_t {
__E_InputNode = static_cast<int32_t>(0x0),
__E_ThisFilter = static_cast<int32_t>(0x1),
__E_World = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectionalFilter_Space_Unwrapped () const noexcept {
return static_cast<__DirectionalFilter_Space_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectionalFilter_Space() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectionalFilter_Space(int32_t  value__) noexcept;

/// @brief Field InputNode value: I32(0)
static ::VROSC::DirectionalFilter_Space const InputNode;

/// @brief Field ThisFilter value: I32(1)
static ::VROSC::DirectionalFilter_Space const ThisFilter;

/// @brief Field World value: I32(2)
static ::VROSC::DirectionalFilter_Space const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DirectionalFilter_Space, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DirectionalFilter_Space, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Vector3, VROSC.DirectionalFilter::Space, VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DirectionalFilter
class CORDL_TYPE DirectionalFilter : public ::VROSC::SignalFilter {
public:
// Declarations
using Space = ::VROSC::DirectionalFilter_Space;

/// @brief Field _checkFirstFrameOnly, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__checkFirstFrameOnly, put=__cordl_internal_set__checkFirstFrameOnly)) bool  _checkFirstFrameOnly;

/// @brief Field _filterAngle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__filterAngle, put=__cordl_internal_set__filterAngle)) float_t  _filterAngle;

/// @brief Field _filterDirection, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__filterDirection, put=__cordl_internal_set__filterDirection)) ::UnityEngine::Vector3  _filterDirection;

/// @brief Field _firstFramePassed, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstFramePassed, put=__cordl_internal_set__firstFramePassed)) bool  _firstFramePassed;

/// @brief Field _relativeTo, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::VROSC::DirectionalFilter_Space  _relativeTo;

/// @brief Method FilterSignal, addr 0x17214a0, size 0x204, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::DirectionalFilter* New_ctor() ;

/// @brief Method NodeEnd, addr 0x1721498, size 0x8, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__checkFirstFrameOnly() const;

constexpr bool& __cordl_internal_get__checkFirstFrameOnly() ;

constexpr float_t const& __cordl_internal_get__filterAngle() const;

constexpr float_t& __cordl_internal_get__filterAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__filterDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__filterDirection() ;

constexpr bool const& __cordl_internal_get__firstFramePassed() const;

constexpr bool& __cordl_internal_get__firstFramePassed() ;

constexpr ::VROSC::DirectionalFilter_Space const& __cordl_internal_get__relativeTo() const;

constexpr ::VROSC::DirectionalFilter_Space& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__checkFirstFrameOnly(bool  value) ;

constexpr void __cordl_internal_set__filterAngle(float_t  value) ;

constexpr void __cordl_internal_set__filterDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__firstFramePassed(bool  value) ;

constexpr void __cordl_internal_set__relativeTo(::VROSC::DirectionalFilter_Space  value) ;

/// @brief Method .ctor, addr 0x17216a4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalFilter(DirectionalFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalFilter(DirectionalFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{983};

/// @brief Field _filterDirection, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____filterDirection;

/// @brief Field _relativeTo, offset: 0x54, size: 0x4, def value: None
 ::VROSC::DirectionalFilter_Space  ____relativeTo;

/// @brief Field _filterAngle, offset: 0x58, size: 0x4, def value: None
 float_t  ____filterAngle;

/// @brief Field _checkFirstFrameOnly, offset: 0x5c, size: 0x1, def value: None
 bool  ____checkFirstFrameOnly;

/// @brief Field _firstFramePassed, offset: 0x5d, size: 0x1, def value: None
 bool  ____firstFramePassed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DirectionalFilter, ____filterDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DirectionalFilter, ____relativeTo) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::DirectionalFilter, ____filterAngle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DirectionalFilter, ____checkFirstFrameOnly) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DirectionalFilter, ____firstFramePassed) == 0x5d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DirectionalFilter, 0x60>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DirectionalFilter_Space, "VROSC", "DirectionalFilter/Space");
NEED_NO_BOX(::VROSC::DirectionalFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DirectionalFilter*, "VROSC", "DirectionalFilter");
