#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ConstantRotationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ConstantRotationData)
namespace UnityEngine {
class Transform;
}
namespace VROSC::AudioReactive {
class RotateEffectData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ConstantRotationData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ConstantRotationData);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ConstantRotationData
class CORDL_TYPE ConstantRotationData : public ::System::Object {
public:
// Declarations
/// @brief Field _local, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__local, put=__cordl_internal_set__local)) bool  _local;

/// @brief Field _rotation, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::UnityEngine::Vector3  _rotation;

/// @brief Field _transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

static inline ::VROSC::AudioReactive::ConstantRotationData* New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data) ;

/// @brief Method Rotate, addr 0x17d6678, size 0x5c, virtual false, abstract: false, final false
inline void Rotate() ;

constexpr bool const& __cordl_internal_get__local() const;

constexpr bool& __cordl_internal_get__local() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__local(bool  value) ;

constexpr void __cordl_internal_set__rotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17d65b4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantRotationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantRotationData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantRotationData(ConstantRotationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantRotationData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantRotationData(ConstantRotationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1520};

/// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _rotation, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotation;

/// @brief Field _local, offset: 0x24, size: 0x1, def value: None
 bool  ____local;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ConstantRotationData, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ConstantRotationData, ____rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ConstantRotationData, ____local) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ConstantRotationData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ConstantRotationData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ConstantRotationData*, "VROSC.AudioReactive", "ConstantRotationData");
