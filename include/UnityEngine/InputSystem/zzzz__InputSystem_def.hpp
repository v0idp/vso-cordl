#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystem)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class IObservable_1;
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
namespace System {
class Version;
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
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputAction;
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
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem {
struct InputSystem_DeltaStateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct InputSystem_StateEventBuffer;
}
namespace UnityEngine::InputSystem {
class InputSystem___c;
}
namespace UnityEngine::InputSystem {
struct StateEventBuffer_InputSystem__data_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputSystem;
}
namespace UnityEngine::InputSystem {
class InputSystem___c;
}
namespace UnityEngine::InputSystem {
struct DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem {
struct InputSystem_DeltaStateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct InputSystem_StateEventBuffer;
}
namespace UnityEngine::InputSystem {
struct StateEventBuffer_InputSystem__data_e__FixedBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputSystem);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputSystem___c);
MARK_VAL_T(::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::InputSystem_StateEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer);
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/StateEventBuffer/<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE StateEventBuffer_InputSystem__data_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StateEventBuffer_InputSystem__data_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr StateEventBuffer_InputSystem__data_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4795};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1ff};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x1ff - 0x1 = 0x1fe, packed as 0x1fe
 uint8_t  _cordl_size_padding[0x1fe];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer, 0x1ff>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputSystem::StateEventBuffer::<data>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.StateEvent
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/StateEventBuffer
struct CORDL_TYPE InputSystem_StateEventBuffer {
public:
// Declarations
using _data_e__FixedBuffer = ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr InputSystem_StateEventBuffer() ;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr InputSystem_StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent  stateEvent, ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// @brief Field kMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  kMaxSize{static_cast<int32_t>(0x200)};

/// @brief Field stateEvent, offset: 0x0, size: 0x19, def value: None
 ::UnityEngine::InputSystem::LowLevel::StateEvent  stateEvent;

/// @brief Field data, offset: 0x19, size: 0x1ff, def value: None
 ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSystem_StateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSystem_StateEventBuffer, data) == 0x19, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSystem_StateEventBuffer, 0x218>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/DeltaStateEventBuffer/<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1ff};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x1ff - 0x1 = 0x1fe, packed as 0x1fe
 uint8_t  _cordl_size_padding[0x1fe];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer, 0x1ff>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputSystem::DeltaStateEventBuffer::<data>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.DeltaStateEvent
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/DeltaStateEventBuffer
struct CORDL_TYPE InputSystem_DeltaStateEventBuffer {
public:
// Declarations
using _data_e__FixedBuffer = ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr InputSystem_DeltaStateEventBuffer() ;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr InputSystem_DeltaStateEventBuffer(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent  stateEvent, ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x21c};

/// @brief Field kMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  kMaxSize{static_cast<int32_t>(0x200)};

/// @brief Field stateEvent, offset: 0x0, size: 0x1d, def value: None
 ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent  stateEvent;

/// @brief Field data, offset: 0x1d, size: 0x1ff, def value: None
 ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer, data) == 0x1d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer, 0x21c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputSystem/<>c
class CORDL_TYPE InputSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputSystem___c*  __9;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>*  __9__80_0;

/// @brief Field <>9__80_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_1, put=setStaticF___9__80_1)) ::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>*  __9__80_1;

static inline ::UnityEngine::InputSystem::InputSystem___c* New_ctor() ;

/// @brief Method .ctor, addr 0x2dd851c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_onAnyButtonPress>b__80_0, addr 0x2dd8524, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* _get_onAnyButtonPress_b__80_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr  e) ;

/// @brief Method <get_onAnyButtonPress>b__80_1, addr 0x2dd86c8, size 0xc, virtual false, abstract: false, final false
inline bool _get_onAnyButtonPress_b__80_1(::UnityEngine::InputSystem::InputControl*  c) ;

static inline ::UnityEngine::InputSystem::InputSystem___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>* getStaticF___9__80_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>* getStaticF___9__80_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputSystem___c*  value) ;

static inline void setStaticF___9__80_0(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputControl*>*  value) ;

