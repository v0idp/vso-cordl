#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshResizeEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMeshResizeEffect)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshResizeEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshResizeEffect);
// Dependencies VROSC.AdjustableMeshEffect
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshResizeEffect
class CORDL_TYPE AdjustableMeshResizeEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_Width)) float_t  Width;

/// @brief Field _alwaysUpdate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpdate, put=__cordl_internal_set__alwaysUpdate)) bool  _alwaysUpdate;

/// @brief Field _data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  _data;

/// @brief Field _height, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _lastHeight, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeight, put=__cordl_internal_set__lastHeight)) float_t  _lastHeight;

/// @brief Field _lastWidth, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWidth, put=__cordl_internal_set__lastWidth)) float_t  _lastWidth;

/// @brief Field _modifiedPositions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modifiedPositions, put=__cordl_internal_set__modifiedPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _modifiedPositions;

/// @brief Field _originalPositions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalPositions, put=__cordl_internal_set__originalPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _originalPositions;

/// @brief Field _rectTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _width, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method GetMeshData, addr 0x17a70b0, size 0xa0, virtual false, abstract: false, final false
inline void GetMeshData() ;

static inline ::VROSC::AdjustableMeshResizeEffect* New_ctor() ;

/// @brief Method OnCreation, addr 0x17a7150, size 0x18, virtual true, abstract: false, final false
inline void OnCreation() ;

/// @brief Method OnDrawGizmos, addr 0x17a72bc, size 0x74, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x17a6fe4, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateMesh, addr 0x17a7168, size 0x154, virtual false, abstract: false, final false
inline void UpdateMesh() ;

constexpr bool const& __cordl_internal_get__alwaysUpdate() const;

constexpr bool& __cordl_internal_get__alwaysUpdate() ;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>& __cordl_internal_get__data() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr float_t const& __cordl_internal_get__lastHeight() const;

constexpr float_t& __cordl_internal_get__lastHeight() ;

constexpr float_t const& __cordl_internal_get__lastWidth() const;

constexpr float_t& __cordl_internal_get__lastWidth() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__modifiedPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__modifiedPositions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__originalPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__originalPositions() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__alwaysUpdate(bool  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__lastHeight(float_t  value) ;

constexpr void __cordl_internal_set__lastWidth(float_t  value) ;

constexpr void __cordl_internal_set__modifiedPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__originalPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x17a7330, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Height, addr 0x17a6ed4, size 0x88, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_Width, addr 0x17a6f5c, size 0x88, virtual false, abstract: false, final false
inline float_t get_Width() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshResizeEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshResizeEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshResizeEffect(AdjustableMeshResizeEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshResizeEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshResizeEffect(AdjustableMeshResizeEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1390};

/// @brief Field _data, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  ____data;

/// @brief Field _height, offset: 0x30, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _width, offset: 0x34, size: 0x4, def value: None
 float_t  ____width;

/// @brief Field _alwaysUpdate, offset: 0x38, size: 0x1, def value: None
 bool  ____alwaysUpdate;

/// @brief Field _rectTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _lastHeight, offset: 0x48, size: 0x4, def value: None
 float_t  ____lastHeight;

/// @brief Field _lastWidth, offset: 0x4c, size: 0x4, def value: None
 float_t  ____lastWidth;

/// @brief Field _originalPositions, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____originalPositions;

/// @brief Field _modifiedPositions, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____modifiedPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____height) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____width) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____alwaysUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____rectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____lastHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____lastWidth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____originalPositions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshResizeEffect, ____modifiedPositions) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshResizeEffect, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshResizeEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshResizeEffect*, "VROSC", "AdjustableMeshResizeEffect");
