#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/Path.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__PathType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace DG::Tweening::Plugins::Core::PathCore {
class ABSPathDecoder;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class CatmullRomDecoder;
}
namespace DG::Tweening::Plugins::Core::PathCore {
struct ControlPoint;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class CubicBezierDecoder;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class LinearDecoder;
}
namespace DG::Tweening {
struct AxisConstraint;
}
namespace DG::Tweening {
struct PathType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::PathCore::Path);
// Dependencies DG.Tweening.PathType, System.Nullable`1<T>, System.Object, UnityEngine.Color, UnityEngine.Vector3
namespace DG::Tweening::Plugins::Core::PathCore {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.PathCore.Path
class CORDL_TYPE Path : public ::System::Object {
public:
// Declarations
/// @brief Field _catmullRomDecoder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__catmullRomDecoder, put=setStaticF__catmullRomDecoder)) ::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*  _catmullRomDecoder;

/// @brief Field _changed, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__changed, put=__cordl_internal_set__changed)) bool  _changed;

/// @brief Field _cubicBezierDecoder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cubicBezierDecoder, put=setStaticF__cubicBezierDecoder)) ::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*  _cubicBezierDecoder;

/// @brief Field _decoder, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*  _decoder;

/// @brief Field _incrementalClone, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__incrementalClone, put=__cordl_internal_set__incrementalClone)) ::DG::Tweening::Plugins::Core::PathCore::Path*  _incrementalClone;

/// @brief Field _incrementalIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__incrementalIndex, put=__cordl_internal_set__incrementalIndex)) int32_t  _incrementalIndex;

/// @brief Field _linearDecoder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__linearDecoder, put=setStaticF__linearDecoder)) ::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*  _linearDecoder;

/// @brief Field addedExtraEndWp, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_addedExtraEndWp, put=__cordl_internal_set_addedExtraEndWp)) bool  addedExtraEndWp;

/// @brief Field addedExtraStartWp, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_addedExtraStartWp, put=__cordl_internal_set_addedExtraStartWp)) bool  addedExtraStartWp;

/// @brief Field controlPoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPoints, put=__cordl_internal_set_controlPoints)) ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  controlPoints;

/// @brief Field gizmoColor, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor, put=__cordl_internal_set_gizmoColor)) ::UnityEngine::Color  gizmoColor;

/// @brief Field isFinalized, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFinalized, put=__cordl_internal_set_isFinalized)) bool  isFinalized;

/// @brief Field length, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) float_t  length;

/// @brief Field lengthsTable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lengthsTable, put=__cordl_internal_set_lengthsTable)) ::ArrayW<float_t,::Array<float_t>*>  lengthsTable;

/// @brief Field linearWPIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_linearWPIndex, put=__cordl_internal_set_linearWPIndex)) int32_t  linearWPIndex;

/// @brief Field lookAtPosition, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lookAtPosition, put=__cordl_internal_set_lookAtPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  lookAtPosition;

/// @brief Field nonLinearDrawWps, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonLinearDrawWps, put=__cordl_internal_set_nonLinearDrawWps)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  nonLinearDrawWps;

/// @brief Field subdivisions, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_subdivisions, put=__cordl_internal_set_subdivisions)) int32_t  subdivisions;

/// @brief Field subdivisionsXSegment, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subdivisionsXSegment, put=__cordl_internal_set_subdivisionsXSegment)) int32_t  subdivisionsXSegment;

/// @brief Field targetPosition, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field timesTable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_timesTable, put=__cordl_internal_set_timesTable)) ::ArrayW<float_t,::Array<float_t>*>  timesTable;

/// @brief Field type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::DG::Tweening::PathType  type;

/// @brief Field wpLengths, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_wpLengths, put=__cordl_internal_set_wpLengths)) ::ArrayW<float_t,::Array<float_t>*>  wpLengths;

/// @brief Field wps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_wps, put=__cordl_internal_set_wps)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  wps;

/// @brief Method AssignDecoder, addr 0x18e2d64, size 0x138, virtual false, abstract: false, final false
inline void AssignDecoder(::DG::Tweening::PathType  pathType) ;

/// @brief Method AssignWaypoints, addr 0x18e2c84, size 0xe0, virtual false, abstract: false, final false
inline void AssignWaypoints(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  newWps, bool  cloneWps) ;

/// @brief Method CloneIncremental, addr 0x18d8eac, size 0x468, virtual false, abstract: false, final false
inline ::DG::Tweening::Plugins::Core::PathCore::Path* CloneIncremental(int32_t  loopIncrement) ;

/// @brief Method ConvertToConstantPathPerc, addr 0x18d9314, size 0x10c, virtual false, abstract: false, final false
inline float_t ConvertToConstantPathPerc(float_t  perc) ;

/// @brief Method Destroy, addr 0x18d8564, size 0x11c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Draw, addr 0x18e308c, size 0x4, virtual false, abstract: false, final false
inline void Draw() ;

/// @brief Method Draw, addr 0x18e3090, size 0x2fc, virtual false, abstract: false, final false
static inline void Draw(::DG::Tweening::Plugins::Core::PathCore::Path*  p) ;

/// @brief Method FinalizePath, addr 0x18d8b58, size 0xa4, virtual false, abstract: false, final false
inline void FinalizePath(bool  isClosedPath, ::DG::Tweening::AxisConstraint  lockPositionAxes, ::UnityEngine::Vector3  currTargetVal) ;

/// @brief Method GetDrawPoints, addr 0x18e2eb8, size 0xdc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GetDrawPoints(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  drawSubdivisionsXSegment) ;

/// @brief Method GetPoint, addr 0x18d9420, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  perc, bool  convertToConstantPerc) ;

/// @brief Method GetWaypointIndexFromPerc, addr 0x18d9d48, size 0xa8, virtual false, abstract: false, final false
inline int32_t GetWaypointIndexFromPerc(float_t  perc, bool  isMovingForward) ;

static inline ::DG::Tweening::Plugins::Core::PathCore::Path* New_ctor() ;

static inline ::DG::Tweening::Plugins::Core::PathCore::Path* New_ctor(::DG::Tweening::PathType  type, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  waypoints, int32_t  subdivisionsXSegment, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor) ;

/// @brief Method RefreshNonLinearDrawWps, addr 0x18e2f94, size 0xf8, virtual false, abstract: false, final false
static inline void RefreshNonLinearDrawWps(::DG::Tweening::Plugins::Core::PathCore::Path*  p) ;

constexpr bool const& __cordl_internal_get__changed() const;

constexpr bool& __cordl_internal_get__changed() ;

constexpr ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* const& __cordl_internal_get__decoder() const;

constexpr ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*& __cordl_internal_get__decoder() ;

constexpr ::DG::Tweening::Plugins::Core::PathCore::Path* const& __cordl_internal_get__incrementalClone() const;

constexpr ::DG::Tweening::Plugins::Core::PathCore::Path*& __cordl_internal_get__incrementalClone() ;

constexpr int32_t const& __cordl_internal_get__incrementalIndex() const;

constexpr int32_t& __cordl_internal_get__incrementalIndex() ;

constexpr bool const& __cordl_internal_get_addedExtraEndWp() const;

constexpr bool& __cordl_internal_get_addedExtraEndWp() ;

constexpr bool const& __cordl_internal_get_addedExtraStartWp() const;

constexpr bool& __cordl_internal_get_addedExtraStartWp() ;

constexpr ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*> const& __cordl_internal_get_controlPoints() const;

constexpr ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>& __cordl_internal_get_controlPoints() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor() ;

constexpr bool const& __cordl_internal_get_isFinalized() const;

constexpr bool& __cordl_internal_get_isFinalized() ;

constexpr float_t const& __cordl_internal_get_length() const;

constexpr float_t& __cordl_internal_get_length() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_lengthsTable() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_lengthsTable() ;

constexpr int32_t const& __cordl_internal_get_linearWPIndex() const;

constexpr int32_t& __cordl_internal_get_linearWPIndex() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_lookAtPosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_lookAtPosition() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_nonLinearDrawWps() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_nonLinearDrawWps() ;

constexpr int32_t const& __cordl_internal_get_subdivisions() const;

constexpr int32_t& __cordl_internal_get_subdivisions() ;

constexpr int32_t const& __cordl_internal_get_subdivisionsXSegment() const;

constexpr int32_t& __cordl_internal_get_subdivisionsXSegment() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_timesTable() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_timesTable() ;

constexpr ::DG::Tweening::PathType const& __cordl_internal_get_type() const;

constexpr ::DG::Tweening::PathType& __cordl_internal_get_type() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_wpLengths() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_wpLengths() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_wps() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_wps() ;

constexpr void __cordl_internal_set__changed(bool  value) ;

constexpr void __cordl_internal_set__decoder(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*  value) ;

constexpr void __cordl_internal_set__incrementalClone(::DG::Tweening::Plugins::Core::PathCore::Path*  value) ;

constexpr void __cordl_internal_set__incrementalIndex(int32_t  value) ;

constexpr void __cordl_internal_set_addedExtraEndWp(bool  value) ;

constexpr void __cordl_internal_set_addedExtraStartWp(bool  value) ;

constexpr void __cordl_internal_set_controlPoints(::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  value) ;

constexpr void __cordl_internal_set_gizmoColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_isFinalized(bool  value) ;

constexpr void __cordl_internal_set_length(float_t  value) ;

constexpr void __cordl_internal_set_lengthsTable(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_linearWPIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lookAtPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_nonLinearDrawWps(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set_subdivisions(int32_t  value) ;

constexpr void __cordl_internal_set_subdivisionsXSegment(int32_t  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_timesTable(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_type(::DG::Tweening::PathType  value) ;

constexpr void __cordl_internal_set_wpLengths(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_wps(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

/// @brief Method .ctor, addr 0x18e2e9c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18e2a98, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::PathType  type, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  waypoints, int32_t  subdivisionsXSegment, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor) ;

static inline ::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder* getStaticF__catmullRomDecoder() ;

static inline ::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder* getStaticF__cubicBezierDecoder() ;

static inline ::DG::Tweening::Plugins::Core::PathCore::LinearDecoder* getStaticF__linearDecoder() ;

static inline void setStaticF__catmullRomDecoder(::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*  value) ;

static inline void setStaticF__cubicBezierDecoder(::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*  value) ;

static inline void setStaticF__linearDecoder(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Path(Path && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path(Path const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10830};

/// @brief Field wpLengths, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___wpLengths;

/// @brief Field type, offset: 0x18, size: 0x4, def value: None
 ::DG::Tweening::PathType  ___type;

/// @brief Field subdivisionsXSegment, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___subdivisionsXSegment;

/// @brief Field subdivisions, offset: 0x20, size: 0x4, def value: None
 int32_t  ___subdivisions;

/// @brief Field wps, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ___wps;

/// @brief Field controlPoints, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  ___controlPoints;

/// @brief Field length, offset: 0x38, size: 0x4, def value: None
 float_t  ___length;

/// @brief Field isFinalized, offset: 0x3c, size: 0x1, def value: None
 bool  ___isFinalized;

/// @brief Field timesTable, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___timesTable;

/// @brief Field lengthsTable, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___lengthsTable;

/// @brief Field linearWPIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___linearWPIndex;

/// @brief Field addedExtraStartWp, offset: 0x54, size: 0x1, def value: None
 bool  ___addedExtraStartWp;

/// @brief Field addedExtraEndWp, offset: 0x55, size: 0x1, def value: None
 bool  ___addedExtraEndWp;

/// @brief Field _incrementalClone, offset: 0x58, size: 0x8, def value: None
 ::DG::Tweening::Plugins::Core::PathCore::Path*  ____incrementalClone;

/// @brief Field _incrementalIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ____incrementalIndex;

/// @brief Field _decoder, offset: 0x68, size: 0x8, def value: None
 ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*  ____decoder;

/// @brief Field _changed, offset: 0x70, size: 0x1, def value: None
 bool  ____changed;

/// @brief Field nonLinearDrawWps, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ___nonLinearDrawWps;

/// @brief Field targetPosition, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field lookAtPosition, offset: 0x8c, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___lookAtPosition;

/// @brief Field gizmoColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___wpLengths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___subdivisionsXSegment) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___subdivisions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___wps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___controlPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___length) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___isFinalized) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___timesTable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___lengthsTable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___linearWPIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___addedExtraStartWp) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___addedExtraEndWp) == 0x55, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ____incrementalClone) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ____incrementalIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ____decoder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ____changed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___nonLinearDrawWps) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___targetPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___lookAtPosition) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Plugins::Core::PathCore::Path, ___gizmoColor) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PathCore::Path, 0xb0>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core::PathCore
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::Path);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::Path*, "DG.Tweening.Plugins.Core.PathCore", "Path");
