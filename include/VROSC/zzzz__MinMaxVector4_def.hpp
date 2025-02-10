#pragma once
// IWYU pragma private; include "VROSC/MinMaxVector4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinMaxVector4)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace VROSC {
class MinMaxVector4;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MinMaxVector4);
// Dependencies System.Object, UnityEngine.Vector4
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MinMaxVector4
class CORDL_TYPE MinMaxVector4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Max)) ::UnityEngine::Vector4  Max;

 __declspec(property(get=get_Min)) ::UnityEngine::Vector4  Min;

/// @brief Field _max, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) ::UnityEngine::Vector4  _max;

/// @brief Field _min, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) ::UnityEngine::Vector4  _min;

/// @brief Method Lerp, addr 0x17ba400, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Lerp(float_t  amount, bool  clamp) ;

static inline ::VROSC::MinMaxVector4* New_ctor(::UnityEngine::Vector4  min, ::UnityEngine::Vector4  max) ;

/// @brief Method Random, addr 0x17ba38c, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Random(bool  uniform) ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__max() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__max() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__min() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__min() ;

constexpr void __cordl_internal_set__max(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__min(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x17ba324, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector4  min, ::UnityEngine::Vector4  max) ;

/// @brief Method get_Max, addr 0x17ba318, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Max() ;

/// @brief Method get_Min, addr 0x17ba30c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Min() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxVector4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxVector4(MinMaxVector4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxVector4(MinMaxVector4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1475};

/// @brief Field _min, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____min;

/// @brief Field _max, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MinMaxVector4, ____min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MinMaxVector4, ____max) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MinMaxVector4, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MinMaxVector4);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxVector4*, "VROSC", "MinMaxVector4");
