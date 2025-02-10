#pragma once
// IWYU pragma private; include "VROSC/InputArea.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Clickable_def.hpp"
CORDL_MODULE_EXPORT(InputArea)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class InputArea;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputArea);
// Dependencies VROSC.Clickable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputArea
class CORDL_TYPE InputArea : public ::VROSC::Clickable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field _area, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__area, put=__cordl_internal_set__area)) ::UnityW<::UnityEngine::RectTransform>  _area;

/// @brief Field _currentInputDevice, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentInputDevice, put=__cordl_internal_set__currentInputDevice)) ::UnityW<::VROSC::InputDevice>  _currentInputDevice;

/// @brief Field _interactionStopsLaser, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__interactionStopsLaser, put=__cordl_internal_set__interactionStopsLaser)) bool  _interactionStopsLaser;

/// @brief Method Awake, addr 0x1897234, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNormalizedPosition, addr 0x1897594, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNormalizedPosition() ;

/// @brief Method GetNormalizedPositionUsingRay, addr 0x1897610, size 0x280, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNormalizedPositionUsingRay() ;

static inline ::VROSC::InputArea* New_ctor() ;

/// @brief Method OnDestroy, addr 0x189730c, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Pressed, addr 0x18973e4, size 0x134, virtual false, abstract: false, final false
inline void Pressed(::VROSC::ClickData*  clickData, bool  pressed) ;

/// @brief Method SetIsInteracting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetIsInteracting(::VROSC::ClickData*  clickData, bool  isInteracting) ;

/// @brief Method Update, addr 0x1897518, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateInput, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateInput() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__area() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__area() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__currentInputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__currentInputDevice() ;

constexpr bool const& __cordl_internal_get__interactionStopsLaser() const;

constexpr bool& __cordl_internal_get__interactionStopsLaser() ;

constexpr void __cordl_internal_set__area(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__currentInputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__interactionStopsLaser(bool  value) ;

/// @brief Method .ctor, addr 0x1892460, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x189722c, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputArea", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputArea(InputArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputArea", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputArea(InputArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{651};

/// @brief Field _interactionStopsLaser, offset: 0x90, size: 0x1, def value: None
 bool  ____interactionStopsLaser;

/// @brief Field _area, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____area;

/// @brief Field _currentInputDevice, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____currentInputDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputArea, ____interactionStopsLaser) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputArea, ____area) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputArea, ____currentInputDevice) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputArea, 0xa8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputArea);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputArea*, "VROSC", "InputArea");
