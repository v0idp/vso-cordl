#pragma once
// IWYU pragma private; include "AudioHelm/SyncAudioAndSequencers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncAudioAndSequencers)
namespace AudioHelm {
class AudioHelmClock;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace AudioHelm {
class SyncAudioAndSequencers;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SyncAudioAndSequencers);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SyncAudioAndSequencers
class CORDL_TYPE SyncAudioAndSequencers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clock, put=__cordl_internal_set_clock)) ::UnityW<::AudioHelm::AudioHelmClock>  clock;

/// @brief Field lastSecond, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSecond, put=__cordl_internal_set_lastSecond)) int32_t  lastSecond;

/// @brief Field loop, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) ::UnityW<::UnityEngine::AudioSource>  loop;

/// @brief Field text, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Field waitTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitTime, put=__cordl_internal_set_waitTime)) float_t  waitTime;

static inline ::AudioHelm::SyncAudioAndSequencers* New_ctor() ;

/// @brief Method Start, addr 0x181cffc, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181d0d8, size 0x194, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::AudioHelm::AudioHelmClock> const& __cordl_internal_get_clock() const;

constexpr ::UnityW<::AudioHelm::AudioHelmClock>& __cordl_internal_get_clock() ;

constexpr int32_t const& __cordl_internal_get_lastSecond() const;

constexpr int32_t& __cordl_internal_get_lastSecond() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loop() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loop() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_text() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr void __cordl_internal_set_clock(::UnityW<::AudioHelm::AudioHelmClock>  value) ;

constexpr void __cordl_internal_set_lastSecond(int32_t  value) ;

constexpr void __cordl_internal_set_loop(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_waitTime(float_t  value) ;

/// @brief Method .ctor, addr 0x181d26c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncAudioAndSequencers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncAudioAndSequencers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncAudioAndSequencers(SyncAudioAndSequencers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncAudioAndSequencers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncAudioAndSequencers(SyncAudioAndSequencers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1866};

/// @brief Field clock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::AudioHelmClock>  ___clock;

/// @brief Field loop, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loop;

/// @brief Field waitTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field text, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___text;

/// @brief Field lastSecond, offset: 0x40, size: 0x4, def value: None
 int32_t  ___lastSecond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SyncAudioAndSequencers, ___clock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SyncAudioAndSequencers, ___loop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SyncAudioAndSequencers, ___waitTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SyncAudioAndSequencers, ___text) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::SyncAudioAndSequencers, ___lastSecond) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SyncAudioAndSequencers, 0x48>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SyncAudioAndSequencers);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SyncAudioAndSequencers*, "AudioHelm", "SyncAudioAndSequencers");
