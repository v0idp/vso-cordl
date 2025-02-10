#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialSettings)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialSettings);
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialSettings
class CORDL_TYPE TutorialSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_FlashColor)) ::UnityEngine::Color  FlashColor;

/// @brief Field _flashColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get__flashColor, put=__cordl_internal_set__flashColor)) ::UnityEngine::Color  _flashColor;

/// @brief Field _pattern, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pattern, put=__cordl_internal_set__pattern)) ::UnityEngine::AnimationCurve*  _pattern;

/// @brief Field _patternDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__patternDuration, put=__cordl_internal_set__patternDuration)) float_t  _patternDuration;

/// @brief Method GetBlink, addr 0x16c1dcc, size 0x64, virtual false, abstract: false, final false
inline float_t GetBlink() ;

/// @brief Method GetNextBlinkStart, addr 0x16c1e30, size 0x58, virtual false, abstract: false, final false
inline float_t GetNextBlinkStart() ;

static inline ::GlobalNamespace::TutorialSettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__flashColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__flashColor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__pattern() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pattern() ;

constexpr float_t const& __cordl_internal_get__patternDuration() const;

constexpr float_t& __cordl_internal_get__patternDuration() ;

constexpr void __cordl_internal_set__flashColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pattern(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__patternDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x16c1e88, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FlashColor, addr 0x16c1dc0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_FlashColor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialSettings(TutorialSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialSettings(TutorialSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{46};

/// @brief Field _pattern, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____pattern;

/// @brief Field _patternDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ____patternDuration;

/// @brief Field _flashColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ____flashColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialSettings, ____pattern) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSettings, ____patternDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSettings, ____flashColor) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSettings, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSettings*, "", "TutorialSettings");
