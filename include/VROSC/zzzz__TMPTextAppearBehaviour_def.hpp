#pragma once
// IWYU pragma private; include "VROSC/TMPTextAppearBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TMPTextAppearBehaviour)
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace VROSC {
class TMPTextAppearBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TMPTextAppearBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TMPTextAppearBehaviour
class CORDL_TYPE TMPTextAppearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Appear, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Appear, put=__cordl_internal_set_Appear)) float_t  Appear;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::TMPro::TextMeshPro>  _target;

/// @brief Field _visibleColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__visibleColor, put=__cordl_internal_set__visibleColor)) ::UnityEngine::Color  _visibleColor;

static inline ::VROSC::TMPTextAppearBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176fbcc, size 0xbc, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176fbc4, size 0x8, virtual false, abstract: false, final false
inline void Setup(::TMPro::TextMeshPro*  target) ;

constexpr float_t const& __cordl_internal_get_Appear() const;

constexpr float_t& __cordl_internal_get_Appear() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__visibleColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__visibleColor() ;

constexpr void __cordl_internal_set_Appear(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__visibleColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x176fc88, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMPTextAppearBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMPTextAppearBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMPTextAppearBehaviour(TMPTextAppearBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMPTextAppearBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMPTextAppearBehaviour(TMPTextAppearBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1238};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____target;

/// @brief Field _visibleColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ____visibleColor;

/// @brief Field Appear, offset: 0x28, size: 0x4, def value: None
 float_t  ___Appear;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TMPTextAppearBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TMPTextAppearBehaviour, ____visibleColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TMPTextAppearBehaviour, ___Appear) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TMPTextAppearBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TMPTextAppearBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TMPTextAppearBehaviour*, "VROSC", "TMPTextAppearBehaviour");
