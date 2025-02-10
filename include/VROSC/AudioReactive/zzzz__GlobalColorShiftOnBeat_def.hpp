#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalColorShiftOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorShiftOnBeat)
namespace VROSC::AudioReactive {
class GlobalColorShiftEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class GlobalColorShiftOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorShiftOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorShiftOnBeat
class CORDL_TYPE GlobalColorShiftOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
/// @brief Field _globalColorEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalColorEffect, put=__cordl_internal_set__globalColorEffect)) ::VROSC::AudioReactive::GlobalColorShiftEffect*  _globalColorEffect;

/// @brief Method Awake, addr 0x17da330, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::GlobalColorShiftOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17da374, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

/// @brief Method SetNewGlobalColors, addr 0x17da394, size 0x180, virtual false, abstract: false, final false
inline void SetNewGlobalColors() ;

/// @brief Method Update, addr 0x17da354, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect* const& __cordl_internal_get__globalColorEffect() const;

constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect*& __cordl_internal_get__globalColorEffect() ;

constexpr void __cordl_internal_set__globalColorEffect(::VROSC::AudioReactive::GlobalColorShiftEffect*  value) ;

/// @brief Method .ctor, addr 0x17da5bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorShiftOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorShiftOnBeat(GlobalColorShiftOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorShiftOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorShiftOnBeat(GlobalColorShiftOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1562};

/// @brief Field _globalColorEffect, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorShiftEffect*  ____globalColorEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorShiftOnBeat, ____globalColorEffect) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorShiftOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorShiftOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorShiftOnBeat*, "VROSC.AudioReactive", "GlobalColorShiftOnBeat");
