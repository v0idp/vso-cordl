#pragma once
// IWYU pragma private; include "VROSC/ClustrFrameString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClustrFrameString)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class ClustrFrameString;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClustrFrameString);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrFrameString
class CORDL_TYPE ClustrFrameString : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Note, put=set_Note)) int32_t  Note;

/// @brief Field <Note>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Note_k__BackingField, put=__cordl_internal_set__Note_k__BackingField)) int32_t  _Note_k__BackingField;

/// @brief Field _propBlock, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _restingColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingColor, put=__cordl_internal_set__restingColor)) ::UnityEngine::Color  _restingColor;

/// @brief Method CreateBlock, addr 0x17ad3e8, size 0x60, virtual false, abstract: false, final false
inline void CreateBlock() ;

/// @brief Method Hide, addr 0x17ad470, size 0x24, virtual false, abstract: false, final false
inline void Hide() ;

static inline ::VROSC::ClustrFrameString* New_ctor() ;

/// @brief Method SetPlayingColor, addr 0x17ad494, size 0x150, virtual false, abstract: false, final false
inline void SetPlayingColor(::UnityEngine::Vector3  power, float_t  velocity, float_t  highlight) ;

/// @brief Method SetVisible, addr 0x17ad448, size 0x28, virtual false, abstract: false, final false
inline void SetVisible(int32_t  note) ;

constexpr int32_t const& __cordl_internal_get__Note_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Note_k__BackingField() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingColor() ;

constexpr void __cordl_internal_set__Note_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__restingColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17ad5e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Note, addr 0x17ad3e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Note() ;

/// @brief Method set_Note, addr 0x17ad3d8, size 0x8, virtual false, abstract: false, final false
inline void set_Note(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrFrameString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrFrameString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrFrameString(ClustrFrameString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrFrameString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrFrameString(ClustrFrameString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1424};

/// @brief Field _restingColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingColor;

/// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field <Note>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____Note_k__BackingField;

/// @brief Field _propBlock, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrFrameString, ____restingColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameString, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameString, ____Note_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrFrameString, ____propBlock) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrFrameString, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClustrFrameString);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrFrameString*, "VROSC", "ClustrFrameString");
