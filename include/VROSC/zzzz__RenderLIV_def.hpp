#pragma once
// IWYU pragma private; include "VROSC/RenderLIV.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RenderLIV)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace VROSC {
class RenderLIV;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RenderLIV);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RenderLIV
class CORDL_TYPE RenderLIV : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _camera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _livActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__livActive, put=__cordl_internal_set__livActive)) bool  _livActive;

/// @brief Method Activate, addr 0x172d150, size 0x30, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0x172d180, size 0x58, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::VROSC::RenderLIV* New_ctor() ;

/// @brief Method OnRenderImage, addr 0x172d1dc, size 0xa8, virtual false, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Setup, addr 0x172d100, size 0x50, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr bool const& __cordl_internal_get__livActive() const;

constexpr bool& __cordl_internal_get__livActive() ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__livActive(bool  value) ;

/// @brief Method .ctor, addr 0x172d284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderLIV() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderLIV", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderLIV(RenderLIV && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderLIV", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderLIV(RenderLIV const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1055};

/// @brief Field _livActive, offset: 0x20, size: 0x1, def value: None
 bool  ____livActive;

/// @brief Field _camera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RenderLIV, ____livActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::RenderLIV, ____camera) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RenderLIV, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RenderLIV);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RenderLIV*, "VROSC", "RenderLIV");
