#pragma once
// IWYU pragma private; include "VROSC/MalletVisual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MalletVisual)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class PredictiveHitWisp;
}
// Forward declare root types
namespace VROSC {
class MalletVisual;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MalletVisual);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MalletVisual
class CORDL_TYPE MalletVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HeadPosition)) ::UnityEngine::Vector3  HeadPosition;

/// @brief Field _head, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) ::UnityW<::UnityEngine::Transform>  _head;

/// @brief Field _headStartPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__headStartPosition, put=__cordl_internal_set__headStartPosition)) ::UnityEngine::Vector3  _headStartPosition;

/// @brief Field _length, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) float_t  _length;

/// @brief Field _material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _stick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stick, put=__cordl_internal_set__stick)) ::UnityW<::UnityEngine::Transform>  _stick;

/// @brief Field _stickRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stickRenderer, put=__cordl_internal_set__stickRenderer)) ::UnityW<::UnityEngine::Renderer>  _stickRenderer;

/// @brief Field _tipRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tipRenderer, put=__cordl_internal_set__tipRenderer)) ::UnityW<::UnityEngine::Renderer>  _tipRenderer;

/// @brief Field _wisp, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__wisp, put=__cordl_internal_set__wisp)) ::UnityW<::VROSC::PredictiveHitWisp>  _wisp;

/// @brief Method Awake, addr 0x171a2b8, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetHeadPosition, addr 0x171a2a8, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHeadPosition() ;

static inline ::VROSC::MalletVisual* New_ctor() ;

/// @brief Method SetAngle, addr 0x171a518, size 0x64, virtual false, abstract: false, final false
inline void SetAngle(float_t  angle) ;

/// @brief Method SetColor, addr 0x171a378, size 0xa0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetLength, addr 0x171a47c, size 0x9c, virtual false, abstract: false, final false
inline void SetLength(float_t  length) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__head() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__head() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__headStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__headStartPosition() ;

constexpr float_t const& __cordl_internal_get__length() const;

constexpr float_t& __cordl_internal_get__length() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stick() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stick() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__stickRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__stickRenderer() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__tipRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__tipRenderer() ;

constexpr ::UnityW<::VROSC::PredictiveHitWisp> const& __cordl_internal_get__wisp() const;

constexpr ::UnityW<::VROSC::PredictiveHitWisp>& __cordl_internal_get__wisp() ;

constexpr void __cordl_internal_set__head(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__headStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__length(float_t  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__stick(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__stickRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__tipRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__wisp(::UnityW<::VROSC::PredictiveHitWisp>  value) ;

/// @brief Method .ctor, addr 0x171a57c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HeadPosition, addr 0x171a298, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_HeadPosition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletVisual", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletVisual(MalletVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletVisual", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletVisual(MalletVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{924};

/// @brief Field _stick, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stick;

/// @brief Field _head, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____head;

/// @brief Field _tipRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____tipRenderer;

/// @brief Field _stickRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____stickRenderer;

/// @brief Field _wisp, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitWisp>  ____wisp;

/// @brief Field _material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _length, offset: 0x50, size: 0x4, def value: None
 float_t  ____length;

/// @brief Field _headStartPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____headStartPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MalletVisual, ____stick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____head) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____tipRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____stickRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____wisp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____length) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletVisual, ____headStartPosition) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MalletVisual, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MalletVisual);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletVisual*, "VROSC", "MalletVisual");
