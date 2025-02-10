#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModuleUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DOTweenModuleUtils)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
namespace DG::Tweening {
class DOTweenModuleUtils_Physics;
}
namespace DG::Tweening {
struct PathMode;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModuleUtils;
}
namespace DG::Tweening {
class DOTweenModuleUtils_Physics;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUtils);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUtils_Physics);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUtils/Physics
class CORDL_TYPE DOTweenModuleUtils_Physics : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDOTweenPathTween, addr 0x16b6230, size 0x144, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* CreateDOTweenPathTween(::UnityEngine::MonoBehaviour*  target, bool  tweenRigidbody, bool  isLocal, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  duration, ::DG::Tweening::PathMode  pathMode) ;

/// @brief Method HasRigidbody, addr 0x16b61a4, size 0x8c, virtual false, abstract: false, final false
static inline bool HasRigidbody(::UnityEngine::Component*  target) ;

/// @brief Method HasRigidbody2D, addr 0x16b6118, size 0x8c, virtual false, abstract: false, final false
static inline bool HasRigidbody2D(::UnityEngine::Component*  target) ;

/// @brief Method SetOrientationOnPath, addr 0x16b6018, size 0x100, virtual false, abstract: false, final false
static inline void SetOrientationOnPath(::DG::Tweening::Plugins::Options::PathOptions  options, ::DG::Tweening::Tween*  t, ::UnityEngine::Quaternion  newRot, ::UnityEngine::Transform*  trans) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUtils_Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUtils_Physics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUtils_Physics(DOTweenModuleUtils_Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUtils_Physics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUtils_Physics(DOTweenModuleUtils_Physics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUtils_Physics, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUtils
class CORDL_TYPE DOTweenModuleUtils : public ::System::Object {
public:
// Declarations
using Physics = ::DG::Tweening::DOTweenModuleUtils_Physics;

/// @brief Field _initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__initialized, put=setStaticF__initialized)) bool  _initialized;

/// @brief Method Init, addr 0x16b5ec4, size 0xac, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method Preserver, addr 0x16b5f70, size 0xa8, virtual false, abstract: false, final false
static inline void Preserver() ;

static inline bool getStaticF__initialized() ;

static inline void setStaticF__initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUtils(DOTweenModuleUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUtils(DOTweenModuleUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUtils, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUtils);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUtils*, "DG.Tweening", "DOTweenModuleUtils");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUtils_Physics);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUtils_Physics*, "DG.Tweening", "DOTweenModuleUtils/Physics");
