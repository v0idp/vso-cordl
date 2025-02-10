#pragma once
// IWYU pragma private; include "BeautifyEffect/FreeCameraMove.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FreeCameraMove)
// Forward declare root types
namespace BeautifyEffect {
class FreeCameraMove;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::FreeCameraMove);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.FreeCameraMove
class CORDL_TYPE FreeCameraMove : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cameraSensitivity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraSensitivity, put=__cordl_internal_set_cameraSensitivity)) float_t  cameraSensitivity;

/// @brief Field climbSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_climbSpeed, put=__cordl_internal_set_climbSpeed)) float_t  climbSpeed;

/// @brief Field fastMoveFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastMoveFactor, put=__cordl_internal_set_fastMoveFactor)) float_t  fastMoveFactor;

/// @brief Field normalMoveSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalMoveSpeed, put=__cordl_internal_set_normalMoveSpeed)) float_t  normalMoveSpeed;

/// @brief Field originalRotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_originalRotation, put=__cordl_internal_set_originalRotation)) ::UnityEngine::Quaternion  originalRotation;

/// @brief Field rotationX, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationX, put=__cordl_internal_set_rotationX)) float_t  rotationX;

/// @brief Field rotationY, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationY, put=__cordl_internal_set_rotationY)) float_t  rotationY;

/// @brief Field slowMoveFactor, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowMoveFactor, put=__cordl_internal_set_slowMoveFactor)) float_t  slowMoveFactor;

static inline ::BeautifyEffect::FreeCameraMove* New_ctor() ;

/// @brief Method Start, addr 0x180efbc, size 0x48, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180f004, size 0x88c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_cameraSensitivity() const;

constexpr float_t& __cordl_internal_get_cameraSensitivity() ;

constexpr float_t const& __cordl_internal_get_climbSpeed() const;

constexpr float_t& __cordl_internal_get_climbSpeed() ;

constexpr float_t const& __cordl_internal_get_fastMoveFactor() const;

constexpr float_t& __cordl_internal_get_fastMoveFactor() ;

constexpr float_t const& __cordl_internal_get_normalMoveSpeed() const;

constexpr float_t& __cordl_internal_get_normalMoveSpeed() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_originalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_originalRotation() ;

constexpr float_t const& __cordl_internal_get_rotationX() const;

constexpr float_t& __cordl_internal_get_rotationX() ;

constexpr float_t const& __cordl_internal_get_rotationY() const;

constexpr float_t& __cordl_internal_get_rotationY() ;

constexpr float_t const& __cordl_internal_get_slowMoveFactor() const;

constexpr float_t& __cordl_internal_get_slowMoveFactor() ;

constexpr void __cordl_internal_set_cameraSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_climbSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fastMoveFactor(float_t  value) ;

constexpr void __cordl_internal_set_normalMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_originalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rotationX(float_t  value) ;

constexpr void __cordl_internal_set_rotationY(float_t  value) ;

constexpr void __cordl_internal_set_slowMoveFactor(float_t  value) ;

/// @brief Method .ctor, addr 0x180f890, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeCameraMove() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeCameraMove", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeCameraMove(FreeCameraMove && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeCameraMove", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeCameraMove(FreeCameraMove const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1836};

/// @brief Field cameraSensitivity, offset: 0x20, size: 0x4, def value: None
 float_t  ___cameraSensitivity;

/// @brief Field climbSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___climbSpeed;

/// @brief Field normalMoveSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___normalMoveSpeed;

/// @brief Field slowMoveFactor, offset: 0x2c, size: 0x4, def value: None
 float_t  ___slowMoveFactor;

/// @brief Field fastMoveFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ___fastMoveFactor;

/// @brief Field rotationX, offset: 0x34, size: 0x4, def value: None
 float_t  ___rotationX;

/// @brief Field rotationY, offset: 0x38, size: 0x4, def value: None
 float_t  ___rotationY;

/// @brief Field originalRotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___originalRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___cameraSensitivity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___climbSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___normalMoveSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___slowMoveFactor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___fastMoveFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___rotationX) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___rotationY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::FreeCameraMove, ___originalRotation) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::FreeCameraMove, 0x50>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::FreeCameraMove);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::FreeCameraMove*, "BeautifyEffect", "FreeCameraMove");
