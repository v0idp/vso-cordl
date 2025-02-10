#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MidiFile)
namespace Melanchall::DryWetMidi::Core {
class ChunksCollection;
}
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
namespace Melanchall::DryWetMidi::Core {
struct MidiFileFormat;
}
namespace Melanchall::DryWetMidi::Core {
class MidiFile___c;
}
namespace Melanchall::DryWetMidi::Core {
class TimeDivision;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class MidiFile;
}
namespace Melanchall::DryWetMidi::Core {
class MidiFile___c;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MidiFile);
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MidiFile___c);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MidiFile/<>c
class CORDL_TYPE MidiFile___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Core::MidiFile___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  __9__20_0;

static inline ::Melanchall::DryWetMidi::Core::MidiFile___c* New_ctor() ;

/// @brief Method <Write>b__20_0, addr 0x25a4948, size 0x5c, virtual false, abstract: false, final false
inline bool _Write_b__20_0(::Melanchall::DryWetMidi::Core::MidiChunk*  c) ;

/// @brief Method .ctor, addr 0x25a4940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Core::MidiFile___c* getStaticF___9() ;

static inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Core::MidiFile___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiFile___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiFile___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiFile___c(MidiFile___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiFile___c(MidiFile___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiFile___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MidiFile
class CORDL_TYPE MidiFile : public ::System::Object {
public:
// Declarations
using __c = ::Melanchall::DryWetMidi::Core::MidiFile___c;

 __declspec(property(get=get_Chunks)) ::Melanchall::DryWetMidi::Core::ChunksCollection*  Chunks;

 __declspec(property(get=get_TimeDivision, put=set_TimeDivision)) ::Melanchall::DryWetMidi::Core::TimeDivision*  TimeDivision;

/// @brief Field <Chunks>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Chunks_k__BackingField, put=__cordl_internal_set__Chunks_k__BackingField)) ::Melanchall::DryWetMidi::Core::ChunksCollection*  _Chunks_k__BackingField;

/// @brief Field <TimeDivision>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeDivision_k__BackingField, put=__cordl_internal_set__TimeDivision_k__BackingField)) ::Melanchall::DryWetMidi::Core::TimeDivision*  _TimeDivision_k__BackingField;

static inline ::Melanchall::DryWetMidi::Core::MidiFile* New_ctor() ;

/// @brief Method Write, addr 0x25a3c6c, size 0x1d0, virtual false, abstract: false, final false
inline void Write(::StringW  filePath, bool  overwriteFile, ::Melanchall::DryWetMidi::Core::MidiFileFormat  format, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method Write, addr 0x25a3f74, size 0x7f4, virtual false, abstract: false, final false
inline void Write(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::MidiFileFormat  format, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::Melanchall::DryWetMidi::Core::ChunksCollection* const& __cordl_internal_get__Chunks_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::ChunksCollection*& __cordl_internal_get__Chunks_k__BackingField() ;

constexpr ::Melanchall::DryWetMidi::Core::TimeDivision* const& __cordl_internal_get__TimeDivision_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::TimeDivision*& __cordl_internal_get__TimeDivision_k__BackingField() ;

constexpr void __cordl_internal_set__Chunks_k__BackingField(::Melanchall::DryWetMidi::Core::ChunksCollection*  value) ;

constexpr void __cordl_internal_set__TimeDivision_k__BackingField(::Melanchall::DryWetMidi::Core::TimeDivision*  value) ;

/// @brief Method .ctor, addr 0x25a3bac, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Chunks, addr 0x25a3c64, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::ChunksCollection* get_Chunks() ;

/// @brief Method get_TimeDivision, addr 0x25a3c54, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::TimeDivision* get_TimeDivision() ;

/// @brief Method set_TimeDivision, addr 0x25a3c5c, size 0x8, virtual false, abstract: false, final false
inline void set_TimeDivision(::Melanchall::DryWetMidi::Core::TimeDivision*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiFile(MidiFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiFile(MidiFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11652};

/// @brief Field <TimeDivision>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::TimeDivision*  ____TimeDivision_k__BackingField;

/// @brief Field <Chunks>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::ChunksCollection*  ____Chunks_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiFile, ____TimeDivision_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiFile, ____Chunks_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiFile, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiFile*, "Melanchall.DryWetMidi.Core", "MidiFile");
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MidiFile___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiFile___c*, "Melanchall.DryWetMidi.Core", "MidiFile/<>c");
