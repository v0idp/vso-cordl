#pragma once
// IWYU pragma private; include "VROSC/ClickData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
CORDL_MODULE_EXPORT(ClickData)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class ClickData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClickData);
// Dependencies System.Object, UnityEngine.Vector3, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClickData
class CORDL_TYPE ClickData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Button)) ::VROSC::TriggerButton  Button;

 __declspec(property(get=get_Device)) ::UnityW<::VROSC::InputDevice>  Device;

 __declspec(property(get=get_PointedAt)) bool  PointedAt;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field <Button>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Button_k__BackingField, put=__cordl_internal_set__Button_k__BackingField)) ::VROSC::TriggerButton  _Button_k__BackingField;

/// @brief Field <Device>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Device_k__BackingField, put=__cordl_internal_set__Device_k__BackingField)) ::UnityW<::VROSC::InputDevice>  _Device_k__BackingField;

/// @brief Field <PointedAt>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__PointedAt_k__BackingField, put=__cordl_internal_set__PointedAt_k__BackingField)) bool  _PointedAt_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) ::UnityEngine::Vector3  _Position_k__BackingField;

static inline ::VROSC::ClickData* New_ctor(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button, ::UnityEngine::Vector3  position, bool  pointedAt) ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__Button_k__BackingField() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__Button_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__Device_k__BackingField() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__Device_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PointedAt_k__BackingField() const;

constexpr bool& __cordl_internal_get__PointedAt_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position_k__BackingField() ;

constexpr void __cordl_internal_set__Button_k__BackingField(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__Device_k__BackingField(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__PointedAt_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x188fdfc, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button, ::UnityEngine::Vector3  position, bool  pointedAt) ;

/// @brief Method get_Button, addr 0x188fde0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TriggerButton get_Button() ;

/// @brief Method get_Device, addr 0x188fdd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_Device() ;

/// @brief Method get_PointedAt, addr 0x188fdf4, size 0x8, virtual false, abstract: false, final false
inline bool get_PointedAt() ;

/// @brief Method get_Position, addr 0x188fde8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClickData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClickData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClickData(ClickData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClickData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClickData(ClickData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{627};

/// @brief Field <Device>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____Device_k__BackingField;

/// @brief Field <Button>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____Button_k__BackingField;

/// @brief Field <Position>k__BackingField, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position_k__BackingField;

/// @brief Field <PointedAt>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____PointedAt_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClickData, ____Device_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClickData, ____Button_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClickData, ____Position_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClickData, ____PointedAt_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClickData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClickData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClickData*, "VROSC", "ClickData");
