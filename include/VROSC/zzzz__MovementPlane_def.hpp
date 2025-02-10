#pragma once
// IWYU pragma private; include "VROSC/MovementPlane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MovementPlane)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputSettings;
}
// Forward declare root types
namespace VROSC {
class MovementPlane;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MovementPlane);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MovementPlane
class CORDL_TYPE MovementPlane : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _inputSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSettings, put=__cordl_internal_set__inputSettings)) ::UnityW<::VROSC::InputSettings>  _inputSettings;

/// @brief Field _rectTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Method Awake, addr 0x1742b84, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConstrainOnPlane, addr 0x1742c5c, size 0x1d8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConstrainOnPlane(::UnityEngine::RectTransform*  target, float_t  height) ;

/// @brief Method GetPointOnPlane, addr 0x1742e34, size 0x348, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPointOnPlane(::UnityEngine::Transform*  raySource, ::ByRef<bool>  hit) ;

static inline ::VROSC::MovementPlane* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x174317c, size 0xdc, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method PlaceOnPlane, addr 0x1742bd4, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PlaceOnPlane(::UnityEngine::Transform*  target, float_t  height) ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__inputSettings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__inputSettings() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr void __cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x1743258, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MovementPlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MovementPlane", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MovementPlane(MovementPlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MovementPlane", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MovementPlane(MovementPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1119};

/// @brief Field _inputSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____inputSettings;

/// @brief Field _rectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MovementPlane, ____inputSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MovementPlane, ____rectTransform) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MovementPlane, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MovementPlane);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MovementPlane*, "VROSC", "MovementPlane");
