#pragma once
// IWYU pragma private; include "OVR/OpenVR/OpenVRInterop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenVRInterop)
namespace OVR::OpenVR {
struct EVRApplicationType;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class OpenVRInterop;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::OpenVRInterop);
// Dependencies System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.OpenVRInterop
class CORDL_TYPE OpenVRInterop : public ::System::Object {
public:
// Declarations
/// @brief Method GetGenericInterface, addr 0x298369c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetGenericInterface(::ByRefConst<::StringW>  pchInterfaceVersion, ::ByRef<::OVR::OpenVR::EVRInitError>  peError) ;

/// @brief Method GetInitToken, addr 0x29837d0, size 0x68, virtual false, abstract: false, final false
static inline uint32_t GetInitToken() ;

/// @brief Method GetStringForHmdError, addr 0x2983620, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStringForHmdError(::OVR::OpenVR::EVRInitError  error) ;

/// @brief Method InitInternal, addr 0x29833a8, size 0x84, virtual false, abstract: false, final false
static inline uint32_t InitInternal(::ByRef<::OVR::OpenVR::EVRInitError>  peError, ::OVR::OpenVR::EVRApplicationType  eApplicationType) ;

/// @brief Method InitInternal2, addr 0x298342c, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t InitInternal2(::ByRef<::OVR::OpenVR::EVRInitError>  peError, ::OVR::OpenVR::EVRApplicationType  eApplicationType, ::ByRefConst<::StringW>  pStartupInfo) ;

/// @brief Method IsHmdPresent, addr 0x2983540, size 0x70, virtual false, abstract: false, final false
static inline bool IsHmdPresent() ;

/// @brief Method IsInterfaceVersionValid, addr 0x2983738, size 0x98, virtual false, abstract: false, final false
static inline bool IsInterfaceVersionValid(::ByRefConst<::StringW>  pchInterfaceVersion) ;

/// @brief Method IsRuntimeInstalled, addr 0x29835b0, size 0x70, virtual false, abstract: false, final false
static inline bool IsRuntimeInstalled() ;

static inline ::OVR::OpenVR::OpenVRInterop* New_ctor() ;

/// @brief Method ShutdownInternal, addr 0x29834dc, size 0x64, virtual false, abstract: false, final false
static inline void ShutdownInternal() ;

/// @brief Method .ctor, addr 0x2983838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenVRInterop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenVRInterop(OpenVRInterop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenVRInterop(OpenVRInterop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::OpenVRInterop, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::OpenVRInterop);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::OpenVRInterop*, "OVR.OpenVR", "OpenVRInterop");
