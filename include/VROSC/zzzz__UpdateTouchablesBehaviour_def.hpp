#pragma once
// IWYU pragma private; include "VROSC/UpdateTouchablesBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UpdateTouchablesBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
class TouchableObjectsController;
}
// Forward declare root types
namespace VROSC {
class UpdateTouchablesBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UpdateTouchablesBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UpdateTouchablesBehaviour
class CORDL_TYPE UpdateTouchablesBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field _touchables, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchables, put=__cordl_internal_set__touchables)) ::UnityW<::VROSC::TouchableObjectsController>  _touchables;

static inline ::VROSC::UpdateTouchablesBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x1768544, size 0x14, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x1768524, size 0x18, virtual false, abstract: false, final false
inline void Setup(::VROSC::TouchableObjectsController*  touchables) ;

constexpr ::UnityW<::VROSC::TouchableObjectsController> const& __cordl_internal_get__touchables() const;

constexpr ::UnityW<::VROSC::TouchableObjectsController>& __cordl_internal_get__touchables() ;

constexpr void __cordl_internal_set__touchables(::UnityW<::VROSC::TouchableObjectsController>  value) ;

/// @brief Method .ctor, addr 0x1768558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTouchablesBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTouchablesBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTouchablesBehaviour(UpdateTouchablesBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTouchablesBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTouchablesBehaviour(UpdateTouchablesBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1203};

/// @brief Field _touchables, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::TouchableObjectsController>  ____touchables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UpdateTouchablesBehaviour, ____touchables) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UpdateTouchablesBehaviour, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UpdateTouchablesBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UpdateTouchablesBehaviour*, "VROSC", "UpdateTouchablesBehaviour");
