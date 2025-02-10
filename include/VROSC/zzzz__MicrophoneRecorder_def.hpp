#pragma once
// IWYU pragma private; include "VROSC/MicrophoneRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SourceRecorder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneRecorder)
// Forward declare root types
namespace VROSC {
class MicrophoneRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneRecorder);
// Dependencies VROSC.SourceRecorder
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneRecorder
class CORDL_TYPE MicrophoneRecorder : public ::VROSC::SourceRecorder {
public:
// Declarations
/// @brief Field _effectData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectData, put=__cordl_internal_set__effectData)) ::ArrayW<float_t,::Array<float_t>*>  _effectData;

/// @brief Field _microphoneData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneData, put=__cordl_internal_set__microphoneData)) ::ArrayW<float_t,::Array<float_t>*>  _microphoneData;

/// @brief Method ClearMicrophoneData, addr 0x17ce07c, size 0x24, virtual false, abstract: false, final false
inline void ClearMicrophoneData() ;

/// @brief Method GetRawMicrophoneRecordingData, addr 0x17cf6cc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetRawMicrophoneRecordingData() ;

static inline ::VROSC::MicrophoneRecorder* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x17cf6d4, size 0xdc, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method SetMicrophoneData, addr 0x17ce038, size 0x2c, virtual false, abstract: false, final false
inline void SetMicrophoneData(::ArrayW<float_t,::Array<float_t>*>  buffer) ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__effectData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__effectData() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__microphoneData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__microphoneData() ;

constexpr void __cordl_internal_set__effectData(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__microphoneData(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x17cf854, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneRecorder(MicrophoneRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneRecorder(MicrophoneRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{300};

/// @brief Field _effectData, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____effectData;

/// @brief Field _microphoneData, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____microphoneData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneRecorder, ____effectData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneRecorder, ____microphoneData) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneRecorder, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneRecorder*, "VROSC", "MicrophoneRecorder");
