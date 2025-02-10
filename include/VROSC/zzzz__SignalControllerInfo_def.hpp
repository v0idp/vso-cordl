#pragma once
// IWYU pragma private; include "VROSC/SignalControllerInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(SignalControllerInfo)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class SignalControllerInfo;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalControllerInfo);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalControllerInfo
class CORDL_TYPE SignalControllerInfo : public ::System::Object {
public:
// Declarations
/// @brief Field NormalizedPoint, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_NormalizedPoint, put=__cordl_internal_set_NormalizedPoint)) ::UnityEngine::Vector3  NormalizedPoint;

/// @brief Field NormalizedRotation, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_NormalizedRotation, put=__cordl_internal_set_NormalizedRotation)) ::UnityEngine::Vector3  NormalizedRotation;

/// @brief Field Origin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Origin, put=__cordl_internal_set_Origin)) ::UnityW<::VROSC::InputDevice>  Origin;

/// @brief Field RelativeVelocity, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_RelativeVelocity, put=__cordl_internal_set_RelativeVelocity)) ::UnityEngine::Vector3  RelativeVelocity;

static inline ::VROSC::SignalControllerInfo* New_ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  normalizedPoint, ::UnityEngine::Vector3  normalizedRotation, ::UnityEngine::Vector3  relativeVelocity) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_NormalizedPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_NormalizedPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_NormalizedRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_NormalizedRotation() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_Origin() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_Origin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RelativeVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RelativeVelocity() ;

constexpr void __cordl_internal_set_NormalizedPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_NormalizedRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Origin(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_RelativeVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1721378, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  normalizedPoint, ::UnityEngine::Vector3  normalizedRotation, ::UnityEngine::Vector3  relativeVelocity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalControllerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalControllerInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalControllerInfo(SignalControllerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalControllerInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalControllerInfo(SignalControllerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{979};

/// @brief Field Origin, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___Origin;

/// @brief Field NormalizedPoint, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___NormalizedPoint;

/// @brief Field NormalizedRotation, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___NormalizedRotation;

/// @brief Field RelativeVelocity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RelativeVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalControllerInfo, ___Origin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalControllerInfo, ___NormalizedPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalControllerInfo, ___NormalizedRotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalControllerInfo, ___RelativeVelocity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalControllerInfo, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalControllerInfo);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalControllerInfo*, "VROSC", "SignalControllerInfo");
