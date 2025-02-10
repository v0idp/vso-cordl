#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SystemRealTimeEventWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__IEventWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemRealTimeEventWriter)
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class SystemRealTimeEventWriter;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SystemRealTimeEventWriter);
// Dependencies Melanchall.DryWetMidi.Core.IEventWriter, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SystemRealTimeEventWriter
class CORDL_TYPE SystemRealTimeEventWriter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr operator  ::Melanchall::DryWetMidi::Core::IEventWriter*() noexcept;

/// @brief Method CalculateSize, addr 0x25a38b0, size 0x38, virtual true, abstract: false, final true
inline int32_t CalculateSize(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte) ;

/// @brief Method GetStatusByte, addr 0x25a386c, size 0x44, virtual true, abstract: false, final true
inline uint8_t GetStatusByte(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

static inline ::Melanchall::DryWetMidi::Core::SystemRealTimeEventWriter* New_ctor() ;

/// @brief Method Write, addr 0x25a3814, size 0x58, virtual true, abstract: false, final true
inline void Write(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte) ;

/// @brief Method .ctor, addr 0x25a3338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr ::Melanchall::DryWetMidi::Core::IEventWriter* i___Melanchall__DryWetMidi__Core__IEventWriter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemRealTimeEventWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemRealTimeEventWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemRealTimeEventWriter(SystemRealTimeEventWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemRealTimeEventWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemRealTimeEventWriter(SystemRealTimeEventWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11649};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SystemRealTimeEventWriter, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SystemRealTimeEventWriter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SystemRealTimeEventWriter*, "Melanchall.DryWetMidi.Core", "SystemRealTimeEventWriter");
