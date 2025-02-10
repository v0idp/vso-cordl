#pragma once
// IWYU pragma private; include "VROSC/ToneGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ToneGenerator)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace VROSC {
class ToneGenerator_GeneratedTone;
}
// Forward declare root types
namespace VROSC {
class ToneGenerator;
}
namespace VROSC {
class ToneGenerator_GeneratedTone;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToneGenerator);
MARK_REF_PTR_T(::VROSC::ToneGenerator_GeneratedTone);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToneGenerator/GeneratedTone
class CORDL_TYPE ToneGenerator_GeneratedTone : public ::System::Object {
public:
// Declarations
/// @brief Field Frequency, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) double_t  Frequency;

/// @brief Field Increment, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Increment, put=__cordl_internal_set_Increment)) double_t  Increment;

/// @brief Field Phase, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Phase, put=__cordl_internal_set_Phase)) double_t  Phase;

static inline ::VROSC::ToneGenerator_GeneratedTone* New_ctor(int32_t  noteNumber) ;

constexpr double_t const& __cordl_internal_get_Frequency() const;

constexpr double_t& __cordl_internal_get_Frequency() ;

constexpr double_t const& __cordl_internal_get_Increment() const;

constexpr double_t& __cordl_internal_get_Increment() ;

constexpr double_t const& __cordl_internal_get_Phase() const;

constexpr double_t& __cordl_internal_get_Phase() ;

constexpr void __cordl_internal_set_Frequency(double_t  value) ;

constexpr void __cordl_internal_set_Increment(double_t  value) ;

constexpr void __cordl_internal_set_Phase(double_t  value) ;

/// @brief Method .ctor, addr 0x16fe9c8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  noteNumber) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToneGenerator_GeneratedTone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToneGenerator_GeneratedTone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToneGenerator_GeneratedTone(ToneGenerator_GeneratedTone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToneGenerator_GeneratedTone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToneGenerator_GeneratedTone(ToneGenerator_GeneratedTone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{838};

/// @brief Field Frequency, offset: 0x10, size: 0x8, def value: None
 double_t  ___Frequency;

/// @brief Field Increment, offset: 0x18, size: 0x8, def value: None
 double_t  ___Increment;

/// @brief Field Phase, offset: 0x20, size: 0x8, def value: None
 double_t  ___Phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToneGenerator_GeneratedTone, ___Frequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToneGenerator_GeneratedTone, ___Increment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToneGenerator_GeneratedTone, ___Phase) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToneGenerator_GeneratedTone, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToneGenerator
class CORDL_TYPE ToneGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GeneratedTone = ::VROSC::ToneGenerator_GeneratedTone;

/// @brief Field _gain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gain, put=__cordl_internal_set__gain)) double_t  _gain;

/// @brief Field _sampleRate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Field _tones, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tones, put=__cordl_internal_set__tones)) ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*  _tones;

/// @brief Method GetFrequencyFromNoteNumber, addr 0x16feab8, size 0x38, virtual false, abstract: false, final false
static inline double_t GetFrequencyFromNoteNumber(int32_t  noteNumber) ;

static inline ::VROSC::ToneGenerator* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x16fe5a4, size 0x328, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method PlayNote, addr 0x16fe8cc, size 0xfc, virtual false, abstract: false, final false
inline void PlayNote(int32_t  noteNumber) ;

/// @brief Method StopNote, addr 0x16fea28, size 0x90, virtual false, abstract: false, final false
inline void StopNote(int32_t  noteNumber) ;

/// @brief Method Update, addr 0x16fe588, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

constexpr double_t const& __cordl_internal_get__gain() const;

constexpr double_t& __cordl_internal_get__gain() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>* const& __cordl_internal_get__tones() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*& __cordl_internal_get__tones() ;

constexpr void __cordl_internal_set__gain(double_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__tones(::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*  value) ;

/// @brief Method .ctor, addr 0x16feaf0, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToneGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToneGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToneGenerator(ToneGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToneGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToneGenerator(ToneGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{839};

/// @brief Field _gain, offset: 0x20, size: 0x8, def value: None
 double_t  ____gain;

/// @brief Field _sampleRate, offset: 0x28, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _tones, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*  ____tones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToneGenerator, ____gain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToneGenerator, ____sampleRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToneGenerator, ____tones) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToneGenerator, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToneGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToneGenerator*, "VROSC", "ToneGenerator");
NEED_NO_BOX(::VROSC::ToneGenerator_GeneratedTone);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToneGenerator_GeneratedTone*, "VROSC", "ToneGenerator/GeneratedTone");
