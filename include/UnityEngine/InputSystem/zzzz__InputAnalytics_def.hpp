#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAnalytics)
namespace System {
class Exception;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_FirstUserInteractionEventData;
}
namespace UnityEngine::InputSystem {
class InputAnalytics_IInputAnalyticData;
}
namespace UnityEngine::InputSystem {
class InputAnalytics_IInputAnalytic;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_InputAnalyticInfo;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_ShutdownEventDataAnalytic;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_ShutdownEventData;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_StartupEventAnalytic;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_StartupEventData;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
struct StartupEventData_InputAnalytics_DeviceInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputAnalytics;
}
namespace UnityEngine::InputSystem {
class InputAnalytics_IInputAnalytic;
}
namespace UnityEngine::InputSystem {
class InputAnalytics_IInputAnalyticData;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_FirstUserInteractionEventData;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_InputAnalyticInfo;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_ShutdownEventData;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_ShutdownEventDataAnalytic;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_StartupEventAnalytic;
}
namespace UnityEngine::InputSystem {
struct InputAnalytics_StartupEventData;
}
namespace UnityEngine::InputSystem {
struct StartupEventData_InputAnalytics_DeviceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputAnalytics);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic);
MARK_VAL_T(::UnityEngine::InputSystem::InputAnalytics_StartupEventData);
MARK_VAL_T(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo);
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/InputAnalyticInfo
struct CORDL_TYPE InputAnalytics_InputAnalyticInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x2e28f80, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_InputAnalyticInfo() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "MaxEventsPerHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaxNumberOfElements", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputAnalytics_InputAnalyticInfo(::StringW  Name, int32_t  MaxEventsPerHour, int32_t  MaxNumberOfElements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field MaxEventsPerHour, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxEventsPerHour;

/// @brief Field MaxNumberOfElements, offset: 0xc, size: 0x4, def value: None
 int32_t  MaxNumberOfElements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, MaxEventsPerHour) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, MaxNumberOfElements) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputAnalytics/IInputAnalyticData