static inline void setStaticF___9__80_1(::System::Func_2<::UnityEngine::InputSystem::InputControl*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystem___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystem___c(InputSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystem___c(InputSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSystem___c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputSystem
class CORDL_TYPE InputSystem : public ::System::Object {
public:
// Declarations
using DeltaStateEventBuffer = ::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer;

using StateEventBuffer = ::UnityEngine::InputSystem::InputSystem_StateEventBuffer;

using __c = ::UnityEngine::InputSystem::InputSystem___c;

/// @brief Field k_InputResetMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputResetMarker, put=setStaticF_k_InputResetMarker)) ::Unity::Profiling::ProfilerMarker  k_InputResetMarker;

/// @brief Field s_Manager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Manager, put=setStaticF_s_Manager)) ::UnityEngine::InputSystem::InputManager*  s_Manager;

/// @brief Field s_Remote, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Remote, put=setStaticF_s_Remote)) ::UnityEngine::InputSystem::InputRemoting*  s_Remote;

/// @brief Method AddDevice, addr 0x2dd4f58, size 0x114, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method AddDevice, addr 0x2dd4e58, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* AddDevice(::StringW  layout, ::StringW  name, ::StringW  variants) ;

/// @brief Method AddDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline TDevice AddDevice(::StringW  name) ;

/// @brief Method AddDevice, addr 0x2dd506c, size 0xb8, virtual false, abstract: false, final false
static inline void AddDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method AddDeviceUsage, addr 0x2dd5df4, size 0xa0, virtual false, abstract: false, final false
static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method AddDeviceUsage, addr 0x2dd5e94, size 0x84, virtual false, abstract: false, final false
static inline void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method DisableActions, addr 0x2dd737c, size 0xc0, virtual false, abstract: false, final false
static inline void DisableActions(bool  triggerSetupChanged) ;

/// @brief Method DisableAllEnabledActions, addr 0x2dd7d18, size 0x50, virtual false, abstract: false, final false
static inline void DisableAllEnabledActions() ;

/// @brief Method DisableDevice, addr 0x2dd5644, size 0x80, virtual false, abstract: false, final false
static inline void DisableDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  keepSendingEvents) ;

/// @brief Method EnableActions, addr 0x2dd7258, size 0xbc, virtual false, abstract: false, final false
static inline void EnableActions() ;

/// @brief Method EnableDevice, addr 0x2dd55d0, size 0x74, virtual false, abstract: false, final false
static inline void EnableDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method EnsureInitialized, addr 0x2dd8434, size 0x4, virtual false, abstract: false, final false
static inline void EnsureInitialized() ;

/// @brief Method FindControl, addr 0x2dd603c, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* FindControl(::StringW  path) ;

/// @brief Method FindControls, addr 0x2dd6178, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> FindControls(::StringW  path) ;

/// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
static inline ::UnityEngine::InputSystem::InputControlList_1<TControl> FindControls(::StringW  path) ;

/// @brief Method FindControls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
static inline int32_t FindControls(::StringW  path, ::ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  controls) ;

/// @brief Method FlushDisconnectedDevices, addr 0x2dd5194, size 0x64, virtual false, abstract: false, final false
static inline void FlushDisconnectedDevices() ;

/// @brief Method GetDevice, addr 0x2dd51f8, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::StringW  nameOrLayout) ;

/// @brief Method GetDevice, addr 0x2dd5264, size 0x1f8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDevice(::System::Type*  type) ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline TDevice GetDevice() ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline TDevice GetDevice(::StringW  usage) ;

/// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline TDevice GetDevice(::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method GetDeviceById, addr 0x2dd545c, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputDevice* GetDeviceById(int32_t  deviceId) ;

/// @brief Method GetNameOfBaseLayout, addr 0x2dd3ce0, size 0x118, virtual false, abstract: false, final false
static inline ::StringW GetNameOfBaseLayout(::StringW  layoutName) ;

/// @brief Method GetUnsupportedDevices, addr 0x2dd54c8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* GetUnsupportedDevices() ;

/// @brief Method GetUnsupportedDevices, addr 0x2dd5564, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*  descriptions) ;

/// @brief Method InitializeInPlayer, addr 0x2dd822c, size 0x18c, virtual false, abstract: false, final false
static inline void InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, ::UnityEngine::InputSystem::InputSettings*  settings) ;

/// @brief Method IsFirstLayoutBasedOnSecond, addr 0x2dd3df8, size 0x148, virtual false, abstract: false, final false
static inline bool IsFirstLayoutBasedOnSecond(::StringW  firstLayoutName, ::StringW  secondLayoutName) ;

/// @brief Method ListEnabledActions, addr 0x2dd7d68, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* ListEnabledActions() ;

/// @brief Method ListEnabledActions, addr 0x2dd7e04, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ListEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*  actions) ;

/// @brief Method ListInteractions, addr 0x2dd7a48, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListInteractions() ;

/// @brief Method ListLayouts, addr 0x2dd3acc, size 0x68, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayouts() ;

/// @brief Method ListLayoutsBasedOn, addr 0x2dd3b34, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListLayoutsBasedOn(::StringW  baseLayout) ;

/// @brief Method ListProcessors, addr 0x2dd43ec, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* ListProcessors() ;

/// @brief Method LoadLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout() ;

/// @brief Method LoadLayout, addr 0x2dd3bf8, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* LoadLayout(::StringW  name) ;

/// @brief Method PauseHaptics, addr 0x2dd5960, size 0x12c, virtual false, abstract: false, final false
static inline void PauseHaptics() ;

/// @brief Method PerformDefaultPluginInitialization, addr 0x2dd8438, size 0x38, virtual false, abstract: false, final false
static inline void PerformDefaultPluginInitialization() ;

/// @brief Method QueueConfigChangeEvent, addr 0x2dd6558, size 0x210, virtual false, abstract: false, final false
static inline void QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice*  device, double_t  time) ;

/// @brief Method QueueDeltaStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelta>
static inline void QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl*  control, TDelta  delta, double_t  time) ;

