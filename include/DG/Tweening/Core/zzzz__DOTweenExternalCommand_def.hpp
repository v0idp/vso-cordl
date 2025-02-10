#pragma once
// IWYU pragma private; include "DG/Tweening/Core/DOTweenExternalCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DOTweenExternalCommand)
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
namespace DG::Tweening {
class Tween;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace DG::Tweening::Core {
class DOTweenExternalCommand;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenExternalCommand);
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenExternalCommand
class CORDL_TYPE DOTweenExternalCommand : public ::System::Object {
public:
// Declarations
/// @brief Field SetOrientationOnPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetOrientationOnPath, put=setStaticF_SetOrientationOnPath)) ::System::Action_4<::DG::Tweening::Plugins::Options::PathOptions,::DG::Tweening::Tween*,::UnityEngine::Quaternion,::UnityW<::UnityEngine::Transform>>*  SetOrientationOnPath;

/// @brief Method Dispatch_SetOrientationOnPath, addr 0x18d9df0, size 0xe0, virtual false, abstract: false, final false
static inline void Dispatch_SetOrientationOnPath(::DG::Tweening::Plugins::Options::PathOptions  options, ::DG::Tweening::Tween*  t, ::UnityEngine::Quaternion  newRot, ::UnityEngine::Transform*  trans) ;

/// @brief Method add_SetOrientationOnPath, addr 0x18e60dc, size 0xcc, virtual false, abstract: false, final false
static inline void add_SetOrientationOnPath(::System::Action_4<::DG::Tweening::Plugins::Options::PathOptions,::DG::Tweening::Tween*,::UnityEngine::Quaternion,::UnityW<::UnityEngine::Transform>>*  value) ;

static inline ::System::Action_4<::DG::Tweening::Plugins::Options::PathOptions,::DG::Tweening::Tween*,::UnityEngine::Quaternion,::UnityW<::UnityEngine::Transform>>* getStaticF_SetOrientationOnPath() ;

/// @brief Method remove_SetOrientationOnPath, addr 0x18e61a8, size 0xcc, virtual false, abstract: false, final false
static inline void remove_SetOrientationOnPath(::System::Action_4<::DG::Tweening::Plugins::Options::PathOptions,::DG::Tweening::Tween*,::UnityEngine::Quaternion,::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_SetOrientationOnPath(::System::Action_4<::DG::Tweening::Plugins::Options::PathOptions,::DG::Tweening::Tween*,::UnityEngine::Quaternion,::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenExternalCommand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenExternalCommand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenExternalCommand(DOTweenExternalCommand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenExternalCommand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenExternalCommand(DOTweenExternalCommand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenExternalCommand, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::DOTweenExternalCommand);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenExternalCommand*, "DG.Tweening.Core", "DOTweenExternalCommand");
