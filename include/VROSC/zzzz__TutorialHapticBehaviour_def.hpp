#pragma once
// IWYU pragma private; include "VROSC/TutorialHapticBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialHapticBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
struct HandType;
}
// Forward declare root types
namespace VROSC {
class TutorialHapticBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialHapticBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialHapticBehaviour
class CORDL_TYPE TutorialHapticBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field _amplitude, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitude, put=__cordl_internal_set__amplitude)) float_t  _amplitude;

/// @brief Field _amplitudeScale, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitudeScale, put=__cordl_internal_set__amplitudeScale)) float_t  _amplitudeScale;

/// @brief Field _frequency, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _frequencyScale, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequencyScale, put=__cordl_internal_set__frequencyScale)) float_t  _frequencyScale;

/// @brief Field _hand, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::VROSC::HandType  _hand;

static inline ::VROSC::TutorialHapticBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176f740, size 0x110, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176f71c, size 0xc, virtual false, abstract: false, final false
inline void Setup(::VROSC::HandType  hand, float_t  frequency, float_t  amplitude) ;

constexpr float_t const& __cordl_internal_get__amplitude() const;

constexpr float_t& __cordl_internal_get__amplitude() ;

constexpr float_t const& __cordl_internal_get__amplitudeScale() const;

constexpr float_t& __cordl_internal_get__amplitudeScale() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr float_t const& __cordl_internal_get__frequencyScale() const;

constexpr float_t& __cordl_internal_get__frequencyScale() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__hand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__hand() ;

constexpr void __cordl_internal_set__amplitude(float_t  value) ;

constexpr void __cordl_internal_set__amplitudeScale(float_t  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__frequencyScale(float_t  value) ;

constexpr void __cordl_internal_set__hand(::VROSC::HandType  value) ;

/// @brief Method .ctor, addr 0x176f850, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialHapticBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialHapticBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialHapticBehaviour(TutorialHapticBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialHapticBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialHapticBehaviour(TutorialHapticBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1234};

/// @brief Field _frequencyScale, offset: 0x10, size: 0x4, def value: None
 float_t  ____frequencyScale;

/// @brief Field _amplitudeScale, offset: 0x14, size: 0x4, def value: None
 float_t  ____amplitudeScale;

/// @brief Field _hand, offset: 0x18, size: 0x4, def value: None
 ::VROSC::HandType  ____hand;

/// @brief Field _frequency, offset: 0x1c, size: 0x4, def value: None
 float_t  ____frequency;

/// @brief Field _amplitude, offset: 0x20, size: 0x4, def value: None
 float_t  ____amplitude;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialHapticBehaviour, ____frequencyScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticBehaviour, ____amplitudeScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticBehaviour, ____hand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticBehaviour, ____frequency) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticBehaviour, ____amplitude) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialHapticBehaviour, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialHapticBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialHapticBehaviour*, "VROSC", "TutorialHapticBehaviour");
