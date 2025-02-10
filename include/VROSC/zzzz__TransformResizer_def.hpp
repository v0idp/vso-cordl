#pragma once
// IWYU pragma private; include "VROSC/TransformResizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformResizer)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class TransformResizer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformResizer);
// Dependencies UnityEngine.Vector3, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformResizer
class CORDL_TYPE TransformResizer : public ::VROSC::SignalNode {
public:
// Declarations
 __declspec(property(get=get_RequireOrigin)) bool  RequireOrigin;

/// @brief Field _invertX, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertX, put=__cordl_internal_set__invertX)) bool  _invertX;

/// @brief Field _invertY, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertY, put=__cordl_internal_set__invertY)) bool  _invertY;

/// @brief Field _invertZ, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertZ, put=__cordl_internal_set__invertZ)) bool  _invertZ;

/// @brief Field _minSize, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minSize, put=__cordl_internal_set__minSize)) float_t  _minSize;

/// @brief Field _resizeTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__resizeTransform, put=__cordl_internal_set__resizeTransform)) ::UnityW<::UnityEngine::Transform>  _resizeTransform;

/// @brief Field _startPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition, put=__cordl_internal_set__startPosition)) ::UnityEngine::Vector3  _startPosition;

/// @brief Field _startScale, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

static inline ::VROSC::TransformResizer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720c24, size 0x64, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1720dcc, size 0x8, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1720c88, size 0x144, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__invertX() const;

constexpr bool& __cordl_internal_get__invertX() ;

constexpr bool const& __cordl_internal_get__invertY() const;

constexpr bool& __cordl_internal_get__invertY() ;

constexpr bool const& __cordl_internal_get__invertZ() const;

constexpr bool& __cordl_internal_get__invertZ() ;

constexpr float_t const& __cordl_internal_get__minSize() const;

constexpr float_t& __cordl_internal_get__minSize() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__resizeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__resizeTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr void __cordl_internal_set__invertX(bool  value) ;

constexpr void __cordl_internal_set__invertY(bool  value) ;

constexpr void __cordl_internal_set__invertZ(bool  value) ;

constexpr void __cordl_internal_set__minSize(float_t  value) ;

constexpr void __cordl_internal_set__resizeTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__startPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1720dd4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RequireOrigin, addr 0x1720c1c, size 0x8, virtual true, abstract: false, final false
inline bool get_RequireOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformResizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformResizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformResizer(TransformResizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformResizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformResizer(TransformResizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{975};

/// @brief Field _resizeTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____resizeTransform;

/// @brief Field _startPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition;

/// @brief Field _startScale, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _invertX, offset: 0x68, size: 0x1, def value: None
 bool  ____invertX;

/// @brief Field _invertY, offset: 0x69, size: 0x1, def value: None
 bool  ____invertY;

/// @brief Field _invertZ, offset: 0x6a, size: 0x1, def value: None
 bool  ____invertZ;

/// @brief Field _minSize, offset: 0x6c, size: 0x4, def value: None
 float_t  ____minSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformResizer, ____resizeTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____startPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____startScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____invertX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____invertY) == 0x69, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____invertZ) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformResizer, ____minSize) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformResizer, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformResizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformResizer*, "VROSC", "TransformResizer");
