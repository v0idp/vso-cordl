#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SingleTrackChunksConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingleTrackChunksConverter)
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter_EventDescriptorComparer;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter_EventDescriptor;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter___c__DisplayClass2_0;
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
class SingleTrackChunksConverter;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter_EventDescriptor;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter_EventDescriptorComparer;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter___c;
}
namespace Melanchall::DryWetMidi::Core {
class SingleTrackChunksConverter___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SingleTrackChunksConverter/EventDescriptor
class CORDL_TYPE SingleTrackChunksConverter_EventDescriptor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AbsoluteTime)) int64_t  AbsoluteTime;

 __declspec(property(get=get_Event)) ::Melanchall::DryWetMidi::Core::MidiEvent*  Event;

/// @brief Field <AbsoluteTime>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AbsoluteTime_k__BackingField, put=__cordl_internal_set__AbsoluteTime_k__BackingField)) int64_t  _AbsoluteTime_k__BackingField;

/// @brief Field <Event>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Event_k__BackingField, put=__cordl_internal_set__Event_k__BackingField)) ::Melanchall::DryWetMidi::Core::MidiEvent*  _Event_k__BackingField;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* New_ctor(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, int64_t  absoluteTime) ;

constexpr int64_t const& __cordl_internal_get__AbsoluteTime_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__AbsoluteTime_k__BackingField() ;

constexpr ::Melanchall::DryWetMidi::Core::MidiEvent* const& __cordl_internal_get__Event_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::MidiEvent*& __cordl_internal_get__Event_k__BackingField() ;

constexpr void __cordl_internal_set__AbsoluteTime_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Event_k__BackingField(::Melanchall::DryWetMidi::Core::MidiEvent*  value) ;

/// @brief Method .ctor, addr 0x259f178, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, int64_t  absoluteTime) ;

/// @brief Method get_AbsoluteTime, addr 0x259f1ac, size 0x8, virtual false, abstract: false, final false
inline int64_t get_AbsoluteTime() ;

/// @brief Method get_Event, addr 0x259f1a4, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::MidiEvent* get_Event() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleTrackChunksConverter_EventDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter_EventDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleTrackChunksConverter_EventDescriptor(SingleTrackChunksConverter_EventDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter_EventDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleTrackChunksConverter_EventDescriptor(SingleTrackChunksConverter_EventDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11611};

/// @brief Field <Event>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::MidiEvent*  ____Event_k__BackingField;

/// @brief Field <AbsoluteTime>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____AbsoluteTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor, ____Event_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor, ____AbsoluteTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SingleTrackChunksConverter/EventDescriptorComparer
class CORDL_TYPE SingleTrackChunksConverter_EventDescriptorComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*() noexcept;

/// @brief Method Compare, addr 0x259f1b4, size 0x12c, virtual true, abstract: false, final true
inline int32_t Compare(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  x, ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  y) ;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x259f170, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>"
constexpr ::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* i___System__Collections__Generic__IComparer_1___Melanchall__DryWetMidi__Core__SingleTrackChunksConverter_EventDescriptor__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleTrackChunksConverter_EventDescriptorComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter_EventDescriptorComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleTrackChunksConverter_EventDescriptorComparer(SingleTrackChunksConverter_EventDescriptorComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter_EventDescriptorComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleTrackChunksConverter_EventDescriptorComparer(SingleTrackChunksConverter_EventDescriptorComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SingleTrackChunksConverter/<>c
class CORDL_TYPE SingleTrackChunksConverter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  __9__2_2;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c* New_ctor() ;

/// @brief Method <Convert>b__2_0, addr 0x259f344, size 0xd4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* _Convert_b__2_0(::Melanchall::DryWetMidi::Core::TrackChunk*  trackChunk) ;

/// @brief Method <Convert>b__2_1, addr 0x259f420, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* _Convert_b__2_1(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  d) ;

/// @brief Method <Convert>b__2_2, addr 0x259f428, size 0x5c, virtual false, abstract: false, final false
inline bool _Convert_b__2_2(::Melanchall::DryWetMidi::Core::MidiChunk*  c) ;

/// @brief Method .ctor, addr 0x259f33c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c* getStaticF___9() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>* getStaticF___9__2_0() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* getStaticF___9__2_1() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* getStaticF___9__2_2() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*  value) ;

static inline void setStaticF___9__2_1(::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*  value) ;

static inline void setStaticF___9__2_2(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleTrackChunksConverter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleTrackChunksConverter___c(SingleTrackChunksConverter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleTrackChunksConverter___c(SingleTrackChunksConverter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SingleTrackChunksConverter/<>c__DisplayClass2_0
class CORDL_TYPE SingleTrackChunksConverter___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field absoluteTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_absoluteTime, put=__cordl_internal_set_absoluteTime)) int64_t  absoluteTime;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <Convert>b__3, addr 0x259f484, size 0x78, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* _Convert_b__3(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent) ;

constexpr int64_t const& __cordl_internal_get_absoluteTime() const;

constexpr int64_t& __cordl_internal_get_absoluteTime() ;

constexpr void __cordl_internal_set_absoluteTime(int64_t  value) ;

/// @brief Method .ctor, addr 0x259f418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleTrackChunksConverter___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleTrackChunksConverter___c__DisplayClass2_0(SingleTrackChunksConverter___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleTrackChunksConverter___c__DisplayClass2_0(SingleTrackChunksConverter___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11614};

/// @brief Field absoluteTime, offset: 0x10, size: 0x8, def value: None
 int64_t  ___absoluteTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0, ___absoluteTime) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies Melanchall.DryWetMidi.Core.IChunksConverter, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SingleTrackChunksConverter
class CORDL_TYPE SingleTrackChunksConverter : public ::System::Object {
public:
// Declarations
using EventDescriptor = ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor;

using EventDescriptorComparer = ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer;

using __c = ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c;

using __c__DisplayClass2_0 = ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0;

/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr operator  ::Melanchall::DryWetMidi::Core::IChunksConverter*() noexcept;

/// @brief Method Convert, addr 0x259ea1c, size 0x754, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks) ;

static inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x259d164, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter* i___Melanchall__DryWetMidi__Core__IChunksConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleTrackChunksConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleTrackChunksConverter(SingleTrackChunksConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleTrackChunksConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleTrackChunksConverter(SingleTrackChunksConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*, "Melanchall.DryWetMidi.Core", "SingleTrackChunksConverter");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*, "Melanchall.DryWetMidi.Core", "SingleTrackChunksConverter/EventDescriptor");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*, "Melanchall.DryWetMidi.Core", "SingleTrackChunksConverter/EventDescriptorComparer");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*, "Melanchall.DryWetMidi.Core", "SingleTrackChunksConverter/<>c");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*, "Melanchall.DryWetMidi.Core", "SingleTrackChunksConverter/<>c__DisplayClass2_0");
