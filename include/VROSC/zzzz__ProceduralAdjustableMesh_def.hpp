#pragma once
// IWYU pragma private; include "VROSC/ProceduralAdjustableMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProceduralAdjustableMesh)
namespace System {
class Action;
}
namespace VROSC::UI::Meshes {
class ProceduralMeshData;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class ProceduralAdjustableMesh;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ProceduralAdjustableMesh);
// Dependencies VROSC.AdjustableMesh
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ProceduralAdjustableMesh
class CORDL_TYPE ProceduralAdjustableMesh : public ::VROSC::AdjustableMesh {
public:
// Declarations
/// @brief Field OnMeshUpdated, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMeshUpdated, put=__cordl_internal_set_OnMeshUpdated)) ::System::Action*  OnMeshUpdated;

/// @brief Field _alwaysUpdate, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpdate, put=__cordl_internal_set__alwaysUpdate)) bool  _alwaysUpdate;

/// @brief Field _border, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__border, put=__cordl_internal_set__border)) float_t  _border;

/// @brief Field _data, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::UI::Meshes::ProceduralMeshData>  _data;

/// @brief Field _depth, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__depth, put=__cordl_internal_set__depth)) float_t  _depth;

/// @brief Field _flatMapUv, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__flatMapUv, put=__cordl_internal_set__flatMapUv)) bool  _flatMapUv;

/// @brief Field _flatMapUv2, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get__flatMapUv2, put=__cordl_internal_set__flatMapUv2)) bool  _flatMapUv2;

/// @brief Field _lastHeight, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _needsSizeUpdate, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsSizeUpdate, put=__cordl_internal_set__needsSizeUpdate)) bool  _needsSizeUpdate;

/// @brief Method FlatMap, addr 0x17ab210, size 0x54, virtual false, abstract: false, final false
inline void FlatMap() ;

/// @brief Method GetRequiredCompontents, addr 0x17aab3c, size 0xe8, virtual false, abstract: false, final false
inline void GetRequiredCompontents() ;

/// @brief Method LateUpdate, addr 0x17ab1d8, size 0x38, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LoadMesh, addr 0x17aac24, size 0x1d4, virtual true, abstract: false, final false
inline void LoadMesh(bool  force) ;

static inline ::VROSC::ProceduralAdjustableMesh* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17ab264, size 0x108, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17aab18, size 0x24, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0x17ab078, size 0xc, virtual false, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateMeshAppearance, addr 0x17ab104, size 0xd4, virtual true, abstract: false, final false
inline void UpdateMeshAppearance(float_t  appearAmount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

/// @brief Method UpdateMeshSize, addr 0x17aadf8, size 0x280, virtual false, abstract: false, final false
inline void UpdateMeshSize(bool  force) ;

constexpr ::System::Action* const& __cordl_internal_get_OnMeshUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnMeshUpdated() ;

constexpr bool const& __cordl_internal_get__alwaysUpdate() const;

constexpr bool& __cordl_internal_get__alwaysUpdate() ;

constexpr float_t const& __cordl_internal_get__border() const;

constexpr float_t& __cordl_internal_get__border() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralMeshData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralMeshData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__depth() const;

constexpr float_t& __cordl_internal_get__depth() ;

constexpr bool const& __cordl_internal_get__flatMapUv() const;

constexpr bool& __cordl_internal_get__flatMapUv() ;

constexpr bool const& __cordl_internal_get__flatMapUv2() const;

constexpr bool& __cordl_internal_get__flatMapUv2() ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr bool const& __cordl_internal_get__needsSizeUpdate() const;

constexpr bool& __cordl_internal_get__needsSizeUpdate() ;

constexpr void __cordl_internal_set_OnMeshUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__alwaysUpdate(bool  value) ;

constexpr void __cordl_internal_set__border(float_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::UI::Meshes::ProceduralMeshData>  value) ;

constexpr void __cordl_internal_set__depth(float_t  value) ;

constexpr void __cordl_internal_set__flatMapUv(bool  value) ;

constexpr void __cordl_internal_set__flatMapUv2(bool  value) ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__needsSizeUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x17ab36c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralAdjustableMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralAdjustableMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralAdjustableMesh(ProceduralAdjustableMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralAdjustableMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralAdjustableMesh(ProceduralAdjustableMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1413};

/// @brief Field _data, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ProceduralMeshData>  ____data;

/// @brief Field _depth, offset: 0x98, size: 0x4, def value: None
 float_t  ____depth;

/// @brief Field _border, offset: 0x9c, size: 0x4, def value: None
 float_t  ____border;

/// @brief Field _flatMapUv, offset: 0xa0, size: 0x1, def value: None
 bool  ____flatMapUv;

/// @brief Field _flatMapUv2, offset: 0xa1, size: 0x1, def value: None
 bool  ____flatMapUv2;

/// @brief Field _alwaysUpdate, offset: 0xa2, size: 0x1, def value: None
 bool  ____alwaysUpdate;

/// @brief Field _lastHeight, offset: 0xa4, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0xa8, size: 0x4, def value: None
 float_t  ____lastWidth;

/// @brief Field _needsSizeUpdate, offset: 0xac, size: 0x1, def value: None
 bool  ____needsSizeUpdate;

/// @brief Field OnMeshUpdated, offset: 0xb0, size: 0x8, def value: None
 ::System::Action*  ___OnMeshUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____data) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____depth) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____border) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____flatMapUv) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____flatMapUv2) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____alwaysUpdate) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____lastHeight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____lastWidth) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ____needsSizeUpdate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::VROSC::ProceduralAdjustableMesh, ___OnMeshUpdated) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ProceduralAdjustableMesh, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ProceduralAdjustableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ProceduralAdjustableMesh*, "VROSC", "ProceduralAdjustableMesh");
