#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IChannelReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
CORDL_MODULE_EXPORT(IChannelReceiver)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelReceiver;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::IChannelReceiver);
// Dependencies System.Runtime.Remoting.Channels.IChannel
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.IChannelReceiver
class CORDL_TYPE IChannelReceiver {
public:
// Declarations
 __declspec(property(get=get_ChannelData)) ::System::Object*  ChannelData;

/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr operator  ::System::Runtime::Remoting::Channels::IChannel*() noexcept;

/// @brief Method StartListening, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartListening(::System::Object*  data) ;

/// @brief Method get_ChannelData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_ChannelData() ;

/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* i___System__Runtime__Remoting__Channels__IChannel() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IChannelReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IChannelReceiver(IChannelReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelReceiver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelReceiver*, "System.Runtime.Remoting.Channels", "IChannelReceiver");
