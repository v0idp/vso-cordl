#pragma once
// IWYU pragma private; include "VROSC/ObjectExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectExtensions)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ObjectExtensions___c;
}
namespace VROSC {
class ScalePreset_NotePriority;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
struct Scale;
}
// Forward declare root types
namespace VROSC {
class ObjectExtensions;
}
namespace VROSC {
class ObjectExtensions___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ObjectExtensions);
MARK_REF_PTR_T(::VROSC::ObjectExtensions___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ObjectExtensions/<>c
class CORDL_TYPE ObjectExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::ObjectExtensions___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::VROSC::ScalePreset_NotePriority*,int32_t>*  __9__8_0;

static inline ::VROSC::ObjectExtensions___c* New_ctor() ;

/// @brief Method <ConstructStrippedScale>b__8_0, addr 0x188cecc, size 0x18, virtual false, abstract: false, final false
inline int32_t _ConstructStrippedScale_b__8_0(::VROSC::ScalePreset_NotePriority*  x) ;

/// @brief Method .ctor, addr 0x188cec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::ObjectExtensions___c* getStaticF___9() ;

static inline ::System::Func_2<::VROSC::ScalePreset_NotePriority*,int32_t>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::VROSC::ObjectExtensions___c*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::VROSC::ScalePreset_NotePriority*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectExtensions___c(ObjectExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectExtensions___c(ObjectExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ObjectExtensions___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ObjectExtensions
class CORDL_TYPE ObjectExtensions : public ::System::Object {
public:
// Declarations
using __c = ::VROSC::ObjectExtensions___c;

/// @brief Field rng, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rng, put=setStaticF_rng)) ::System::Random*  rng;

/// @brief Method CalculateScaleStepsByTranspose, addr 0x188c3cc, size 0x114, virtual false, abstract: false, final false
static inline int32_t CalculateScaleStepsByTranspose(int32_t  startNote, int32_t  interval, ::VROSC::Scale  scale) ;

/// @brief Method Channels, addr 0x188c720, size 0xc, virtual false, abstract: false, final false
static inline int32_t Channels(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method ConstructStrippedScale, addr 0x188adf4, size 0x438, virtual false, abstract: false, final false
static inline ::VROSC::Scale ConstructStrippedScale(::VROSC::ScalePreset*  scalePreset, int32_t  noteCount, ::VROSC::Note  key) ;

/// @brief Method ContainsNote, addr 0x188ad8c, size 0x3c, virtual false, abstract: false, final false
static inline bool ContainsNote(::VROSC::Scale  scale, ::VROSC::Note  note) ;

/// @brief Method CountSetBits, addr 0x188c524, size 0x20, virtual false, abstract: false, final false
static inline int32_t CountSetBits(int32_t  bitMask) ;

/// @brief Method CreateAudioArray, addr 0x188c72c, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> CreateAudioArray(int32_t  channels, int32_t  samples) ;

/// @brief Method DbToLinear, addr 0x188c570, size 0x74, virtual false, abstract: false, final false
static inline float_t DbToLinear(float_t  dbVolume) ;

/// @brief Method Deinterleave, addr 0x188c7f0, size 0x12c, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> Deinterleave(::ArrayW<float_t,::Array<float_t>*>  interleavedAudioData, int32_t  channels) ;

/// @brief Method FitNotesToScale, addr 0x188b294, size 0x608, virtual false, abstract: false, final false
static inline ::VROSC::Scale FitNotesToScale(::VROSC::Scale  notes, ::VROSC::Scale  oldScale, ::VROSC::Note  oldKey, ::VROSC::Scale  newScale, ::VROSC::Note  newKey) ;

/// @brief Method FormatTimeFraction, addr 0x188cbd0, size 0x228, virtual false, abstract: false, final false
static inline ::StringW FormatTimeFraction(float_t  elapsedTime, float_t  totalTime) ;

/// @brief Method GetNearestNote, addr 0x188b89c, size 0x3c8, virtual false, abstract: false, final false
static inline bool GetNearestNote(::VROSC::Note  note, ::System::Collections::Generic::List_1<::VROSC::Scale>*  insideScales, ::System::Collections::Generic::List_1<::VROSC::Scale>*  outsideScales, ::ByRef<::VROSC::Note>  nearestNote) ;

/// @brief Method GetNormalizeMultiplier, addr 0x188c5e4, size 0x13c, virtual false, abstract: false, final false
static inline float_t GetNormalizeMultiplier(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method GetNote, addr 0x188c0cc, size 0x90, virtual false, abstract: false, final false
static inline ::VROSC::Note GetNote(int32_t  noteNumber) ;

/// @brief Method GetNoteAndOctave, addr 0x188c16c, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetNoteAndOctave(int32_t  noteNumber) ;

/// @brief Method GetNoteNumber, addr 0x188c23c, size 0x2c, virtual false, abstract: false, final false
static inline int32_t GetNoteNumber(::VROSC::Note  note, int32_t  octave) ;

/// @brief Method GetOffsetNote, addr 0x188bf58, size 0x174, virtual false, abstract: false, final false
static inline int32_t GetOffsetNote(int32_t  note, ::VROSC::Scale  scale, int32_t  offsetSteps, bool  avoidTritone) ;

/// @brief Method GetRandomNote, addr 0x188c15c, size 0x10, virtual false, abstract: false, final false
static inline ::VROSC::Note GetRandomNote() ;

/// @brief Method GetRandomNote, addr 0x188bd08, size 0x250, virtual false, abstract: false, final false
static inline ::VROSC::Note GetRandomNote(::VROSC::Scale  scale) ;

/// @brief Method GetSampleRangeWithoutSilence, addr 0x188c9c8, size 0x204, virtual false, abstract: false, final false
static inline void GetSampleRangeWithoutSilence(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::ByRef<int32_t>  startSample, ::ByRef<int32_t>  endSample, int32_t  lastSampleToCheckFrom) ;

/// @brief Method GetStrippedScale, addr 0x188aa78, size 0x314, virtual false, abstract: false, final false
static inline ::VROSC::Scale GetStrippedScale(::VROSC::Scale  scale, ::VROSC::Note  baseNote, int32_t  numberOfNotesToDrop, bool  keepBase) ;

/// @brief Method IsDirectionWithinAngle, addr 0x188a844, size 0x12c, virtual false, abstract: false, final false
static inline bool IsDirectionWithinAngle(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  filterDirection, float_t  angle) ;

/// @brief Method IsOnScale, addr 0x188c268, size 0x38, virtual false, abstract: false, final false
static inline bool IsOnScale(int32_t  midiNote, ::VROSC::Scale  scale) ;

/// @brief Method IsPointInside, addr 0x188a7d0, size 0x74, virtual false, abstract: false, final false
static inline bool IsPointInside(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  size) ;

/// @brief Method LinearToDb, addr 0x188c544, size 0x2c, virtual false, abstract: false, final false
static inline float_t LinearToDb(float_t  linearVolume, float_t  minDb) ;

/// @brief Method Max, addr 0x188a6d4, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2) ;

/// @brief Method Modulo, addr 0x188c4f0, size 0x24, virtual false, abstract: false, final false
static inline float_t Modulo(float_t  value, float_t  mod) ;

/// @brief Method Modulo, addr 0x188aa54, size 0x24, virtual false, abstract: false, final false
static inline int32_t Modulo(int32_t  value, int32_t  mod) ;

/// @brief Method Multiply, addr 0x188a6c4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  factor) ;

/// @brief Method NoteCount, addr 0x188bc64, size 0xa4, virtual false, abstract: false, final false
static inline int32_t NoteCount(::VROSC::Scale  scale) ;

/// @brief Method Reset, addr 0x188a6f0, size 0xe0, virtual false, abstract: false, final false
static inline void Reset(::UnityEngine::Transform*  transform) ;

/// @brief Method SafeDivideBy, addr 0x188c514, size 0x10, virtual false, abstract: false, final false
static inline float_t SafeDivideBy(float_t  value, float_t  divideBy, float_t  ifZero) ;

/// @brief Method Samples, addr 0x188c91c, size 0xac, virtual false, abstract: false, final false
static inline int32_t Samples(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method SemitoneShiftToPitchFraction, addr 0x188c4e0, size 0x10, virtual false, abstract: false, final false
static inline float_t SemitoneShiftToPitchFraction(int32_t  semitone) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method ToBitMask, addr 0x188adc8, size 0x2c, virtual false, abstract: false, final false
static inline int32_t ToBitMask(::VROSC::Note  note) ;

/// @brief Method ToVector3, addr 0x188cbcc, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToVector3(::UnityEngine::Color  color) ;

/// @brief Method Transpose, addr 0x188b22c, size 0x68, virtual false, abstract: false, final false
static inline ::VROSC::Note Transpose(::VROSC::Note  note, ::VROSC::Note  fromKey, ::VROSC::Note  toKey) ;

/// @brief Method TransposeNoteByScaleSteps, addr 0x188c2a0, size 0x12c, virtual false, abstract: false, final false
static inline int32_t TransposeNoteByScaleSteps(int32_t  midiNote, int32_t  steps, ::VROSC::Scale  scale) ;

/// @brief Method TransposeScale, addr 0x188a970, size 0xe4, virtual false, abstract: false, final false
static inline ::VROSC::Scale TransposeScale(::VROSC::Scale  scale, int32_t  steps) ;

static inline ::System::Random* getStaticF_rng() ;

static inline void setStaticF_rng(::System::Random*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectExtensions(ObjectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectExtensions(ObjectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{617};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ObjectExtensions, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ObjectExtensions);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectExtensions*, "VROSC", "ObjectExtensions");
NEED_NO_BOX(::VROSC::ObjectExtensions___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectExtensions___c*, "VROSC", "ObjectExtensions/<>c");
