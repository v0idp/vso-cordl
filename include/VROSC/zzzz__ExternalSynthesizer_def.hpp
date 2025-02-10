#pragma once
// IWYU pragma private; include "VROSC/ExternalSynthesizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalSynthesizer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
struct ExternalSynthesizer_Status;
}
namespace VROSC {
class ExternalSynthesizer___c__DisplayClass26_0;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
struct ExternalSynthesizer_Status;
}
namespace VROSC {
class ExternalSynthesizer;
}
namespace VROSC {
class ExternalSynthesizer___c__DisplayClass26_0;
}
// Write type traits
MARK_VAL_T(::VROSC::ExternalSynthesizer_Status);
MARK_REF_PTR_T(::VROSC::ExternalSynthesizer);
MARK_REF_PTR_T(::VROSC::ExternalSynthesizer___c__DisplayClass26_0);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ExternalSynthesizer/Status
struct CORDL_TYPE ExternalSynthesizer_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExternalSynthesizer_Status_Unwrapped
enum struct __ExternalSynthesizer_Status_Unwrapped : int32_t {
__E_Disconnected = static_cast<int32_t>(0x0),
__E_LookingForConnection = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExternalSynthesizer_Status_Unwrapped () const noexcept {
return static_cast<__ExternalSynthesizer_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExternalSynthesizer_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExternalSynthesizer_Status(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(2)
static ::VROSC::ExternalSynthesizer_Status const Connected;

/// @brief Field Disconnected value: I32(0)
static ::VROSC::ExternalSynthesizer_Status const Disconnected;

/// @brief Field LookingForConnection value: I32(1)
static ::VROSC::ExternalSynthesizer_Status const LookingForConnection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ExternalSynthesizer_Status, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ExternalSynthesizer_Status, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ExternalSynthesizer/<>c__DisplayClass26_0
class CORDL_TYPE ExternalSynthesizer___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::ExternalSynthesizer>  __4__this;

/// @brief Field ipEndPoint, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ipEndPoint, put=__cordl_internal_set_ipEndPoint)) ::System::Net::IPEndPoint*  ipEndPoint;

static inline ::VROSC::ExternalSynthesizer___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <LookForConnection>b__0, addr 0x188708c, size 0x318, virtual false, abstract: false, final false
inline void _LookForConnection_b__0() ;

constexpr ::UnityW<::VROSC::ExternalSynthesizer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::ExternalSynthesizer>& __cordl_internal_get___4__this() ;

constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_ipEndPoint() const;

constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_ipEndPoint() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::ExternalSynthesizer>  value) ;

constexpr void __cordl_internal_set_ipEndPoint(::System::Net::IPEndPoint*  value) ;

/// @brief Method .ctor, addr 0x1885184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalSynthesizer___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalSynthesizer___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalSynthesizer___c__DisplayClass26_0(ExternalSynthesizer___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalSynthesizer___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalSynthesizer___c__DisplayClass26_0(ExternalSynthesizer___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{603};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ExternalSynthesizer>  _____4__this;

/// @brief Field ipEndPoint, offset: 0x18, size: 0x8, def value: None
 ::System::Net::IPEndPoint*  ___ipEndPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ExternalSynthesizer___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer___c__DisplayClass26_0, ___ipEndPoint) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ExternalSynthesizer___c__DisplayClass26_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.ExternalSynthesizer::Status
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ExternalSynthesizer
class CORDL_TYPE ExternalSynthesizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Status = ::VROSC::ExternalSynthesizer_Status;

using __c__DisplayClass26_0 = ::VROSC::ExternalSynthesizer___c__DisplayClass26_0;

 __declspec(property(get=get_ClientName)) ::StringW  ClientName;

