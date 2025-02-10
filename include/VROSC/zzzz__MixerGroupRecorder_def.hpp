#pragma once
// IWYU pragma private; include "VROSC/MixerGroupRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SourceRecorder_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MixerGroupRecorder)
// Forward declare root types
namespace VROSC {
class MixerGroupRecorder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MixerGroupRecorder);
// Dependencies VROSC.SourceRecorder
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MixerGroupRecorder
class CORDL_TYPE MixerGroupRecorder : public ::VROSC::SourceRecorder {
public:
// Declarations
/// @brief Field _mixerGroupData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixerGroupData, put=__cordl_internal_set__mixerGroupData)) ::ArrayW<float_t,::Array<float_t>*>  _mixerGroupData;

/// @brief Field _routingChannel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__routingChannel, put=__cordl_internal_set__routingChannel)) int32_t  _routingChannel;

static inline ::VROSC::MixerGroupRecorder* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x17cf5b4, size 0xbc, virtual true, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method Setup, addr 0x17cdc48, size 0x8, virtual false, abstract: false, final false
inline void Setup(int32_t  channel) ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__mixerGroupData() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__mixerGroupData() ;

constexpr int32_t const& __cordl_internal_get__routingChannel() const;

constexpr int32_t& __cordl_internal_get__routingChannel() ;

constexpr void __cordl_internal_set__mixerGroupData(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__routingChannel(int32_t  value) ;

/// @brief Method .ctor, addr 0x17cf674, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerGroupRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerGroupRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerGroupRecorder(MixerGroupRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerGroupRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerGroupRecorder(MixerGroupRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{301};

/// @brief Field _mixerGroupData, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____mixerGroupData;

/// @brief Field _routingChannel, offset: 0x48, size: 0x4, def value: None
 int32_t  ____routingChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MixerGroupRecorder, ____mixerGroupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MixerGroupRecorder, ____routingChannel) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MixerGroupRecorder, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MixerGroupRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MixerGroupRecorder*, "VROSC", "MixerGroupRecorder");
