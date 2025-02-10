#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevices)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace UnityEngine::XR {
class InputDevices;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::InputDevices);
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.InputDevices
class CORDL_TYPE InputDevices : public ::System::Object {
public:
// Declarations
/// @brief Field deviceConfigChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceConfigChanged, put=setStaticF_deviceConfigChanged)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceConfigChanged;

/// @brief Field deviceConnected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceConnected, put=setStaticF_deviceConnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceConnected;

/// @brief Field deviceDisconnected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deviceDisconnected, put=setStaticF_deviceDisconnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  deviceDisconnected;

/// @brief Field s_InputDeviceList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InputDeviceList, put=setStaticF_s_InputDeviceList)) ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  s_InputDeviceList;

/// @brief Method GetDeviceCharacteristics, addr 0x319ab9c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::InputDeviceCharacteristics GetDeviceCharacteristics(uint64_t  deviceId) ;

/// @brief Method GetDevicesWithCharacteristics, addr 0x319afe4, size 0x318, virtual false, abstract: false, final false
static inline void GetDevicesWithCharacteristics(::UnityEngine::XR::InputDeviceCharacteristics  desiredCharacteristics, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices) ;

/// @brief Method GetDevices_Internal, addr 0x319b2fc, size 0x3c, virtual false, abstract: false, final false
static inline void GetDevices_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices) ;

/// @brief Method InvokeConnectionEvent, addr 0x319b338, size 0xbc, virtual false, abstract: false, final false
static inline void InvokeConnectionEvent(uint64_t  deviceId, ::UnityEngine::XR::ConnectionChangeType  change) ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConfigChanged() ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConnected() ;

static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceDisconnected() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* getStaticF_s_InputDeviceList() ;

static inline void setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

static inline void setStaticF_s_InputDeviceList(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputDevices() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputDevices(InputDevices && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputDevices(InputDevices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDevices, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
