#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/MidiException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MidiException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Common {
class MidiException;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Common::MidiException);
// Dependencies System.Exception
namespace Melanchall::DryWetMidi::Common {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Common.MidiException
class CORDL_TYPE MidiException : public ::System::Exception {
public:
// Declarations
static inline ::Melanchall::DryWetMidi::Common::MidiException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Melanchall::DryWetMidi::Common::MidiException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x25a3aa0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x25a39b4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiException(MidiException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiException(MidiException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11666};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::MidiException, 0x90>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
NEED_NO_BOX(::Melanchall::DryWetMidi::Common::MidiException);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::MidiException*, "Melanchall.DryWetMidi.Common", "MidiException");
