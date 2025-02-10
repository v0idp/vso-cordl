#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerDebug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlayerDebug)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerDebug;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerDebug);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerDebug
class CORDL_TYPE LoopPlayerDebug : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _loopPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

static inline ::VROSC::LoopPlayerDebug* New_ctor() ;

/// @brief Method Update, addr 0x18a16f0, size 0x204, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x18a18f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerDebug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerDebug(LoopPlayerDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerDebug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerDebug(LoopPlayerDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{672};

/// @brief Field _loopPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerDebug, ____loopPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerDebug, ____text) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerDebug, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerDebug);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerDebug*, "VROSC", "LoopPlayerDebug");
