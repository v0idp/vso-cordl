#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/ABSPathDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ABSPathDecoder)
namespace DG::Tweening::Plugins::Core::PathCore {
struct ControlPoint;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core::PathCore {
class ABSPathDecoder;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder);
// Dependencies System.Object
namespace DG::Tweening::Plugins::Core::PathCore {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
class CORDL_TYPE ABSPathDecoder : public ::System::Object {
public:
// Declarations
/// @brief Method FinalizePath, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, bool  isClosedPath) ;

/// @brief Method GetPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  perc, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, ::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  controlPoints) ;

static inline ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* New_ctor() ;

/// @brief Method .ctor, addr 0x18e197c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ABSPathDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ABSPathDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ABSPathDecoder(ABSPathDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ABSPathDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ABSPathDecoder(ABSPathDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core::PathCore
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*, "DG.Tweening.Plugins.Core.PathCore", "ABSPathDecoder");
