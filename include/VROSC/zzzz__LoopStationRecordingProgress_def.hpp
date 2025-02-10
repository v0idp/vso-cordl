#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingProgress.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationRecordingProgress)
// Forward declare root types
namespace VROSC {
class LoopStationRecordingProgress;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingProgress);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingProgress
class CORDL_TYPE LoopStationRecordingProgress : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SelectedLoopLengthProgress, put=set_SelectedLoopLengthProgress)) float_t  SelectedLoopLengthProgress;

 __declspec(property(get=get_SingleBarProgress, put=set_SingleBarProgress)) float_t  SingleBarProgress;

/// @brief Field <SelectedLoopLengthProgress>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__SelectedLoopLengthProgress_k__BackingField, put=__cordl_internal_set__SelectedLoopLengthProgress_k__BackingField)) float_t  _SelectedLoopLengthProgress_k__BackingField;

/// @brief Field <SingleBarProgress>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__SingleBarProgress_k__BackingField, put=__cordl_internal_set__SingleBarProgress_k__BackingField)) float_t  _SingleBarProgress_k__BackingField;

/// @brief Field _barCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__barCount, put=__cordl_internal_set__barCount)) int32_t  _barCount;

/// @brief Field _lastBarProgress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastBarProgress, put=__cordl_internal_set__lastBarProgress)) float_t  _lastBarProgress;

static inline ::VROSC::LoopStationRecordingProgress* New_ctor() ;

/// @brief Method Reset, addr 0x18ac3a4, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetValue, addr 0x18ac484, size 0x28, virtual false, abstract: false, final false
inline void SetValue(float_t  progressAtSelectedLength, float_t  visualProgress) ;

/// @brief Method Update, addr 0x18ac3ac, size 0xd8, virtual false, abstract: false, final false
inline void Update(float_t  recordingLengthInBars) ;

constexpr float_t const& __cordl_internal_get__SelectedLoopLengthProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SelectedLoopLengthProgress_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SingleBarProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SingleBarProgress_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__barCount() const;

constexpr int32_t& __cordl_internal_get__barCount() ;

constexpr float_t const& __cordl_internal_get__lastBarProgress() const;

constexpr float_t& __cordl_internal_get__lastBarProgress() ;

constexpr void __cordl_internal_set__SelectedLoopLengthProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SingleBarProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__barCount(int32_t  value) ;

constexpr void __cordl_internal_set__lastBarProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x18ac4ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SelectedLoopLengthProgress, addr 0x18ac38c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SelectedLoopLengthProgress() ;

/// @brief Method get_SingleBarProgress, addr 0x18ac39c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SingleBarProgress() ;

/// @brief Method set_SelectedLoopLengthProgress, addr 0x18ac384, size 0x8, virtual false, abstract: false, final false
inline void set_SelectedLoopLengthProgress(float_t  value) ;

/// @brief Method set_SingleBarProgress, addr 0x18ac394, size 0x8, virtual false, abstract: false, final false
inline void set_SingleBarProgress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingProgress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingProgress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingProgress(LoopStationRecordingProgress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingProgress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingProgress(LoopStationRecordingProgress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{709};

/// @brief Field <SelectedLoopLengthProgress>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____SelectedLoopLengthProgress_k__BackingField;

/// @brief Field <SingleBarProgress>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  ____SingleBarProgress_k__BackingField;

/// @brief Field _lastBarProgress, offset: 0x18, size: 0x4, def value: None
 float_t  ____lastBarProgress;

/// @brief Field _barCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____barCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingProgress, ____SelectedLoopLengthProgress_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingProgress, ____SingleBarProgress_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingProgress, ____lastBarProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingProgress, ____barCount) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingProgress, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingProgress);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingProgress*, "VROSC", "LoopStationRecordingProgress");
