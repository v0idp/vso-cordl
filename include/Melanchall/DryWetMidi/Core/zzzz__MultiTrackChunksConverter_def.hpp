#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MultiTrackChunksConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTrackChunksConverter)
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter_TrackChunkDescriptor;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter___c__DisplayClass2_0;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter_TrackChunkDescriptor;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class MultiTrackChunksConverter___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiTrackChunksConverter/TrackChunkDescriptor
class CORDL_TYPE MultiTrackChunksConverter_TrackChunkDescriptor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Chunk)) ::Melanchall::DryWetMidi::Core::TrackChunk*  Chunk;

 __declspec(property(get=get_DeltaTime, put=set_DeltaTime)) int64_t  DeltaTime;

/// @brief Field <Chunk>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Chunk_k__BackingField, put=__cordl_internal_set__Chunk_k__BackingField)) ::Melanchall::DryWetMidi::Core::TrackChunk*  _Chunk_k__BackingField;

/// @brief Field <DeltaTime>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeltaTime_k__BackingField, put=__cordl_internal_set__DeltaTime_k__BackingField)) int64_t  _DeltaTime_k__BackingField;

/// @brief Method AddEvent, addr 0x259e608, size 0x4c, virtual false, abstract: false, final false
inline void AddEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

static inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor* New_ctor() ;

constexpr ::Melanchall::DryWetMidi::Core::TrackChunk* const& __cordl_internal_get__Chunk_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::TrackChunk*& __cordl_internal_get__Chunk_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__DeltaTime_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__DeltaTime_k__BackingField() ;

constexpr void __cordl_internal_set__Chunk_k__BackingField(::Melanchall::DryWetMidi::Core::TrackChunk*  value) ;

constexpr void __cordl_internal_set__DeltaTime_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0x259e770, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Chunk, addr 0x259e674, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::TrackChunk* get_Chunk() ;

/// @brief Method get_DeltaTime, addr 0x259e67c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_DeltaTime() ;

/// @brief Method set_DeltaTime, addr 0x259e684, size 0x8, virtual false, abstract: false, final false
inline void set_DeltaTime(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiTrackChunksConverter_TrackChunkDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter_TrackChunkDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTrackChunksConverter_TrackChunkDescriptor(MultiTrackChunksConverter_TrackChunkDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter_TrackChunkDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTrackChunksConverter_TrackChunkDescriptor(MultiTrackChunksConverter_TrackChunkDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11607};

/// @brief Field <Chunk>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::TrackChunk*  ____Chunk_k__BackingField;

/// @brief Field <DeltaTime>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____DeltaTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor, ____Chunk_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor, ____DeltaTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiTrackChunksConverter/<>c
class CORDL_TYPE MultiTrackChunksConverter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<int32_t,::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*,::Melanchall::DryWetMidi::Core::TrackChunk*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,bool>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,::Melanchall::DryWetMidi::Core::MidiEvent*>*  __9__2_4;

static inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c* New_ctor() ;

/// @brief Method <Convert>b__2_0, addr 0x259e8a8, size 0x50, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor* _Convert_b__2_0(int32_t  i) ;

/// @brief Method <Convert>b__2_1, addr 0x259e92c, size 0x18, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::TrackChunk* _Convert_b__2_1(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*  d) ;

/// @brief Method <Convert>b__2_2, addr 0x259e944, size 0x50, virtual false, abstract: false, final false
inline bool _Convert_b__2_2(::Melanchall::DryWetMidi::Core::TrackChunk*  c) ;

/// @brief Method <Convert>b__2_3, addr 0x259e994, size 0x5c, virtual false, abstract: false, final false
inline bool _Convert_b__2_3(::Melanchall::DryWetMidi::Core::MidiChunk*  c) ;

/// @brief Method <Convert>b__2_4, addr 0x259e8f8, size 0x34, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* _Convert_b__2_4(::Melanchall::DryWetMidi::Core::MidiEvent*  m) ;

/// @brief Method .ctor, addr 0x259e8a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c* getStaticF___9() ;

static inline ::System::Func_2<int32_t,::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*>* getStaticF___9__2_0() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*,::Melanchall::DryWetMidi::Core::TrackChunk*>* getStaticF___9__2_1() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,bool>* getStaticF___9__2_2() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* getStaticF___9__2_3() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,::Melanchall::DryWetMidi::Core::MidiEvent*>* getStaticF___9__2_4() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<int32_t,::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*>*  value) ;

static inline void setStaticF___9__2_1(::System::Func_2<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*,::Melanchall::DryWetMidi::Core::TrackChunk*>*  value) ;

static inline void setStaticF___9__2_2(::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,bool>*  value) ;

static inline void setStaticF___9__2_3(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value) ;

static inline void setStaticF___9__2_4(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,::Melanchall::DryWetMidi::Core::MidiEvent*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiTrackChunksConverter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTrackChunksConverter___c(MultiTrackChunksConverter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTrackChunksConverter___c(MultiTrackChunksConverter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiTrackChunksConverter/<>c__DisplayClass2_0
class CORDL_TYPE MultiTrackChunksConverter___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field midiEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_midiEvent, put=__cordl_internal_set_midiEvent)) ::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent;

static inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <Convert>b__5, addr 0x259e9f0, size 0x2c, virtual false, abstract: false, final false
inline void _Convert_b__5(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*  d) ;

constexpr ::Melanchall::DryWetMidi::Core::MidiEvent* const& __cordl_internal_get_midiEvent() const;

constexpr ::Melanchall::DryWetMidi::Core::MidiEvent*& __cordl_internal_get_midiEvent() ;

constexpr void __cordl_internal_set_midiEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  value) ;

/// @brief Method .ctor, addr 0x259e5d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiTrackChunksConverter___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTrackChunksConverter___c__DisplayClass2_0(MultiTrackChunksConverter___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTrackChunksConverter___c__DisplayClass2_0(MultiTrackChunksConverter___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11609};

/// @brief Field midiEvent, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::MidiEvent*  ___midiEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0, ___midiEvent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies Melanchall.DryWetMidi.Core.IChunksConverter, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiTrackChunksConverter
class CORDL_TYPE MultiTrackChunksConverter : public ::System::Object {
public:
// Declarations
using TrackChunkDescriptor = ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor;

using __c = ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c;

using __c__DisplayClass2_0 = ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0;

/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr operator  ::Melanchall::DryWetMidi::Core::IChunksConverter*() noexcept;

/// @brief Method Convert, addr 0x259daf0, size 0xae4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks) ;

static inline ::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x259d16c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter* i___Melanchall__DryWetMidi__Core__IChunksConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiTrackChunksConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTrackChunksConverter(MultiTrackChunksConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTrackChunksConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTrackChunksConverter(MultiTrackChunksConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter*, "Melanchall.DryWetMidi.Core", "MultiTrackChunksConverter");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter_TrackChunkDescriptor*, "Melanchall.DryWetMidi.Core", "MultiTrackChunksConverter/TrackChunkDescriptor");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c*, "Melanchall.DryWetMidi.Core", "MultiTrackChunksConverter/<>c");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiTrackChunksConverter___c__DisplayClass2_0*, "Melanchall.DryWetMidi.Core", "MultiTrackChunksConverter/<>c__DisplayClass2_0");
