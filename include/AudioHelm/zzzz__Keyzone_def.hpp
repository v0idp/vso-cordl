#pragma once
// IWYU pragma private; include "AudioHelm/Keyzone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Keyzone)
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace AudioHelm {
class Keyzone;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::Keyzone);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Keyzone
class CORDL_TYPE Keyzone : public ::System::Object {
public:
// Declarations
/// @brief Field audioClip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field lastScheduled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastScheduled, put=__cordl_internal_set_lastScheduled)) double_t  lastScheduled;

/// @brief Field maxKey, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxKey, put=__cordl_internal_set_maxKey)) int32_t  maxKey;

/// @brief Field maxVelocity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVelocity, put=__cordl_internal_set_maxVelocity)) float_t  maxVelocity;

/// @brief Field minKey, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minKey, put=__cordl_internal_set_minKey)) int32_t  minKey;

/// @brief Field minVelocity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVelocity, put=__cordl_internal_set_minVelocity)) float_t  minVelocity;

/// @brief Field mixer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixer, put=__cordl_internal_set_mixer)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  mixer;

/// @brief Field rootKey, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rootKey, put=__cordl_internal_set_rootKey)) int32_t  rootKey;

static inline ::AudioHelm::Keyzone* New_ctor() ;

/// @brief Method ValidForNote, addr 0x182399c, size 0x8c, virtual false, abstract: false, final false
inline bool ValidForNote(int32_t  note) ;

/// @brief Method ValidForNote, addr 0x1823a28, size 0x44, virtual false, abstract: false, final false
inline bool ValidForNote(int32_t  note, float_t  velocity) ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr double_t const& __cordl_internal_get_lastScheduled() const;

constexpr double_t& __cordl_internal_get_lastScheduled() ;

constexpr int32_t const& __cordl_internal_get_maxKey() const;

constexpr int32_t& __cordl_internal_get_maxKey() ;

constexpr float_t const& __cordl_internal_get_maxVelocity() const;

constexpr float_t& __cordl_internal_get_maxVelocity() ;

constexpr int32_t const& __cordl_internal_get_minKey() const;

constexpr int32_t& __cordl_internal_get_minKey() ;

constexpr float_t const& __cordl_internal_get_minVelocity() const;

constexpr float_t& __cordl_internal_get_minVelocity() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_mixer() ;

constexpr int32_t const& __cordl_internal_get_rootKey() const;

constexpr int32_t& __cordl_internal_get_rootKey() ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_lastScheduled(double_t  value) ;

constexpr void __cordl_internal_set_maxKey(int32_t  value) ;

constexpr void __cordl_internal_set_maxVelocity(float_t  value) ;

constexpr void __cordl_internal_set_minKey(int32_t  value) ;

constexpr void __cordl_internal_set_minVelocity(float_t  value) ;

constexpr void __cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_rootKey(int32_t  value) ;

/// @brief Method .ctor, addr 0x1823a6c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Keyzone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Keyzone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Keyzone(Keyzone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Keyzone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Keyzone(Keyzone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1884};

/// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// @brief Field mixer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___mixer;

/// @brief Field rootKey, offset: 0x20, size: 0x4, def value: None
 int32_t  ___rootKey;

/// @brief Field minKey, offset: 0x24, size: 0x4, def value: None
 int32_t  ___minKey;

/// @brief Field maxKey, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxKey;

/// @brief Field minVelocity, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minVelocity;

/// @brief Field maxVelocity, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxVelocity;

/// @brief Field lastScheduled, offset: 0x38, size: 0x8, def value: None
 double_t  ___lastScheduled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Keyzone, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___mixer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___rootKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___minKey) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___maxKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___minVelocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___maxVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Keyzone, ___lastScheduled) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Keyzone, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::Keyzone);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Keyzone*, "AudioHelm", "Keyzone");
