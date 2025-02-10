#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventStream_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers_DoubleBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser_JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct MemoryHelpers_BitRegion;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
struct InputDevice_DeviceFlags;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct InputManager_AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct InputManager_DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorsForDevice;
}
namespace UnityEngine::InputSystem {
class InputManager__ListControlLayouts_d__97;
}
namespace UnityEngine::InputSystem {
class InputManager___c;
}
namespace UnityEngine::InputSystem {
template<typename TDevice>
class InputManager___c__82_1;
}
namespace UnityEngine::InputSystem {
struct InputSettings_ScrollDeltaBehavior;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputManager_DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputManager__ListControlLayouts_d__97;
}
namespace UnityEngine::InputSystem {
class InputManager___c;
}
namespace UnityEngine::InputSystem {
template<typename TDevice>
class InputManager___c__82_1;
}
namespace UnityEngine::InputSystem {
struct InputManager_AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct InputManager_StateChangeMonitorsForDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputManager_DeviceDisableScope);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputManager);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputManager___c);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputManager___c__82_1);
MARK_VAL_T(::UnityEngine::InputSystem::InputManager_AvailableDevice);
MARK_VAL_T(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener);
MARK_VAL_T(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout);
MARK_VAL_T(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice);
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/DeviceDisableScope
struct CORDL_TYPE InputManager_DeviceDisableScope {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputManager_DeviceDisableScope_Unwrapped
enum struct __InputManager_DeviceDisableScope_Unwrapped : int32_t {
__E_Everywhere = static_cast<int32_t>(0x0),
__E_InFrontendOnly = static_cast<int32_t>(0x1),
__E_TemporaryWhilePlayerIsInBackground = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputManager_DeviceDisableScope_Unwrapped () const noexcept {
return static_cast<__InputManager_DeviceDisableScope_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputManager_DeviceDisableScope() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputManager_DeviceDisableScope(int32_t  value__) noexcept;

/// @brief Field Everywhere value: I32(0)
static ::UnityEngine::InputSystem::InputManager_DeviceDisableScope const Everywhere;

/// @brief Field InFrontendOnly value: I32(1)
static ::UnityEngine::InputSystem::InputManager_DeviceDisableScope const InFrontendOnly;

/// @brief Field TemporaryWhilePlayerIsInBackground value: I32(2)
static ::UnityEngine::InputSystem::InputManager_DeviceDisableScope const TemporaryWhilePlayerIsInBackground;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager_DeviceDisableScope, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager_DeviceDisableScope, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/AvailableDevice
struct CORDL_TYPE InputManager_AvailableDevice {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_AvailableDevice() ;

// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: None }]
constexpr InputManager_AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, int32_t  deviceId, bool  isNative, bool  isRemoved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field description, offset: 0x0, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

/// @brief Field deviceId, offset: 0x38, size: 0x4, def value: None
 int32_t  deviceId;

/// @brief Field isNative, offset: 0x3c, size: 0x1, def value: None
 bool  isNative;

/// @brief Field isRemoved, offset: 0x3d, size: 0x1, def value: None
 bool  isRemoved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager_AvailableDevice, description) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_AvailableDevice, deviceId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_AvailableDevice, isNative) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_AvailableDevice, isRemoved) == 0x3d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager_AvailableDevice, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorTimeout
struct CORDL_TYPE InputManager_StateChangeMonitorTimeout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorTimeout() ;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputManager_StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field control, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field time, offset: 0x8, size: 0x8, def value: None
 double_t  time;

/// @brief Field monitor, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex, offset: 0x18, size: 0x8, def value: None
 int64_t  monitorIndex;

/// @brief Field timerIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  timerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, time) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, monitor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, monitorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, timerIndex) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorListener
struct CORDL_TYPE InputManager_StateChangeMonitorListener {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorListener() ;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputManager_StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field control, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field monitor, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex, offset: 0x10, size: 0x8, def value: None
 int64_t  monitorIndex;

/// @brief Field groupIndex, offset: 0x18, size: 0x4, def value: None
 uint32_t  groupIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, monitor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, monitorIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, groupIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.DynamicBitfield
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorsForDevice
struct CORDL_TYPE InputManager_StateChangeMonitorsForDevice {
public:
// Declarations
 __declspec(property(get=get_count)) int32_t  count;

/// @brief Method Add, addr 0x2e364ac, size 0x138, virtual false, abstract: false, final false
inline void Add(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method Clear, addr 0x2e36850, size 0x64, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CompactArrays, addr 0x2e368b4, size 0x64, virtual false, abstract: false, final false
inline void CompactArrays() ;

/// @brief Method Remove, addr 0x2e36658, size 0xb4, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, bool  deferRemoval) ;

/// @brief Method RemoveAt, addr 0x2e367a4, size 0xac, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  i) ;

/// @brief Method SortMonitorsByIndex, addr 0x2e36918, size 0x16c, virtual false, abstract: false, final false
inline void SortMonitorsByIndex() ;

/// @brief Method get_count, addr 0x2e364a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_count() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorsForDevice() ;

// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion,::Array<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>*>", modifiers: "", def_value: None }, CppParam { name: "listeners", ty: "::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener>*>", modifiers: "", def_value: None }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: None }]
constexpr InputManager_StateChangeMonitorsForDevice(::ArrayW<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion,::Array<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>*>  memoryRegions, ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener>*>  listeners, ::UnityEngine::InputSystem::DynamicBitfield  signalled, bool  needToUpdateOrderingOfMonitors, bool  needToCompactArrays) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field memoryRegions, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion,::Array<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion>*>  memoryRegions;

/// @brief Field listeners, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener>*>  listeners;

/// @brief Field signalled, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputSystem::DynamicBitfield  signalled;

/// @brief Field needToUpdateOrderingOfMonitors, offset: 0x30, size: 0x1, def value: None
 bool  needToUpdateOrderingOfMonitors;

/// @brief Field needToCompactArrays, offset: 0x31, size: 0x1, def value: None
 bool  needToCompactArrays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, memoryRegions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, listeners) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, signalled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, needToUpdateOrderingOfMonitors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, needToCompactArrays) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<>c
class CORDL_TYPE InputManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputManager___c*  __9;

/// @brief Field <>9__185_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__185_0, put=setStaticF___9__185_0)) ::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>*  __9__185_0;

static inline ::UnityEngine::InputSystem::InputManager___c* New_ctor() ;

/// @brief Method <MakeDeviceNameUnique>b__185_0, addr 0x2e36ae8, size 0x64, virtual false, abstract: false, final false
inline ::StringW _MakeDeviceNameUnique_b__185_0(::UnityEngine::InputSystem::InputDevice*  x) ;

/// @brief Method .ctor, addr 0x2e36ae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputManager___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>* getStaticF___9__185_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputManager___c*  value) ;

static inline void setStaticF___9__185_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager___c(InputManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager___c(InputManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager___c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// cpp template
template<typename TDevice>
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<>c__82`1<TDevice>
class CORDL_TYPE InputManager___c__82_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*  __9;

/// @brief Field <>9__82_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_0, put=setStaticF___9__82_0)) ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  __9__82_0;

static inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* New_ctor() ;

/// @brief Method <RegisterPrecompiledLayout>b__82_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* _RegisterPrecompiledLayout_b__82_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::InputSystem::InputDevice*>* getStaticF___9__82_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>*  value) ;

static inline void setStaticF___9__82_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager___c__82_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c__82_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager___c__82_1(InputManager___c__82_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager___c__82_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager___c__82_1(InputManager___c__82_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__97
class CORDL_TYPE InputManager__ListControlLayouts_d__97 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW  System_Collections_Generic_IEnumerator_System_String__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::StringW  __2__current;

/// @brief Field <>3__basedOn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__basedOn, put=__cordl_internal_set___3__basedOn)) ::StringW  __3__basedOn;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::InputSystem::InputManager*  __4__this;

/// @brief Field <>7__wrap2, offset 0x50, size 0x30 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  __7__wrap2;

/// @brief Field <>7__wrap3, offset 0x80, size 0x30 
 __declspec(property(get=__cordl_internal_get___7__wrap3, put=__cordl_internal_set___7__wrap3)) ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  __7__wrap3;

/// @brief Field <>7__wrap4, offset 0xb0, size 0x30 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  __7__wrap4;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <internedBasedOn>5__2, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__internedBasedOn_5__2, put=__cordl_internal_set__internedBasedOn_5__2)) ::UnityEngine::InputSystem::Utilities::InternedString  _internedBasedOn_5__2;

/// @brief Field basedOn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_basedOn, put=__cordl_internal_set_basedOn)) ::StringW  basedOn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x2e36bc4, size 0x6c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x2e374b0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x2e37468, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e37554, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e37470, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e374a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x2e36b80, size 0x44, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::StringW const& __cordl_internal_get___2__current() const;

constexpr ::StringW& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get___3__basedOn() const;

constexpr ::StringW& __cordl_internal_get___3__basedOn() ;

constexpr ::UnityEngine::InputSystem::InputManager* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::InputSystem::InputManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*> const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>& __cordl_internal_get___7__wrap2() ;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> const& __cordl_internal_get___7__wrap3() const;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>& __cordl_internal_get___7__wrap3() ;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*> const& __cordl_internal_get___7__wrap4() const;

constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>& __cordl_internal_get___7__wrap4() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get__internedBasedOn_5__2() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get__internedBasedOn_5__2() ;

constexpr ::StringW const& __cordl_internal_get_basedOn() const;

constexpr ::StringW& __cordl_internal_get_basedOn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::StringW  value) ;

constexpr void __cordl_internal_set___3__basedOn(::StringW  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::InputManager*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  value) ;

constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  value) ;

constexpr void __cordl_internal_set___7__wrap4(::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set_basedOn(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0x2e37288, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x2e372d8, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0x2e37328, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// @brief Method <>m__Finally4, addr 0x2e37378, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally4() ;

/// @brief Method <>m__Finally5, addr 0x2e373c8, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally5() ;

/// @brief Method <>m__Finally6, addr 0x2e37418, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally6() ;

/// @brief Method .ctor, addr 0x2e36b4c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager__ListControlLayouts_d__97() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager__ListControlLayouts_d__97", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager__ListControlLayouts_d__97(InputManager__ListControlLayouts_d__97 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager__ListControlLayouts_d__97", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager__ListControlLayouts_d__97(InputManager__ListControlLayouts_d__97 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4901};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::StringW  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field basedOn, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___basedOn;

/// @brief Field <>3__basedOn, offset: 0x30, size: 0x8, def value: None
 ::StringW  _____3__basedOn;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputManager*  _____4__this;

/// @brief Field <internedBasedOn>5__2, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ____internedBasedOn_5__2;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x30, def value: None
 ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>  _____7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x80, size: 0x30, def value: None
 ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>  _____7__wrap3;

/// @brief Field <>7__wrap4, offset: 0xb0, size: 0x30, def value: None
 ::System::Collections::Generic::Dictionary_2_Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>  _____7__wrap4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, ___basedOn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____3__basedOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, ____internedBasedOn_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap3) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, _____7__wrap4) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97, 0xe0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.InputManager::StateChangeMonitorTimeout, UnityEngine.InputSystem.InputSettings::ScrollDeltaBehavior, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection, UnityEngine.InputSystem.LowLevel.InputEventStream, UnityEngine.InputSystem.LowLevel.InputMetrics, UnityEngine.InputSystem.LowLevel.InputStateBuffers, UnityEngine.InputSystem.LowLevel.InputUpdateType, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputManager
class CORDL_TYPE InputManager : public ::System::Object {
public:
// Declarations
using AvailableDevice = ::UnityEngine::InputSystem::InputManager_AvailableDevice;

using DeviceDisableScope = ::UnityEngine::InputSystem::InputManager_DeviceDisableScope;

using StateChangeMonitorListener = ::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener;

using StateChangeMonitorTimeout = ::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout;

using StateChangeMonitorsForDevice = ::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice;

using _ListControlLayouts_d__97 = ::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97;

using __c = ::UnityEngine::InputSystem::InputManager___c;

template<typename TDevice>
using __c__82_1 = ::UnityEngine::InputSystem::InputManager___c__82_1<TDevice>;

 __declspec(property(get=get_actions, put=set_actions)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  actions;

 __declspec(property(get=get_composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  composites;

 __declspec(property(get=get_defaultUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  defaultUpdateType;

 __declspec(property(get=get_devices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>  devices;

 __declspec(property(get=get_gameHasFocus)) bool  gameHasFocus;

 __declspec(property(get=get_gameIsPlaying)) bool  gameIsPlaying;

 __declspec(property(get=get_gameShouldGetInputRegardlessOfFocus)) bool  gameShouldGetInputRegardlessOfFocus;

 __declspec(property(get=get_interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  interactions;

 __declspec(property(get=get_isProcessingEvents)) bool  isProcessingEvents;

/// @brief Field k_InputAddDeviceMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputAddDeviceMarker, put=setStaticF_k_InputAddDeviceMarker)) ::Unity::Profiling::ProfilerMarker  k_InputAddDeviceMarker;

/// @brief Field k_InputOnActionsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnActionsChangeMarker, put=setStaticF_k_InputOnActionsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnActionsChangeMarker;

/// @brief Field k_InputOnAfterUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnAfterUpdateMarker, put=setStaticF_k_InputOnAfterUpdateMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnAfterUpdateMarker;

/// @brief Field k_InputOnBeforeUpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnBeforeUpdateMarker, put=setStaticF_k_InputOnBeforeUpdateMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnBeforeUpdateMarker;

/// @brief Field k_InputOnDeviceChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnDeviceChangeMarker, put=setStaticF_k_InputOnDeviceChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnDeviceChangeMarker;

/// @brief Field k_InputOnDeviceSettingsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnDeviceSettingsChangeMarker, put=setStaticF_k_InputOnDeviceSettingsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnDeviceSettingsChangeMarker;

/// @brief Field k_InputOnEventMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnEventMarker, put=setStaticF_k_InputOnEventMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnEventMarker;

/// @brief Field k_InputOnLayoutChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnLayoutChangeMarker, put=setStaticF_k_InputOnLayoutChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnLayoutChangeMarker;

/// @brief Field k_InputOnSettingsChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnSettingsChangeMarker, put=setStaticF_k_InputOnSettingsChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnSettingsChangeMarker;

/// @brief Field k_InputRegisterCustomTypesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputRegisterCustomTypesMarker, put=setStaticF_k_InputRegisterCustomTypesMarker)) ::Unity::Profiling::ProfilerMarker  k_InputRegisterCustomTypesMarker;

/// @brief Field k_InputRestoreDevicesAfterReloadMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputRestoreDevicesAfterReloadMarker, put=setStaticF_k_InputRestoreDevicesAfterReloadMarker)) ::Unity::Profiling::ProfilerMarker  k_InputRestoreDevicesAfterReloadMarker;

/// @brief Field k_InputTryFindMatchingControllerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputTryFindMatchingControllerMarker, put=setStaticF_k_InputTryFindMatchingControllerMarker)) ::Unity::Profiling::ProfilerMarker  k_InputTryFindMatchingControllerMarker;

/// @brief Field k_InputUpdateProfilerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputUpdateProfilerMarker, put=setStaticF_k_InputUpdateProfilerMarker)) ::Unity::Profiling::ProfilerMarker  k_InputUpdateProfilerMarker;

/// @brief Field m_Actions, offset 0x4e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actions, put=__cordl_internal_set_m_Actions)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_Actions;

/// @brief Field m_ActionsChangedListeners, offset 0x3b8, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_ActionsChangedListeners, put=__cordl_internal_set_m_ActionsChangedListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_ActionsChangedListeners;

/// @brief Field m_AfterUpdateListeners, offset 0x318, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_AfterUpdateListeners, put=__cordl_internal_set_m_AfterUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_AfterUpdateListeners;

/// @brief Field m_AvailableDeviceCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AvailableDeviceCount, put=__cordl_internal_set_m_AvailableDeviceCount)) int32_t  m_AvailableDeviceCount;

/// @brief Field m_AvailableDevices, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AvailableDevices, put=__cordl_internal_set_m_AvailableDevices)) ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice,::Array<::UnityEngine::InputSystem::InputManager_AvailableDevice>*>  m_AvailableDevices;

/// @brief Field m_BeforeUpdateListeners, offset 0x2c8, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_BeforeUpdateListeners, put=__cordl_internal_set_m_BeforeUpdateListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_BeforeUpdateListeners;

/// @brief Field m_Composites, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Composites, put=__cordl_internal_set_m_Composites)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Composites;

/// @brief Field m_CurrentUpdate, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentUpdate, put=__cordl_internal_set_m_CurrentUpdate)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_CurrentUpdate;

/// @brief Field m_DeviceChangeListeners, offset 0xe8, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceChangeListeners, put=__cordl_internal_set_m_DeviceChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  m_DeviceChangeListeners;

/// @brief Field m_DeviceCommandCallbacks, offset 0x1d8, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceCommandCallbacks, put=__cordl_internal_set_m_DeviceCommandCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  m_DeviceCommandCallbacks;

/// @brief Field m_DeviceFindExecuteCommandDelegate, offset 0x488, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindExecuteCommandDelegate, put=__cordl_internal_set_m_DeviceFindExecuteCommandDelegate)) ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  m_DeviceFindExecuteCommandDelegate;

/// @brief Field m_DeviceFindExecuteCommandDeviceId, offset 0x490, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindExecuteCommandDeviceId, put=__cordl_internal_set_m_DeviceFindExecuteCommandDeviceId)) int32_t  m_DeviceFindExecuteCommandDeviceId;

/// @brief Field m_DeviceFindLayoutCallbacks, offset 0x188, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceFindLayoutCallbacks, put=__cordl_internal_set_m_DeviceFindLayoutCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  m_DeviceFindLayoutCallbacks;

/// @brief Field m_DeviceStateChangeListeners, offset 0x138, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_DeviceStateChangeListeners, put=__cordl_internal_set_m_DeviceStateChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  m_DeviceStateChangeListeners;

/// @brief Field m_Devices, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Devices, put=__cordl_internal_set_m_Devices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_Devices;

/// @brief Field m_DevicesById, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DevicesById, put=__cordl_internal_set_m_DevicesById)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  m_DevicesById;

/// @brief Field m_DevicesCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DevicesCount, put=__cordl_internal_set_m_DevicesCount)) int32_t  m_DevicesCount;

/// @brief Field m_DisconnectedDevices, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisconnectedDevices, put=__cordl_internal_set_m_DisconnectedDevices)) ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_DisconnectedDevices;

/// @brief Field m_DisconnectedDevicesCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DisconnectedDevicesCount, put=__cordl_internal_set_m_DisconnectedDevicesCount)) int32_t  m_DisconnectedDevicesCount;

/// @brief Field m_EventListeners, offset 0x278, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_EventListeners, put=__cordl_internal_set_m_EventListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  m_EventListeners;

/// @brief Field m_HasFocus, offset 0x40a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasFocus, put=__cordl_internal_set_m_HasFocus)) bool  m_HasFocus;

/// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset 0x409, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers, put=__cordl_internal_set_m_HaveDevicesWithStateCallbackReceivers)) bool  m_HaveDevicesWithStateCallbackReceivers;

/// @brief Field m_HaveSentStartupAnalytics, offset 0x494, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HaveSentStartupAnalytics, put=__cordl_internal_set_m_HaveSentStartupAnalytics)) bool  m_HaveSentStartupAnalytics;

/// @brief Field m_InputEventStream, offset 0x410, size 0x78 
 __declspec(property(get=__cordl_internal_get_m_InputEventStream, put=__cordl_internal_set_m_InputEventStream)) ::UnityEngine::InputSystem::LowLevel::InputEventStream  m_InputEventStream;

/// @brief Field m_Interactions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactions, put=__cordl_internal_set_m_Interactions)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Interactions;

/// @brief Field m_LayoutChangeListeners, offset 0x228, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_LayoutChangeListeners, put=__cordl_internal_set_m_LayoutChangeListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  m_LayoutChangeListeners;

/// @brief Field m_LayoutRegistrationVersion, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LayoutRegistrationVersion, put=__cordl_internal_set_m_LayoutRegistrationVersion)) int32_t  m_LayoutRegistrationVersion;

/// @brief Field m_Layouts, offset 0x18, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_Layouts, put=__cordl_internal_set_m_Layouts)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection  m_Layouts;

/// @brief Field m_Metrics, offset 0x4a0, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_Metrics, put=__cordl_internal_set_m_Metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  m_Metrics;

/// @brief Field m_NativeBeforeUpdateHooked, offset 0x408, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_NativeBeforeUpdateHooked, put=__cordl_internal_set_m_NativeBeforeUpdateHooked)) bool  m_NativeBeforeUpdateHooked;

/// @brief Field m_OptimizedControlsFeatureEnabled, offset 0x4e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OptimizedControlsFeatureEnabled, put=__cordl_internal_set_m_OptimizedControlsFeatureEnabled)) bool  m_OptimizedControlsFeatureEnabled;

/// @brief Field m_ParanoidReadValueCachingChecksEnabled, offset 0x4e2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled, put=__cordl_internal_set_m_ParanoidReadValueCachingChecksEnabled)) bool  m_ParanoidReadValueCachingChecksEnabled;

/// @brief Field m_PollingFrequency, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PollingFrequency, put=__cordl_internal_set_m_PollingFrequency)) float_t  m_PollingFrequency;

/// @brief Field m_Processors, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Processors, put=__cordl_internal_set_m_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  m_Processors;

/// @brief Field m_ReadValueCachingFeatureEnabled, offset 0x4e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReadValueCachingFeatureEnabled, put=__cordl_internal_set_m_ReadValueCachingFeatureEnabled)) bool  m_ReadValueCachingFeatureEnabled;

/// @brief Field m_Runtime, offset 0x498, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Runtime, put=__cordl_internal_set_m_Runtime)) ::UnityEngine::InputSystem::LowLevel::IInputRuntime*  m_Runtime;

/// @brief Field m_ScrollDeltaBehavior, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScrollDeltaBehavior, put=__cordl_internal_set_m_ScrollDeltaBehavior)) ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior  m_ScrollDeltaBehavior;

/// @brief Field m_Settings, offset 0x4d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::InputSystem::InputSettings>  m_Settings;

/// @brief Field m_SettingsChangedListeners, offset 0x368, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_SettingsChangedListeners, put=__cordl_internal_set_m_SettingsChangedListeners)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  m_SettingsChangedListeners;

/// @brief Field m_ShouldMakeCurrentlyUpdatingDeviceCurrent, offset 0x4f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent, put=__cordl_internal_set_m_ShouldMakeCurrentlyUpdatingDeviceCurrent)) bool  m_ShouldMakeCurrentlyUpdatingDeviceCurrent;

/// @brief Field m_StateBuffers, offset 0xb0, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_StateBuffers, put=__cordl_internal_set_m_StateBuffers)) ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  m_StateBuffers;

/// @brief Field m_StateChangeMonitorTimeouts, offset 0x500, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_StateChangeMonitorTimeouts, put=__cordl_internal_set_m_StateChangeMonitorTimeouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout>  m_StateChangeMonitorTimeouts;

/// @brief Field m_StateChangeMonitors, offset 0x4f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StateChangeMonitors, put=__cordl_internal_set_m_StateChangeMonitors)) ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>*>  m_StateChangeMonitors;

/// @brief Field m_UpdateMask, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateMask, put=__cordl_internal_set_m_UpdateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  m_UpdateMask;

 __declspec(property(get=get_metrics)) ::UnityEngine::InputSystem::LowLevel::InputMetrics  metrics;

 __declspec(property(get=get_optimizedControlsFeatureEnabled, put=set_optimizedControlsFeatureEnabled)) bool  optimizedControlsFeatureEnabled;

 __declspec(property(get=get_paranoidReadValueCachingChecksEnabled, put=set_paranoidReadValueCachingChecksEnabled)) bool  paranoidReadValueCachingChecksEnabled;

 __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency)) float_t  pollingFrequency;

 __declspec(property(get=get_processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  processors;

 __declspec(property(get=get_readValueCachingFeatureEnabled, put=set_readValueCachingFeatureEnabled)) bool  readValueCachingFeatureEnabled;

 __declspec(property(get=get_scrollDeltaBehavior, put=set_scrollDeltaBehavior)) ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior  scrollDeltaBehavior;

 __declspec(property(get=get_settings, put=set_settings)) ::UnityW<::UnityEngine::InputSystem::InputSettings>  settings;

 __declspec(property(get=get_updateMask, put=set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

/// @brief Method AddAvailableDevicesMatchingDescription, addr 0x2e2c120, size 0x398, virtual false, abstract: false, final false
inline void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method AddAvailableDevicesThatAreNowRecognized, addr 0x2e2a544, size 0x284, virtual false, abstract: false, final false
inline void AddAvailableDevicesThatAreNowRecognized() ;

/// @brief Method AddDevice, addr 0x2e2e718, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method AddDevice, addr 0x2e2e928, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, ::UnityEngine::InputSystem::Utilities::InternedString  layout, ::StringW  deviceName, int32_t  deviceId, ::UnityEngine::InputSystem::InputDevice_DeviceFlags  deviceFlags) ;

/// @brief Method AddDevice, addr 0x2e2e75c, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, bool  throwIfNoLayoutFound, ::StringW  deviceName, int32_t  deviceId, ::UnityEngine::InputSystem::InputDevice_DeviceFlags  deviceFlags) ;

/// @brief Method AddDevice, addr 0x2e24180, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW  layout, ::StringW  name, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice, addr 0x2e2d13c, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Utilities::InternedString  layout, int32_t  deviceId, ::StringW  deviceName, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription, ::UnityEngine::InputSystem::InputDevice_DeviceFlags  deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString  variants) ;

/// @brief Method AddDevice, addr 0x2e2dba8, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type*  type, ::StringW  name) ;

/// @brief Method AddDevice, addr 0x2e2cbb0, size 0x58c, virtual false, abstract: false, final false
inline void AddDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDeviceUsage, addr 0x2e242c0, size 0x12c, virtual false, abstract: false, final false
inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method AddStateChangeMonitor, addr 0x2e35a64, size 0x154, virtual false, abstract: false, final false
inline void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method AddStateChangeMonitorTimeout, addr 0x2e35d10, size 0x94, virtual false, abstract: false, final false
inline void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, double_t  time, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method ApplyActions, addr 0x2e29fe4, size 0x80, virtual false, abstract: false, final false
inline void ApplyActions() ;

/// @brief Method ApplySettings, addr 0x2e299dc, size 0x5f8, virtual false, abstract: false, final false
inline void ApplySettings() ;

/// @brief Method AreMaximumEventBytesPerUpdateExceeded, addr 0x2e34b9c, size 0x138, virtual false, abstract: false, final false
inline bool AreMaximumEventBytesPerUpdateExceeded(uint32_t  totalEventBytesProcessed) ;

/// @brief Method AssignUniqueDeviceId, addr 0x2e2de30, size 0x184, virtual false, abstract: false, final false
inline void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method CheckAllDevicesOptimizedControlsHaveValidState, addr 0x2e34ecc, size 0x18c, virtual false, abstract: false, final false
inline void CheckAllDevicesOptimizedControlsHaveValidState() ;

/// @brief Method Destroy, addr 0x2e31b60, size 0x10c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method DontMakeCurrentlyUpdatingDeviceCurrent, addr 0x2e35058, size 0x8, virtual false, abstract: false, final false
inline void DontMakeCurrentlyUpdatingDeviceCurrent() ;

/// @brief Method EnableOrDisableDevice, addr 0x2e2e29c, size 0x47c, virtual false, abstract: false, final false
inline void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  enable, ::UnityEngine::InputSystem::InputManager_DeviceDisableScope  scope) ;

/// @brief Method ExecuteGlobalCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCommand>
inline int64_t ExecuteGlobalCommand(::ByRef<TCommand>  command) ;

/// @brief Method FindOrRegisterDeviceLayoutForType, addr 0x2e2d73c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type*  type) ;

/// @brief Method FireStateChangeNotifications, addr 0x2e35fb0, size 0x14c, virtual false, abstract: false, final false
inline void FireStateChangeNotifications() ;

/// @brief Method FireStateChangeNotifications, addr 0x2e355f0, size 0x474, virtual false, abstract: false, final false
inline void FireStateChangeNotifications(int32_t  deviceIndex, double_t  internalTime, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method FlipBuffersForDeviceIfNecessary, addr 0x2e35330, size 0xa4, virtual false, abstract: false, final false
inline bool FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method FlushDisconnectedDevices, addr 0x2e2eb20, size 0x54, virtual false, abstract: false, final false
inline void FlushDisconnectedDevices() ;

/// @brief Method GetControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
inline int32_t GetControls(::StringW  path, ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  controls) ;

/// @brief Method GetDevice, addr 0x2e2f7e8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW  nameOrLayout) ;

/// @brief Method GetUnsupportedDevices, addr 0x2e2f8e0, size 0x1e0, virtual false, abstract: false, final false
inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*  descriptions) ;

/// @brief Method Initialize, addr 0x2e2fc64, size 0x4c, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, ::UnityEngine::InputSystem::InputSettings*  settings) ;

/// @brief Method InitializeActions, addr 0x2e2fcb0, size 0x98, virtual false, abstract: false, final false
inline void InitializeActions() ;

/// @brief Method InitializeData, addr 0x2e2fd48, size 0x148c, virtual false, abstract: false, final false
inline void InitializeData() ;

/// @brief Method InitializeDefaultState, addr 0x2e325ac, size 0x1b0, virtual false, abstract: false, final false
inline void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method InitializeDeviceState, addr 0x2e2dfb4, size 0x2ac, virtual false, abstract: false, final false
inline void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method InstallBeforeUpdateHookIfNecessary, addr 0x2e2a880, size 0xfc, virtual false, abstract: false, final false
inline void InstallBeforeUpdateHookIfNecessary() ;

/// @brief Method InstallGlobals, addr 0x2e31950, size 0x210, virtual false, abstract: false, final false
inline void InstallGlobals() ;

/// @brief Method InstallRuntime, addr 0x2e311d4, size 0x77c, virtual false, abstract: false, final false
inline void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime) ;

/// @brief Method InvokeAfterUpdateCallback, addr 0x2e34990, size 0x9c, virtual false, abstract: false, final false
inline void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method IsControlOrChildUsingLayoutRecursive, addr 0x2e2bca0, size 0xf4, virtual false, abstract: false, final false
inline bool IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method IsControlUsingLayout, addr 0x2e2bbd0, size 0xd0, virtual false, abstract: false, final false
inline bool IsControlUsingLayout(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method IsDeviceLayoutMarkedAsSupportedInSettings, addr 0x2e2d7dc, size 0x108, virtual false, abstract: false, final false
inline bool IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method ListControlLayouts, addr 0x2e2d8e4, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListControlLayouts(::StringW  basedOn) ;

/// @brief Method MakeDeviceNameUnique, addr 0x2e2dc8c, size 0x1a4, virtual false, abstract: false, final false
inline void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method MakeEscapedJsonString, addr 0x2e32e14, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString MakeEscapedJsonString(::StringW  theString) ;

/// @brief Method MakeStringWithEventsProcessedByDevice, addr 0x2e34d80, size 0x14c, virtual false, abstract: false, final false
inline ::StringW MakeStringWithEventsProcessedByDevice() ;

static inline ::UnityEngine::InputSystem::InputManager* New_ctor() ;

/// @brief Method NotifyUsageChanged, addr 0x2e2daac, size 0xfc, virtual false, abstract: false, final false
inline void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnBeforeUpdate, addr 0x2e32f58, size 0x1f4, virtual false, abstract: false, final false
inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method OnFocusChanged, addr 0x2e3314c, size 0x240, virtual false, abstract: false, final false
inline void OnFocusChanged(bool  focus) ;

/// @brief Method OnNativeDeviceDiscovered, addr 0x2e3275c, size 0x408, virtual false, abstract: false, final false
inline void OnNativeDeviceDiscovered(int32_t  deviceId, ::StringW  deviceDescriptor) ;

/// @brief Method OnUpdate, addr 0x2e333a8, size 0x1334, virtual false, abstract: false, final false
inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>  eventBuffer) ;

/// @brief Method PerformLayoutPostRegistration, addr 0x2e2b1f8, size 0x494, virtual false, abstract: false, final false
inline void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  baseLayouts, bool  isReplacement, bool  isKnownToBeDeviceLayout, bool  isOverride) ;

/// @brief Method ProcessStateChangeMonitorTimeouts, addr 0x2e346dc, size 0x2b4, virtual false, abstract: false, final false
inline void ProcessStateChangeMonitorTimeouts() ;

/// @brief Method ProcessStateChangeMonitors, addr 0x2e350b4, size 0x27c, virtual false, abstract: false, final false
inline bool ProcessStateChangeMonitors(int32_t  deviceIndex, ::cordl_internals::Ptr<void>  newStateFromEvent, ::cordl_internals::Ptr<void>  oldStateOfDevice, uint32_t  newStateSizeInBytes, uint32_t  newStateOffsetInBytes) ;

/// @brief Method QueueEvent, addr 0x2e2fac0, size 0xcc, virtual false, abstract: false, final false
inline void QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr) ;

/// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent>
inline void QueueEvent(::ByRef<TEvent>  inputEvent) ;

/// @brief Method QueueEvent, addr 0x2e24474, size 0x4, virtual false, abstract: false, final false
inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr) ;

/// @brief Method ReallocateStateBuffers, addr 0x2e2a090, size 0x18c, virtual false, abstract: false, final false
inline void ReallocateStateBuffers() ;

/// @brief Method RecreateDevice, addr 0x2e2bd94, size 0x150, virtual false, abstract: false, final false
inline void RecreateDevice(::UnityEngine::InputSystem::InputDevice*  oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString  newLayout) ;

/// @brief Method RecreateDevicesUsingLayout, addr 0x2e2b96c, size 0x264, virtual false, abstract: false, final false
inline void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  isKnownToBeDeviceLayout) ;

/// @brief Method RecreateDevicesUsingLayoutWithInferiorMatch, addr 0x2e2bee4, size 0x23c, virtual false, abstract: false, final false
inline void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  deviceMatcher) ;

/// @brief Method RegisterControlLayout, addr 0x2e23cb4, size 0x4cc, virtual false, abstract: false, final false
inline void RegisterControlLayout(::StringW  json, ::StringW  name, bool  isOverride) ;

/// @brief Method RegisterControlLayout, addr 0x2e2ac4c, size 0x5ac, virtual false, abstract: false, final false
inline void RegisterControlLayout(::StringW  name, ::System::Type*  type) ;

/// @brief Method RegisterControlLayoutBuilder, addr 0x2e2b7e0, size 0x18c, virtual false, abstract: false, final false
inline void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  method, ::StringW  name, ::StringW  baseLayout) ;

/// @brief Method RegisterControlLayoutMatcher, addr 0x2e2b68c, size 0x154, virtual false, abstract: false, final false
inline void RegisterControlLayoutMatcher(::StringW  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterControlLayoutMatcher, addr 0x2e2c4b8, size 0x21c, virtual false, abstract: false, final false
inline void RegisterControlLayoutMatcher(::System::Type*  type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterCustomTypes, addr 0x2e31ff8, size 0x264, virtual false, abstract: false, final false
inline void RegisterCustomTypes() ;

/// @brief Method RegisterCustomTypes, addr 0x2e3225c, size 0x23c, virtual false, abstract: false, final false
inline void RegisterCustomTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  types) ;

/// @brief Method RegisterPrecompiledLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
inline void RegisterPrecompiledLayout(::StringW  metadata) ;

/// @brief Method RemoveControlLayout, addr 0x2e2d2d4, size 0x240, virtual false, abstract: false, final false
inline void RemoveControlLayout(::StringW  name) ;

/// @brief Method RemoveDevice, addr 0x2e23774, size 0x4d8, virtual false, abstract: false, final false
inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  keepOnListOfAvailableDevices) ;

/// @brief Method RemoveDeviceUsage, addr 0x2e24478, size 0x12c, virtual false, abstract: false, final false
inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RemoveStateChangeMonitor, addr 0x2e35bb8, size 0x158, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex) ;

/// @brief Method RemoveStateChangeMonitorTimeout, addr 0x2e35da4, size 0x11c, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) ;

/// @brief Method RemoveStateChangeMonitors, addr 0x2e2e9f4, size 0x12c, virtual false, abstract: false, final false
inline void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ResetControlPathsRecursive, addr 0x2e324d4, size 0xd8, virtual false, abstract: false, final false
static inline void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ResetCurrentProcessedEventBytesForDevices, addr 0x2e34cd4, size 0xac, virtual false, abstract: false, final false
inline void ResetCurrentProcessedEventBytesForDevices() ;

/// @brief Method ResetDevice, addr 0x2e2eb74, size 0x61c, virtual false, abstract: false, final false
inline void ResetDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  alsoResetDontResetControls, ::System::Nullable_1<bool>  issueResetCommand) ;

/// @brief Method RestoreDevicesAfterDomainReloadIfNecessary, addr 0x2e32b64, size 0x4, virtual false, abstract: false, final false
inline void RestoreDevicesAfterDomainReloadIfNecessary() ;

/// @brief Method SetDeviceUsage, addr 0x2e2d958, size 0x154, virtual false, abstract: false, final false
inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method ShouldRunDeviceInBackground, addr 0x2e2e260, size 0x3c, virtual false, abstract: false, final false
inline bool ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ShouldRunUpdate, addr 0x2e3338c, size 0x1c, virtual false, abstract: false, final false
inline bool ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method SignalStateChangeMonitor, addr 0x2e35ec0, size 0xf0, virtual false, abstract: false, final false
inline void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor) ;

/// @brief Method SortStateChangeMonitorsIfNecessary, addr 0x2e35060, size 0x54, virtual false, abstract: false, final false
inline void SortStateChangeMonitorsIfNecessary(int32_t  deviceIndex) ;

/// @brief Method TryFindMatchingControlLayout, addr 0x2e2c6d4, size 0x4dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  deviceDescription, int32_t  deviceId) ;

/// @brief Method TryGetDevice, addr 0x2e2f888, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::Type*  layoutType) ;

/// @brief Method TryGetDevice, addr 0x2e2f6c4, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDevice(::StringW  nameOrLayout) ;

/// @brief Method TryGetDeviceById, addr 0x2e235f8, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(int32_t  id) ;

/// @brief Method TryLoadControlLayout, addr 0x2e23ca4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method TryLoadControlLayout, addr 0x2e2d514, size 0x228, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type*  type) ;

/// @brief Method TryMatchDisconnectedDevice, addr 0x2e32b68, size 0x2ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::StringW  deviceDescriptor) ;

/// @brief Method UninstallGlobals, addr 0x2e31c6c, size 0x38c, virtual false, abstract: false, final false
inline void UninstallGlobals() ;

/// @brief Method Update, addr 0x2e2fb8c, size 0x2c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method Update, addr 0x2e2fbb8, size 0xac, virtual false, abstract: false, final false
inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState, addr 0x2e34a2c, size 0x170, virtual false, abstract: false, final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method UpdateState, addr 0x2e2f190, size 0x534, virtual false, abstract: false, final false
inline bool UpdateState(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType, ::cordl_internals::Ptr<void>  statePtr, uint32_t  stateOffsetInDevice, uint32_t  stateSize, double_t  internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method WarnAboutDevicesFailingToRecreateAfterDomainReload, addr 0x2e32f54, size 0x4, virtual false, abstract: false, final false
inline void WarnAboutDevicesFailingToRecreateAfterDomainReload() ;

/// @brief Method WriteStateChange, addr 0x2e353d4, size 0x21c, virtual false, abstract: false, final false
inline void WriteStateChange(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers  buffers, int32_t  deviceIndex, ::ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock>  deviceStateBlock, uint32_t  stateOffsetInDevice, ::cordl_internals::Ptr<void>  statePtr, uint32_t  stateSizeInBytes, bool  flippedBuffers) ;

/// @brief Method <InstallRuntime>b__131_0, addr 0x2e364a0, size 0x4, virtual false, abstract: false, final false
inline void _InstallRuntime_b__131_0() ;

/// @brief Method <TryFindMatchingControlLayout>b__94_0, addr 0x2e36438, size 0x68, virtual false, abstract: false, final false
inline int64_t _TryFindMatchingControlLayout_b__94_0(::ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>  commandRef) ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Actions() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Actions() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_ActionsChangedListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_ActionsChangedListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_AfterUpdateListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_AfterUpdateListeners() ;

constexpr int32_t const& __cordl_internal_get_m_AvailableDeviceCount() const;

constexpr int32_t& __cordl_internal_get_m_AvailableDeviceCount() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice,::Array<::UnityEngine::InputSystem::InputManager_AvailableDevice>*> const& __cordl_internal_get_m_AvailableDevices() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice,::Array<::UnityEngine::InputSystem::InputManager_AvailableDevice>*>& __cordl_internal_get_m_AvailableDevices() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_BeforeUpdateListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_BeforeUpdateListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Composites() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Composites() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __cordl_internal_get_m_CurrentUpdate() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __cordl_internal_get_m_CurrentUpdate() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*> const& __cordl_internal_get_m_DeviceChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>& __cordl_internal_get_m_DeviceChangeListeners() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> const& __cordl_internal_get_m_DeviceCommandCallbacks() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>& __cordl_internal_get_m_DeviceCommandCallbacks() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* const& __cordl_internal_get_m_DeviceFindExecuteCommandDelegate() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*& __cordl_internal_get_m_DeviceFindExecuteCommandDelegate() ;

constexpr int32_t const& __cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() const;

constexpr int32_t& __cordl_internal_get_m_DeviceFindExecuteCommandDeviceId() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> const& __cordl_internal_get_m_DeviceFindLayoutCallbacks() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>& __cordl_internal_get_m_DeviceFindLayoutCallbacks() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_m_DeviceStateChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>& __cordl_internal_get_m_DeviceStateChangeListeners() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __cordl_internal_get_m_Devices() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& __cordl_internal_get_m_Devices() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_m_DevicesById() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_DevicesById() ;

constexpr int32_t const& __cordl_internal_get_m_DevicesCount() const;

constexpr int32_t& __cordl_internal_get_m_DevicesCount() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& __cordl_internal_get_m_DisconnectedDevices() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& __cordl_internal_get_m_DisconnectedDevices() ;

constexpr int32_t const& __cordl_internal_get_m_DisconnectedDevicesCount() const;

constexpr int32_t& __cordl_internal_get_m_DisconnectedDevicesCount() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*> const& __cordl_internal_get_m_EventListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>& __cordl_internal_get_m_EventListeners() ;

constexpr bool const& __cordl_internal_get_m_HasFocus() const;

constexpr bool& __cordl_internal_get_m_HasFocus() ;

constexpr bool const& __cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() const;

constexpr bool& __cordl_internal_get_m_HaveDevicesWithStateCallbackReceivers() ;

constexpr bool const& __cordl_internal_get_m_HaveSentStartupAnalytics() const;

constexpr bool& __cordl_internal_get_m_HaveSentStartupAnalytics() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream const& __cordl_internal_get_m_InputEventStream() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream& __cordl_internal_get_m_InputEventStream() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Interactions() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Interactions() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*> const& __cordl_internal_get_m_LayoutChangeListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>& __cordl_internal_get_m_LayoutChangeListeners() ;

constexpr int32_t const& __cordl_internal_get_m_LayoutRegistrationVersion() const;

constexpr int32_t& __cordl_internal_get_m_LayoutRegistrationVersion() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection const& __cordl_internal_get_m_Layouts() const;

constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection& __cordl_internal_get_m_Layouts() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics const& __cordl_internal_get_m_Metrics() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics& __cordl_internal_get_m_Metrics() ;

constexpr bool const& __cordl_internal_get_m_NativeBeforeUpdateHooked() const;

constexpr bool& __cordl_internal_get_m_NativeBeforeUpdateHooked() ;

constexpr bool const& __cordl_internal_get_m_OptimizedControlsFeatureEnabled() const;

constexpr bool& __cordl_internal_get_m_OptimizedControlsFeatureEnabled() ;

constexpr bool const& __cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() const;

constexpr bool& __cordl_internal_get_m_ParanoidReadValueCachingChecksEnabled() ;

constexpr float_t const& __cordl_internal_get_m_PollingFrequency() const;

constexpr float_t& __cordl_internal_get_m_PollingFrequency() ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable const& __cordl_internal_get_m_Processors() const;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable& __cordl_internal_get_m_Processors() ;

constexpr bool const& __cordl_internal_get_m_ReadValueCachingFeatureEnabled() const;

constexpr bool& __cordl_internal_get_m_ReadValueCachingFeatureEnabled() ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime* const& __cordl_internal_get_m_Runtime() const;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime*& __cordl_internal_get_m_Runtime() ;

constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const& __cordl_internal_get_m_ScrollDeltaBehavior() const;

constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior& __cordl_internal_get_m_ScrollDeltaBehavior() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> const& __cordl_internal_get_m_SettingsChangedListeners() const;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& __cordl_internal_get_m_SettingsChangedListeners() ;

constexpr bool const& __cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() const;

constexpr bool& __cordl_internal_get_m_ShouldMakeCurrentlyUpdatingDeviceCurrent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers const& __cordl_internal_get_m_StateBuffers() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers& __cordl_internal_get_m_StateBuffers() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout> const& __cordl_internal_get_m_StateChangeMonitorTimeouts() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout>& __cordl_internal_get_m_StateChangeMonitorTimeouts() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>*> const& __cordl_internal_get_m_StateChangeMonitors() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>*>& __cordl_internal_get_m_StateChangeMonitors() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __cordl_internal_get_m_UpdateMask() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __cordl_internal_get_m_UpdateMask() ;

constexpr void __cordl_internal_set_m_Actions(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_ActionsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_AvailableDeviceCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_AvailableDevices(::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice,::Array<::UnityEngine::InputSystem::InputManager_AvailableDevice>*>  value) ;

constexpr void __cordl_internal_set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr void __cordl_internal_set_m_DeviceChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  value) ;

constexpr void __cordl_internal_set_m_DeviceCommandCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  value) ;

constexpr void __cordl_internal_set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  value) ;

constexpr void __cordl_internal_set_m_DeviceFindExecuteCommandDeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_m_DeviceFindLayoutCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  value) ;

constexpr void __cordl_internal_set_m_DeviceStateChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  value) ;

constexpr void __cordl_internal_set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr void __cordl_internal_set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  value) ;

constexpr void __cordl_internal_set_m_DevicesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr void __cordl_internal_set_m_DisconnectedDevicesCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  value) ;

constexpr void __cordl_internal_set_m_HasFocus(bool  value) ;

constexpr void __cordl_internal_set_m_HaveDevicesWithStateCallbackReceivers(bool  value) ;

constexpr void __cordl_internal_set_m_HaveSentStartupAnalytics(bool  value) ;

constexpr void __cordl_internal_set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream  value) ;

constexpr void __cordl_internal_set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_LayoutChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  value) ;

constexpr void __cordl_internal_set_m_LayoutRegistrationVersion(int32_t  value) ;

constexpr void __cordl_internal_set_m_Layouts(::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection  value) ;

constexpr void __cordl_internal_set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics  value) ;

constexpr void __cordl_internal_set_m_NativeBeforeUpdateHooked(bool  value) ;

constexpr void __cordl_internal_set_m_OptimizedControlsFeatureEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_ParanoidReadValueCachingChecksEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_PollingFrequency(float_t  value) ;

constexpr void __cordl_internal_set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

constexpr void __cordl_internal_set_m_ReadValueCachingFeatureEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  value) ;

constexpr void __cordl_internal_set_m_ScrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::InputSystem::InputSettings>  value) ;

constexpr void __cordl_internal_set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  value) ;

constexpr void __cordl_internal_set_m_ShouldMakeCurrentlyUpdatingDeviceCurrent(bool  value) ;

constexpr void __cordl_internal_set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  value) ;

constexpr void __cordl_internal_set_m_StateChangeMonitorTimeouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout>  value) ;

constexpr void __cordl_internal_set_m_StateChangeMonitors(::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>*>  value) ;

constexpr void __cordl_internal_set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

/// @brief Method .ctor, addr 0x2e360fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_onActionsChange, addr 0x2e2ab34, size 0x58, virtual false, abstract: false, final false
inline void add_onActionsChange(::System::Action*  value) ;

/// @brief Method add_onAfterUpdate, addr 0x2e2a9d4, size 0x58, virtual false, abstract: false, final false
inline void add_onAfterUpdate(::System::Action*  value) ;

/// @brief Method add_onBeforeUpdate, addr 0x2e2a820, size 0x60, virtual false, abstract: false, final false
inline void add_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method add_onDeviceChange, addr 0x2e2149c, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method add_onDeviceCommand, addr 0x2e2a434, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method add_onDeviceStateChange, addr 0x2e2a384, size 0x58, virtual false, abstract: false, final false
inline void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method add_onEvent, addr 0x2e21444, size 0x58, virtual false, abstract: false, final false
inline void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method add_onFindControlLayoutForDevice, addr 0x2e2a4e4, size 0x60, virtual false, abstract: false, final false
inline void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method add_onLayoutChange, addr 0x2e214f4, size 0x58, virtual false, abstract: false, final false
inline void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method add_onSettingsChange, addr 0x2e2aa84, size 0x58, virtual false, abstract: false, final false
inline void add_onSettingsChange(::System::Action*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputAddDeviceMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnActionsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnAfterUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnBeforeUpdateMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnDeviceChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnDeviceSettingsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnEventMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnLayoutChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnSettingsChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputRegisterCustomTypesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputRestoreDevicesAfterReloadMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputTryFindMatchingControllerMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputUpdateProfilerMarker() ;

/// @brief Method get_actions, addr 0x2e29fd4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actions() ;

/// @brief Method get_composites, addr 0x2e298d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_composites() ;

/// @brief Method get_defaultUpdateType, addr 0x2e2a21c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType() ;

/// @brief Method get_devices, addr 0x2e22b04, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_gameHasFocus, addr 0x2e2abf4, size 0x34, virtual false, abstract: false, final false
inline bool get_gameHasFocus() ;

/// @brief Method get_gameIsPlaying, addr 0x2e2abec, size 0x8, virtual false, abstract: false, final false
inline bool get_gameIsPlaying() ;

/// @brief Method get_gameShouldGetInputRegardlessOfFocus, addr 0x2e2ac28, size 0x24, virtual false, abstract: false, final false
inline bool get_gameShouldGetInputRegardlessOfFocus() ;

/// @brief Method get_interactions, addr 0x2e298cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_interactions() ;

/// @brief Method get_isProcessingEvents, addr 0x2e2abe4, size 0x8, virtual false, abstract: false, final false
inline bool get_isProcessingEvents() ;

/// @brief Method get_metrics, addr 0x2e296c4, size 0x1a4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_optimizedControlsFeatureEnabled, addr 0x2e32498, size 0x8, virtual false, abstract: false, final false
inline bool get_optimizedControlsFeatureEnabled() ;

/// @brief Method get_paranoidReadValueCachingChecksEnabled, addr 0x2e324c0, size 0x8, virtual false, abstract: false, final false
inline bool get_paranoidReadValueCachingChecksEnabled() ;

/// @brief Method get_pollingFrequency, addr 0x2e2a254, size 0x8, virtual false, abstract: false, final false
inline float_t get_pollingFrequency() ;

/// @brief Method get_processors, addr 0x2e298c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::TypeTable get_processors() ;

/// @brief Method get_readValueCachingFeatureEnabled, addr 0x2e324ac, size 0x8, virtual false, abstract: false, final false
inline bool get_readValueCachingFeatureEnabled() ;

/// @brief Method get_scrollDeltaBehavior, addr 0x2e2a238, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior get_scrollDeltaBehavior() ;

/// @brief Method get_settings, addr 0x2e298dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputSettings> get_settings() ;

/// @brief Method get_updateMask, addr 0x2e2a064, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method remove_onActionsChange, addr 0x2e2ab8c, size 0x58, virtual false, abstract: false, final false
inline void remove_onActionsChange(::System::Action*  value) ;

/// @brief Method remove_onAfterUpdate, addr 0x2e2aa2c, size 0x58, virtual false, abstract: false, final false
inline void remove_onAfterUpdate(::System::Action*  value) ;

/// @brief Method remove_onBeforeUpdate, addr 0x2e2a97c, size 0x58, virtual false, abstract: false, final false
inline void remove_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method remove_onDeviceChange, addr 0x2e21708, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method remove_onDeviceCommand, addr 0x2e2a48c, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method remove_onDeviceStateChange, addr 0x2e2a3dc, size 0x58, virtual false, abstract: false, final false
inline void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method remove_onEvent, addr 0x2e216b0, size 0x58, virtual false, abstract: false, final false
inline void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method remove_onFindControlLayoutForDevice, addr 0x2e2a7c8, size 0x58, virtual false, abstract: false, final false
inline void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method remove_onLayoutChange, addr 0x2e21760, size 0x58, virtual false, abstract: false, final false
inline void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method remove_onSettingsChange, addr 0x2e2aadc, size 0x58, virtual false, abstract: false, final false
inline void remove_onSettingsChange(::System::Action*  value) ;

static inline void setStaticF_k_InputAddDeviceMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnActionsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnAfterUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnBeforeUpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnDeviceSettingsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnEventMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnLayoutChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnSettingsChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputRegisterCustomTypesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputRestoreDevicesAfterReloadMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputTryFindMatchingControllerMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputUpdateProfilerMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_actions, addr 0x2e29fdc, size 0x8, virtual false, abstract: false, final false
inline void set_actions(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_optimizedControlsFeatureEnabled, addr 0x2e324a0, size 0xc, virtual false, abstract: false, final false
inline void set_optimizedControlsFeatureEnabled(bool  value) ;

/// @brief Method set_paranoidReadValueCachingChecksEnabled, addr 0x2e324c8, size 0xc, virtual false, abstract: false, final false
inline void set_paranoidReadValueCachingChecksEnabled(bool  value) ;

/// @brief Method set_pollingFrequency, addr 0x2e2a25c, size 0x128, virtual false, abstract: false, final false
inline void set_pollingFrequency(float_t  value) ;

/// @brief Method set_readValueCachingFeatureEnabled, addr 0x2e324b4, size 0xc, virtual false, abstract: false, final false
inline void set_readValueCachingFeatureEnabled(bool  value) ;

/// @brief Method set_scrollDeltaBehavior, addr 0x2e2a240, size 0x14, virtual false, abstract: false, final false
inline void set_scrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior  value) ;

/// @brief Method set_settings, addr 0x2e298e4, size 0xf8, virtual false, abstract: false, final false
inline void set_settings(::UnityEngine::InputSystem::InputSettings*  value) ;

/// @brief Method set_updateMask, addr 0x2e2a06c, size 0x24, virtual false, abstract: false, final false
inline void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager(InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager(InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4902};

/// @brief Field m_LayoutRegistrationVersion, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_LayoutRegistrationVersion;

/// @brief Field m_PollingFrequency, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_PollingFrequency;

/// @brief Field m_Layouts, offset: 0x18, size: 0x40, def value: None
 ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection  ___m_Layouts;

/// @brief Field m_Processors, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Processors;

/// @brief Field m_Interactions, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Interactions;

/// @brief Field m_Composites, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Utilities::TypeTable  ___m_Composites;

/// @brief Field m_DevicesCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___m_DevicesCount;

/// @brief Field m_Devices, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  ___m_Devices;

/// @brief Field m_DevicesById, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice*>*  ___m_DevicesById;

/// @brief Field m_AvailableDeviceCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_AvailableDeviceCount;

/// @brief Field m_AvailableDevices, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputManager_AvailableDevice,::Array<::UnityEngine::InputSystem::InputManager_AvailableDevice>*>  ___m_AvailableDevices;

/// @brief Field m_DisconnectedDevicesCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ___m_DisconnectedDevicesCount;

/// @brief Field m_DisconnectedDevices, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  ___m_DisconnectedDevices;

/// @brief Field m_UpdateMask, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  ___m_UpdateMask;

/// @brief Field m_CurrentUpdate, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  ___m_CurrentUpdate;

/// @brief Field m_StateBuffers, offset: 0xb0, size: 0x30, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  ___m_StateBuffers;

/// @brief Field m_ScrollDeltaBehavior, offset: 0xe0, size: 0x4, def value: None
 ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior  ___m_ScrollDeltaBehavior;

/// @brief Field m_DeviceChangeListeners, offset: 0xe8, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*>  ___m_DeviceChangeListeners;

/// @brief Field m_DeviceStateChangeListeners, offset: 0x138, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  ___m_DeviceStateChangeListeners;

/// @brief Field m_DeviceFindLayoutCallbacks, offset: 0x188, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>  ___m_DeviceFindLayoutCallbacks;

/// @brief Field m_DeviceCommandCallbacks, offset: 0x1d8, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>  ___m_DeviceCommandCallbacks;

/// @brief Field m_LayoutChangeListeners, offset: 0x228, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*>  ___m_LayoutChangeListeners;

/// @brief Field m_EventListeners, offset: 0x278, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*>  ___m_EventListeners;

/// @brief Field m_BeforeUpdateListeners, offset: 0x2c8, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_BeforeUpdateListeners;

/// @brief Field m_AfterUpdateListeners, offset: 0x318, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_AfterUpdateListeners;

/// @brief Field m_SettingsChangedListeners, offset: 0x368, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_SettingsChangedListeners;

/// @brief Field m_ActionsChangedListeners, offset: 0x3b8, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>  ___m_ActionsChangedListeners;

/// @brief Field m_NativeBeforeUpdateHooked, offset: 0x408, size: 0x1, def value: None
 bool  ___m_NativeBeforeUpdateHooked;

/// @brief Field m_HaveDevicesWithStateCallbackReceivers, offset: 0x409, size: 0x1, def value: None
 bool  ___m_HaveDevicesWithStateCallbackReceivers;

/// @brief Field m_HasFocus, offset: 0x40a, size: 0x1, def value: None
 bool  ___m_HasFocus;

/// @brief Field m_InputEventStream, offset: 0x410, size: 0x78, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventStream  ___m_InputEventStream;

/// @brief Field m_DeviceFindExecuteCommandDelegate, offset: 0x488, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  ___m_DeviceFindExecuteCommandDelegate;

/// @brief Field m_DeviceFindExecuteCommandDeviceId, offset: 0x490, size: 0x4, def value: None
 int32_t  ___m_DeviceFindExecuteCommandDeviceId;

/// @brief Field m_HaveSentStartupAnalytics, offset: 0x494, size: 0x1, def value: None
 bool  ___m_HaveSentStartupAnalytics;

/// @brief Field m_Runtime, offset: 0x498, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputRuntime*  ___m_Runtime;

/// @brief Field m_Metrics, offset: 0x4a0, size: 0x38, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputMetrics  ___m_Metrics;

/// @brief Field m_Settings, offset: 0x4d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputSettings>  ___m_Settings;

/// @brief Field m_OptimizedControlsFeatureEnabled, offset: 0x4e0, size: 0x1, def value: None
 bool  ___m_OptimizedControlsFeatureEnabled;

/// @brief Field m_ReadValueCachingFeatureEnabled, offset: 0x4e1, size: 0x1, def value: None
 bool  ___m_ReadValueCachingFeatureEnabled;

/// @brief Field m_ParanoidReadValueCachingChecksEnabled, offset: 0x4e2, size: 0x1, def value: None
 bool  ___m_ParanoidReadValueCachingChecksEnabled;

/// @brief Field m_Actions, offset: 0x4e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_Actions;

/// @brief Field m_ShouldMakeCurrentlyUpdatingDeviceCurrent, offset: 0x4f0, size: 0x1, def value: None
 bool  ___m_ShouldMakeCurrentlyUpdatingDeviceCurrent;

/// @brief Field m_StateChangeMonitors, offset: 0x4f8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice,::Array<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>*>  ___m_StateChangeMonitors;

/// @brief Field m_StateChangeMonitorTimeouts, offset: 0x500, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout>  ___m_StateChangeMonitorTimeouts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutRegistrationVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_PollingFrequency) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Layouts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Processors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Interactions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Composites) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Devices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DevicesById) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDeviceCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AvailableDevices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevicesCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DisconnectedDevices) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_UpdateMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_CurrentUpdate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateBuffers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ScrollDeltaBehavior) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceChangeListeners) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceStateChangeListeners) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindLayoutCallbacks) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceCommandCallbacks) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_LayoutChangeListeners) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_EventListeners) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_BeforeUpdateListeners) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_AfterUpdateListeners) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_SettingsChangedListeners) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ActionsChangedListeners) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_NativeBeforeUpdateHooked) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HaveDevicesWithStateCallbackReceivers) == 0x409, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HasFocus) == 0x40a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_InputEventStream) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDelegate) == 0x488, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_DeviceFindExecuteCommandDeviceId) == 0x490, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_HaveSentStartupAnalytics) == 0x494, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Runtime) == 0x498, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Metrics) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Settings) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_OptimizedControlsFeatureEnabled) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ReadValueCachingFeatureEnabled) == 0x4e1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ParanoidReadValueCachingChecksEnabled) == 0x4e2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_Actions) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_ShouldMakeCurrentlyUpdatingDeviceCurrent) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitors) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputManager, ___m_StateChangeMonitorTimeouts) == 0x500, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputManager, 0x538>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager_DeviceDisableScope, "UnityEngine.InputSystem", "InputManager/DeviceDisableScope");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager*, "UnityEngine.InputSystem", "InputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager__ListControlLayouts_d__97*, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__97");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager___c*, "UnityEngine.InputSystem", "InputManager/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputManager___c__82_1, "UnityEngine.InputSystem", "InputManager/<>c__82`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager_AvailableDevice, "UnityEngine.InputSystem", "InputManager/AvailableDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager_StateChangeMonitorListener, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorListener");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorTimeout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorsForDevice");
