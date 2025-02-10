#pragma once
// IWYU pragma private; include "VROSC/InputDeviceTransformData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(InputDeviceTransformData)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InputSettings;
}
// Forward declare root types
namespace VROSC {
class InputDeviceTransformData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputDeviceTransformData);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputDeviceTransformData
class CORDL_TYPE InputDeviceTransformData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LastPosition, put=set_LastPosition)) ::UnityEngine::Vector3  LastPosition;

 __declspec(property(get=get_SmoothPosition, put=set_SmoothPosition)) ::UnityEngine::Vector3  SmoothPosition;

 __declspec(property(get=get_Velocity, put=set_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field <LastPosition>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__LastPosition_k__BackingField, put=__cordl_internal_set__LastPosition_k__BackingField)) ::UnityEngine::Vector3  _LastPosition_k__BackingField;

/// @brief Field <SmoothPosition>k__BackingField, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__SmoothPosition_k__BackingField, put=__cordl_internal_set__SmoothPosition_k__BackingField)) ::UnityEngine::Vector3  _SmoothPosition_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get__Velocity_k__BackingField, put=__cordl_internal_set__Velocity_k__BackingField)) ::UnityEngine::Vector3  _Velocity_k__BackingField;

/// @brief Field _inputDevice, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevice, put=__cordl_internal_set__inputDevice)) ::UnityW<::VROSC::InputDevice>  _inputDevice;

/// @brief Field _inputSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSettings, put=__cordl_internal_set__inputSettings)) ::UnityW<::VROSC::InputSettings>  _inputSettings;

/// @brief Field _smoothingVelocity, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__smoothingVelocity, put=__cordl_internal_set__smoothingVelocity)) ::UnityEngine::Vector3  _smoothingVelocity;

static inline ::VROSC::InputDeviceTransformData* New_ctor(::VROSC::InputDevice*  inputDevice, ::VROSC::InputSettings*  inputSettings) ;

/// @brief Method UpdatePosition, addr 0x188d840, size 0xcc, virtual false, abstract: false, final false
inline void UpdatePosition() ;

/// @brief Method UpdateVelocity, addr 0x188d654, size 0x64, virtual false, abstract: false, final false
inline void UpdateVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__SmoothPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__SmoothPosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Velocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Velocity_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__inputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__inputDevice() ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__inputSettings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__inputSettings() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__smoothingVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__smoothingVelocity() ;

constexpr void __cordl_internal_set__LastPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__SmoothPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Velocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__smoothingVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x188d3ac, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InputDevice*  inputDevice, ::VROSC::InputSettings*  inputSettings) ;

/// @brief Method get_LastPosition, addr 0x188f0b4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastPosition() ;

/// @brief Method get_SmoothPosition, addr 0x188f0e4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_SmoothPosition() ;

/// @brief Method get_Velocity, addr 0x188f0cc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Method set_LastPosition, addr 0x188f0a8, size 0xc, virtual false, abstract: false, final false
inline void set_LastPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_SmoothPosition, addr 0x188f0d8, size 0xc, virtual false, abstract: false, final false
inline void set_SmoothPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_Velocity, addr 0x188f0c0, size 0xc, virtual false, abstract: false, final false
inline void set_Velocity(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceTransformData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceTransformData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDeviceTransformData(InputDeviceTransformData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDeviceTransformData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDeviceTransformData(InputDeviceTransformData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{622};

/// @brief Field <LastPosition>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LastPosition_k__BackingField;

/// @brief Field <Velocity>k__BackingField, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Velocity_k__BackingField;

/// @brief Field <SmoothPosition>k__BackingField, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____SmoothPosition_k__BackingField;

/// @brief Field _smoothingVelocity, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____smoothingVelocity;

/// @brief Field _inputDevice, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____inputDevice;

/// @brief Field _inputSettings, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____inputSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputDeviceTransformData, ____LastPosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceTransformData, ____Velocity_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceTransformData, ____SmoothPosition_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceTransformData, ____smoothingVelocity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceTransformData, ____inputDevice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputDeviceTransformData, ____inputSettings) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputDeviceTransformData, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputDeviceTransformData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputDeviceTransformData*, "VROSC", "InputDeviceTransformData");
