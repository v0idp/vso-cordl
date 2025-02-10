#pragma once
// IWYU pragma private; include "VROSC/MinMaxVector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MinMaxVector2)
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class MinMaxVector2;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MinMaxVector2);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MinMaxVector2
class CORDL_TYPE MinMaxVector2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Max)) ::UnityEngine::Vector2  Max;

 __declspec(property(get=get_Min)) ::UnityEngine::Vector2  Min;

 __declspec(property(get=get_X)) ::VROSC::MinMaxFloat*  X;

 __declspec(property(get=get_Y)) ::VROSC::MinMaxFloat*  Y;

/// @brief Field _x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) ::VROSC::MinMaxFloat*  _x;

/// @brief Field _y, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__y, put=__cordl_internal_set__y)) ::VROSC::MinMaxFloat*  _y;

/// @brief Method Clamp, addr 0x17ba158, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Clamp(::UnityEngine::Vector2  value) ;

/// @brief Method InverseLerp, addr 0x17ba0ac, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 InverseLerp(::UnityEngine::Vector2  value, bool  clamp) ;

/// @brief Method Invert, addr 0x17ba1a0, size 0x38, virtual false, abstract: false, final false
inline void Invert() ;

/// @brief Method Lerp, addr 0x17ba040, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2  value, bool  clamp) ;

static inline ::VROSC::MinMaxVector2* New_ctor(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) ;

/// @brief Method Random, addr 0x17b9ff0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Random() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__x() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__x() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__y() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__y() ;

constexpr void __cordl_internal_set__x(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__y(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x17b9f4c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) ;

/// @brief Method get_Max, addr 0x17b9f24, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Max() ;

/// @brief Method get_Min, addr 0x17b9efc, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Min() ;

/// @brief Method get_X, addr 0x17b9eec, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_X() ;

/// @brief Method get_Y, addr 0x17b9ef4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_Y() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxVector2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxVector2(MinMaxVector2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxVector2(MinMaxVector2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1473};

/// @brief Field _x, offset: 0x10, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____x;

/// @brief Field _y, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MinMaxVector2, ____x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MinMaxVector2, ____y) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MinMaxVector2, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MinMaxVector2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxVector2*, "VROSC", "MinMaxVector2");