 __declspec(property(get=get_ConnectionStatus, put=set_ConnectionStatus)) ::VROSC::ExternalSynthesizer_Status  ConnectionStatus;

/// @brief Field OnConnectionStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectionStatusChanged, put=setStaticF_OnConnectionStatusChanged)) ::System::Action_1<::VROSC::ExternalSynthesizer_Status>*  OnConnectionStatusChanged;

/// @brief Field OnUseExternalSynthesizerChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUseExternalSynthesizerChanged, put=setStaticF_OnUseExternalSynthesizerChanged)) ::System::Action_1<bool>*  OnUseExternalSynthesizerChanged;

/// @brief Field _broadcastPort, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__broadcastPort, put=__cordl_internal_set__broadcastPort)) int32_t  _broadcastPort;

/// @brief Field _connectedClientName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedClientName, put=__cordl_internal_set__connectedClientName)) ::StringW  _connectedClientName;

/// @brief Field _connectedIp, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedIp, put=__cordl_internal_set__connectedIp)) ::StringW  _connectedIp;

/// @brief Field _connectionStatus, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__connectionStatus, put=__cordl_internal_set__connectionStatus)) ::VROSC::ExternalSynthesizer_Status  _connectionStatus;

/// @brief Field _foundAddress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundAddress, put=__cordl_internal_set__foundAddress)) ::System::Net::IPAddress*  _foundAddress;

/// @brief Field _foundIpString, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundIpString, put=__cordl_internal_set__foundIpString)) ::StringW  _foundIpString;

/// @brief Field _lastConnectionWasManual, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastConnectionWasManual, put=__cordl_internal_set__lastConnectionWasManual)) bool  _lastConnectionWasManual;

/// @brief Field _oscData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__oscData, put=__cordl_internal_set__oscData)) ::System::Collections::Generic::List_1<::System::Object*>*  _oscData;

/// @brief Field _oscServerPort, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__oscServerPort, put=__cordl_internal_set__oscServerPort)) int32_t  _oscServerPort;

/// @brief Field _printToLog, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__printToLog, put=__cordl_internal_set__printToLog)) bool  _printToLog;

/// @brief Field _udpClient, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__udpClient, put=__cordl_internal_set__udpClient)) ::System::Net::Sockets::UdpClient*  _udpClient;

/// @brief Field _udpThreadCancellationTokenSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__udpThreadCancellationTokenSource, put=__cordl_internal_set__udpThreadCancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _udpThreadCancellationTokenSource;

/// @brief Field _wasUsingExternal, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasUsingExternal, put=__cordl_internal_set__wasUsingExternal)) bool  _wasUsingExternal;

/// @brief Method AllNotesOff, addr 0x18857d4, size 0x488, virtual false, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method AllNotesOff, addr 0x188672c, size 0x15c, virtual false, abstract: false, final false
inline void AllNotesOff(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel) ;

/// @brief Method AssignActions, addr 0x1885384, size 0x278, virtual false, abstract: false, final false
inline void AssignActions() ;

/// @brief Method AttemptManualConnection, addr 0x1885274, size 0x110, virtual false, abstract: false, final false
inline void AttemptManualConnection() ;

/// @brief Method Awake, addr 0x18849a4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Connect, addr 0x1884c7c, size 0x1d8, virtual false, abstract: false, final false
inline void Connect(::System::Net::IPAddress*  ipAddress, ::StringW  ipString, bool  isManual) ;

/// @brief Method Disconnect, addr 0x188518c, size 0xe8, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method GlobalScaleChanged, addr 0x1886888, size 0x16c, virtual false, abstract: false, final false
inline void GlobalScaleChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  note) ;

/// @brief Method GlobalVolumeChanged, addr 0x1886ba4, size 0x174, virtual false, abstract: false, final false
inline void GlobalVolumeChanged(float_t  volume) ;

/// @brief Method LookForConnection, addr 0x1884e54, size 0x284, virtual false, abstract: false, final false
inline void LookForConnection() ;

