#pragma once
// IWYU pragma private; include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Vector4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector4);
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector4
struct CORDL_TYPE Vector4 {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

 __declspec(property(get=get_magnitude)) float_t  magnitude;

/// @brief Field negativeInfinityVector, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_negativeInfinityVector, put=setStaticF_negativeInfinityVector)) ::UnityEngine::Vector4  negativeInfinityVector;

/// @brief Field oneVector, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_oneVector, put=setStaticF_oneVector)) ::UnityEngine::Vector4  oneVector;

/// @brief Field positiveInfinityVector, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_positiveInfinityVector, put=setStaticF_positiveInfinityVector)) ::UnityEngine::Vector4  positiveInfinityVector;

 __declspec(property(get=get_sqrMagnitude)) float_t  sqrMagnitude;

/// @brief Field zeroVector, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zeroVector, put=setStaticF_zeroVector)) ::UnityEngine::Vector4  zeroVector;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector4>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector4>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Dot, addr 0x2f840b8, size 0x20, virtual false, abstract: false, final false
static inline float_t Dot(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b) ;

/// @brief Method Equals, addr 0x2f83fd4, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x2f8407c, size 0x3c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Vector4  other) ;

/// @brief Method GetHashCode, addr 0x2f83f70, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Lerp, addr 0x2f83ed0, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 Lerp(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0x2f83f1c, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 LerpUnclamped(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  t) ;

/// @brief Method Scale, addr 0x2f83f54, size 0x1c, virtual false, abstract: false, final false
inline void Scale(::UnityEngine::Vector4  scale) ;

/// @brief Method ToString, addr 0x2f8430c, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x2f8431c, size 0x208, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x2f83ec4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z, float_t  w) ;

static inline ::UnityEngine::Vector4 getStaticF_negativeInfinityVector() ;

static inline ::UnityEngine::Vector4 getStaticF_oneVector() ;

static inline ::UnityEngine::Vector4 getStaticF_positiveInfinityVector() ;

static inline ::UnityEngine::Vector4 getStaticF_zeroVector() ;

/// @brief Method get_Item, addr 0x2f83da4, size 0x90, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_magnitude, addr 0x2f840d8, size 0x88, virtual false, abstract: false, final false
inline float_t get_magnitude() ;

/// @brief Method get_one, addr 0x2f841d4, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 get_one() ;

/// @brief Method get_sqrMagnitude, addr 0x2f84160, size 0x28, virtual false, abstract: false, final false
inline float_t get_sqrMagnitude() ;

/// @brief Method get_zero, addr 0x2f84188, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 get_zero() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector4>"
constexpr ::System::IEquatable_1<::UnityEngine::Vector4>* i___System__IEquatable_1___UnityEngine__Vector4_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0x2f84220, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Addition(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b) ;

/// @brief Method op_Division, addr 0x2f8425c, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Division(::UnityEngine::Vector4  a, float_t  d) ;

/// @brief Method op_Equality, addr 0x2f84270, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Vector4  lhs, ::UnityEngine::Vector4  rhs) ;

/// @brief Method op_Implicit, addr 0x2f84308, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector4  v) ;

/// @brief Method op_Implicit, addr 0x2f842f8, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector4  v) ;

/// @brief Method op_Implicit, addr 0x2f842fc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x2f842f0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Vector3  v) ;

/// @brief Method op_Inequality, addr 0x2f842b0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Vector4  lhs, ::UnityEngine::Vector4  rhs) ;

/// @brief Method op_Multiply, addr 0x2f84248, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Multiply(::UnityEngine::Vector4  a, float_t  d) ;

/// @brief Method op_Subtraction, addr 0x2f84234, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Subtraction(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b) ;

static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector4  value) ;

static inline void setStaticF_oneVector(::UnityEngine::Vector4  value) ;

static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector4  value) ;

static inline void setStaticF_zeroVector(::UnityEngine::Vector4  value) ;

/// @brief Method set_Item, addr 0x2f83e34, size 0x90, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector4() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vector4(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(1e-5f)};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 float_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector4, w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector4, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector4, "UnityEngine", "Vector4");
