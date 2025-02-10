#pragma once
// IWYU pragma private; include "VROSC/InstrumentCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstrumentCreationBehaviour)
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
class WidgetController;
}
// Forward declare root types
namespace VROSC {
class InstrumentCreationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentCreationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentCreationBehaviour
class CORDL_TYPE InstrumentCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Scale, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field _instrumentController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::WidgetController>  _instrumentController;

static inline ::VROSC::InstrumentCreationBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x17689d4, size 0xac, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x17689cc, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::WidgetController*  instrumentController) ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr ::UnityW<::VROSC::WidgetController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::WidgetController>& __cordl_internal_get__instrumentController() ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::WidgetController>  value) ;

/// @brief Method .ctor, addr 0x1768a80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentCreationBehaviour(InstrumentCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentCreationBehaviour(InstrumentCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1207};

/// @brief Field _instrumentController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetController>  ____instrumentController;

/// @brief Field Scale, offset: 0x18, size: 0x4, def value: None
 float_t  ___Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentCreationBehaviour, ____instrumentController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentCreationBehaviour, ___Scale) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentCreationBehaviour, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentCreationBehaviour*, "VROSC", "InstrumentCreationBehaviour");
