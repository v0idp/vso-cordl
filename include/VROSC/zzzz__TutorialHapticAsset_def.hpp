#pragma once
// IWYU pragma private; include "VROSC/TutorialHapticAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialHapticAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class TutorialHapticBehaviour;
}
// Forward declare root types
namespace VROSC {
class TutorialHapticAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialHapticAsset);
// Dependencies UnityEngine.Playables.PlayableAsset, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialHapticAsset
class CORDL_TYPE TutorialHapticAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _amplitude, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__amplitude, put=__cordl_internal_set__amplitude)) float_t  _amplitude;

/// @brief Field _frequency, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _hand, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::VROSC::HandType  _hand;

/// @brief Field animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animation, put=__cordl_internal_set_animation)) ::VROSC::TutorialHapticBehaviour*  animation;

/// @brief Method CreatePlayable, addr 0x176f61c, size 0x100, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::TutorialHapticAsset* New_ctor() ;

constexpr float_t const& __cordl_internal_get__amplitude() const;

constexpr float_t& __cordl_internal_get__amplitude() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__hand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__hand() ;

constexpr ::VROSC::TutorialHapticBehaviour* const& __cordl_internal_get_animation() const;

constexpr ::VROSC::TutorialHapticBehaviour*& __cordl_internal_get_animation() ;

constexpr void __cordl_internal_set__amplitude(float_t  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__hand(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set_animation(::VROSC::TutorialHapticBehaviour*  value) ;

/// @brief Method .ctor, addr 0x176f728, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialHapticAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialHapticAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialHapticAsset(TutorialHapticAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialHapticAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialHapticAsset(TutorialHapticAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1233};

/// @brief Field _hand, offset: 0x18, size: 0x4, def value: None
 ::VROSC::HandType  ____hand;

/// @brief Field _frequency, offset: 0x1c, size: 0x4, def value: None
 float_t  ____frequency;

/// @brief Field _amplitude, offset: 0x20, size: 0x4, def value: None
 float_t  ____amplitude;

/// @brief Field animation, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TutorialHapticBehaviour*  ___animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialHapticAsset, ____hand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticAsset, ____frequency) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticAsset, ____amplitude) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialHapticAsset, ___animation) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialHapticAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialHapticAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialHapticAsset*, "VROSC", "TutorialHapticAsset");
