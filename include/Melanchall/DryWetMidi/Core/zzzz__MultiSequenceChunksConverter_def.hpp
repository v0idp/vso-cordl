#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MultiSequenceChunksConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiSequenceChunksConverter)
namespace GlobalNamespace {
template<typename Chunk_j__TPar, typename Number_j__TPar>
class __f__AnonymousType0_2;
}
namespace Melanchall::DryWetMidi::Core {
class IChunksConverter;
}
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MultiSequenceChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class MultiSequenceChunksConverter___c__DisplayClass0_0;
}
namespace Melanchall::DryWetMidi::Core {
class TrackChunk;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class MultiSequenceChunksConverter;
}
namespace Melanchall::DryWetMidi::Core {
class MultiSequenceChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class MultiSequenceChunksConverter___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiSequenceChunksConverter/<>c
class CORDL_TYPE MultiSequenceChunksConverter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_3<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t,::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,int32_t>*  __9__0_1;

/// @brief Field <>9__0_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_3, put=setStaticF___9__0_3)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  __9__0_3;

/// @brief Field <>9__0_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_4, put=setStaticF___9__0_4)) ::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,::Melanchall::DryWetMidi::Core::TrackChunk*>*  __9__0_4;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  __9__1_0;

static inline ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c* New_ctor() ;

/// @brief Method <Convert>b__0_0, addr 0x259d7c0, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>* _Convert_b__0_0(::Melanchall::DryWetMidi::Core::TrackChunk*  c, int32_t  i) ;

/// @brief Method <Convert>b__0_1, addr 0x259d870, size 0x44, virtual false, abstract: false, final false
inline int32_t _Convert_b__0_1(::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*  n) ;

/// @brief Method <Convert>b__0_3, addr 0x259d8f8, size 0x5c, virtual false, abstract: false, final false
inline bool _Convert_b__0_3(::Melanchall::DryWetMidi::Core::MidiChunk*  c) ;

/// @brief Method <Convert>b__0_4, addr 0x259d8b4, size 0x44, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::TrackChunk* _Convert_b__0_4(::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*  n) ;

/// @brief Method <GetSequenceNumber>b__1_0, addr 0x259d954, size 0x20, virtual false, abstract: false, final false
inline bool _GetSequenceNumber_b__1_0(::Melanchall::DryWetMidi::Core::MidiEvent*  m) ;

/// @brief Method .ctor, addr 0x259d7b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c* getStaticF___9() ;

static inline ::System::Func_3<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t,::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*>* getStaticF___9__0_0() ;

static inline ::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,int32_t>* getStaticF___9__0_1() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* getStaticF___9__0_3() ;

static inline ::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,::Melanchall::DryWetMidi::Core::TrackChunk*>* getStaticF___9__0_4() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,bool>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_3<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t,::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*>*  value) ;

static inline void setStaticF___9__0_1(::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,int32_t>*  value) ;

static inline void setStaticF___9__0_3(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value) ;

static inline void setStaticF___9__0_4(::System::Func_2<::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*,::Melanchall::DryWetMidi::Core::TrackChunk*>*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiSequenceChunksConverter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSequenceChunksConverter___c(MultiSequenceChunksConverter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSequenceChunksConverter___c(MultiSequenceChunksConverter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiSequenceChunksConverter/<>c__DisplayClass0_0
class CORDL_TYPE MultiSequenceChunksConverter___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field singleTrackChunksConverter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleTrackChunksConverter, put=__cordl_internal_set_singleTrackChunksConverter)) ::Melanchall::DryWetMidi::Core::IChunksConverter*  singleTrackChunksConverter;

static inline ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <Convert>b__2, addr 0x259d974, size 0x17c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* _Convert_b__2(::System::Linq::IGrouping_2<int32_t,::GlobalNamespace::__f__AnonymousType0_2<::Melanchall::DryWetMidi::Core::TrackChunk*,int32_t>*>*  g) ;

constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter* const& __cordl_internal_get_singleTrackChunksConverter() const;

constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter*& __cordl_internal_get_singleTrackChunksConverter() ;

constexpr void __cordl_internal_set_singleTrackChunksConverter(::Melanchall::DryWetMidi::Core::IChunksConverter*  value) ;

/// @brief Method .ctor, addr 0x259d564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiSequenceChunksConverter___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSequenceChunksConverter___c__DisplayClass0_0(MultiSequenceChunksConverter___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSequenceChunksConverter___c__DisplayClass0_0(MultiSequenceChunksConverter___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11605};

/// @brief Field singleTrackChunksConverter, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::IChunksConverter*  ___singleTrackChunksConverter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0, ___singleTrackChunksConverter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies Melanchall.DryWetMidi.Core.IChunksConverter, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MultiSequenceChunksConverter
class CORDL_TYPE MultiSequenceChunksConverter : public ::System::Object {
public:
// Declarations
using __c = ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c;

using __c__DisplayClass0_0 = ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0;

/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr operator  ::Melanchall::DryWetMidi::Core::IChunksConverter*() noexcept;

/// @brief Method Convert, addr 0x259d17c, size 0x3e8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks) ;

/// @brief Method GetSequenceNumber, addr 0x259d5bc, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint16_t> GetSequenceNumber(::Melanchall::DryWetMidi::Core::TrackChunk*  trackChunk) ;

static inline ::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x259d174, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter* i___Melanchall__DryWetMidi__Core__IChunksConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiSequenceChunksConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSequenceChunksConverter(MultiSequenceChunksConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSequenceChunksConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSequenceChunksConverter(MultiSequenceChunksConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter*, "Melanchall.DryWetMidi.Core", "MultiSequenceChunksConverter");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c*, "Melanchall.DryWetMidi.Core", "MultiSequenceChunksConverter/<>c");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MultiSequenceChunksConverter___c__DisplayClass0_0*, "Melanchall.DryWetMidi.Core", "MultiSequenceChunksConverter/<>c__DisplayClass0_0");