/// @brief Method QueueEvent, addr 0x2dd647c, size 0xdc, virtual false, abstract: false, final false
static inline void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method QueueEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEvent>
static inline void QueueEvent(::ByRef<TEvent>  inputEvent) ;

/// @brief Method QueueStateEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline void QueueStateEvent(::UnityEngine::InputSystem::InputDevice*  device, TState  state, double_t  time) ;

/// @brief Method QueueTextEvent, addr 0x2dd6768, size 0x220, virtual false, abstract: false, final false
static inline void QueueTextEvent(::UnityEngine::InputSystem::InputDevice*  device, char16_t  character, double_t  time) ;

/// @brief Method RegisterBindingComposite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterBindingComposite(::StringW  name) ;

/// @brief Method RegisterBindingComposite, addr 0x2dd7abc, size 0x188, virtual false, abstract: false, final false
static inline void RegisterBindingComposite(::System::Type*  type, ::StringW  name) ;

/// @brief Method RegisterInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterInteraction(::StringW  name) ;

/// @brief Method RegisterInteraction, addr 0x2dd77ec, size 0x188, virtual false, abstract: false, final false
static inline void RegisterInteraction(::System::Type*  type, ::StringW  name) ;

/// @brief Method RegisterLayout, addr 0x2dd3674, size 0xfc, virtual false, abstract: false, final false
static inline void RegisterLayout(::StringW  json, ::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterLayout(::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayout, addr 0x2dd34d4, size 0x1a0, virtual false, abstract: false, final false
static inline void RegisterLayout(::System::Type*  type, ::StringW  name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayoutBuilder, addr 0x2dd386c, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  buildMethod, ::StringW  name, ::StringW  baseLayout, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  matches) ;

/// @brief Method RegisterLayoutMatcher, addr 0x2dd37f0, size 0x7c, virtual false, abstract: false, final false
static inline void RegisterLayoutMatcher(::StringW  layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterLayoutMatcher, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline void RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method RegisterLayoutOverride, addr 0x2dd3770, size 0x80, virtual false, abstract: false, final false
static inline void RegisterLayoutOverride(::StringW  json, ::StringW  name) ;

/// @brief Method RegisterPrecompiledLayout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDevice>
static inline void RegisterPrecompiledLayout(::StringW  metadata) ;

/// @brief Method RegisterProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterProcessor(::StringW  name) ;

/// @brief Method RegisterProcessor, addr 0x2dd3f40, size 0x3d8, virtual false, abstract: false, final false
static inline void RegisterProcessor(::System::Type*  type, ::StringW  name) ;

/// @brief Method RemoveDevice, addr 0x2dd5124, size 0x70, virtual false, abstract: false, final false
static inline void RemoveDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method RemoveDeviceUsage, addr 0x2dd5f18, size 0xa0, virtual false, abstract: false, final false
static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method RemoveDeviceUsage, addr 0x2dd5fb8, size 0x84, virtual false, abstract: false, final false
static inline void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method RemoveLayout, addr 0x2dd39e8, size 0x6c, virtual false, abstract: false, final false
static inline void RemoveLayout(::StringW  name) ;

/// @brief Method ResetDevice, addr 0x2dd5814, size 0x80, virtual false, abstract: false, final false
static inline void ResetDevice(::UnityEngine::InputSystem::InputDevice*  device, bool  alsoResetDontResetControls) ;

/// @brief Method ResetHaptics, addr 0x2dd5bbc, size 0x130, virtual false, abstract: false, final false
static inline void ResetHaptics() ;

/// @brief Method ResumeHaptics, addr 0x2dd5a8c, size 0x130, virtual false, abstract: false, final false
static inline void ResumeHaptics() ;

/// @brief Method RunInitialUpdate, addr 0x2dd8470, size 0x50, virtual false, abstract: false, final false
static inline void RunInitialUpdate() ;

/// @brief Method RunInitializeInPlayer, addr 0x2dd83b8, size 0x7c, virtual false, abstract: false, final false
static inline void RunInitializeInPlayer() ;

/// @brief Method SetDeviceUsage, addr 0x2dd5cec, size 0x84, virtual false, abstract: false, final false
static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  usage) ;

/// @brief Method SetDeviceUsage, addr 0x2dd5d70, size 0x84, virtual false, abstract: false, final false
static inline void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Utilities::InternedString  usage) ;

/// @brief Method TryFindMatchingLayout, addr 0x2dd3a54, size 0x78, virtual false, abstract: false, final false
static inline ::StringW TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method TryGetBindingComposite, addr 0x2dd7c44, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Type* TryGetBindingComposite(::StringW  name) ;

/// @brief Method TryGetInteraction, addr 0x2dd7974, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Type* TryGetInteraction(::StringW  name) ;

/// @brief Method TryGetProcessor, addr 0x2dd4318, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Type* TryGetProcessor(::StringW  name) ;

/// @brief Method TryResetDevice, addr 0x2dd5894, size 0x54, virtual false, abstract: false, final false
static inline bool TryResetDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method TrySyncDevice, addr 0x2dd56c4, size 0xc8, virtual false, abstract: false, final false
static inline bool TrySyncDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Update, addr 0x2dd6988, size 0x64, virtual false, abstract: false, final false
static inline void Update() ;

/// @brief Method Update, addr 0x2dd69ec, size 0x150, virtual false, abstract: false, final false
static inline void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method add_onActionChange, addr 0x2dd7664, size 0xc4, virtual false, abstract: false, final false
static inline void add_onActionChange(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value) ;

/// @brief Method add_onActionsChange, addr 0x2dd758c, size 0x6c, virtual false, abstract: false, final false
static inline void add_onActionsChange(::System::Action*  value) ;

/// @brief Method add_onAfterUpdate, addr 0x2dd6df0, size 0x128, virtual false, abstract: false, final false
static inline void add_onAfterUpdate(::System::Action*  value) ;

/// @brief Method add_onBeforeUpdate, addr 0x2dd6ba0, size 0x128, virtual false, abstract: false, final false
static inline void add_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method add_onDeviceChange, addr 0x2dd4560, size 0x174, virtual false, abstract: false, final false
static inline void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method add_onDeviceCommand, addr 0x2dd4848, size 0x174, virtual false, abstract: false, final false
static inline void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method add_onFindLayoutForDevice, addr 0x2dd4b30, size 0x128, virtual false, abstract: false, final false
static inline void add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method add_onLayoutChange, addr 0x2dd3284, size 0x128, virtual false, abstract: false, final false
static inline void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method add_onSettingsChange, addr 0x2dd7180, size 0x6c, virtual false, abstract: false, final false
static inline void add_onSettingsChange(::System::Action*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputResetMarker() ;

static inline ::UnityEngine::InputSystem::InputManager* getStaticF_s_Manager() ;

static inline ::UnityEngine::InputSystem::InputRemoting* getStaticF_s_Remote() ;

/// @brief Method get_actions, addr 0x2dd7314, size 0x68, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actions() ;

/// @brief Method get_devices, addr 0x2dd4460, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_disconnectedDevices, addr 0x2dd44c4, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_disconnectedDevices() ;

/// @brief Method get_isProcessingEvents, addr 0x2dd6208, size 0x64, virtual false, abstract: false, final false
static inline bool get_isProcessingEvents() ;

/// @brief Method get_metrics, addr 0x2dd811c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_onAnyButtonPress, addr 0x2dd6278, size 0x204, virtual false, abstract: false, final false
static inline ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* get_onAnyButtonPress() ;

/// @brief Method get_onEvent, addr 0x2dd626c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::InputEventListener get_onEvent() ;

/// @brief Method get_pollingFrequency, addr 0x2dd4d80, size 0x64, virtual false, abstract: false, final false
static inline float_t get_pollingFrequency() ;

/// @brief Method get_remoting, addr 0x2dd7ea8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputRemoting* get_remoting() ;

/// @brief Method get_runInBackground, addr 0x2dd7f6c, size 0xd4, virtual false, abstract: false, final false
static inline bool get_runInBackground() ;

/// @brief Method get_settings, addr 0x2dd6b3c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::InputSystem::InputSettings> get_settings() ;

/// @brief Method get_version, addr 0x2dd7f00, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Version* get_version() ;

/// @brief Method remove_onActionChange, addr 0x2dd7728, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onActionChange(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value) ;

/// @brief Method remove_onActionsChange, addr 0x2dd75f8, size 0x6c, virtual false, abstract: false, final false
static inline void remove_onActionsChange(::System::Action*  value) ;

/// @brief Method remove_onAfterUpdate, addr 0x2dd6f18, size 0x128, virtual false, abstract: false, final false
static inline void remove_onAfterUpdate(::System::Action*  value) ;

/// @brief Method remove_onBeforeUpdate, addr 0x2dd6cc8, size 0x128, virtual false, abstract: false, final false
static inline void remove_onBeforeUpdate(::System::Action*  value) ;

/// @brief Method remove_onDeviceChange, addr 0x2dd46d4, size 0x174, virtual false, abstract: false, final false
static inline void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  value) ;

/// @brief Method remove_onDeviceCommand, addr 0x2dd49bc, size 0x174, virtual false, abstract: false, final false
static inline void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*  value) ;

