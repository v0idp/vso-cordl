#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/SpecialPluginsUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpecialPluginsUtils)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct QuaternionOptions;
}
namespace DG::Tweening::Plugins::Options {
struct Vector3ArrayOptions;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
class SpecialPluginsUtils;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::SpecialPluginsUtils);
// Dependencies System.Object
namespace DG::Tweening::Plugins::Core {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.SpecialPluginsUtils
class CORDL_TYPE SpecialPluginsUtils : public ::System::Object {
public:
// Declarations
/// @brief Method SetCameraShakePosition, addr 0x18e0bac, size 0x1b0, virtual false, abstract: false, final false
static inline bool SetCameraShakePosition(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*  t) ;

/// @brief Method SetLookAt, addr 0x18e0928, size 0x124, virtual false, abstract: false, final false
static inline bool SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>*  t) ;

/// @brief Method SetPunch, addr 0x18e0a4c, size 0x134, virtual false, abstract: false, final false
static inline bool SetPunch(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*  t) ;

/// @brief Method SetShake, addr 0x18e0b80, size 0x2c, virtual false, abstract: false, final false
static inline bool SetShake(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpecialPluginsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpecialPluginsUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpecialPluginsUtils(SpecialPluginsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpecialPluginsUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpecialPluginsUtils(SpecialPluginsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::SpecialPluginsUtils, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core
NEED_NO_BOX(::DG::Tweening::Plugins::Core::SpecialPluginsUtils);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::SpecialPluginsUtils*, "DG.Tweening.Plugins.Core", "SpecialPluginsUtils");
