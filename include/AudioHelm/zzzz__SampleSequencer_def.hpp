#pragma once
// IWYU pragma private; include "AudioHelm/SampleSequencer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__Sequencer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleSequencer)
// Forward declare root types
namespace AudioHelm {
class SampleSequencer;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SampleSequencer);
// Dependencies AudioHelm.Sequencer
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SampleSequencer
class CORDL_TYPE SampleSequencer : public ::AudioHelm::Sequencer {
public:
// Declarations
/// @brief Field lastWindowTime, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastWindowTime, put=__cordl_internal_set_lastWindowTime)) double_t  lastWindowTime;

/// @brief Method AllNotesOff, addr 0x1826db4, size 0x5c, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method Awake, addr 0x1826c44, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoUpdate, addr 0x1826f70, size 0x348, virtual false, abstract: false, final false
inline void DoUpdate() ;

/// @brief Method EnableComponent, addr 0x1826f00, size 0xc, virtual false, abstract: false, final false
inline void EnableComponent() ;

/// @brief Method FixedUpdate, addr 0x1826f6c, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::AudioHelm::SampleSequencer* New_ctor() ;

/// @brief Method NoteOff, addr 0x1826e84, size 0x7c, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x1826e10, size 0x74, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity) ;

/// @brief Method OnDestroy, addr 0x1826d44, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1826d94, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1826d50, size 0x44, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1826c64, size 0x44, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartOnNextCycle, addr 0x1826f0c, size 0x60, virtual true, abstract: false, final false
inline void StartOnNextCycle() ;

/// @brief Method Update, addr 0x18272b8, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr double_t const& __cordl_internal_get_lastWindowTime() const;

constexpr double_t& __cordl_internal_get_lastWindowTime() ;

constexpr void __cordl_internal_set_lastWindowTime(double_t  value) ;

/// @brief Method .ctor, addr 0x182730c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleSequencer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleSequencer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleSequencer(SampleSequencer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleSequencer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleSequencer(SampleSequencer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1896};

/// @brief Field lookaheadTime offset 0xffffffff size 0x4
static constexpr float_t  lookaheadTime{static_cast<float_t>(0.1f)};

/// @brief Field lastWindowTime, offset: 0xb8, size: 0x8, def value: None
 double_t  ___lastWindowTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SampleSequencer, ___lastWindowTime) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SampleSequencer, 0xc0>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SampleSequencer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SampleSequencer*, "AudioHelm", "SampleSequencer");
