#pragma once
// IWYU pragma private; include "VROSC/SynthDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynthDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class OctaveData;
}
namespace VROSC {
class ScaleData;
}
namespace VROSC {
class SynthData;
}
// Forward declare root types
namespace VROSC {
class SynthDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthDataModel);
// Dependencies VROSC.InstrumentDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthDataModel
class CORDL_TYPE SynthDataModel : public ::VROSC::InstrumentDataModel {
public:
// Declarations
/// @brief Field ArpeggiatorLinkHands, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_ArpeggiatorLinkHands, put=__cordl_internal_set_ArpeggiatorLinkHands)) bool  ArpeggiatorLinkHands;

/// @brief Field FrameIsActive, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_FrameIsActive, put=__cordl_internal_set_FrameIsActive)) bool  FrameIsActive;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field OctaveData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OctaveData, put=__cordl_internal_set_OctaveData)) ::VROSC::OctaveData*  OctaveData;

/// @brief Field PatchesFilenames, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PatchesFilenames, put=__cordl_internal_set_PatchesFilenames)) ::System::Collections::Generic::List_1<::StringW>*  PatchesFilenames;

/// @brief Field ScalesData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalesData, put=__cordl_internal_set_ScalesData)) ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  ScalesData;

/// @brief Field SelectedPatchName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedPatchName, put=__cordl_internal_set_SelectedPatchName)) ::StringW  SelectedPatchName;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Method CopyOldSynthData, addr 0x1841354, size 0x2ec, virtual false, abstract: false, final false
inline void CopyOldSynthData(::VROSC::SynthData*  oldSynthData) ;

static inline ::VROSC::SynthDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_ArpeggiatorLinkHands() const;

constexpr bool& __cordl_internal_get_ArpeggiatorLinkHands() ;

constexpr bool const& __cordl_internal_get_FrameIsActive() const;

constexpr bool& __cordl_internal_get_FrameIsActive() ;

constexpr ::VROSC::OctaveData* const& __cordl_internal_get_OctaveData() const;

constexpr ::VROSC::OctaveData*& __cordl_internal_get_OctaveData() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PatchesFilenames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PatchesFilenames() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>* const& __cordl_internal_get_ScalesData() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*& __cordl_internal_get_ScalesData() ;

constexpr ::StringW const& __cordl_internal_get_SelectedPatchName() const;

constexpr ::StringW& __cordl_internal_get_SelectedPatchName() ;

constexpr void __cordl_internal_set_ArpeggiatorLinkHands(bool  value) ;

constexpr void __cordl_internal_set_FrameIsActive(bool  value) ;

constexpr void __cordl_internal_set_OctaveData(::VROSC::OctaveData*  value) ;

constexpr void __cordl_internal_set_PatchesFilenames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ScalesData(::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  value) ;

constexpr void __cordl_internal_set_SelectedPatchName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1841210, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1844158, size 0x4c, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x18441a4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthDataModel(SynthDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthDataModel(SynthDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{405};

/// @brief Field OctaveData, offset: 0x48, size: 0x8, def value: None
 ::VROSC::OctaveData*  ___OctaveData;

/// @brief Field ScalesData, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  ___ScalesData;

/// @brief Field SelectedPatchName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___SelectedPatchName;

/// @brief Field PatchesFilenames, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PatchesFilenames;

/// @brief Field FrameIsActive, offset: 0x68, size: 0x1, def value: None
 bool  ___FrameIsActive;

/// @brief Field ArpeggiatorLinkHands, offset: 0x69, size: 0x1, def value: None
 bool  ___ArpeggiatorLinkHands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataModel, ___OctaveData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataModel, ___ScalesData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataModel, ___SelectedPatchName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataModel, ___PatchesFilenames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataModel, ___FrameIsActive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataModel, ___ArpeggiatorLinkHands) == 0x69, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataModel, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataModel*, "VROSC", "SynthDataModel");
