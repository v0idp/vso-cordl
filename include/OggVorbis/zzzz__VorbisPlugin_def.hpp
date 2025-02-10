#pragma once
// IWYU pragma private; include "OggVorbis/VorbisPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VorbisPlugin)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace OggVorbis {
class VorbisPlugin;
}
// Write type traits
MARK_REF_PTR_T(::OggVorbis::VorbisPlugin);
// Dependencies System.Object
namespace OggVorbis {
// Is value type: false
// CS Name: OggVorbis.VorbisPlugin
class CORDL_TYPE VorbisPlugin : public ::System::Object {
public:
// Declarations
/// @brief Method GetOggVorbis, addr 0x319cf24, size 0x344, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOggVorbis(::UnityEngine::AudioClip*  audioClip, float_t  quality, int32_t  samplesToRead) ;

/// @brief Method Load, addr 0x319d268, size 0x2a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Load(::StringW  filePath, int32_t  maxSamplesToRead) ;

/// @brief Method Save, addr 0x319ca5c, size 0x2bc, virtual false, abstract: false, final false
static inline void Save(::StringW  filePath, ::UnityEngine::AudioClip*  audioClip, float_t  quality, int32_t  samplesToRead) ;

/// @brief Method Save, addr 0x319cd18, size 0x20c, virtual false, abstract: false, final false
static inline void Save(::StringW  filePath, ::ArrayW<float_t,::Array<float_t>*>  audioData, int32_t  channels, int32_t  frequency, float_t  quality, int32_t  samplesToRead) ;

/// @brief Method ToAudioClip, addr 0x319d508, size 0x2a8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> ToAudioClip(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::StringW  audioClipName, int32_t  maxSamplesToRead) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VorbisPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VorbisPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VorbisPlugin(VorbisPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VorbisPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VorbisPlugin(VorbisPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OggVorbis::VorbisPlugin, 0x10>, "Size mismatch!");

} // namespace end def OggVorbis
NEED_NO_BOX(::OggVorbis::VorbisPlugin);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbis::VorbisPlugin*, "OggVorbis", "VorbisPlugin");
