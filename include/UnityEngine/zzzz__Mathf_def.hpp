#pragma once
// IWYU pragma private; include "UnityEngine/Mathf.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mathf)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Mathf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Mathf);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mathf
#pragma pack(push, 0)
struct CORDL_TYPE Mathf {
public:
// Declarations
/// @brief Field Epsilon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) float_t  Epsilon;

/// @brief Method Abs, addr 0x2f81d64, size 0x5c, virtual false, abstract: false, final false
static inline float_t Abs(float_t  f) ;

/// @brief Method Abs, addr 0x2f81dc0, size 0x58, virtual false, abstract: false, final false
static inline int32_t Abs(int32_t  value) ;

/// @brief Method Acos, addr 0x2f81bd4, size 0x64, virtual false, abstract: false, final false
static inline float_t Acos(float_t  f) ;

/// @brief Method Approximately, addr 0x2f82450, size 0x90, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method Atan, addr 0x2f81c38, size 0x64, virtual false, abstract: false, final false
static inline float_t Atan(float_t  f) ;

/// @brief Method Atan2, addr 0x2f81c9c, size 0x6c, virtual false, abstract: false, final false
static inline float_t Atan2(float_t  y, float_t  x) ;

/// @brief Method Ceil, addr 0x2f8202c, size 0x5c, virtual false, abstract: false, final false
static inline float_t Ceil(float_t  f) ;

/// @brief Method CeilToInt, addr 0x2f821ac, size 0x74, virtual false, abstract: false, final false
static inline int32_t CeilToInt(float_t  f) ;

/// @brief Method Clamp, addr 0x2f82384, size 0x1c, virtual false, abstract: false, final false
static inline float_t Clamp(float_t  value, float_t  min, float_t  max) ;

/// @brief Method Clamp, addr 0x2f823a0, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Clamp01, addr 0x2f823bc, size 0x1c, virtual false, abstract: false, final false
static inline float_t Clamp01(float_t  value) ;

/// @brief Method ClampToFloat, addr 0x2f82638, size 0x6c, virtual false, abstract: false, final false
static inline float_t ClampToFloat(double_t  value) ;

/// @brief Method ClampToInt, addr 0x2f826a4, size 0x28, virtual false, abstract: false, final false
static inline int32_t ClampToInt(int64_t  value) ;

/// @brief Method ClampToUInt, addr 0x2f826cc, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t ClampToUInt(int64_t  value) ;

/// @brief Method CorrelatedColorTemperatureToRGB, addr 0x2f81a04, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t  kelvin) ;

/// @brief Method CorrelatedColorTemperatureToRGB_Injected, addr 0x2f81a5c, size 0x4c, virtual false, abstract: false, final false
static inline void CorrelatedColorTemperatureToRGB_Injected(float_t  kelvin, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method Cos, addr 0x2f81b0c, size 0x64, virtual false, abstract: false, final false
static inline float_t Cos(float_t  f) ;

/// @brief Method DiscardLeastSignificantDecimal, addr 0x2f82800, size 0x160, virtual false, abstract: false, final false
static inline double_t DiscardLeastSignificantDecimal(double_t  v) ;

/// @brief Method Floor, addr 0x2f82088, size 0x5c, virtual false, abstract: false, final false
static inline float_t Floor(float_t  f) ;

/// @brief Method FloorToInt, addr 0x2f82220, size 0x74, virtual false, abstract: false, final false
static inline int32_t FloorToInt(float_t  f) ;

/// @brief Method GammaToLinearSpace, addr 0x2f7ca60, size 0x38, virtual false, abstract: false, final false
static inline float_t GammaToLinearSpace(float_t  value) ;

/// @brief Method GetNumberOfDecimalsForMinimumDifference, addr 0x2f826e8, size 0x8c, virtual false, abstract: false, final false
static inline int32_t GetNumberOfDecimalsForMinimumDifference(double_t  minDifference) ;

/// @brief Method InverseLerp, addr 0x2f82608, size 0x30, virtual false, abstract: false, final false
static inline float_t InverseLerp(float_t  a, float_t  b, float_t  value) ;

/// @brief Method IsPowerOfTwo, addr 0x2f8198c, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPowerOfTwo(int32_t  value) ;

/// @brief Method Lerp, addr 0x2f823d8, size 0x24, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  a, float_t  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x2f823fc, size 0x10, virtual false, abstract: false, final false
static inline float_t LerpUnclamped(float_t  a, float_t  b, float_t  t) ;

/// @brief Method Log, addr 0x2f81f58, size 0x70, virtual false, abstract: false, final false
static inline float_t Log(float_t  f, float_t  p) ;

/// @brief Method Log10, addr 0x2f81fc8, size 0x64, virtual false, abstract: false, final false
static inline float_t Log10(float_t  f) ;

/// @brief Method Max, addr 0x2f81e80, size 0xc, virtual false, abstract: false, final false
static inline float_t Max(float_t  a, float_t  b) ;

/// @brief Method Max, addr 0x2f81e8c, size 0x50, virtual false, abstract: false, final false
static inline float_t Max(::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method Max, addr 0x2f81edc, size 0xc, virtual false, abstract: false, final false
static inline int32_t Max(int32_t  a, int32_t  b) ;

/// @brief Method Min, addr 0x2f81e18, size 0xc, virtual false, abstract: false, final false
static inline float_t Min(float_t  a, float_t  b) ;

/// @brief Method Min, addr 0x2f81e24, size 0x50, virtual false, abstract: false, final false
static inline float_t Min(::ArrayW<float_t,::Array<float_t>*>  values) ;

/// @brief Method Min, addr 0x2f81e74, size 0xc, virtual false, abstract: false, final false
static inline int32_t Min(int32_t  a, int32_t  b) ;

/// @brief Method NextPowerOfTwo, addr 0x2f819c8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t NextPowerOfTwo(int32_t  value) ;

/// @brief Method PingPong, addr 0x2f825d4, size 0x34, virtual false, abstract: false, final false
static inline float_t PingPong(float_t  t, float_t  length) ;

/// @brief Method Pow, addr 0x2f81ee8, size 0x70, virtual false, abstract: false, final false
static inline float_t Pow(float_t  f, float_t  p) ;

/// @brief Method Repeat, addr 0x2f825ac, size 0x28, virtual false, abstract: false, final false
static inline float_t Repeat(float_t  t, float_t  length) ;

/// @brief Method Round, addr 0x2f820e4, size 0xc8, virtual false, abstract: false, final false
static inline float_t Round(float_t  f) ;

/// @brief Method RoundBasedOnMinimumDifference, addr 0x2f82774, size 0x8c, virtual false, abstract: false, final false
static inline double_t RoundBasedOnMinimumDifference(double_t  valueToRound, double_t  minDifference) ;

/// @brief Method RoundToInt, addr 0x2f82294, size 0xdc, virtual false, abstract: false, final false
static inline int32_t RoundToInt(float_t  f) ;

/// @brief Method Sign, addr 0x2f82370, size 0x14, virtual false, abstract: false, final false
static inline float_t Sign(float_t  f) ;

/// @brief Method Sin, addr 0x2f81aa8, size 0x64, virtual false, abstract: false, final false
static inline float_t Sin(float_t  f) ;

/// @brief Method SmoothDamp, addr 0x2f824e0, size 0xcc, virtual false, abstract: false, final false
static inline float_t SmoothDamp(float_t  current, float_t  target, ::ByRef<float_t>  currentVelocity, float_t  smoothTime, float_t  maxSpeed, float_t  deltaTime) ;

/// @brief Method SmoothStep, addr 0x2f8240c, size 0x44, virtual false, abstract: false, final false
static inline float_t SmoothStep(float_t  from, float_t  to, float_t  t) ;

/// @brief Method Sqrt, addr 0x2f81d08, size 0x5c, virtual false, abstract: false, final false
static inline float_t Sqrt(float_t  f) ;

/// @brief Method Tan, addr 0x2f81b70, size 0x64, virtual false, abstract: false, final false
static inline float_t Tan(float_t  f) ;

static inline float_t getStaticF_Epsilon() ;

static inline void setStaticF_Epsilon(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mathf() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mathf, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mathf, "UnityEngine", "Mathf");
