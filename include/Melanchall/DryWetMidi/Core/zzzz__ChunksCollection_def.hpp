#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChunksCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChunksCollection)
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class ChunksCollection;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::ChunksCollection);
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.ChunksCollection
class CORDL_TYPE ChunksCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Field <IsReadOnly>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field _chunks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__chunks, put=__cordl_internal_set__chunks)) ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  _chunks;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiChunk*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x25a0ddc, size 0xd0, virtual true, abstract: false, final true
inline void Add(::Melanchall::DryWetMidi::Core::MidiChunk*  chunk) ;

/// @brief Method Clear, addr 0x25a0f2c, size 0x70, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x25a10bc, size 0x58, virtual true, abstract: false, final true
inline bool Contains(::Melanchall::DryWetMidi::Core::MidiChunk*  item) ;

/// @brief Method CopyTo, addr 0x25a1114, size 0x68, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Melanchall::DryWetMidi::Core::MidiChunk*,::Array<::Melanchall::DryWetMidi::Core::MidiChunk*>*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x25a0f9c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* GetEnumerator() ;

static inline ::Melanchall::DryWetMidi::Core::ChunksCollection* New_ctor() ;

/// @brief Method Remove, addr 0x25a0eac, size 0x80, virtual true, abstract: false, final true
inline bool Remove(::Melanchall::DryWetMidi::Core::MidiChunk*  chunk) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x25a102c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* const& __cordl_internal_get__chunks() const;

constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*& __cordl_internal_get__chunks() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__chunks(::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  value) ;

/// @brief Method .ctor, addr 0x25a117c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x25a0d8c, size 0x48, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x25a0dd4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiChunk*>"
constexpr ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* i___System__Collections__Generic__ICollection_1___Melanchall__DryWetMidi__Core__MidiChunk__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* i___System__Collections__Generic__IEnumerable_1___Melanchall__DryWetMidi__Core__MidiChunk__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunksCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunksCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunksCollection(ChunksCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunksCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunksCollection(ChunksCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11622};

/// @brief Field _chunks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  ____chunks;

/// @brief Field <IsReadOnly>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChunksCollection, ____chunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::ChunksCollection, ____IsReadOnly_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::ChunksCollection, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::ChunksCollection);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::ChunksCollection*, "Melanchall.DryWetMidi.Core", "ChunksCollection");