static inline ::VROSC::ExternalSynthesizer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18850d8, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayNote, addr 0x188602c, size 0x178, virtual false, abstract: false, final false
inline void PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, int32_t  channel, float_t  velocity) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Send(::StringW  address, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SendConnectedMessage, addr 0x18855fc, size 0x1d8, virtual false, abstract: false, final false
inline void SendConnectedMessage() ;

/// @brief Method SendDisconnectedMessage, addr 0x1885c5c, size 0x158, virtual false, abstract: false, final false
inline void SendDisconnectedMessage() ;

/// @brief Method SetChannel, addr 0x18865e0, size 0x14c, virtual false, abstract: false, final false
inline void SetChannel(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel, int32_t  oldChannel) ;

/// @brief Method SetParameter, addr 0x1886310, size 0x168, virtual false, abstract: false, final false
inline void SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, int32_t  channel) ;

/// @brief Method SetVolume, addr 0x1886478, size 0x168, virtual false, abstract: false, final false
inline void SetVolume(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  volume, int32_t  channel) ;

/// @brief Method StopLookingForConnection, addr 0x1884bc0, size 0xbc, virtual false, abstract: false, final false
inline void StopLookingForConnection() ;

/// @brief Method StopNote, addr 0x18861a4, size 0x16c, virtual false, abstract: false, final false
inline void StopNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, int32_t  channel) ;

/// @brief Method TearDown, addr 0x18850dc, size 0xa8, virtual false, abstract: false, final false
inline void TearDown() ;

/// @brief Method UnassignActions, addr 0x1885db4, size 0x278, virtual false, abstract: false, final false
inline void UnassignActions() ;

/// @brief Method Update, addr 0x1884a9c, size 0x124, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateConnection, addr 0x1886d1c, size 0x174, virtual false, abstract: false, final false
inline void UpdateConnection() ;

/// @brief Method UserDataLoaded, addr 0x1886d18, size 0x4, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method VisualBeat, addr 0x18869f4, size 0x1b0, virtual false, abstract: false, final false
inline void VisualBeat(int32_t  beat) ;

constexpr int32_t const& __cordl_internal_get__broadcastPort() const;

constexpr int32_t& __cordl_internal_get__broadcastPort() ;

constexpr ::StringW const& __cordl_internal_get__connectedClientName() const;

constexpr ::StringW& __cordl_internal_get__connectedClientName() ;

constexpr ::StringW const& __cordl_internal_get__connectedIp() const;

constexpr ::StringW& __cordl_internal_get__connectedIp() ;

constexpr ::VROSC::ExternalSynthesizer_Status const& __cordl_internal_get__connectionStatus() const;

constexpr ::VROSC::ExternalSynthesizer_Status& __cordl_internal_get__connectionStatus() ;

constexpr ::System::Net::IPAddress* const& __cordl_internal_get__foundAddress() const;

constexpr ::System::Net::IPAddress*& __cordl_internal_get__foundAddress() ;

constexpr ::StringW const& __cordl_internal_get__foundIpString() const;

constexpr ::StringW& __cordl_internal_get__foundIpString() ;

constexpr bool const& __cordl_internal_get__lastConnectionWasManual() const;

constexpr bool& __cordl_internal_get__lastConnectionWasManual() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__oscData() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__oscData() ;

constexpr int32_t const& __cordl_internal_get__oscServerPort() const;

constexpr int32_t& __cordl_internal_get__oscServerPort() ;

constexpr bool const& __cordl_internal_get__printToLog() const;

constexpr bool& __cordl_internal_get__printToLog() ;

constexpr ::System::Net::Sockets::UdpClient* const& __cordl_internal_get__udpClient() const;

constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get__udpClient() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__udpThreadCancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__udpThreadCancellationTokenSource() ;

constexpr bool const& __cordl_internal_get__wasUsingExternal() const;

constexpr bool& __cordl_internal_get__wasUsingExternal() ;

constexpr void __cordl_internal_set__broadcastPort(int32_t  value) ;

constexpr void __cordl_internal_set__connectedClientName(::StringW  value) ;

constexpr void __cordl_internal_set__connectedIp(::StringW  value) ;

constexpr void __cordl_internal_set__connectionStatus(::VROSC::ExternalSynthesizer_Status  value) ;

constexpr void __cordl_internal_set__foundAddress(::System::Net::IPAddress*  value) ;

