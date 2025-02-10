#pragma once
// IWYU pragma private; include "NatSuite/Devices/SampleBufferDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleBufferDelegate)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NatSuite::Devices {
class SampleBufferDelegate;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::SampleBufferDelegate);
// Dependencies System.MulticastDelegate
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.SampleBufferDelegate
class CORDL_TYPE SampleBufferDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x17faaac, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x17fab3c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x17faa98, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

static inline ::NatSuite::Devices::SampleBufferDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x17fa9f8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleBufferDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleBufferDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleBufferDelegate(SampleBufferDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleBufferDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleBufferDelegate(SampleBufferDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::SampleBufferDelegate, 0x80>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::SampleBufferDelegate);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::SampleBufferDelegate*, "NatSuite.Devices", "SampleBufferDelegate");
