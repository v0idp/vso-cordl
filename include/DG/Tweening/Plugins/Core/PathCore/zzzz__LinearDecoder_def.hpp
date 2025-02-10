#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/LinearDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ABSPathDecoder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LinearDecoder)
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
class LinearDecoder;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder);
// Dependencies DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
namespace DG::Tweening::Plugins::Core::PathCore {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.PathCore.LinearDecoder
class CORDL_TYPE LinearDecoder : public ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder {
public:
// Declarations
/// @brief Method FinalizePath, addr 0x18e26ac, size 0x2c, virtual true, abstract: false, final false
inline void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, bool  isClosedPath) ;

/// @brief Method GetPoint, addr 0x18e28e4, size 0x1a8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  perc, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, ::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  controlPoints) ;

static inline ::DG::Tweening::Plugins::Core::PathCore::LinearDecoder* New_ctor() ;

/// @brief Method SetTimeToLengthTables, addr 0x18e26d8, size 0x20c, virtual false, abstract: false, final false
inline void SetTimeToLengthTables(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  subdivisions) ;

/// @brief Method SetWaypointsLengths, addr 0x18e2a8c, size 0x4, virtual false, abstract: false, final false
inline void SetWaypointsLengths(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  subdivisions) ;

/// @brief Method .ctor, addr 0x18e2a90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearDecoder(LinearDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearDecoder(LinearDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PathCore::LinearDecoder, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core::PathCore
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*, "DG.Tweening.Plugins.Core.PathCore", "LinearDecoder");
