#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TranslateOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TranslateOnBeat)
namespace VROSC::AudioReactive {
class TranslateEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TranslateOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TranslateOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TranslateOnBeat
class CORDL_TYPE TranslateOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
 __declspec(property(get=get_TranslateAnimation)) ::VROSC::AudioReactive::TranslateEffect*  TranslateAnimation;

/// @brief Field _translateAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__translateAnimation, put=__cordl_internal_set__translateAnimation)) ::VROSC::AudioReactive::TranslateEffect*  _translateAnimation;

/// @brief Method Awake, addr 0x17dbb54, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::TranslateOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17dbb78, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr ::VROSC::AudioReactive::TranslateEffect* const& __cordl_internal_get__translateAnimation() const;

constexpr ::VROSC::AudioReactive::TranslateEffect*& __cordl_internal_get__translateAnimation() ;

constexpr void __cordl_internal_set__translateAnimation(::VROSC::AudioReactive::TranslateEffect*  value) ;

/// @brief Method .ctor, addr 0x17dbb98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TranslateAnimation, addr 0x17dbb4c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::TranslateEffect* get_TranslateAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranslateOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranslateOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TranslateOnBeat(TranslateOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranslateOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranslateOnBeat(TranslateOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1573};

/// @brief Field _translateAnimation, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::TranslateEffect*  ____translateAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TranslateOnBeat, ____translateAnimation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TranslateOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TranslateOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateOnBeat*, "VROSC.AudioReactive", "TranslateOnBeat");
