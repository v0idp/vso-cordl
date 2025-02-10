#pragma once
// IWYU pragma private; include "VROSC/AdjustColliderToRect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustColliderToRect)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class AdjustColliderToRect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustColliderToRect);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustColliderToRect
class CORDL_TYPE AdjustColliderToRect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _collider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _depth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__depth, put=__cordl_internal_set__depth)) float_t  _depth;

/// @brief Field _lastHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _marginX, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__marginX, put=__cordl_internal_set__marginX)) ::VROSC::MinMaxFloat*  _marginX;

/// @brief Field _marginY, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__marginY, put=__cordl_internal_set__marginY)) ::VROSC::MinMaxFloat*  _marginY;

/// @brief Field _offset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector2  _offset;

/// @brief Field _push, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__push, put=__cordl_internal_set__push)) float_t  _push;

/// @brief Field _rectTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _valid, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__valid, put=__cordl_internal_set__valid)) bool  _valid;

/// @brief Method GetValues, addr 0x17a7e10, size 0xec, virtual false, abstract: false, final false
inline void GetValues() ;

static inline ::VROSC::AdjustColliderToRect* New_ctor() ;

/// @brief Method ResizeCollider, addr 0x17a7a4c, size 0x2a0, virtual false, abstract: false, final false
inline void ResizeCollider() ;

/// @brief Method Update, addr 0x17a7cec, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSize, addr 0x17a7d74, size 0x9c, virtual false, abstract: false, final false
inline void UpdateSize(bool  force) ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr float_t const& __cordl_internal_get__depth() const;

constexpr float_t& __cordl_internal_get__depth() ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__marginX() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__marginX() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__marginY() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__marginY() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__offset() ;

constexpr float_t const& __cordl_internal_get__push() const;

constexpr float_t& __cordl_internal_get__push() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr bool const& __cordl_internal_get__valid() const;

constexpr bool& __cordl_internal_get__valid() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__depth(float_t  value) ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__marginX(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__marginY(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__push(float_t  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__valid(bool  value) ;

/// @brief Method .ctor, addr 0x17a7efc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustColliderToRect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustColliderToRect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustColliderToRect(AdjustColliderToRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustColliderToRect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustColliderToRect(AdjustColliderToRect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1396};

/// @brief Field _depth, offset: 0x20, size: 0x4, def value: None
 float_t  ____depth;

/// @brief Field _push, offset: 0x24, size: 0x4, def value: None
 float_t  ____push;

/// @brief Field _marginX, offset: 0x28, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____marginX;

/// @brief Field _marginY, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____marginY;

/// @brief Field _offset, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____offset;

/// @brief Field _rectTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _collider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// @brief Field _valid, offset: 0x50, size: 0x1, def value: None
 bool  ____valid;

/// @brief Field _lastHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0x58, size: 0x4, def value: None
 float_t  ____lastWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustColliderToRect, ____depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____push) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____marginX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____marginY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____rectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____collider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____valid) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____lastHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustColliderToRect, ____lastWidth) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustColliderToRect, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustColliderToRect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustColliderToRect*, "VROSC", "AdjustColliderToRect");
