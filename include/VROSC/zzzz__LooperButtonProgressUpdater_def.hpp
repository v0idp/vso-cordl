#pragma once
// IWYU pragma private; include "VROSC/LooperButtonProgressUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LooperButtonProgressUpdater)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
class LooperButtonProgressUpdater;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LooperButtonProgressUpdater);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LooperButtonProgressUpdater
class CORDL_TYPE LooperButtonProgressUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _beatLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatLength, put=__cordl_internal_set__beatLength)) float_t  _beatLength;

/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _flashValue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__flashValue, put=__cordl_internal_set__flashValue)) float_t  _flashValue;

/// @brief Field _loopPlayer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _loops, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__loops, put=__cordl_internal_set__loops)) int32_t  _loops;

/// @brief Field _playing, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Field _previewValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewValue, put=__cordl_internal_set__previewValue)) float_t  _previewValue;

/// @brief Field _progress, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Method Awake, addr 0x174140c, size 0x28, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::LooperButtonProgressUpdater* New_ctor() ;

/// @brief Method SetColor, addr 0x1741548, size 0xd8, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetValue, addr 0x1741434, size 0x114, virtual false, abstract: false, final false
inline void SetValue(float_t  value, float_t  flashValue) ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr float_t const& __cordl_internal_get__beatLength() const;

constexpr float_t& __cordl_internal_get__beatLength() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__flashValue() const;

constexpr float_t& __cordl_internal_get__flashValue() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr int32_t const& __cordl_internal_get__loops() const;

constexpr int32_t& __cordl_internal_get__loops() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr float_t const& __cordl_internal_get__previewValue() const;

constexpr float_t& __cordl_internal_get__previewValue() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__beatLength(float_t  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__flashValue(float_t  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loops(int32_t  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

constexpr void __cordl_internal_set__previewValue(float_t  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

/// @brief Method .ctor, addr 0x1741620, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LooperButtonProgressUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LooperButtonProgressUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LooperButtonProgressUpdater(LooperButtonProgressUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LooperButtonProgressUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LooperButtonProgressUpdater(LooperButtonProgressUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1115};

/// @brief Field _adjustableMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _beatLength, offset: 0x38, size: 0x4, def value: None
 float_t  ____beatLength;

/// @brief Field _previewValue, offset: 0x3c, size: 0x4, def value: None
 float_t  ____previewValue;

/// @brief Field _flashValue, offset: 0x40, size: 0x4, def value: None
 float_t  ____flashValue;

/// @brief Field _loopPlayer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _playing, offset: 0x50, size: 0x1, def value: None
 bool  ____playing;

/// @brief Field _progress, offset: 0x54, size: 0x4, def value: None
 float_t  ____progress;

/// @brief Field _loops, offset: 0x58, size: 0x4, def value: None
 int32_t  ____loops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____adjustableMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____beatLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____previewValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____flashValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____loopPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____playing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____progress) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperButtonProgressUpdater, ____loops) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LooperButtonProgressUpdater, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LooperButtonProgressUpdater);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperButtonProgressUpdater*, "VROSC", "LooperButtonProgressUpdater");
