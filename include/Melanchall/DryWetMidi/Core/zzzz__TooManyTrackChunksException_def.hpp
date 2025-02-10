#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TooManyTrackChunksException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Common/zzzz__MidiException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TooManyTrackChunksException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class TooManyTrackChunksException;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TooManyTrackChunksException);
// Dependencies Melanchall.DryWetMidi.Common.MidiException
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TooManyTrackChunksException
class CORDL_TYPE TooManyTrackChunksException : public ::Melanchall::DryWetMidi::Common::MidiException {
public:
// Declarations
 __declspec(property(get=get_TrackChunksCount)) int32_t  TrackChunksCount;

/// @brief Field <TrackChunksCount>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TrackChunksCount_k__BackingField, put=__cordl_internal_set__TrackChunksCount_k__BackingField)) int32_t  _TrackChunksCount_k__BackingField;

/// @brief Method GetObjectData, addr 0x25a3b28, size 0x84, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Melanchall::DryWetMidi::Core::TooManyTrackChunksException* New_ctor(int32_t  trackChunksCount) ;

constexpr int32_t const& __cordl_internal_get__TrackChunksCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TrackChunksCount_k__BackingField() ;

constexpr void __cordl_internal_set__TrackChunksCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x25a3a1c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x25a38e8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  trackChunksCount) ;

/// @brief Method get_TrackChunksCount, addr 0x25a3b20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TrackChunksCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TooManyTrackChunksException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TooManyTrackChunksException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TooManyTrackChunksException(TooManyTrackChunksException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TooManyTrackChunksException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TooManyTrackChunksException(TooManyTrackChunksException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11650};

/// @brief Field <TrackChunksCount>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____TrackChunksCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TooManyTrackChunksException, ____TrackChunksCount_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TooManyTrackChunksException, 0x90>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TooManyTrackChunksException);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TooManyTrackChunksException*, "Melanchall.DryWetMidi.Core", "TooManyTrackChunksException");
