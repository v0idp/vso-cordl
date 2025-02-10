#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/UnknownMetaEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnknownMetaEvent)
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
class UnknownMetaEvent;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::UnknownMetaEvent);
// Dependencies Melanchall.DryWetMidi.Core.MetaEvent
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.UnknownMetaEvent
class CORDL_TYPE UnknownMetaEvent : public ::Melanchall::DryWetMidi::Core::MetaEvent {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

 __declspec(property(get=get_StatusByte)) uint8_t  StatusByte;

/// @brief Field <Data>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _Data_k__BackingField;

/// @brief Field <StatusByte>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__StatusByte_k__BackingField, put=__cordl_internal_set__StatusByte_k__BackingField)) uint8_t  _StatusByte_k__BackingField;

/// @brief Method CloneEvent, addr 0x25a2f38, size 0xb8, virtual true, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* CloneEvent() ;

/// @brief Method GetContentSize, addr 0x25a2f20, size 0x18, virtual true, abstract: false, final false
inline int32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::UnknownMetaEvent* New_ctor(uint8_t  statusByte, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method ToString, addr 0x25a2ff0, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x25a2ef4, size 0x2c, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__Data_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__StatusByte_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__StatusByte_k__BackingField() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__StatusByte_k__BackingField(uint8_t  value) ;

/// @brief Method .ctor, addr 0x25a2ea4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(uint8_t  statusByte, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method get_Data, addr 0x25a2ee4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

/// @brief Method get_StatusByte, addr 0x25a2edc, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_StatusByte() ;

/// @brief Method set_Data, addr 0x25a2eec, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnknownMetaEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnknownMetaEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnknownMetaEvent(UnknownMetaEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnknownMetaEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnknownMetaEvent(UnknownMetaEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11642};

/// @brief Field <StatusByte>k__BackingField, offset: 0x19, size: 0x1, def value: None
 uint8_t  ____StatusByte_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::UnknownMetaEvent, ____StatusByte_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::UnknownMetaEvent, ____Data_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::UnknownMetaEvent, 0x28>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::UnknownMetaEvent);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::UnknownMetaEvent*, "Melanchall.DryWetMidi.Core", "UnknownMetaEvent");
