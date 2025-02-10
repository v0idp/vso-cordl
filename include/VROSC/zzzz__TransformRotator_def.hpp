#pragma once
// IWYU pragma private; include "VROSC/TransformRotator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(TransformRotator)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class TransformRotator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformRotator);
// Dependencies UnityEngine.Quaternion, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformRotator
class CORDL_TYPE TransformRotator : public ::VROSC::SignalNode {
public:
// Declarations
 __declspec(property(get=get_RequireOrigin)) bool  RequireOrigin;

/// @brief Field _lockX, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockX, put=__cordl_internal_set__lockX)) bool  _lockX;

/// @brief Field _lockY, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockY, put=__cordl_internal_set__lockY)) bool  _lockY;

/// @brief Field _lockZ, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockZ, put=__cordl_internal_set__lockZ)) bool  _lockZ;

/// @brief Field _relativeStartRotation, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__relativeStartRotation, put=__cordl_internal_set__relativeStartRotation)) ::UnityEngine::Quaternion  _relativeStartRotation;

/// @brief Field _sourceTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceTransform, put=__cordl_internal_set__sourceTransform)) ::UnityW<::UnityEngine::Transform>  _sourceTransform;

/// @brief Field _targetTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTransform, put=__cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform>  _targetTransform;

static inline ::VROSC::TransformRotator* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720df0, size 0x150, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x17211d8, size 0x8, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1720f40, size 0x298, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__lockX() const;

constexpr bool& __cordl_internal_get__lockX() ;

constexpr bool const& __cordl_internal_get__lockY() const;

constexpr bool& __cordl_internal_get__lockY() ;

constexpr bool const& __cordl_internal_get__lockZ() const;

constexpr bool& __cordl_internal_get__lockZ() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__relativeStartRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__relativeStartRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sourceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sourceTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform() ;

constexpr void __cordl_internal_set__lockX(bool  value) ;

constexpr void __cordl_internal_set__lockY(bool  value) ;

constexpr void __cordl_internal_set__lockZ(bool  value) ;

constexpr void __cordl_internal_set__relativeStartRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__sourceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17211e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RequireOrigin, addr 0x1720de8, size 0x8, virtual true, abstract: false, final false
inline bool get_RequireOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformRotator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformRotator(TransformRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformRotator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformRotator(TransformRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{976};

/// @brief Field _targetTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetTransform;

/// @brief Field _sourceTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____sourceTransform;

/// @brief Field _relativeStartRotation, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____relativeStartRotation;

/// @brief Field _lockX, offset: 0x68, size: 0x1, def value: None
 bool  ____lockX;

/// @brief Field _lockY, offset: 0x69, size: 0x1, def value: None
 bool  ____lockY;

/// @brief Field _lockZ, offset: 0x6a, size: 0x1, def value: None
 bool  ____lockZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformRotator, ____targetTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformRotator, ____sourceTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformRotator, ____relativeStartRotation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformRotator, ____lockX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformRotator, ____lockY) == 0x69, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformRotator, ____lockZ) == 0x6a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformRotator, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformRotator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformRotator*, "VROSC", "TransformRotator");
