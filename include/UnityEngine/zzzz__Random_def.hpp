#pragma once
// IWYU pragma private; include "UnityEngine/Random.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Random);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::System::Object {
public:
// Declarations
/// @brief Method GetRandomUnitCircle, addr 0x2f86040, size 0x3c, virtual false, abstract: false, final false
static inline void GetRandomUnitCircle(::ByRef<::UnityEngine::Vector2>  output) ;

/// @brief Method RandomRangeInt, addr 0x2f85f4c, size 0x44, virtual false, abstract: false, final false
static inline int32_t RandomRangeInt(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method Range, addr 0x2f85ec8, size 0x40, virtual false, abstract: false, final false
static inline float_t Range(float_t  minInclusive, float_t  maxInclusive) ;

/// @brief Method Range, addr 0x2f85f08, size 0x44, virtual false, abstract: false, final false
static inline int32_t Range(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method get_insideUnitCircle, addr 0x2f8607c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_insideUnitCircle() ;

/// @brief Method get_insideUnitSphere, addr 0x2f85fb8, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_insideUnitSphere() ;

/// @brief Method get_insideUnitSphere_Injected, addr 0x2f86004, size 0x3c, virtual false, abstract: false, final false
static inline void get_insideUnitSphere_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_onUnitSphere, addr 0x2f860c0, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_onUnitSphere() ;

/// @brief Method get_onUnitSphere_Injected, addr 0x2f8610c, size 0x3c, virtual false, abstract: false, final false
static inline void get_onUnitSphere_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rotation, addr 0x2f86148, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotationUniform, addr 0x2f861cc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_rotationUniform() ;

/// @brief Method get_rotationUniform_Injected, addr 0x2f86214, size 0x3c, virtual false, abstract: false, final false
static inline void get_rotationUniform_Injected(::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_rotation_Injected, addr 0x2f86190, size 0x3c, virtual false, abstract: false, final false
static inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_value, addr 0x2f85f90, size 0x28, virtual false, abstract: false, final false
static inline float_t get_value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Random() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Random(Random && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Random(Random const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8550};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Random, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random*, "UnityEngine", "Random");
