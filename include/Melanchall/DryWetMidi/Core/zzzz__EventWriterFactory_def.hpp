#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventWriterFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventWriterFactory)
namespace Melanchall::DryWetMidi::Core {
class IEventWriter;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class EventWriterFactory;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::EventWriterFactory);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.EventWriterFactory
class CORDL_TYPE EventWriterFactory : public ::System::Object {
public:
// Declarations
/// @brief Field ChannelEventWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ChannelEventWriter, put=setStaticF_ChannelEventWriter)) ::Melanchall::DryWetMidi::Core::IEventWriter*  ChannelEventWriter;

/// @brief Field MetaEventWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MetaEventWriter, put=setStaticF_MetaEventWriter)) ::Melanchall::DryWetMidi::Core::IEventWriter*  MetaEventWriter;

/// @brief Field SysExEventWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SysExEventWriter, put=setStaticF_SysExEventWriter)) ::Melanchall::DryWetMidi::Core::IEventWriter*  SysExEventWriter;

/// @brief Field SystemCommonEventWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SystemCommonEventWriter, put=setStaticF_SystemCommonEventWriter)) ::Melanchall::DryWetMidi::Core::IEventWriter*  SystemCommonEventWriter;

/// @brief Field SystemRealTimeEventWriter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SystemRealTimeEventWriter, put=setStaticF_SystemRealTimeEventWriter)) ::Melanchall::DryWetMidi::Core::IEventWriter*  SystemRealTimeEventWriter;

/// @brief Method GetWriter, addr 0x25a0744, size 0x1bc, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Core::IEventWriter* GetWriter(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

static inline ::Melanchall::DryWetMidi::Core::IEventWriter* getStaticF_ChannelEventWriter() ;

static inline ::Melanchall::DryWetMidi::Core::IEventWriter* getStaticF_MetaEventWriter() ;

static inline ::Melanchall::DryWetMidi::Core::IEventWriter* getStaticF_SysExEventWriter() ;

static inline ::Melanchall::DryWetMidi::Core::IEventWriter* getStaticF_SystemCommonEventWriter() ;

static inline ::Melanchall::DryWetMidi::Core::IEventWriter* getStaticF_SystemRealTimeEventWriter() ;

static inline void setStaticF_ChannelEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value) ;

static inline void setStaticF_MetaEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value) ;

static inline void setStaticF_SysExEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value) ;

static inline void setStaticF_SystemCommonEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value) ;

static inline void setStaticF_SystemRealTimeEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventWriterFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventWriterFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventWriterFactory(EventWriterFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventWriterFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventWriterFactory(EventWriterFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11644};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::EventWriterFactory, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::EventWriterFactory);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::EventWriterFactory*, "Melanchall.DryWetMidi.Core", "EventWriterFactory");
