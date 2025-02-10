#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ReactiveEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReactiveEffect)
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class ReactToBeat;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ReactiveEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ReactiveEffect);
// Dependencies System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ReactiveEffect
class CORDL_TYPE ReactiveEffect : public ::System::Object {
public:
// Declarations
/// @brief Method DrawGizmos, addr 0x17d4b84, size 0x4, virtual true, abstract: false, final false
inline void DrawGizmos(::VROSC::AudioReactive::ReactToBeat*  sender) ;

static inline ::VROSC::AudioReactive::ReactiveEffect* New_ctor() ;

/// @brief Method Setup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method Trigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Trigger() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x17d6294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReactiveEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReactiveEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReactiveEffect(ReactiveEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReactiveEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReactiveEffect(ReactiveEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ReactiveEffect, 0x10>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ReactiveEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ReactiveEffect*, "VROSC.AudioReactive", "ReactiveEffect");
