#pragma once
// IWYU pragma private; include "AudioHelm/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace AudioHelm {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::Utils);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field blackKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_blackKeys, put=setStaticF_blackKeys)) ::ArrayW<bool,::Array<bool>*>  blackKeys;

/// @brief Method CopyComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CopyComponent(T  original, ::UnityEngine::GameObject*  destination) ;

/// @brief Method GetOctave, addr 0x1829184, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetOctave(int32_t  key) ;

/// @brief Method InitAudioSource, addr 0x181e080, size 0x138, virtual false, abstract: false, final false
static inline void InitAudioSource(::UnityEngine::AudioSource*  audio) ;

/// @brief Method IsBlackKey, addr 0x18290bc, size 0x9c, virtual false, abstract: false, final false
static inline bool IsBlackKey(int32_t  key) ;

/// @brief Method IsC, addr 0x1829158, size 0x2c, virtual false, abstract: false, final false
static inline bool IsC(int32_t  key) ;

/// @brief Method MidiChangeToRatio, addr 0x1825430, size 0x10, virtual false, abstract: false, final false
static inline float_t MidiChangeToRatio(int32_t  midi) ;

/// @brief Method RangesOverlap, addr 0x1824988, size 0x34, virtual false, abstract: false, final false
static inline bool RangesOverlap(float_t  start, float_t  end, float_t  rangeStart, float_t  rangeEnd) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_blackKeys() ;

static inline void setStaticF_blackKeys(::ArrayW<bool,::Array<bool>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1908};

/// @brief Field kBpmToSixteenths offset 0xffffffff size 0x4
static constexpr float_t  kBpmToSixteenths{static_cast<float_t>(0.06666667f)};

/// @brief Field kMaxChannels offset 0xffffffff size 0x4
static constexpr int32_t  kMaxChannels{static_cast<int32_t>(0x10)};

/// @brief Field kMiddleC offset 0xffffffff size 0x4
static constexpr int32_t  kMiddleC{static_cast<int32_t>(0x3c)};

/// @brief Field kMidiSize offset 0xffffffff size 0x4
static constexpr int32_t  kMidiSize{static_cast<int32_t>(0x80)};

/// @brief Field kMinOctave offset 0xffffffff size 0x4
static constexpr int32_t  kMinOctave{static_cast<int32_t>(0xfffffffe)};

/// @brief Field kNotesPerOctave offset 0xffffffff size 0x4
static constexpr int32_t  kNotesPerOctave{static_cast<int32_t>(0xc)};

/// @brief Field kSecondsPerMinute offset 0xffffffff size 0x8
static constexpr double_t  kSecondsPerMinute{static_cast<double_t>(60.0)};

/// @brief Field kSixteenthsPerBeat offset 0xffffffff size 0x8
static constexpr double_t  kSixteenthsPerBeat{static_cast<double_t>(4.0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Utils, 0x10>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::Utils);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Utils*, "AudioHelm", "Utils");
