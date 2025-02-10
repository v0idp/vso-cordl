#pragma once
// IWYU pragma private; include "VROSC/LoopData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopData)
namespace VROSC::Utils {
class KeyedValue;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
struct Loop_LoopPhase;
}
// Forward declare root types
namespace VROSC {
class LoopData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopData
class CORDL_TYPE LoopData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Audio, put=set_Audio)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  Audio;

 __declspec(property(get=get_Tail, put=set_Tail)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  Tail;

/// @brief Field <Audio>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Audio_k__BackingField, put=__cordl_internal_set__Audio_k__BackingField)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _Audio_k__BackingField;

/// @brief Field <Tail>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Tail_k__BackingField, put=__cordl_internal_set__Tail_k__BackingField)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _Tail_k__BackingField;

/// @brief Field _panKeys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__panKeys, put=__cordl_internal_set__panKeys)) ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  _panKeys;

/// @brief Field _volumeKeys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeKeys, put=__cordl_internal_set__volumeKeys)) ::VROSC::Utils::KeyedValue*  _volumeKeys;

/// @brief Method GetAudioAt, addr 0x1869dc4, size 0x1d0, virtual false, abstract: false, final false
inline float_t GetAudioAt(int32_t  sample, ::VROSC::Loop_LoopPhase  loopPhase, int32_t  playbackLength, int32_t  channel) ;

/// @brief Method GetKeysFromData, addr 0x186a060, size 0x98, virtual false, abstract: false, final false
inline void GetKeysFromData(::StringW  trackID) ;

/// @brief Method GetTrackVolumeMultiplier, addr 0x1869f94, size 0xcc, virtual false, abstract: false, final false
inline float_t GetTrackVolumeMultiplier(int32_t  index, int32_t  playbackLength, int32_t  channel) ;

static inline ::VROSC::LoopData* New_ctor() ;

static inline ::VROSC::LoopData* New_ctor(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  tail, ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  instrumentEvents) ;

/// @brief Method SetAudio, addr 0x1869d30, size 0x8, virtual false, abstract: false, final false
inline void SetAudio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio) ;

/// @brief Method SetPanKeys, addr 0x1869d40, size 0x68, virtual false, abstract: false, final false
inline void SetPanKeys(::ArrayW<float_t,::Array<float_t>*>  firstKeys, ::ArrayW<float_t,::Array<float_t>*>  secondKeys) ;

/// @brief Method SetTail, addr 0x1869d38, size 0x8, virtual false, abstract: false, final false
inline void SetTail(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  tail) ;

/// @brief Method SetVolumeKeys, addr 0x1869da8, size 0x1c, virtual false, abstract: false, final false
inline void SetVolumeKeys(::ArrayW<float_t,::Array<float_t>*>  volumeKeys) ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__Audio_k__BackingField() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__Audio_k__BackingField() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__Tail_k__BackingField() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__Tail_k__BackingField() ;

constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> const& __cordl_internal_get__panKeys() const;

constexpr ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>& __cordl_internal_get__panKeys() ;

constexpr ::VROSC::Utils::KeyedValue* const& __cordl_internal_get__volumeKeys() const;

constexpr ::VROSC::Utils::KeyedValue*& __cordl_internal_get__volumeKeys() ;

constexpr void __cordl_internal_set__Audio_k__BackingField(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__Tail_k__BackingField(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__panKeys(::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  value) ;

constexpr void __cordl_internal_set__volumeKeys(::VROSC::Utils::KeyedValue*  value) ;

/// @brief Method .ctor, addr 0x1869be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1869bec, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  tail, ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  instrumentEvents) ;

/// @brief Method get_Audio, addr 0x1869bcc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> get_Audio() ;

/// @brief Method get_Tail, addr 0x1869bdc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> get_Tail() ;

/// @brief Method set_Audio, addr 0x1869bc4, size 0x8, virtual false, abstract: false, final false
inline void set_Audio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

/// @brief Method set_Tail, addr 0x1869bd4, size 0x8, virtual false, abstract: false, final false
inline void set_Tail(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopData(LoopData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopData(LoopData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{515};

/// @brief Field <Audio>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____Audio_k__BackingField;

/// @brief Field <Tail>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____Tail_k__BackingField;

/// @brief Field _panKeys, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*>  ____panKeys;

/// @brief Field _volumeKeys, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Utils::KeyedValue*  ____volumeKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopData, ____Audio_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopData, ____Tail_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopData, ____panKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopData, ____volumeKeys) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopData*, "VROSC", "LoopData");
