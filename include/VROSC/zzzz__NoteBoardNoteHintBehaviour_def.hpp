#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteHintBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteBoardNoteHintBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
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
class NoteBoardNoteHintBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteHintBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteHintBehaviour
class CORDL_TYPE NoteBoardNoteHintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field PlayedColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_PlayedColor, put=__cordl_internal_set_PlayedColor)) ::UnityEngine::Color  PlayedColor;

/// @brief Field Playing, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Playing, put=__cordl_internal_set_Playing)) float_t  Playing;

/// @brief Field UnPlayedColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_UnPlayedColor, put=__cordl_internal_set_UnPlayedColor)) ::UnityEngine::Color  UnPlayedColor;

/// @brief Field _materialBlock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialBlock;

/// @brief Field _renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

static inline ::VROSC::NoteBoardNoteHintBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176825c, size 0x3c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method SetColor, addr 0x1768298, size 0xe4, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Setup, addr 0x176822c, size 0x28, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Renderer*  renderer) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_PlayedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_PlayedColor() ;

constexpr float_t const& __cordl_internal_get_Playing() const;

constexpr float_t& __cordl_internal_get_Playing() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_UnPlayedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_UnPlayedColor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set_PlayedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_Playing(float_t  value) ;

constexpr void __cordl_internal_set_UnPlayedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x176837c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteHintBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteHintBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteHintBehaviour(NoteBoardNoteHintBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteHintBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteHintBehaviour(NoteBoardNoteHintBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1201};

/// @brief Field _renderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _materialBlock, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialBlock;

/// @brief Field Playing, offset: 0x20, size: 0x4, def value: None
 float_t  ___Playing;

/// @brief Field UnPlayedColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___UnPlayedColor;

/// @brief Field PlayedColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___PlayedColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteHintBehaviour, ____renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteHintBehaviour, ____materialBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteHintBehaviour, ___Playing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteHintBehaviour, ___UnPlayedColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteHintBehaviour, ___PlayedColor) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteHintBehaviour, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteHintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteHintBehaviour*, "VROSC", "NoteBoardNoteHintBehaviour");