class CORDL_TYPE InputAnalytics_IInputAnalyticData {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "InputAnalytics_IInputAnalyticData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAnalytics_IInputAnalyticData(InputAnalytics_IInputAnalyticData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputAnalytics/IInputAnalytic
class CORDL_TYPE InputAnalytics_IInputAnalytic {
public:
// Declarations
 __declspec(property(get=get_info)) ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo  info;

/// @brief Method TryGatherData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error) ;

/// @brief Method get_info, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo get_info() ;

// Ctor Parameters [CppParam { name: "", ty: "InputAnalytics_IInputAnalytic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAnalytics_IInputAnalytic(InputAnalytics_IInputAnalytic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Dependencies 
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/StartupEventData/DeviceInfo
struct CORDL_TYPE StartupEventData_InputAnalytics_DeviceInfo {
public:
// Declarations
/// @brief Method FromDescription, addr 0x2e28f8c, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo FromDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, bool  native, ::StringW  layout) ;

// Ctor Parameters []
// @brief default ctor
constexpr StartupEventData_InputAnalytics_DeviceInfo() ;

// Ctor Parameters [CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "native", ty: "bool", modifiers: "", def_value: None }]
constexpr StartupEventData_InputAnalytics_DeviceInfo(::StringW  layout, ::StringW  interface, ::StringW  product, bool  native) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field layout, offset: 0x0, size: 0x8, def value: None
 ::StringW  layout;

/// @brief Field interface, offset: 0x8, size: 0x8, def value: None
 ::StringW  interface;

/// @brief Field product, offset: 0x10, size: 0x8, def value: None
 ::StringW  product;

/// @brief Field native, offset: 0x18, size: 0x1, def value: None
 bool  native;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, layout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, interface) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, product) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, native) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputAnalytics::IInputAnalyticData
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/StartupEventData
struct CORDL_TYPE InputAnalytics_StartupEventData {
public:
// Declarations
using DeviceInfo = ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo;

/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr operator  ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*() ;

/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_StartupEventData() ;

// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "devices", ty: "::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>", modifiers: "", def_value: None }, CppParam { name: "unrecognized_devices", ty: "::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>", modifiers: "", def_value: None }]
constexpr InputAnalytics_StartupEventData(::StringW  version, ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  devices, ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  unrecognized_devices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field version, offset: 0x0, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field devices, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  devices;

/// @brief Field unrecognized_devices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  unrecognized_devices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_StartupEventData, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_StartupEventData, devices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_StartupEventData, unrecognized_devices) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_StartupEventData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputAnalytics::IInputAnalytic
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/StartupEventAnalytic
struct CORDL_TYPE InputAnalytics_StartupEventAnalytic {
public:
// Declarations
 __declspec(property(get=get_info)) ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo  info;

/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr operator  ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*() ;

/// @brief Method CollectRecognizedDevices, addr 0x2e2921c, size 0x1b8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> CollectRecognizedDevices(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method CollectUnrecognizedDevices, addr 0x2e293d4, size 0x16c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> CollectUnrecognizedDevices(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method TryGatherData, addr 0x2e290b4, size 0x168, virtual true, abstract: false, final true
inline bool TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error) ;

/// @brief Method .ctor, addr 0x2e29064, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method get_info, addr 0x2e2906c, size 0x48, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo get_info() ;

/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic* i___UnityEngine__InputSystem__InputAnalytics_IInputAnalytic() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_StartupEventAnalytic() ;

// Ctor Parameters [CppParam { name: "m_InputManager", ty: "::UnityEngine::InputSystem::InputManager*", modifiers: "", def_value: None }]
constexpr InputAnalytics_StartupEventAnalytic(::UnityEngine::InputSystem::InputManager*  m_InputManager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field kEventName offset 0xffffffff size 0x8
static constexpr ::ConstString  kEventName{u"input_startup"};

/// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x64)};

/// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x64)};

/// @brief Field m_InputManager, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputManager*  m_InputManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic, m_InputManager) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputAnalytics::IInputAnalyticData
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/FirstUserInteractionEventData
#pragma pack(push, 0)
struct CORDL_TYPE InputAnalytics_FirstUserInteractionEventData {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr operator  ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*() ;

/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_FirstUserInteractionEventData() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputAnalytics::IInputAnalyticData
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/ShutdownEventData
struct CORDL_TYPE InputAnalytics_ShutdownEventData {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr operator  ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*() ;

/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_ShutdownEventData() ;

// Ctor Parameters [CppParam { name: "max_num_devices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max_state_size_in_bytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_event_bytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_event_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_frame_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_event_processing_time", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputAnalytics_ShutdownEventData(int32_t  max_num_devices, int32_t  max_state_size_in_bytes, int32_t  total_event_bytes, int32_t  total_event_count, int32_t  total_frame_count, float_t  total_event_processing_time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field max_num_devices, offset: 0x0, size: 0x4, def value: None
 int32_t  max_num_devices;

/// @brief Field max_state_size_in_bytes, offset: 0x4, size: 0x4, def value: None
 int32_t  max_state_size_in_bytes;

/// @brief Field total_event_bytes, offset: 0x8, size: 0x4, def value: None
 int32_t  total_event_bytes;

/// @brief Field total_event_count, offset: 0xc, size: 0x4, def value: None
 int32_t  total_event_count;

/// @brief Field total_frame_count, offset: 0x10, size: 0x4, def value: None
 int32_t  total_frame_count;

/// @brief Field total_event_processing_time, offset: 0x14, size: 0x4, def value: None
 float_t  total_event_processing_time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, max_num_devices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, max_state_size_in_bytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, total_event_bytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, total_event_count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, total_frame_count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, total_event_processing_time) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputAnalytics::IInputAnalytic
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAnalytics/ShutdownEventDataAnalytic
struct CORDL_TYPE InputAnalytics_ShutdownEventDataAnalytic {
public:
// Declarations
 __declspec(property(get=get_info)) ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo  info;

/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr operator  ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*() ;

/// @brief Method TryGatherData, addr 0x2e29590, size 0x134, virtual true, abstract: false, final true
inline bool TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error) ;

/// @brief Method .ctor, addr 0x2e29540, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method get_info, addr 0x2e29548, size 0x48, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo get_info() ;

/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic* i___UnityEngine__InputSystem__InputAnalytics_IInputAnalytic() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics_ShutdownEventDataAnalytic() ;

// Ctor Parameters [CppParam { name: "m_InputManager", ty: "::UnityEngine::InputSystem::InputManager*", modifiers: "", def_value: None }]
constexpr InputAnalytics_ShutdownEventDataAnalytic(::UnityEngine::InputSystem::InputManager*  m_InputManager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field kEventName offset 0xffffffff size 0x8
static constexpr ::ConstString  kEventName{u"input_shutdown"};

/// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x64)};

/// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x64)};

/// @brief Field m_InputManager, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputManager*  m_InputManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic, m_InputManager) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputAnalytics
class CORDL_TYPE InputAnalytics : public ::System::Object {
public:
// Declarations
using FirstUserInteractionEventData = ::UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData;

using IInputAnalytic = ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic;

using IInputAnalyticData = ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData;

using InputAnalyticInfo = ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo;

using ShutdownEventData = ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData;

using ShutdownEventDataAnalytic = ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic;

using StartupEventAnalytic = ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic;

using StartupEventData = ::UnityEngine::InputSystem::InputAnalytics_StartupEventData;

/// @brief Method Initialize, addr 0x2e28dcc, size 0x4, virtual false, abstract: false, final false
static inline void Initialize(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method OnShutdown, addr 0x2e28ea8, size 0xd8, virtual false, abstract: false, final false
static inline void OnShutdown(::UnityEngine::InputSystem::InputManager*  manager) ;

/// @brief Method OnStartup, addr 0x2e28dd0, size 0xd8, virtual false, abstract: false, final false
static inline void OnStartup(::UnityEngine::InputSystem::InputManager*  manager) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputAnalytics(InputAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputAnalytics(InputAnalytics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4890};

/// @brief Field kVendorKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVendorKey{u"unity.input"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputAnalytics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics*, "UnityEngine.InputSystem", "InputAnalytics");
NEED_NO_BOX(::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*, "UnityEngine.InputSystem", "InputAnalytics/IInputAnalytic");
NEED_NO_BOX(::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*, "UnityEngine.InputSystem", "InputAnalytics/IInputAnalyticData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData, "UnityEngine.InputSystem", "InputAnalytics/FirstUserInteractionEventData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, "UnityEngine.InputSystem", "InputAnalytics/InputAnalyticInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData, "UnityEngine.InputSystem", "InputAnalytics/ShutdownEventData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic, "UnityEngine.InputSystem", "InputAnalytics/ShutdownEventDataAnalytic");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic, "UnityEngine.InputSystem", "InputAnalytics/StartupEventAnalytic");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAnalytics_StartupEventData, "UnityEngine.InputSystem", "InputAnalytics/StartupEventData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, "UnityEngine.InputSystem", "InputAnalytics/StartupEventData/DeviceInfo");
