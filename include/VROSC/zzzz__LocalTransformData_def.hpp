#pragma once
// IWYU pragma private; include "VROSC/LocalTransformData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LocalTransformData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace VROSC {
class LocalTransformData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LocalTransformData);
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LocalTransformData
class CORDL_TYPE LocalTransformData : public ::System::Object {
public:
// Declarations
/// @brief Field LocalScale, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalScale, put=__cordl_internal_set_LocalScale)) ::UnityEngine::Vector3  LocalScale;

/// @brief Field Position, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field Transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Transform, put=__cordl_internal_set_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

static inline ::VROSC::LocalTransformData* New_ctor(::UnityEngine::Transform*  transform) ;

/// @brief Method ResetTransform, addr 0x173e0a4, size 0x58, virtual false, abstract: false, final false
inline void ResetTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Rotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Transform() ;

constexpr void __cordl_internal_set_LocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x173df7c, size 0x128, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalTransformData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalTransformData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalTransformData(LocalTransformData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalTransformData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalTransformData(LocalTransformData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1104};

/// @brief Field Transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Transform;

/// @brief Field Position, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Position;

/// @brief Field Rotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Rotation;

/// @brief Field LocalScale, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LocalTransformData, ___Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalTransformData, ___Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalTransformData, ___Rotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::LocalTransformData, ___LocalScale) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LocalTransformData, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LocalTransformData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LocalTransformData*, "VROSC", "LocalTransformData");
