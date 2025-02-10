#pragma once
// IWYU pragma private; include "VROSC/MidiUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MidiUtils)
namespace Melanchall::DryWetMidi::Core {
class MidiEvent;
}
namespace Melanchall::DryWetMidi::Core {
class MidiFile;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
class MidiUtils___c;
}
// Forward declare root types
namespace VROSC {
class MidiUtils;
}
namespace VROSC {
class MidiUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MidiUtils);
MARK_REF_PTR_T(::VROSC::MidiUtils___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MidiUtils/<>c
class CORDL_TYPE MidiUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::MidiUtils___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::VROSC::InstrumentEvent*,double_t>*  __9__1_0;

static inline ::VROSC::MidiUtils___c* New_ctor() ;

/// @brief Method <ConvertToMidi>b__1_0, addr 0x17a55f8, size 0x18, virtual false, abstract: false, final false
inline double_t _ConvertToMidi_b__1_0(::VROSC::InstrumentEvent*  e) ;

/// @brief Method .ctor, addr 0x17a55f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::MidiUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::VROSC::InstrumentEvent*,double_t>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::VROSC::MidiUtils___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::VROSC::InstrumentEvent*,double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiUtils___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiUtils___c(MidiUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiUtils___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiUtils___c(MidiUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MidiUtils___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MidiUtils
class CORDL_TYPE MidiUtils : public ::System::Object {
public:
// Declarations
using __c = ::VROSC::MidiUtils___c;

/// @brief Field ParameterIdToMidiCCMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParameterIdToMidiCCMap, put=setStaticF_ParameterIdToMidiCCMap)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ParameterIdToMidiCCMap;

/// @brief Method ConvertDspTimeToMidiTicks, addr 0x17a4e00, size 0xf8, virtual false, abstract: false, final false
static inline int64_t ConvertDspTimeToMidiTicks(double_t  dspTime, double_t  bpm) ;

/// @brief Method ConvertParameterIdToMidiCC, addr 0x17a533c, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ConvertParameterIdToMidiCC(int32_t  parameterId) ;

/// @brief Method ConvertToMidi, addr 0x179da00, size 0x53c, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Core::MidiFile* ConvertToMidi(::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  instrumentEvents, double_t  bpm, double_t  leadingSilence) ;

/// @brief Method ConvertToMidiEvent, addr 0x17a4ef8, size 0x444, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Core::MidiEvent* ConvertToMidiEvent(::VROSC::InstrumentEvent*  instrumentEvent, double_t  bpm, int64_t  deltaTime) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF_ParameterIdToMidiCCMap() ;

static inline void setStaticF_ParameterIdToMidiCCMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiUtils(MidiUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiUtils(MidiUtils const& ) = delete;

/// @brief Field MidiTicksPerQuarterNote offset 0xffffffff size 0x4
static constexpr int32_t  MidiTicksPerQuarterNote{static_cast<int32_t>(0x1e0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MidiUtils, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MidiUtils);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MidiUtils*, "VROSC", "MidiUtils");
NEED_NO_BOX(::VROSC::MidiUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MidiUtils___c*, "VROSC", "MidiUtils/<>c");
