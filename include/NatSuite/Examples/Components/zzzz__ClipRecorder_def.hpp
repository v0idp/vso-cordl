#pragma once
// IWYU pragma private; include "NatSuite/Examples/Components/ClipRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipRecorder)
namespace System::IO {
class MemoryStream;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace NatSuite::Examples::Components {
class ClipRecorder;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Examples::Components::ClipRecorder);
// Dependencies System.Object
namespace NatSuite::Examples::Components {
// Is value type: false
// CS Name: NatSuite.Examples.Components.ClipRecorder
class CORDL_TYPE ClipRecorder : public ::System::Object {
public:
// Declarations
/// @brief Field audioBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioBuffer, put=__cordl_internal_set_audioBuffer)) ::System::IO::MemoryStream*  audioBuffer;

/// @brief Field channelCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelCount, put=__cordl_internal_set_channelCount)) int32_t  channelCount;

/// @brief Field sampleRate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleRate, put=__cordl_internal_set_sampleRate)) int32_t  sampleRate;

/// @brief Method CommitSamples, addr 0x18024b8, size 0xb0, virtual false, abstract: false, final false
inline void CommitSamples(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

/// @brief Method FinishWriting, addr 0x1800ae4, size 0x180, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> FinishWriting() ;

static inline ::NatSuite::Examples::Components::ClipRecorder* New_ctor(int32_t  sampleRate, int32_t  channelCount) ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_audioBuffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_audioBuffer() ;

constexpr int32_t const& __cordl_internal_get_channelCount() const;

constexpr int32_t& __cordl_internal_get_channelCount() ;

constexpr int32_t const& __cordl_internal_get_sampleRate() const;

constexpr int32_t& __cordl_internal_get_sampleRate() ;

constexpr void __cordl_internal_set_audioBuffer(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_channelCount(int32_t  value) ;

constexpr void __cordl_internal_set_sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x1800974, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  channelCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipRecorder(ClipRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipRecorder(ClipRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1793};

/// @brief Field sampleRate, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sampleRate;

/// @brief Field channelCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___channelCount;

/// @brief Field audioBuffer, offset: 0x18, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___audioBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::Components::ClipRecorder, ___sampleRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::ClipRecorder, ___channelCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::Components::ClipRecorder, ___audioBuffer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::Components::ClipRecorder, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Examples::Components
NEED_NO_BOX(::NatSuite::Examples::Components::ClipRecorder);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::Components::ClipRecorder*, "NatSuite.Examples.Components", "ClipRecorder");
