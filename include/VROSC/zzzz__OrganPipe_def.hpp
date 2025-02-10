#pragma once
// IWYU pragma private; include "VROSC/OrganPipe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OrganPipe)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace VROSC {
class OrganPipe;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OrganPipe);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OrganPipe
class CORDL_TYPE OrganPipe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Note, put=set_Note)) int32_t  Note;

/// @brief Field <Note>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Note_k__BackingField, put=__cordl_internal_set__Note_k__BackingField)) int32_t  _Note_k__BackingField;

/// @brief Field _appear, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__appear, put=__cordl_internal_set__appear)) float_t  _appear;

/// @brief Field _diameter, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__diameter, put=__cordl_internal_set__diameter)) float_t  _diameter;

/// @brief Field _fallSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallSpeed, put=__cordl_internal_set__fallSpeed)) float_t  _fallSpeed;

/// @brief Field _height, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _offColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _playAmount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__playAmount, put=__cordl_internal_set__playAmount)) float_t  _playAmount;

/// @brief Field _playingColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__playingColor, put=__cordl_internal_set__playingColor)) ::UnityEngine::Vector4  _playingColor;

/// @brief Field _propBlock, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Method Animate, addr 0x17af2b0, size 0x38, virtual false, abstract: false, final false
inline void Animate(float_t  appear) ;

/// @brief Method CreateBlock, addr 0x17af2e8, size 0x60, virtual false, abstract: false, final false
inline void CreateBlock() ;

/// @brief Method LateUpdate, addr 0x17af348, size 0x60, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::OrganPipe* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x17af3a8, size 0x50, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method SetColor, addr 0x17af184, size 0x24, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  offColor, ::UnityEngine::Color  playingColor) ;

/// @brief Method SetNote, addr 0x17af3f8, size 0x8, virtual false, abstract: false, final false
inline void SetNote(int32_t  note) ;

/// @brief Method SetPlaying, addr 0x17af1a8, size 0x14, virtual false, abstract: false, final false
inline void SetPlaying(bool  playing) ;

/// @brief Method UpdateShader, addr 0x17af1bc, size 0xbc, virtual false, abstract: false, final false
inline void UpdateShader() ;

/// @brief Method UpdateSize, addr 0x17af278, size 0x38, virtual false, abstract: false, final false
inline void UpdateSize(float_t  diameter, float_t  height) ;

constexpr int32_t const& __cordl_internal_get__Note_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Note_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__appear() const;

constexpr float_t& __cordl_internal_get__appear() ;

constexpr float_t const& __cordl_internal_get__diameter() const;

constexpr float_t& __cordl_internal_get__diameter() ;

constexpr float_t const& __cordl_internal_get__fallSpeed() const;

constexpr float_t& __cordl_internal_get__fallSpeed() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr float_t const& __cordl_internal_get__playAmount() const;

constexpr float_t& __cordl_internal_get__playAmount() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__playingColor() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__playingColor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__Note_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__appear(float_t  value) ;

constexpr void __cordl_internal_set__diameter(float_t  value) ;

constexpr void __cordl_internal_set__fallSpeed(float_t  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playAmount(float_t  value) ;

constexpr void __cordl_internal_set__playingColor(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x17af400, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Note, addr 0x17af17c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Note() ;

/// @brief Method set_Note, addr 0x17af174, size 0x8, virtual false, abstract: false, final false
inline void set_Note(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrganPipe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrganPipe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrganPipe(OrganPipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrganPipe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrganPipe(OrganPipe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1430};

/// @brief Field <Note>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Note_k__BackingField;

/// @brief Field _height, offset: 0x24, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _diameter, offset: 0x28, size: 0x4, def value: None
 float_t  ____diameter;

/// @brief Field _appear, offset: 0x2c, size: 0x4, def value: None
 float_t  ____appear;

/// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _fallSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ____fallSpeed;

/// @brief Field _playAmount, offset: 0x3c, size: 0x4, def value: None
 float_t  ____playAmount;

/// @brief Field _offColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _playingColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____playingColor;

/// @brief Field _propBlock, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrganPipe, ____Note_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____height) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____diameter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____appear) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____fallSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____playAmount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____offColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____playingColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipe, ____propBlock) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrganPipe, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OrganPipe);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipe*, "VROSC", "OrganPipe");
