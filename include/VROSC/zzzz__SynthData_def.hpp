#pragma once
// IWYU pragma private; include "VROSC/SynthData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthData)
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
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class SynthData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthData
class CORDL_TYPE SynthData : public ::System::Object {
public:
// Declarations
/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field OctaveData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OctaveData, put=__cordl_internal_set_OctaveData)) ::VROSC::OctaveData*  OctaveData;

/// @brief Field PatchesFilenames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PatchesFilenames, put=__cordl_internal_set_PatchesFilenames)) ::System::Collections::Generic::List_1<::StringW>*  PatchesFilenames;

/// @brief Field Quantize, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_Quantize, put=__cordl_internal_set_Quantize)) bool  Quantize;

/// @brief Field QuantizeBeatDivision, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuantizeBeatDivision, put=__cordl_internal_set_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

/// @brief Field QuantizeTolerance, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuantizeTolerance, put=__cordl_internal_set_QuantizeTolerance)) float_t  QuantizeTolerance;

/// @brief Field ScalesData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalesData, put=__cordl_internal_set_ScalesData)) ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  ScalesData;

/// @brief Field SelectedPatchName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedPatchName, put=__cordl_internal_set_SelectedPatchName)) ::StringW  SelectedPatchName;

/// @brief Field TransformData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

static inline ::VROSC::SynthData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::VROSC::OctaveData* const& __cordl_internal_get_OctaveData() const;

constexpr ::VROSC::OctaveData*& __cordl_internal_get_OctaveData() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PatchesFilenames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PatchesFilenames() ;

constexpr bool const& __cordl_internal_get_Quantize() const;

constexpr bool& __cordl_internal_get_Quantize() ;

constexpr int32_t const& __cordl_internal_get_QuantizeBeatDivision() const;

constexpr int32_t& __cordl_internal_get_QuantizeBeatDivision() ;

constexpr float_t const& __cordl_internal_get_QuantizeTolerance() const;

constexpr float_t& __cordl_internal_get_QuantizeTolerance() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>* const& __cordl_internal_get_ScalesData() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*& __cordl_internal_get_ScalesData() ;

constexpr ::StringW const& __cordl_internal_get_SelectedPatchName() const;

constexpr ::StringW& __cordl_internal_get_SelectedPatchName() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_OctaveData(::VROSC::OctaveData*  value) ;

constexpr void __cordl_internal_set_PatchesFilenames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Quantize(bool  value) ;

constexpr void __cordl_internal_set_QuantizeBeatDivision(int32_t  value) ;

constexpr void __cordl_internal_set_QuantizeTolerance(float_t  value) ;

constexpr void __cordl_internal_set_ScalesData(::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  value) ;

constexpr void __cordl_internal_set_SelectedPatchName(::StringW  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

/// @brief Method .ctor, addr 0x1844c78, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthData(SynthData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthData(SynthData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{413};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field TransformData, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field OctaveData, offset: 0x20, size: 0x8, def value: None
 ::VROSC::OctaveData*  ___OctaveData;

/// @brief Field ScalesData, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*  ___ScalesData;

/// @brief Field SelectedPatchName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___SelectedPatchName;

/// @brief Field PatchesFilenames, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PatchesFilenames;

/// @brief Field Quantize, offset: 0x40, size: 0x1, def value: None
 bool  ___Quantize;

/// @brief Field QuantizeTolerance, offset: 0x44, size: 0x4, def value: None
 float_t  ___QuantizeTolerance;

/// @brief Field QuantizeBeatDivision, offset: 0x48, size: 0x4, def value: None
 int32_t  ___QuantizeBeatDivision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthData, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___TransformData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___OctaveData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___ScalesData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___SelectedPatchName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___PatchesFilenames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___Quantize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___QuantizeTolerance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthData, ___QuantizeBeatDivision) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthData, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthData*, "VROSC", "SynthData");
