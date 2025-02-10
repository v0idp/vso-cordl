#pragma once
// IWYU pragma private; include "VROSC/HelmWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AudioHelmInstrumentWrapper_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmWrapper)
namespace AudioHelm {
class HelmController;
}
namespace AudioHelm {
class HelmPatchFormat;
}
namespace AudioHelm {
class HelmPatch;
}
namespace AudioHelm {
struct Param;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class PatchSettings;
}
// Forward declare root types
namespace VROSC {
class HelmWrapper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HelmWrapper);
// Dependencies VROSC.AudioHelmInstrumentWrapper, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HelmWrapper
class CORDL_TYPE HelmWrapper : public ::VROSC::AudioHelmInstrumentWrapper {
public:
// Declarations
 __declspec(property(get=get_AssignedHand, put=set_AssignedHand)) ::VROSC::HandType  AssignedHand;

 __declspec(property(get=get_CurrentPatch)) ::AudioHelm::HelmPatchFormat*  CurrentPatch;

/// @brief Field Polyphony, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Polyphony, put=setStaticF_Polyphony)) int32_t  Polyphony;

/// @brief Field <AssignedHand>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__AssignedHand_k__BackingField, put=__cordl_internal_set__AssignedHand_k__BackingField)) ::VROSC::HandType  _AssignedHand_k__BackingField;

/// @brief Field _helmController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__helmController, put=__cordl_internal_set__helmController)) ::UnityW<::AudioHelm::HelmController>  _helmController;

/// @brief Field _helmPatch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__helmPatch, put=__cordl_internal_set__helmPatch)) ::UnityW<::AudioHelm::HelmPatch>  _helmPatch;

/// @brief Field _noteHistory, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteHistory, put=__cordl_internal_set__noteHistory)) ::ArrayW<int32_t,::Array<int32_t>*>  _noteHistory;

/// @brief Field _noteHistoryWritePosition, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__noteHistoryWritePosition, put=__cordl_internal_set__noteHistoryWritePosition)) int32_t  _noteHistoryWritePosition;

/// @brief Field _patchSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__patchSettings, put=__cordl_internal_set__patchSettings)) ::VROSC::PatchSettings*  _patchSettings;

/// @brief Method AllNotesOff, addr 0x17c8b60, size 0x1c, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method ApplyGlobalOverloadSettings, addr 0x17c8a50, size 0x50, virtual false, abstract: false, final false
inline void ApplyGlobalOverloadSettings() ;

/// @brief Method IsPlaying, addr 0x17c8e98, size 0x64, virtual false, abstract: false, final false
inline bool IsPlaying() ;

/// @brief Method LoadPatch, addr 0x17c891c, size 0x134, virtual false, abstract: false, final false
inline void LoadPatch(::VROSC::PatchSettings*  patchSettings) ;

static inline ::VROSC::HelmWrapper* New_ctor() ;

/// @brief Method NoteOff, addr 0x17c8b7c, size 0x1c, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x17c8b98, size 0x2e4, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity, double_t  predictedDspTime, float_t  pitch, float_t  volume) ;

/// @brief Method ReloadPatch, addr 0x17c8aa0, size 0x2c, virtual false, abstract: false, final false
inline void ReloadPatch() ;

/// @brief Method SetParameterPercent, addr 0x17c8b18, size 0x48, virtual false, abstract: false, final false
inline void SetParameterPercent(::AudioHelm::Param  parameter, float_t  newValue) ;

/// @brief Method SetParameterValue, addr 0x17c8afc, size 0x1c, virtual false, abstract: false, final false
inline void SetParameterValue(::AudioHelm::Param  parameter, float_t  newValue) ;

/// @brief Method SetPitchBend, addr 0x17c8e7c, size 0x1c, virtual true, abstract: false, final false
inline void SetPitchBend(float_t  pitchBendValue) ;

/// @brief Method Setup, addr 0x17c88a0, size 0x7c, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method UsesPatch, addr 0x17c8efc, size 0x1c, virtual false, abstract: false, final false
inline bool UsesPatch(::VROSC::PatchSettings*  patchSettings) ;

constexpr ::VROSC::HandType const& __cordl_internal_get__AssignedHand_k__BackingField() const;

constexpr ::VROSC::HandType& __cordl_internal_get__AssignedHand_k__BackingField() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get__helmController() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get__helmController() ;

constexpr ::UnityW<::AudioHelm::HelmPatch> const& __cordl_internal_get__helmPatch() const;

constexpr ::UnityW<::AudioHelm::HelmPatch>& __cordl_internal_get__helmPatch() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__noteHistory() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__noteHistory() ;

constexpr int32_t const& __cordl_internal_get__noteHistoryWritePosition() const;

constexpr int32_t& __cordl_internal_get__noteHistoryWritePosition() ;

constexpr ::VROSC::PatchSettings* const& __cordl_internal_get__patchSettings() const;

constexpr ::VROSC::PatchSettings*& __cordl_internal_get__patchSettings() ;

constexpr void __cordl_internal_set__AssignedHand_k__BackingField(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__helmController(::UnityW<::AudioHelm::HelmController>  value) ;

constexpr void __cordl_internal_set__helmPatch(::UnityW<::AudioHelm::HelmPatch>  value) ;

constexpr void __cordl_internal_set__noteHistory(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__noteHistoryWritePosition(int32_t  value) ;

constexpr void __cordl_internal_set__patchSettings(::VROSC::PatchSettings*  value) ;

/// @brief Method .ctor, addr 0x17c8f18, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_Polyphony() ;

/// @brief Method get_AssignedHand, addr 0x17c8890, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HandType get_AssignedHand() ;

/// @brief Method get_CurrentPatch, addr 0x17c8874, size 0x1c, virtual false, abstract: false, final false
inline ::AudioHelm::HelmPatchFormat* get_CurrentPatch() ;

static inline void setStaticF_Polyphony(int32_t  value) ;

/// @brief Method set_AssignedHand, addr 0x17c8898, size 0x8, virtual false, abstract: false, final false
inline void set_AssignedHand(::VROSC::HandType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmWrapper(HelmWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmWrapper(HelmWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{283};

/// @brief Field _noteHistory, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____noteHistory;

/// @brief Field _noteHistoryWritePosition, offset: 0x28, size: 0x4, def value: None
 int32_t  ____noteHistoryWritePosition;

/// @brief Field _helmController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ____helmController;

/// @brief Field _helmPatch, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmPatch>  ____helmPatch;

/// @brief Field _patchSettings, offset: 0x40, size: 0x8, def value: None
 ::VROSC::PatchSettings*  ____patchSettings;

/// @brief Field <AssignedHand>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::VROSC::HandType  ____AssignedHand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HelmWrapper, ____noteHistory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HelmWrapper, ____noteHistoryWritePosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HelmWrapper, ____helmController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HelmWrapper, ____helmPatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HelmWrapper, ____patchSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::HelmWrapper, ____AssignedHand_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HelmWrapper, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HelmWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HelmWrapper*, "VROSC", "HelmWrapper");
