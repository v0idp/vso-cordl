#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/WriterSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriterSettings)
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class WriterSettings;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::WriterSettings);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.WriterSettings
class CORDL_TYPE WriterSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_UseBuffering)) bool  UseBuffering;

/// @brief Field <UseBuffering>k__BackingField, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseBuffering_k__BackingField, put=__cordl_internal_set__UseBuffering_k__BackingField)) bool  _UseBuffering_k__BackingField;

/// @brief Field _bufferSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

static inline ::Melanchall::DryWetMidi::Core::WriterSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get__UseBuffering_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseBuffering_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr void __cordl_internal_set__UseBuffering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x25a47e8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BufferSize, addr 0x25a5148, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_UseBuffering, addr 0x25a5140, size 0x8, virtual false, abstract: false, final false
inline bool get_UseBuffering() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WriterSettings(WriterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriterSettings(WriterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11659};

/// @brief Field _bufferSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field <UseBuffering>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  ____UseBuffering_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::WriterSettings, ____bufferSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WriterSettings, ____UseBuffering_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::WriterSettings, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::WriterSettings);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::WriterSettings*, "Melanchall.DryWetMidi.Core", "WriterSettings");
