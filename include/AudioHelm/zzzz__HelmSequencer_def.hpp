#pragma once
// IWYU pragma private; include "AudioHelm/HelmSequencer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__Sequencer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmSequencer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace AudioHelm {
class HelmSequencer;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmSequencer);
// Dependencies AudioHelm.Sequencer, System.IntPtr
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmSequencer
class CORDL_TYPE HelmSequencer : public ::AudioHelm::Sequencer {
public:
// Declarations
/// @brief Field channel, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

/// @brief Field currentChannel, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentChannel, put=__cordl_internal_set_currentChannel)) int32_t  currentChannel;

/// @brief Field currentLength, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLength, put=__cordl_internal_set_currentLength)) int32_t  currentLength;

/// @brief Field currentLoop, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentLoop, put=__cordl_internal_set_currentLoop)) bool  currentLoop;

/// @brief Field reference, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::System::IntPtr  reference;

/// @brief Method AllNotesOff, addr 0x1822e44, size 0x1c, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method Awake, addr 0x1822460, size 0x1dc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateNativeSequencer, addr 0x1822318, size 0x2c, virtual false, abstract: false, final false
inline void CreateNativeSequencer() ;

/// @brief Method DeleteNativeSequencer, addr 0x18223a8, size 0x38, virtual false, abstract: false, final false
inline void DeleteNativeSequencer() ;

/// @brief Method DoUpdate, addr 0x182333c, size 0xd4, virtual false, abstract: false, final false
inline void DoUpdate() ;

/// @brief Method EnableComponent, addr 0x1823064, size 0xc, virtual false, abstract: false, final false
inline void EnableComponent() ;

/// @brief Method FixedUpdate, addr 0x1823338, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::AudioHelm::HelmSequencer* New_ctor() ;

/// @brief Method NoteOff, addr 0x182305c, size 0x8, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x1823054, size 0x8, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity) ;

/// @brief Method OnDestroy, addr 0x1822a8c, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1822cec, size 0x48, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1822acc, size 0x38, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reference, addr 0x1822458, size 0x8, virtual true, abstract: false, final false
inline ::System::IntPtr Reference() ;

/// @brief Method StartOnNextCycle, addr 0x1823070, size 0xb8, virtual true, abstract: false, final false
inline void StartOnNextCycle() ;

/// @brief Method Update, addr 0x1823410, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr int32_t const& __cordl_internal_get_currentChannel() const;

constexpr int32_t& __cordl_internal_get_currentChannel() ;

constexpr int32_t const& __cordl_internal_get_currentLength() const;

constexpr int32_t& __cordl_internal_get_currentLength() ;

constexpr bool const& __cordl_internal_get_currentLoop() const;

constexpr bool& __cordl_internal_get_currentLoop() ;

constexpr ::System::IntPtr const& __cordl_internal_get_reference() const;

constexpr ::System::IntPtr& __cordl_internal_get_reference() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

constexpr void __cordl_internal_set_currentChannel(int32_t  value) ;

constexpr void __cordl_internal_set_currentLength(int32_t  value) ;

constexpr void __cordl_internal_set_currentLoop(bool  value) ;

constexpr void __cordl_internal_set_reference(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1823788, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmSequencer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmSequencer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmSequencer(HelmSequencer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmSequencer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmSequencer(HelmSequencer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1883};

/// @brief Field channel, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___channel;

/// @brief Field reference, offset: 0xb8, size: 0x8, def value: None
 ::System::IntPtr  ___reference;

/// @brief Field currentChannel, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___currentChannel;

/// @brief Field currentLength, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___currentLength;

/// @brief Field currentLoop, offset: 0xc8, size: 0x1, def value: None
 bool  ___currentLoop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmSequencer, ___channel) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmSequencer, ___reference) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmSequencer, ___currentChannel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmSequencer, ___currentLength) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmSequencer, ___currentLoop) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmSequencer, 0xd0>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmSequencer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmSequencer*, "AudioHelm", "HelmSequencer");
