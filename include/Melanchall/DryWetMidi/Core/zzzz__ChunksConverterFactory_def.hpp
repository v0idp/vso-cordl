#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChunksConverterFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ChunksConverterFactory)
namespace Melanchall::DryWetMidi::Core {
class IChunksConverter;
}
namespace Melanchall::DryWetMidi::Core {
struct MidiFileFormat;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class ChunksConverterFactory;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::ChunksConverterFactory);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.ChunksConverterFactory
class CORDL_TYPE ChunksConverterFactory : public ::System::Object {
public:
// Declarations
/// @brief Method GetConverter, addr 0x259d030, size 0x134, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Core::IChunksConverter* GetConverter(::Melanchall::DryWetMidi::Core::MidiFileFormat  format) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunksConverterFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunksConverterFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunksConverterFactory(ChunksConverterFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunksConverterFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunksConverterFactory(ChunksConverterFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11602};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::ChunksConverterFactory, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::ChunksConverterFactory);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::ChunksConverterFactory*, "Melanchall.DryWetMidi.Core", "ChunksConverterFactory");
