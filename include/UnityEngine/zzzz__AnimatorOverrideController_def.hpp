#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorOverrideController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
CORDL_MODULE_EXPORT(AnimatorOverrideController)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimatorOverrideController_OnOverrideControllerDirtyCallback;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorOverrideController;
}
namespace UnityEngine {
class AnimatorOverrideController_OnOverrideControllerDirtyCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimatorOverrideController);
MARK_REF_PTR_T(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
class CORDL_TYPE AnimatorOverrideController_OnOverrideControllerDirtyCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x2f53974, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x2f538ec, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorOverrideController_OnOverrideControllerDirtyCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController_OnOverrideControllerDirtyCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorOverrideController_OnOverrideControllerDirtyCallback(AnimatorOverrideController_OnOverrideControllerDirtyCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController_OnOverrideControllerDirtyCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorOverrideController_OnOverrideControllerDirtyCallback(AnimatorOverrideController_OnOverrideControllerDirtyCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.RuntimeAnimatorController
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimatorOverrideController
class CORDL_TYPE AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
public:
// Declarations
using OnOverrideControllerDirtyCallback = ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback;

/// @brief Field OnOverrideControllerDirty, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOverrideControllerDirty, put=__cordl_internal_set_OnOverrideControllerDirty)) ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*  OnOverrideControllerDirty;

/// @brief Method OnInvalidateOverrideController, addr 0x2f538bc, size 0x30, virtual false, abstract: false, final false
static inline void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController*  controller) ;

constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* const& __cordl_internal_get_OnOverrideControllerDirty() const;

constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*& __cordl_internal_get_OnOverrideControllerDirty() ;

constexpr void __cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorOverrideController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorOverrideController(AnimatorOverrideController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorOverrideController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorOverrideController(AnimatorOverrideController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12034};

/// @brief Field OnOverrideControllerDirty, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*  ___OnOverrideControllerDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorOverrideController, ___OnOverrideControllerDirty) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorOverrideController, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*, "UnityEngine", "AnimatorOverrideController/OnOverrideControllerDirtyCallback");
