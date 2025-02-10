#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/IChunksConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IChunksConverter)
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class IChunksConverter;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::IChunksConverter);
// Dependencies 
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.IChunksConverter
class CORDL_TYPE IChunksConverter {
public:
// Declarations
/// @brief Method Convert, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks) ;

// Ctor Parameters [CppParam { name: "", ty: "IChunksConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IChunksConverter(IChunksConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::IChunksConverter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::IChunksConverter*, "Melanchall.DryWetMidi.Core", "IChunksConverter");
