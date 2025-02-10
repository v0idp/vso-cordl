#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/KeySignatureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeySignatureEvent)
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
class KeySignatureEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::KeySignatureEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.KeySignatureEvent
class CORDL_TYPE KeySignatureEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_Key)) int8_t  Key;

 __declspec(property(get=get_Scale)) uint8_t  Scale;

/// @brief Field _key, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) int8_t  _key;

/// @brief Field _scale, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) uint8_t  _scale;

/// @brief Method CloneEvent, addr 0x25a26fc, size 0x70, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a26f4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::KeySignatureEvent* New_ctor() ;

/// @brief Method ToString, addr 0x25a276c, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a26b8, size 0x38, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr int8_t const& __cordl_internal_get__key() const;

constexpr int8_t& __cordl_internal_get__key() ;

constexpr uint8_t const& __cordl_internal_get__scale() const;

constexpr uint8_t& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__key(int8_t  value) ;

constexpr void __cordl_internal_set__scale(uint8_t  value) ;

/// @brief Method .ctor, addr 0x25a2688, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x25a26a8, size 0x8, virtual false, abstract: false, final false
inline int8_t get_Key() ;

/// @brief Method get_Scale, addr 0x25a26b0, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Scale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeySignatureEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeySignatureEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeySignatureEvent(KeySignatureEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeySignatureEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeySignatureEvent(KeySignatureEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11638};

/// @brief Field _key, offset: 0x19, size: 0x1, def value: None
 int8_t  ____key;

/// @brief Field _scale, offset: 0x1a, size: 0x1, def value: None
 uint8_t  ____scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::KeySignatureEvent, ____key) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::KeySignatureEvent, ____scale) == 0x1a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::KeySignatureEvent, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::KeySignatureEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::KeySignatureEvent*, "Melanchall.DryWetMidi.Core", "KeySignatureEvent");
