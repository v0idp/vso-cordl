#pragma once
// IWYU pragma private; include "GlobalNamespace/HandMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandMover)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
struct HandType;
}
// Forward declare root types
namespace GlobalNamespace {
class HandMover;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HandMover);
// Dependencies UnityEngine.MonoBehaviour, VROSC.HandType
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandMover
class CORDL_TYPE HandMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_UseHand)) ::VROSC::HandType  UseHand;

/// @brief Field _depthOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOffset, put=__cordl_internal_set__depthOffset)) float_t  _depthOffset;

/// @brief Field _depthScrollSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthScrollSpeed, put=__cordl_internal_set__depthScrollSpeed)) float_t  _depthScrollSpeed;

/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::UnityEngine::Transform>  _leftHand;

/// @brief Field _rightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::UnityEngine::Transform>  _rightHand;

/// @brief Field _useHand, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__useHand, put=__cordl_internal_set__useHand)) ::VROSC::HandType  _useHand;

static inline ::GlobalNamespace::HandMover* New_ctor() ;

/// @brief Method Update, addr 0x16c1eac, size 0x2ec, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__depthOffset() const;

constexpr float_t& __cordl_internal_get__depthOffset() ;

constexpr float_t const& __cordl_internal_get__depthScrollSpeed() const;

constexpr float_t& __cordl_internal_get__depthScrollSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHand() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__useHand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__useHand() ;

constexpr void __cordl_internal_set__depthOffset(float_t  value) ;

constexpr void __cordl_internal_set__depthScrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__useHand(::VROSC::HandType  value) ;

/// @brief Method .ctor, addr 0x16c2198, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UseHand, addr 0x16c1ea4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HandType get_UseHand() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HandMover(HandMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandMover(HandMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{47};

/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____leftHand;

/// @brief Field _rightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rightHand;

/// @brief Field _useHand, offset: 0x30, size: 0x4, def value: None
 ::VROSC::HandType  ____useHand;

/// @brief Field _depthScrollSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____depthScrollSpeed;

/// @brief Field _depthOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ____depthOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandMover, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMover, ____rightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMover, ____useHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMover, ____depthScrollSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMover, ____depthOffset) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandMover, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HandMover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandMover*, "", "HandMover");
