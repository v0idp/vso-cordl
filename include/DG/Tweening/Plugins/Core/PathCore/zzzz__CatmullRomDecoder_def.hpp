#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/CatmullRomDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ABSPathDecoder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CatmullRomDecoder)
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
class CatmullRomDecoder;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder);
// Dependencies DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
namespace DG::Tweening::Plugins::Core::PathCore {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
class CORDL_TYPE CatmullRomDecoder : public ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder {
public:
// Declarations
/// @brief Field _PartialControlPs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PartialControlPs, put=setStaticF__PartialControlPs)) ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  _PartialControlPs;

/// @brief Field _PartialWps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__PartialWps, put=setStaticF__PartialWps)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _PartialWps;

/// @brief Method FinalizePath, addr 0x18e1b68, size 0x258, virtual true, abstract: false, final false
inline void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, bool  isClosedPath) ;

/// @brief Method GetPoint, addr 0x18e2394, size 0x274, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  perc, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps, ::DG::Tweening::Plugins::Core::PathCore::Path*  p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  controlPoints) ;

static inline ::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder* New_ctor() ;

/// @brief Method SetTimeToLengthTables, addr 0x18e1dc0, size 0x1f0, virtual false, abstract: false, final false
inline void SetTimeToLengthTables(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  subdivisions) ;

/// @brief Method SetWaypointsLengths, addr 0x18e1fb0, size 0x3e4, virtual false, abstract: false, final false
inline void SetWaypointsLengths(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  subdivisions) ;

/// @brief Method .ctor, addr 0x18e2608, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*> getStaticF__PartialControlPs() ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF__PartialWps() ;

static inline void setStaticF__PartialControlPs(::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  value) ;

static inline void setStaticF__PartialWps(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatmullRomDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatmullRomDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CatmullRomDecoder(CatmullRomDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatmullRomDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatmullRomDecoder(CatmullRomDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core::PathCore
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*, "DG.Tweening.Plugins.Core.PathCore", "CatmullRomDecoder");
