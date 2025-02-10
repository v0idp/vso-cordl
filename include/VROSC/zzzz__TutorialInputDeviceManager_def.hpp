#pragma once
// IWYU pragma private; include "VROSC/TutorialInputDeviceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialInputDeviceManager)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class TutorialInputDevice;
}
// Forward declare root types
namespace VROSC {
class TutorialInputDeviceManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialInputDeviceManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialInputDeviceManager
class CORDL_TYPE TutorialInputDeviceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _left, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__left, put=__cordl_internal_set__left)) ::UnityW<::VROSC::TutorialInputDevice>  _left;

/// @brief Field _right, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__right, put=__cordl_internal_set__right)) ::UnityW<::VROSC::TutorialInputDevice>  _right;

/// @brief Method IsLeftValid, addr 0x1704fd0, size 0x84, virtual false, abstract: false, final false
inline bool IsLeftValid(::VROSC::HandType  hand) ;

/// @brief Method IsRightValid, addr 0x1705054, size 0x84, virtual false, abstract: false, final false
inline bool IsRightValid(::VROSC::HandType  hand) ;

static inline ::VROSC::TutorialInputDeviceManager* New_ctor() ;

/// @brief Method Setup, addr 0x1704efc, size 0x28, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  left, ::VROSC::InputDevice*  right) ;

/// @brief Method StartButtonBlinking, addr 0x1704f24, size 0xac, virtual false, abstract: false, final false
inline void StartButtonBlinking(::VROSC::HandType  hand, ::VROSC::TriggerButton  trigger, ::UnityEngine::Color  color) ;

/// @brief Method StopAllBlinking, addr 0x1705154, size 0x70, virtual false, abstract: false, final false
inline void StopAllBlinking(::VROSC::HandType  hand, float_t  fadeTime) ;

/// @brief Method StopButtonBlinking, addr 0x17050d8, size 0x7c, virtual false, abstract: false, final false
inline void StopButtonBlinking(::VROSC::HandType  hand, ::VROSC::TriggerButton  trigger, float_t  fadeTime) ;

constexpr ::UnityW<::VROSC::TutorialInputDevice> const& __cordl_internal_get__left() const;

constexpr ::UnityW<::VROSC::TutorialInputDevice>& __cordl_internal_get__left() ;

constexpr ::UnityW<::VROSC::TutorialInputDevice> const& __cordl_internal_get__right() const;

constexpr ::UnityW<::VROSC::TutorialInputDevice>& __cordl_internal_get__right() ;

constexpr void __cordl_internal_set__left(::UnityW<::VROSC::TutorialInputDevice>  value) ;

constexpr void __cordl_internal_set__right(::UnityW<::VROSC::TutorialInputDevice>  value) ;

/// @brief Method .ctor, addr 0x17051c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialInputDeviceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDeviceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialInputDeviceManager(TutorialInputDeviceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialInputDeviceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialInputDeviceManager(TutorialInputDeviceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{853};

/// @brief Field _left, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialInputDevice>  ____left;

/// @brief Field _right, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialInputDevice>  ____right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialInputDeviceManager, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialInputDeviceManager, ____right) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialInputDeviceManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialInputDeviceManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialInputDeviceManager*, "VROSC", "TutorialInputDeviceManager");
