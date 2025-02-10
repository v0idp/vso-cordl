#pragma once
// IWYU pragma private; include "VROSC/SamplerWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AudioHelmInstrumentWrapper_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SamplerWrapper)
namespace AudioHelm {
class Sampler;
}
// Forward declare root types
namespace VROSC {
class SamplerWrapper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SamplerWrapper);
// Dependencies VROSC.AudioHelmInstrumentWrapper
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SamplerWrapper
class CORDL_TYPE SamplerWrapper : public ::VROSC::AudioHelmInstrumentWrapper {
public:
// Declarations
/// @brief Field _sampler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampler, put=__cordl_internal_set__sampler)) ::UnityW<::AudioHelm::Sampler>  _sampler;

/// @brief Method AllNotesOff, addr 0x17cc1b0, size 0x1c, virtual true, abstract: false, final false
inline void AllNotesOff() ;

static inline ::VROSC::SamplerWrapper* New_ctor() ;

/// @brief Method NoteOff, addr 0x17cc194, size 0x1c, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x17cc178, size 0x1c, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity, double_t  predictedDspTime, float_t  pitch, float_t  volume) ;

/// @brief Method ResetInstrument, addr 0x17cc14c, size 0x2c, virtual false, abstract: false, final false
inline void ResetInstrument() ;

/// @brief Method SetPitchBend, addr 0x17cc1cc, size 0x4, virtual true, abstract: false, final false
inline void SetPitchBend(float_t  pitchBendValue) ;

/// @brief Method Setup, addr 0x17cc0dc, size 0x70, virtual true, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::AudioHelm::Sampler> const& __cordl_internal_get__sampler() const;

constexpr ::UnityW<::AudioHelm::Sampler>& __cordl_internal_get__sampler() ;

constexpr void __cordl_internal_set__sampler(::UnityW<::AudioHelm::Sampler>  value) ;

/// @brief Method .ctor, addr 0x17cc1d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SamplerWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SamplerWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SamplerWrapper(SamplerWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SamplerWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SamplerWrapper(SamplerWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{289};

/// @brief Field _sampler, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::Sampler>  ____sampler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SamplerWrapper, ____sampler) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SamplerWrapper, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SamplerWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SamplerWrapper*, "VROSC", "SamplerWrapper");
