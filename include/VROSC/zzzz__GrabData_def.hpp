#pragma once
// IWYU pragma private; include "VROSC/GrabData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GrabData)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class GrabData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GrabData);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GrabData
class CORDL_TYPE GrabData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Device)) ::UnityW<::VROSC::InputDevice>  Device;

 __declspec(property(get=get_GrabbedCollider)) ::UnityW<::UnityEngine::Collider>  GrabbedCollider;

 __declspec(property(get=get_PointedAt)) bool  PointedAt;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field <Device>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Device_k__BackingField, put=__cordl_internal_set__Device_k__BackingField)) ::UnityW<::VROSC::InputDevice>  _Device_k__BackingField;

/// @brief Field <GrabbedCollider>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__GrabbedCollider_k__BackingField, put=__cordl_internal_set__GrabbedCollider_k__BackingField)) ::UnityW<::UnityEngine::Collider>  _GrabbedCollider_k__BackingField;

/// @brief Field <PointedAt>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__PointedAt_k__BackingField, put=__cordl_internal_set__PointedAt_k__BackingField)) bool  _PointedAt_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) ::UnityEngine::Vector3  _Position_k__BackingField;

static inline ::VROSC::GrabData* New_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, ::UnityEngine::Collider*  grabbedColider, bool  pointedAt) ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__Device_k__BackingField() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__Device_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__GrabbedCollider_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__GrabbedCollider_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PointedAt_k__BackingField() const;

constexpr bool& __cordl_internal_get__PointedAt_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Position_k__BackingField() ;

constexpr void __cordl_internal_set__Device_k__BackingField(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__GrabbedCollider_k__BackingField(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__PointedAt_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x188ff38, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, ::UnityEngine::Collider*  grabbedColider, bool  pointedAt) ;

/// @brief Method get_Device, addr 0x188ff14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_Device() ;

/// @brief Method get_GrabbedCollider, addr 0x188ff1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_GrabbedCollider() ;

/// @brief Method get_PointedAt, addr 0x188ff30, size 0x8, virtual false, abstract: false, final false
inline bool get_PointedAt() ;

/// @brief Method get_Position, addr 0x188ff24, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabData(GrabData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabData(GrabData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{629};

/// @brief Field <Device>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____Device_k__BackingField;

/// @brief Field <GrabbedCollider>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____GrabbedCollider_k__BackingField;

/// @brief Field <Position>k__BackingField, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Position_k__BackingField;

/// @brief Field <PointedAt>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____PointedAt_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GrabData, ____Device_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabData, ____GrabbedCollider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabData, ____Position_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabData, ____PointedAt_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GrabData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GrabData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabData*, "VROSC", "GrabData");
