#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class Animator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animator);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animator
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_avatar)) ::UnityW<::UnityEngine::Avatar>  avatar;

 __declspec(property(get=get_hasBoundPlayables)) bool  hasBoundPlayables;

 __declspec(property(get=get_hasRootMotion)) bool  hasRootMotion;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  runtimeAnimatorController;

 __declspec(property(put=set_speed)) float_t  speed;

/// @brief Method GetBoneTransform, addr 0x2f53448, size 0x2c0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId) ;

/// @brief Method GetBoneTransformInternal, addr 0x2f537f8, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t  humanBoneId) ;

static inline ::UnityEngine::Animator* New_ctor() ;

/// @brief Method ResetTrigger, addr 0x2f53374, size 0x44, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method ResetTriggerString, addr 0x2f533b8, size 0x44, virtual false, abstract: false, final false
inline void ResetTriggerString(::StringW  name) ;

/// @brief Method SetBool, addr 0x2f53244, size 0x54, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetBoolString, addr 0x2f53298, size 0x54, virtual false, abstract: false, final false
inline void SetBoolString(::StringW  name, bool  value) ;

/// @brief Method SetFloat, addr 0x2f5319c, size 0x54, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloatString, addr 0x2f531f0, size 0x54, virtual false, abstract: false, final false
inline void SetFloatString(::StringW  name, float_t  value) ;

/// @brief Method SetTrigger, addr 0x2f532ec, size 0x44, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method SetTriggerString, addr 0x2f53330, size 0x44, virtual false, abstract: false, final false
inline void SetTriggerString(::StringW  name) ;

/// @brief Method .ctor, addr 0x2f538b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_avatar, addr 0x2f53708, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Avatar> get_avatar() ;

/// @brief Method get_hasBoundPlayables, addr 0x2f53878, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasBoundPlayables() ;

/// @brief Method get_hasRootMotion, addr 0x2f53160, size 0x3c, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_isHuman, addr 0x2f53124, size 0x3c, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_runtimeAnimatorController, addr 0x2f5383c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController() ;

/// @brief Method set_speed, addr 0x2f533fc, size 0x4c, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animator(Animator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animator(Animator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animator, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