constexpr void __cordl_internal_set__foundIpString(::StringW  value) ;

constexpr void __cordl_internal_set__lastConnectionWasManual(bool  value) ;

constexpr void __cordl_internal_set__oscData(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__oscServerPort(int32_t  value) ;

constexpr void __cordl_internal_set__printToLog(bool  value) ;

constexpr void __cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value) ;

constexpr void __cordl_internal_set__udpThreadCancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__wasUsingExternal(bool  value) ;

/// @brief Method .ctor, addr 0x1886e90, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::ExternalSynthesizer_Status>* getStaticF_OnConnectionStatusChanged() ;

static inline ::System::Action_1<bool>* getStaticF_OnUseExternalSynthesizerChanged() ;

/// @brief Method get_ClientName, addr 0x18848c0, size 0x5c, virtual false, abstract: false, final false
inline ::StringW get_ClientName() ;

/// @brief Method get_ConnectionStatus, addr 0x188491c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::ExternalSynthesizer_Status get_ConnectionStatus() ;

static inline void setStaticF_OnConnectionStatusChanged(::System::Action_1<::VROSC::ExternalSynthesizer_Status>*  value) ;

static inline void setStaticF_OnUseExternalSynthesizerChanged(::System::Action_1<bool>*  value) ;

/// @brief Method set_ConnectionStatus, addr 0x1884924, size 0x80, virtual false, abstract: false, final false
inline void set_ConnectionStatus(::VROSC::ExternalSynthesizer_Status  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalSynthesizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalSynthesizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalSynthesizer(ExternalSynthesizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalSynthesizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalSynthesizer(ExternalSynthesizer const& ) = delete;

/// @brief Field APIVersion offset 0xffffffff size 0x4
static constexpr int32_t  APIVersion{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{604};

/// @brief Field _globalString offset 0xffffffff size 0x8
static constexpr ::ConstString  _globalString{u"global"};

/// @brief Field _printToLog, offset: 0x20, size: 0x1, def value: None
 bool  ____printToLog;

/// @brief Field _broadcastPort, offset: 0x24, size: 0x4, def value: None
 int32_t  ____broadcastPort;

/// @brief Field _oscServerPort, offset: 0x28, size: 0x4, def value: None
 int32_t  ____oscServerPort;

/// @brief Field _udpClient, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  ____udpClient;

/// @brief Field _udpThreadCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____udpThreadCancellationTokenSource;

/// @brief Field _foundAddress, offset: 0x40, size: 0x8, def value: None
 ::System::Net::IPAddress*  ____foundAddress;

/// @brief Field _foundIpString, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____foundIpString;

/// @brief Field _connectionStatus, offset: 0x50, size: 0x4, def value: None
 ::VROSC::ExternalSynthesizer_Status  ____connectionStatus;

/// @brief Field _connectedIp, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____connectedIp;

/// @brief Field _connectedClientName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____connectedClientName;

/// @brief Field _oscData, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____oscData;

/// @brief Field _wasUsingExternal, offset: 0x70, size: 0x1, def value: None
 bool  ____wasUsingExternal;

/// @brief Field _lastConnectionWasManual, offset: 0x71, size: 0x1, def value: None
 bool  ____lastConnectionWasManual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ExternalSynthesizer, ____printToLog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____broadcastPort) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____oscServerPort) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____udpClient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____udpThreadCancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____foundAddress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____foundIpString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____connectionStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____connectedIp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____connectedClientName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____oscData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____wasUsingExternal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalSynthesizer, ____lastConnectionWasManual) == 0x71, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ExternalSynthesizer, 0x78>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExternalSynthesizer_Status, "VROSC", "ExternalSynthesizer/Status");
NEED_NO_BOX(::VROSC::ExternalSynthesizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExternalSynthesizer*, "VROSC", "ExternalSynthesizer");
NEED_NO_BOX(::VROSC::ExternalSynthesizer___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExternalSynthesizer___c__DisplayClass26_0*, "VROSC", "ExternalSynthesizer/<>c__DisplayClass26_0");
