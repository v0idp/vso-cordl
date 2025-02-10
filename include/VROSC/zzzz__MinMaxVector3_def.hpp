#pragma once
// IWYU pragma private; include "VROSC/MinMaxVector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinMaxVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class MinMaxVector3;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MinMaxVector3);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MinMaxVector3
class CORDL_TYPE MinMaxVector3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Max)) ::UnityEngine::Vector3  Max;

 __declspec(property(get=get_Min)) ::UnityEngine::Vector3  Min;

/// @brief Field _max, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) ::UnityEngine::Vector3  _max;

/// @brief Field _min, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__min, put=__cordl_internal_set__min)) ::UnityEngine::Vector3  _min;

/// @brief Method Lerp, addr 0x17ba2b4, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Lerp(float_t  amount, bool  clamp) ;

static inline ::VROSC::MinMaxVector3* New_ctor(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method Random, addr 0x17ba244, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Random(bool  uniform) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__max() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__max() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__min() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__min() ;

constexpr void __cordl_internal_set__max(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__min(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17ba1f0, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method get_Max, addr 0x17ba1e4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Max() ;

/// @brief Method get_Min, addr 0x17ba1d8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Min() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinMaxVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinMaxVector3(MinMaxVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxVector3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinMaxVector3(MinMaxVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1474};

/// @brief Field _min, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____min;

/// @brief Field _max, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MinMaxVector3, ____min) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MinMaxVector3, ____max) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MinMaxVector3, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MinMaxVector3);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxVector3*, "VROSC", "MinMaxVector3");
