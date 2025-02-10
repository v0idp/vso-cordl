#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/RotateOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RotateOnBeat)
namespace VROSC::AudioReactive {
class RotateEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class RotateOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::RotateOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.RotateOnBeat
class CORDL_TYPE RotateOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
 __declspec(property(get=get_RotateAnimation)) ::VROSC::AudioReactive::RotateEffect*  RotateAnimation;

/// @brief Field _rotationAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationAnimation, put=__cordl_internal_set__rotationAnimation)) ::VROSC::AudioReactive::RotateEffect*  _rotationAnimation;

/// @brief Method Awake, addr 0x17dba58, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::RotateOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17dba7c, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr ::VROSC::AudioReactive::RotateEffect* const& __cordl_internal_get__rotationAnimation() const;

constexpr ::VROSC::AudioReactive::RotateEffect*& __cordl_internal_get__rotationAnimation() ;

constexpr void __cordl_internal_set__rotationAnimation(::VROSC::AudioReactive::RotateEffect*  value) ;

/// @brief Method .ctor, addr 0x17dba9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RotateAnimation, addr 0x17dba50, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::RotateEffect* get_RotateAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotateOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateOnBeat(RotateOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateOnBeat(RotateOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1570};

/// @brief Field _rotationAnimation, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::RotateEffect*  ____rotationAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::RotateOnBeat, ____rotationAnimation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::RotateOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::RotateOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateOnBeat*, "VROSC.AudioReactive", "RotateOnBeat");
