#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TransformOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransformOnBeat)
namespace VROSC::AudioReactive {
class TranslateEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TransformOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TransformOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TransformOnBeat
class CORDL_TYPE TransformOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
 __declspec(property(get=get_TranslateAnimation)) ::VROSC::AudioReactive::TranslateEffect*  TranslateAnimation;

/// @brief Field _transformAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformAnimation, put=__cordl_internal_set__transformAnimation)) ::VROSC::AudioReactive::TranslateEffect*  _transformAnimation;

/// @brief Method Awake, addr 0x17dbb00, size 0x24, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::TransformOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17dbb24, size 0x20, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr ::VROSC::AudioReactive::TranslateEffect* const& __cordl_internal_get__transformAnimation() const;

constexpr ::VROSC::AudioReactive::TranslateEffect*& __cordl_internal_get__transformAnimation() ;

constexpr void __cordl_internal_set__transformAnimation(::VROSC::AudioReactive::TranslateEffect*  value) ;

/// @brief Method .ctor, addr 0x17dbb44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TranslateAnimation, addr 0x17dbaf8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::TranslateEffect* get_TranslateAnimation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformOnBeat(TransformOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformOnBeat(TransformOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1572};

/// @brief Field _transformAnimation, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::TranslateEffect*  ____transformAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TransformOnBeat, ____transformAnimation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TransformOnBeat, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TransformOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TransformOnBeat*, "VROSC.AudioReactive", "TransformOnBeat");
