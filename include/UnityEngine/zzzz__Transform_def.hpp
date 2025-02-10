#pragma once
// IWYU pragma private; include "UnityEngine/Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Transform)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform_Enumerator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Transform_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Transform);
MARK_REF_PTR_T(::UnityEngine::Transform_Enumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform/Enumerator
class CORDL_TYPE Transform_Enumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_outer, put=__cordl_internal_set_outer)) ::UnityW<::UnityEngine::Transform>  outer;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x2f95950, size 0x60, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Transform_Enumerator* New_ctor(::UnityEngine::Transform*  outer) ;

/// @brief Method Reset, addr 0x2f959b0, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outer() ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_outer(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x2f95808, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  outer) ;

/// @brief Method get_Current, addr 0x2f95904, size 0x4c, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transform_Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transform_Enumerator(Transform_Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transform_Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transform_Enumerator(Transform_Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8650};

/// @brief Field outer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___outer;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Transform_Enumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform_Enumerator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Collections.IEnumerable, UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
// Declarations
using Enumerator = ::UnityEngine::Transform_Enumerator;

 __declspec(property(get=get_childCount)) int32_t  childCount;

 __declspec(property(get=get_eulerAngles, put=set_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

 __declspec(property(get=get_forward, put=set_forward)) ::UnityEngine::Vector3  forward;

 __declspec(property(get=get_hasChanged, put=set_hasChanged)) bool  hasChanged;

 __declspec(property(put=set_hierarchyCapacity)) int32_t  hierarchyCapacity;

 __declspec(property(get=get_localEulerAngles, put=set_localEulerAngles)) ::UnityEngine::Vector3  localEulerAngles;

 __declspec(property(get=get_localPosition, put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

 __declspec(property(get=get_localRotation, put=set_localRotation)) ::UnityEngine::Quaternion  localRotation;

 __declspec(property(get=get_localScale, put=set_localScale)) ::UnityEngine::Vector3  localScale;

 __declspec(property(get=get_localToWorldMatrix)) ::UnityEngine::Matrix4x4  localToWorldMatrix;

 __declspec(property(get=get_lossyScale)) ::UnityEngine::Vector3  lossyScale;

 __declspec(property(get=get_parent, put=set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

 __declspec(property(get=get_parentInternal, put=set_parentInternal)) ::UnityW<::UnityEngine::Transform>  parentInternal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_right, put=set_right)) ::UnityEngine::Vector3  right;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_up)) ::UnityEngine::Vector3  up;

 __declspec(property(get=get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4  worldToLocalMatrix;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Find, addr 0x2f955ac, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> Find(::StringW  n) ;

/// @brief Method FindRelativeTransformWithPath, addr 0x2f95558, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindRelativeTransformWithPath(::UnityEngine::Transform*  transform, ::StringW  path, bool  isActiveOnly) ;

/// @brief Method GetChild, addr 0x2f95838, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetChild(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x2f957a4, size 0x64, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetParent, addr 0x2f9465c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetParent() ;

/// @brief Method GetSiblingIndex, addr 0x2f9551c, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetSiblingIndex() ;

/// @brief Method Internal_LookAt, addr 0x2f950e8, size 0x60, virtual false, abstract: false, final false
inline void Internal_LookAt(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  worldUp) ;

/// @brief Method Internal_LookAt_Injected, addr 0x2f951c4, size 0x54, virtual false, abstract: false, final false
inline void Internal_LookAt_Injected(::ByRef<::UnityEngine::Vector3>  worldPosition, ::ByRef<::UnityEngine::Vector3>  worldUp) ;

/// @brief Method InverseTransformDirection, addr 0x2f9526c, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method InverseTransformDirection_Injected, addr 0x2f952d4, size 0x54, virtual false, abstract: false, final false
inline void InverseTransformDirection_Injected(::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method InverseTransformPoint, addr 0x2f953e8, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3  position) ;

/// @brief Method InverseTransformPoint_Injected, addr 0x2f95450, size 0x54, virtual false, abstract: false, final false
inline void InverseTransformPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method IsChildOf, addr 0x2f956e0, size 0x44, virtual false, abstract: false, final false
inline bool IsChildOf(::UnityEngine::Transform*  parent) ;

/// @brief Method LookAt, addr 0x2f94ff4, size 0xf4, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Transform*  target) ;

/// @brief Method LookAt, addr 0x2f94f34, size 0xbc, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  worldUp) ;

/// @brief Method LookAt, addr 0x2f95148, size 0x7c, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method LookAt, addr 0x2f94ff0, size 0x4, virtual false, abstract: false, final false
inline void LookAt(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  worldUp) ;

static inline ::UnityEngine::Transform* New_ctor() ;

/// @brief Method Rotate, addr 0x2f94e68, size 0x8, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  axis, float_t  angle) ;

/// @brief Method Rotate, addr 0x2f94ddc, size 0x8c, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  axis, float_t  angle, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Rotate, addr 0x2f94d14, size 0x8, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  eulers) ;

/// @brief Method Rotate, addr 0x2f94a8c, size 0x288, virtual false, abstract: false, final false
inline void Rotate(::UnityEngine::Vector3  eulers, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Rotate, addr 0x2f94d1c, size 0x8, virtual false, abstract: false, final false
inline void Rotate(float_t  xAngle, float_t  yAngle, float_t  zAngle) ;

/// @brief Method RotateAround, addr 0x2f94e70, size 0xc4, virtual false, abstract: false, final false
inline void RotateAround(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  axis, float_t  angle) ;

/// @brief Method RotateAroundInternal, addr 0x2f94d24, size 0x64, virtual false, abstract: false, final false
inline void RotateAroundInternal(::UnityEngine::Vector3  axis, float_t  angle) ;

/// @brief Method RotateAroundInternal_Injected, addr 0x2f94d88, size 0x54, virtual false, abstract: false, final false
inline void RotateAroundInternal_Injected(::ByRef<::UnityEngine::Vector3>  axis, float_t  angle) ;

/// @brief Method SetAsFirstSibling, addr 0x2f954e0, size 0x3c, virtual false, abstract: false, final false
inline void SetAsFirstSibling() ;

/// @brief Method SetLocalPositionAndRotation, addr 0x2f948dc, size 0x60, virtual false, abstract: false, final false
inline void SetLocalPositionAndRotation(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method SetLocalPositionAndRotation_Injected, addr 0x2f9493c, size 0x54, virtual false, abstract: false, final false
inline void SetLocalPositionAndRotation_Injected(::ByRef<::UnityEngine::Vector3>  localPosition, ::ByRef<::UnityEngine::Quaternion>  localRotation) ;

/// @brief Method SetParent, addr 0x2f94698, size 0x48, virtual false, abstract: false, final false
inline void SetParent(::UnityEngine::Transform*  p) ;

/// @brief Method SetParent, addr 0x2f946e0, size 0x54, virtual false, abstract: false, final false
inline void SetParent(::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method SetPositionAndRotation, addr 0x2f94828, size 0x60, virtual false, abstract: false, final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetPositionAndRotation_Injected, addr 0x2f94888, size 0x54, virtual false, abstract: false, final false
inline void SetPositionAndRotation_Injected(::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method TransformDirection, addr 0x2f94a18, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method TransformDirection_Injected, addr 0x2f95218, size 0x54, virtual false, abstract: false, final false
inline void TransformDirection_Injected(::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method TransformPoint, addr 0x2f95328, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3  position) ;

/// @brief Method TransformPoint, addr 0x2f953e4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformPoint(float_t  x, float_t  y, float_t  z) ;

/// @brief Method TransformPoint_Injected, addr 0x2f95390, size 0x54, virtual false, abstract: false, final false
inline void TransformPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method Translate, addr 0x2f94990, size 0x88, virtual false, abstract: false, final false
inline void Translate(::UnityEngine::Vector3  translation, ::UnityEngine::Space  relativeTo) ;

/// @brief Method Translate, addr 0x2f94a84, size 0x8, virtual false, abstract: false, final false
inline void Translate(float_t  x, float_t  y, float_t  z) ;

/// @brief Method Translate, addr 0x2f94a80, size 0x4, virtual false, abstract: false, final false
inline void Translate(float_t  x, float_t  y, float_t  z, ::UnityEngine::Space  relativeTo) ;

/// @brief Method .ctor, addr 0x2f93cd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_childCount, addr 0x2f954a4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_childCount() ;

/// @brief Method get_eulerAngles, addr 0x2f93e98, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method get_forward, addr 0x2f9422c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_forward() ;

/// @brief Method get_hasChanged, addr 0x2f95724, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasChanged() ;

/// @brief Method get_localEulerAngles, addr 0x2f93fa4, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localEulerAngles() ;

/// @brief Method get_localPosition, addr 0x2f93318, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_localPosition_Injected, addr 0x2f93e10, size 0x44, virtual false, abstract: false, final false
inline void get_localPosition_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_localRotation, addr 0x2f93fd4, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_localRotation() ;

/// @brief Method get_localRotation_Injected, addr 0x2f9434c, size 0x44, virtual false, abstract: false, final false
inline void get_localRotation_Injected(::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_localScale, addr 0x2f943d4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_localScale() ;

/// @brief Method get_localScale_Injected, addr 0x2f94430, size 0x44, virtual false, abstract: false, final false
inline void get_localScale_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_localToWorldMatrix, addr 0x2f93910, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method get_localToWorldMatrix_Injected, addr 0x2f947e4, size 0x44, virtual false, abstract: false, final false
inline void get_localToWorldMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_lossyScale, addr 0x2f95640, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_lossyScale() ;

/// @brief Method get_lossyScale_Injected, addr 0x2f9569c, size 0x44, virtual false, abstract: false, final false
inline void get_lossyScale_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_parent, addr 0x2f93be4, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_parent() ;

/// @brief Method get_parentInternal, addr 0x2f9450c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_parentInternal() ;

/// @brief Method get_position, addr 0x2f93cd8, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_position_Injected, addr 0x2f93d34, size 0x44, virtual false, abstract: false, final false
inline void get_position_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_right, addr 0x2f940b0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_right() ;

/// @brief Method get_rotation, addr 0x2f93ec8, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotation_Injected, addr 0x2f942c4, size 0x44, virtual false, abstract: false, final false
inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_up, addr 0x2f941b0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_up() ;

/// @brief Method get_worldToLocalMatrix, addr 0x2f94734, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix() ;

/// @brief Method get_worldToLocalMatrix_Injected, addr 0x2f947a0, size 0x44, virtual false, abstract: false, final false
inline void get_worldToLocalMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method internal_setHierarchyCapacity, addr 0x2f958c0, size 0x44, virtual false, abstract: false, final false
inline void internal_setHierarchyCapacity(int32_t  value) ;

/// @brief Method set_eulerAngles, addr 0x2f93f20, size 0x30, virtual false, abstract: false, final false
inline void set_eulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_forward, addr 0x2f942a8, size 0x1c, virtual false, abstract: false, final false
inline void set_forward(::UnityEngine::Vector3  value) ;

/// @brief Method set_hasChanged, addr 0x2f95760, size 0x44, virtual false, abstract: false, final false
inline void set_hasChanged(bool  value) ;

/// @brief Method set_hierarchyCapacity, addr 0x2f9587c, size 0x44, virtual false, abstract: false, final false
inline void set_hierarchyCapacity(int32_t  value) ;

/// @brief Method set_localEulerAngles, addr 0x2f9402c, size 0x30, virtual false, abstract: false, final false
inline void set_localEulerAngles(::UnityEngine::Vector3  value) ;

/// @brief Method set_localPosition, addr 0x2f933a4, size 0x54, virtual false, abstract: false, final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_localPosition_Injected, addr 0x2f93e54, size 0x44, virtual false, abstract: false, final false
inline void set_localPosition_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_localRotation, addr 0x2f9405c, size 0x54, virtual false, abstract: false, final false
inline void set_localRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_localRotation_Injected, addr 0x2f94390, size 0x44, virtual false, abstract: false, final false
inline void set_localRotation_Injected(::ByRef<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_localScale, addr 0x2f94474, size 0x54, virtual false, abstract: false, final false
inline void set_localScale(::UnityEngine::Vector3  value) ;

/// @brief Method set_localScale_Injected, addr 0x2f944c8, size 0x44, virtual false, abstract: false, final false
inline void set_localScale_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_parent, addr 0x2f94548, size 0xcc, virtual false, abstract: false, final false
inline void set_parent(::UnityEngine::Transform*  value) ;

/// @brief Method set_parentInternal, addr 0x2f94614, size 0x48, virtual false, abstract: false, final false
inline void set_parentInternal(::UnityEngine::Transform*  value) ;

/// @brief Method set_position, addr 0x2f93d78, size 0x54, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0x2f93dcc, size 0x44, virtual false, abstract: false, final false
inline void set_position_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_right, addr 0x2f9412c, size 0x84, virtual false, abstract: false, final false
inline void set_right(::UnityEngine::Vector3  value) ;

/// @brief Method set_rotation, addr 0x2f93f50, size 0x54, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotation_Injected, addr 0x2f94308, size 0x44, virtual false, abstract: false, final false
inline void set_rotation_Injected(::ByRef<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transform(Transform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transform(Transform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Transform, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform*, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::Transform_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform_Enumerator*, "UnityEngine", "Transform/Enumerator");