/// @brief Method remove_onFindLayoutForDevice, addr 0x2dd4c58, size 0x128, virtual false, abstract: false, final false
static inline void remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*  value) ;

/// @brief Method remove_onLayoutChange, addr 0x2dd33ac, size 0x128, virtual false, abstract: false, final false
static inline void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>*  value) ;

/// @brief Method remove_onSettingsChange, addr 0x2dd71ec, size 0x6c, virtual false, abstract: false, final false
static inline void remove_onSettingsChange(::System::Action*  value) ;

static inline void setStaticF_k_InputResetMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_Manager(::UnityEngine::InputSystem::InputManager*  value) ;

static inline void setStaticF_s_Remote(::UnityEngine::InputSystem::InputRemoting*  value) ;

/// @brief Method set_actions, addr 0x2dd743c, size 0x150, virtual false, abstract: false, final false
static inline void set_actions(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_onEvent, addr 0x2dd6274, size 0x4, virtual false, abstract: false, final false
static inline void set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener  value) ;

/// @brief Method set_pollingFrequency, addr 0x2dd4de4, size 0x74, virtual false, abstract: false, final false
static inline void set_pollingFrequency(float_t  value) ;

/// @brief Method set_runInBackground, addr 0x2dd8040, size 0xdc, virtual false, abstract: false, final false
static inline void set_runInBackground(bool  value) ;

/// @brief Method set_settings, addr 0x2dd7040, size 0x140, virtual false, abstract: false, final false
static inline void set_settings(::UnityEngine::InputSystem::InputSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystem(InputSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystem(InputSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4800};

/// @brief Field kAssemblyVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  kAssemblyVersion{u"1.11.0"};

/// @brief Field kDocUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  kDocUrl{u"https://docs.unity3d.com/Packages/com.unity.inputsystem@1.11"};

/// @brief Field scrollWheelDeltaPerTick offset 0xffffffff size 0x4
static constexpr float_t  scrollWheelDeltaPerTick{static_cast<float_t>(1.0f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSystem, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSystem*, "UnityEngine.InputSystem", "InputSystem");
NEED_NO_BOX(::UnityEngine::InputSystem::InputSystem___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSystem___c*, "UnityEngine.InputSystem", "InputSystem/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer/<data>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSystem_StateEventBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer/<data>e__FixedBuffer");
