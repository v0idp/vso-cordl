#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ScaleOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleOnBeat)
namespace VROSC::AudioReactive {
class ScaleEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ScaleOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ScaleOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ScaleOnBeat
class CORDL_TYPE ScaleOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
 __declspec(property(get=get_ScaleAnimation)) ::VROSC::AudioReactive::ScaleEffect*  ScaleAnimation;

/// @brief Field _scaleAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleAnimation, put=__cordl_internal_set__scaleAnimation)) ::VROSC::AudioReactive::ScaleEffect*  _scaleAnimation;

/// @brief Method Awake, addr 0x17dbaac, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::ScaleOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17dbad0, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr ::VROSC::AudioReactive::ScaleEffect* const& __cordl_internal_get__scaleAnimation() const;

constexpr ::VROSC::AudioReactive::ScaleEffect*& __cordl_internal_get__scaleAnimation() ;

constexpr void __cordl_internal_set__scaleAnimation(::VROSC::AudioReactive::ScaleEffect*  value) ;

/// @brief Method .ctor, addr 0x17dbaf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ScaleAnimation, addr 0x17dbaa4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::ScaleEffect* get_ScaleAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleOnBeat(ScaleOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleOnBeat(ScaleOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1571};

/// @brief Field _scaleAnimation, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::ScaleEffect*  ____scaleAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ScaleOnBeat, ____scaleAnimation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ScaleOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ScaleOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleOnBeat*, "VROSC.AudioReactive", "ScaleOnBeat");
