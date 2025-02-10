#pragma once
// IWYU pragma private; include "VROSC/IndividualHintNoteBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IndividualHintNoteBehaviour)
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
class TouchableObject;
}
// Forward declare root types
namespace VROSC {
class IndividualHintNoteBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IndividualHintNoteBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour, VROSC.NoteBoard::PlayAxis
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IndividualHintNoteBehaviour
class CORDL_TYPE IndividualHintNoteBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Axis, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Axis, put=__cordl_internal_set_Axis)) ::VROSC::NoteBoard_PlayAxis  Axis;

/// @brief Field Pressed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Pressed, put=__cordl_internal_set_Pressed)) float_t  Pressed;

/// @brief Field _touchable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchable, put=__cordl_internal_set__touchable)) ::UnityW<::VROSC::TouchableObject>  _touchable;

static inline ::VROSC::IndividualHintNoteBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x1767e98, size 0x9c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x1767e90, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::TouchableObject*  touchable) ;

constexpr ::VROSC::NoteBoard_PlayAxis const& __cordl_internal_get_Axis() const;

constexpr ::VROSC::NoteBoard_PlayAxis& __cordl_internal_get_Axis() ;

constexpr float_t const& __cordl_internal_get_Pressed() const;

constexpr float_t& __cordl_internal_get_Pressed() ;

constexpr ::UnityW<::VROSC::TouchableObject> const& __cordl_internal_get__touchable() const;

constexpr ::UnityW<::VROSC::TouchableObject>& __cordl_internal_get__touchable() ;

constexpr void __cordl_internal_set_Axis(::VROSC::NoteBoard_PlayAxis  value) ;

constexpr void __cordl_internal_set_Pressed(float_t  value) ;

constexpr void __cordl_internal_set__touchable(::UnityW<::VROSC::TouchableObject>  value) ;

/// @brief Method .ctor, addr 0x1767f34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndividualHintNoteBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndividualHintNoteBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IndividualHintNoteBehaviour(IndividualHintNoteBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndividualHintNoteBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndividualHintNoteBehaviour(IndividualHintNoteBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1197};

/// @brief Field _touchable, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::TouchableObject>  ____touchable;

/// @brief Field Axis, offset: 0x18, size: 0x4, def value: None
 ::VROSC::NoteBoard_PlayAxis  ___Axis;

/// @brief Field Pressed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Pressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IndividualHintNoteBehaviour, ____touchable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::IndividualHintNoteBehaviour, ___Axis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::IndividualHintNoteBehaviour, ___Pressed) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IndividualHintNoteBehaviour, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IndividualHintNoteBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IndividualHintNoteBehaviour*, "VROSC", "IndividualHintNoteBehaviour");
