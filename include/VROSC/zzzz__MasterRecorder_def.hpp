#pragma once
// IWYU pragma private; include "VROSC/MasterRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__MixerGroupRecorder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MasterRecorder)
// Forward declare root types
namespace VROSC {
class MasterRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MasterRecorder);
// Dependencies VROSC.MixerGroupRecorder
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MasterRecorder
class CORDL_TYPE MasterRecorder : public ::VROSC::MixerGroupRecorder {
public:
// Declarations
/// @brief Method GetMicrophoneLatency, addr 0x17cf2e0, size 0xe4, virtual false, abstract: false, final false
inline int32_t GetMicrophoneLatency() ;

static inline ::VROSC::MasterRecorder* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x17cf3c4, size 0x1f0, virtual true, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method .ctor, addr 0x17cf670, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MasterRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MasterRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MasterRecorder(MasterRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MasterRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MasterRecorder(MasterRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MasterRecorder, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MasterRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MasterRecorder*, "VROSC", "MasterRecorder");
