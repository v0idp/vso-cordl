#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TriggerRotationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriggerRotationData)
namespace UnityEngine {
class Transform;
}
namespace VROSC::AudioReactive {
class RotateEffectData;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TriggerRotationData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TriggerRotationData);
// Dependencies System.Object, UnityEngine.Quaternion
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TriggerRotationData
class CORDL_TYPE TriggerRotationData : public ::System::Object {
public:
// Declarations
/// @brief Field _endRotation, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__endRotation, put=__cordl_internal_set__endRotation)) ::UnityEngine::Quaternion  _endRotation;

/// @brief Field _local, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__local, put=__cordl_internal_set__local)) bool  _local;

/// @brief Field _startRotation, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__startRotation, put=__cordl_internal_set__startRotation)) ::UnityEngine::Quaternion  _startRotation;

/// @brief Field _transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Method Lerp, addr 0x17d6bb0, size 0x68, virtual false, abstract: false, final false
inline void Lerp(float_t  amount) ;

static inline ::VROSC::AudioReactive::TriggerRotationData* New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__endRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__endRotation() ;

constexpr bool const& __cordl_internal_get__local() const;

constexpr bool& __cordl_internal_get__local() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__endRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__local(bool  value) ;

constexpr void __cordl_internal_set__startRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17d6970, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerRotationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerRotationData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerRotationData(TriggerRotationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerRotationData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerRotationData(TriggerRotationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1521};

/// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _startRotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____startRotation;

/// @brief Field _endRotation, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____endRotation;

/// @brief Field _local, offset: 0x38, size: 0x1, def value: None
 bool  ____local;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TriggerRotationData, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TriggerRotationData, ____startRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TriggerRotationData, ____endRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TriggerRotationData, ____local) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TriggerRotationData, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TriggerRotationData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TriggerRotationData*, "VROSC.AudioReactive", "TriggerRotationData");
