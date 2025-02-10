#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ColorOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorOnBeat)
namespace VROSC::AudioReactive {
class LerpColorEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ColorOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ColorOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ColorOnBeat
class CORDL_TYPE ColorOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColorAnimation)) ::VROSC::AudioReactive::LerpColorEffect*  ColorAnimation;

/// @brief Field _colorAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorAnimation, put=__cordl_internal_set__colorAnimation)) ::VROSC::AudioReactive::LerpColorEffect*  _colorAnimation;

/// @brief Method Awake, addr 0x17d90a4, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::ColorOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17d90c8, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr ::VROSC::AudioReactive::LerpColorEffect* const& __cordl_internal_get__colorAnimation() const;

constexpr ::VROSC::AudioReactive::LerpColorEffect*& __cordl_internal_get__colorAnimation() ;

constexpr void __cordl_internal_set__colorAnimation(::VROSC::AudioReactive::LerpColorEffect*  value) ;

/// @brief Method .ctor, addr 0x17d90e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColorAnimation, addr 0x17d909c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::LerpColorEffect* get_ColorAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorOnBeat(ColorOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorOnBeat(ColorOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1540};

/// @brief Field _colorAnimation, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::LerpColorEffect*  ____colorAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ColorOnBeat, ____colorAnimation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ColorOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ColorOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ColorOnBeat*, "VROSC.AudioReactive", "ColorOnBeat");
