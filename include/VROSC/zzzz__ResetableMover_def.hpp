#pragma once
// IWYU pragma private; include "VROSC/ResetableMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResetableMover)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class ResetableMover;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ResetableMover);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ResetableMover
class CORDL_TYPE ResetableMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field InstrumentScaleMultiplier, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstrumentScaleMultiplier, put=__cordl_internal_set_InstrumentScaleMultiplier)) float_t  InstrumentScaleMultiplier;

 __declspec(property(get=get_Mover)) ::UnityW<::VROSC::TransformMover>  Mover;

/// @brief Field OnMoved, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoved, put=__cordl_internal_set_OnMoved)) ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  OnMoved;

/// @brief Field OnReset, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReset, put=__cordl_internal_set_OnReset)) ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  OnReset;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Scale)) ::UnityEngine::Vector3  Scale;

/// @brief Field _freeMoveParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__freeMoveParent, put=__cordl_internal_set__freeMoveParent)) ::UnityW<::UnityEngine::Transform>  _freeMoveParent;

/// @brief Field _hiddenByExternal, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__hiddenByExternal, put=__cordl_internal_set__hiddenByExternal)) bool  _hiddenByExternal;

/// @brief Field _isAttached, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAttached, put=__cordl_internal_set__isAttached)) bool  _isAttached;

/// @brief Field _mover, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field _originalParent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalParent, put=__cordl_internal_set__originalParent)) ::UnityW<::UnityEngine::Transform>  _originalParent;

/// @brief Field _resetButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetButton, put=__cordl_internal_set__resetButton)) ::UnityW<::VROSC::UIButton>  _resetButton;

/// @brief Field _resetButtonParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetButtonParent, put=__cordl_internal_set__resetButtonParent)) ::UnityW<::UnityEngine::GameObject>  _resetButtonParent;

/// @brief Field _snapBackDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapBackDistance, put=__cordl_internal_set__snapBackDistance)) float_t  _snapBackDistance;

/// @brief Field _snapToObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapToObject, put=__cordl_internal_set__snapToObject)) ::UnityW<::UnityEngine::Transform>  _snapToObject;

/// @brief Method Awake, addr 0x173d46c, size 0x1e4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GrabEnded, addr 0x173d688, size 0x10c, virtual false, abstract: false, final false
inline void GrabEnded(::VROSC::TransformMover*  mover) ;

static inline ::VROSC::ResetableMover* New_ctor() ;

/// @brief Method OnDestroy, addr 0x173dbe8, size 0x19c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x173dd84, size 0x1e0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method ResetPressed, addr 0x173db98, size 0x50, virtual false, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method ResetTransform, addr 0x173d9dc, size 0xf0, virtual false, abstract: false, final false
inline void ResetTransform() ;

/// @brief Method SetHiddenByExternal, addr 0x173db64, size 0x34, virtual false, abstract: false, final false
inline void SetHiddenByExternal(bool  hiddenByExternal) ;

/// @brief Method SetIsAttached, addr 0x173d650, size 0x38, virtual false, abstract: false, final false
inline void SetIsAttached(bool  attached) ;

/// @brief Method SetToPosition, addr 0x173d794, size 0x248, virtual false, abstract: false, final false
inline void SetToPosition(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

constexpr float_t const& __cordl_internal_get_InstrumentScaleMultiplier() const;

constexpr float_t& __cordl_internal_get_InstrumentScaleMultiplier() ;

constexpr ::System::Action_1<::UnityW<::VROSC::ResetableMover>>* const& __cordl_internal_get_OnMoved() const;

constexpr ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*& __cordl_internal_get_OnMoved() ;

constexpr ::System::Action_1<::UnityW<::VROSC::ResetableMover>>* const& __cordl_internal_get_OnReset() const;

constexpr ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*& __cordl_internal_get_OnReset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__freeMoveParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__freeMoveParent() ;

constexpr bool const& __cordl_internal_get__hiddenByExternal() const;

constexpr bool& __cordl_internal_get__hiddenByExternal() ;

constexpr bool const& __cordl_internal_get__isAttached() const;

constexpr bool& __cordl_internal_get__isAttached() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originalParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originalParent() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__resetButtonParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__resetButtonParent() ;

constexpr float_t const& __cordl_internal_get__snapBackDistance() const;

constexpr float_t& __cordl_internal_get__snapBackDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__snapToObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__snapToObject() ;

constexpr void __cordl_internal_set_InstrumentScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_OnMoved(::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  value) ;

constexpr void __cordl_internal_set_OnReset(::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  value) ;

constexpr void __cordl_internal_set__freeMoveParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__hiddenByExternal(bool  value) ;

constexpr void __cordl_internal_set__isAttached(bool  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__originalParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__resetButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__resetButtonParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__snapBackDistance(float_t  value) ;

constexpr void __cordl_internal_set__snapToObject(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x173df64, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Mover, addr 0x173d3ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> get_Mover() ;

/// @brief Method get_Position, addr 0x173d3f4, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x173d41c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale, addr 0x173d444, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Scale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResetableMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResetableMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResetableMover(ResetableMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResetableMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResetableMover(ResetableMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1103};

/// @brief Field _mover, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _freeMoveParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____freeMoveParent;

/// @brief Field _snapToObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____snapToObject;

/// @brief Field _snapBackDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____snapBackDistance;

/// @brief Field _resetButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetButton;

/// @brief Field _resetButtonParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____resetButtonParent;

/// @brief Field _originalParent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____originalParent;

/// @brief Field _isAttached, offset: 0x58, size: 0x1, def value: None
 bool  ____isAttached;

/// @brief Field _hiddenByExternal, offset: 0x59, size: 0x1, def value: None
 bool  ____hiddenByExternal;

/// @brief Field InstrumentScaleMultiplier, offset: 0x5c, size: 0x4, def value: None
 float_t  ___InstrumentScaleMultiplier;

/// @brief Field OnMoved, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  ___OnMoved;

/// @brief Field OnReset, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::ResetableMover>>*  ___OnReset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ResetableMover, ____mover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____freeMoveParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____snapToObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____snapBackDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____resetButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____resetButtonParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____originalParent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____isAttached) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ____hiddenByExternal) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ___InstrumentScaleMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ___OnMoved) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ResetableMover, ___OnReset) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ResetableMover, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ResetableMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ResetableMover*, "VROSC", "ResetableMover");
