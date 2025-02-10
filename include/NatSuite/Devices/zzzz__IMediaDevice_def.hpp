#pragma once
// IWYU pragma private; include "NatSuite/Devices/IMediaDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMediaDevice)
// Forward declare root types
namespace NatSuite::Devices {
class IMediaDevice;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::IMediaDevice);
// Dependencies System.IEquatable`1<T>
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.IMediaDevice
class CORDL_TYPE IMediaDevice {
public:
// Declarations
 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method StopRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopRunning() ;

/// @brief Method get_running, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_running() ;

/// @brief Method get_uniqueID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_uniqueID() ;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IMediaDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMediaDevice(IMediaDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::IMediaDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::IMediaDevice*, "NatSuite.Devices", "IMediaDevice");
