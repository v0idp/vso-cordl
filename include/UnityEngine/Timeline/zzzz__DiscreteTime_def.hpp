#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DiscreteTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteTime)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::DiscreteTime);
// Dependencies System.IComparable
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.DiscreteTime
struct CORDL_TYPE DiscreteTime {
public:
// Declarations
/// @brief Field kMaxTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kMaxTime, put=setStaticF_kMaxTime)) ::UnityEngine::Timeline::DiscreteTime  kMaxTime;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Method CompareTo, addr 0x2f29b3c, size 0x7c, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method DoubleToDiscreteTime, addr 0x2f298bc, size 0xa0, virtual false, abstract: false, final false
static inline int64_t DoubleToDiscreteTime(double_t  time) ;

/// @brief Method Equals, addr 0x2f29bc8, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x2f29bb8, size 0x10, virtual false, abstract: false, final false
inline bool Equals(::UnityEngine::Timeline::DiscreteTime  other) ;

/// @brief Method FloatToDiscreteTime, addr 0x2f299c4, size 0xa0, virtual false, abstract: false, final false
static inline int64_t FloatToDiscreteTime(float_t  time) ;

/// @brief Method FromTicks, addr 0x2f29b38, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime FromTicks(int64_t  ticks) ;

/// @brief Method GetHashCode, addr 0x2f29e04, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetNearestTick, addr 0x2f29f44, size 0x5c, virtual false, abstract: false, final false
static inline int64_t GetNearestTick(double_t  time) ;

/// @brief Method GetTick, addr 0x2f29b30, size 0x8, virtual false, abstract: false, final false
inline int64_t GetTick() ;

/// @brief Method IntToDiscreteTime, addr 0x2f29a64, size 0x54, virtual false, abstract: false, final false
static inline int64_t IntToDiscreteTime(int32_t  time) ;

/// @brief Method Max, addr 0x2f1bee0, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method Min, addr 0x2f29e0c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime Min(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method OneTickAfter, addr 0x2f27dd8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::DiscreteTime OneTickAfter() ;

/// @brief Method OneTickBefore, addr 0x2f1a078, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Timeline::DiscreteTime OneTickBefore() ;

/// @brief Method SnapToNearestTick, addr 0x2f29e74, size 0x70, virtual false, abstract: false, final false
static inline double_t SnapToNearestTick(double_t  time) ;

/// @brief Method SnapToNearestTick, addr 0x2f29ee4, size 0x60, virtual false, abstract: false, final false
static inline float_t SnapToNearestTick(float_t  time) ;

/// @brief Method ToDouble, addr 0x2f29c70, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  time) ;

/// @brief Method ToFloat, addr 0x2f29c84, size 0x64, virtual false, abstract: false, final false
static inline float_t ToFloat(int64_t  time) ;

/// @brief Method ToString, addr 0x2f29dfc, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x2f29ab8, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  frame, double_t  fps) ;

/// @brief Method .ctor, addr 0x2f29844, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Timeline::DiscreteTime  time) ;

/// @brief Method .ctor, addr 0x2f29854, size 0x68, virtual false, abstract: false, final false
inline void _ctor(double_t  time) ;

/// @brief Method .ctor, addr 0x2f2995c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(float_t  time) ;

/// @brief Method .ctor, addr 0x2f1be18, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  time) ;

/// @brief Method .ctor, addr 0x2f2984c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  time) ;

static inline ::UnityEngine::Timeline::DiscreteTime getStaticF_kMaxTime() ;

/// @brief Method get_tickValue, addr 0x2f29838, size 0xc, virtual false, abstract: false, final false
static inline double_t get_tickValue() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Method op_Addition, addr 0x2f29df4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Addition(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_Equality, addr 0x2f29d60, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_Explicit, addr 0x2f1a198, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(double_t  time) ;

/// @brief Method op_Explicit, addr 0x2f29d40, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(float_t  time) ;

/// @brief Method op_Explicit, addr 0x2f29d5c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(int64_t  time) ;

/// @brief Method op_Explicit, addr 0x2f1a084, size 0x60, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::UnityEngine::Timeline::DiscreteTime  b) ;

/// @brief Method op_Explicit, addr 0x2f29ce8, size 0x54, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::UnityEngine::Timeline::DiscreteTime  b) ;

/// @brief Method op_Explicit, addr 0x2f29d3c, size 0x4, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::UnityEngine::Timeline::DiscreteTime  b) ;

/// @brief Method op_GreaterThan, addr 0x2f29dd0, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x2f29de8, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_Implicit, addr 0x2f1a04c, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Implicit___UnityEngine__Timeline__DiscreteTime(int32_t  time) ;

/// @brief Method op_Inequality, addr 0x2f29d6c, size 0x64, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_LessThan, addr 0x2f29ddc, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThan(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_LessThanOrEqual, addr 0x2f1a06c, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

/// @brief Method op_Subtraction, addr 0x2f1e910, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Timeline::DiscreteTime op_Subtraction(::UnityEngine::Timeline::DiscreteTime  lhs, ::UnityEngine::Timeline::DiscreteTime  rhs) ;

static inline void setStaticF_kMaxTime(::UnityEngine::Timeline::DiscreteTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DiscreteTime() ;

// Ctor Parameters [CppParam { name: "m_DiscreteTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr DiscreteTime(int64_t  m_DiscreteTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_Tick offset 0xffffffff size 0x8
static constexpr double_t  k_Tick{static_cast<double_t>(0.0)};

/// @brief Field m_DiscreteTime, offset: 0x0, size: 0x8, def value: None
 int64_t  m_DiscreteTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DiscreteTime, m_DiscreteTime) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DiscreteTime, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
