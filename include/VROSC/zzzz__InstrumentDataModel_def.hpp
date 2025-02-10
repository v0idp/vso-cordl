#pragma once
// IWYU pragma private; include "VROSC/InstrumentDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class InstrumentDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentDataModel);
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentDataModel
class CORDL_TYPE InstrumentDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field HasBeenOpened, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasBeenOpened, put=__cordl_internal_set_HasBeenOpened)) bool  HasBeenOpened;

/// @brief Field Id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Quantize, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_Quantize, put=__cordl_internal_set_Quantize)) bool  Quantize;

/// @brief Field QuantizeBeatDivision, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuantizeBeatDivision, put=__cordl_internal_set_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

/// @brief Field QuantizeTolerance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuantizeTolerance, put=__cordl_internal_set_QuantizeTolerance)) float_t  QuantizeTolerance;

/// @brief Field SelectedChannel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedChannel, put=__cordl_internal_set_SelectedChannel)) int32_t  SelectedChannel;

/// @brief Field SpatialAnchorsUUIDs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpatialAnchorsUUIDs, put=__cordl_internal_set_SpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchorsUUIDs;

/// @brief Field TransformData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

/// @brief Field Volume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

static inline ::VROSC::InstrumentDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_HasBeenOpened() const;

constexpr bool& __cordl_internal_get_HasBeenOpened() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_Quantize() const;

constexpr bool& __cordl_internal_get_Quantize() ;

constexpr int32_t const& __cordl_internal_get_QuantizeBeatDivision() const;

constexpr int32_t& __cordl_internal_get_QuantizeBeatDivision() ;

constexpr float_t const& __cordl_internal_get_QuantizeTolerance() const;

constexpr float_t& __cordl_internal_get_QuantizeTolerance() ;

constexpr int32_t const& __cordl_internal_get_SelectedChannel() const;

constexpr int32_t& __cordl_internal_get_SelectedChannel() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_SpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SpatialAnchorsUUIDs() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_HasBeenOpened(bool  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Quantize(bool  value) ;

constexpr void __cordl_internal_set_QuantizeBeatDivision(int32_t  value) ;

constexpr void __cordl_internal_set_QuantizeTolerance(float_t  value) ;

constexpr void __cordl_internal_set_SelectedChannel(int32_t  value) ;

constexpr void __cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

/// @brief Method .ctor, addr 0x183d520, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentDataModel(InstrumentDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentDataModel(InstrumentDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{385};

/// @brief Field Id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field TransformData, offset: 0x20, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field SelectedChannel, offset: 0x28, size: 0x4, def value: None
 int32_t  ___SelectedChannel;

/// @brief Field Quantize, offset: 0x2c, size: 0x1, def value: None
 bool  ___Quantize;

/// @brief Field QuantizeTolerance, offset: 0x30, size: 0x4, def value: None
 float_t  ___QuantizeTolerance;

/// @brief Field QuantizeBeatDivision, offset: 0x34, size: 0x4, def value: None
 int32_t  ___QuantizeBeatDivision;

/// @brief Field HasBeenOpened, offset: 0x38, size: 0x1, def value: None
 bool  ___HasBeenOpened;

/// @brief Field Volume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field SpatialAnchorsUUIDs, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___SpatialAnchorsUUIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentDataModel, ___Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___TransformData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___SelectedChannel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___Quantize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___QuantizeTolerance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___QuantizeBeatDivision) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___HasBeenOpened) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___Volume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentDataModel, ___SpatialAnchorsUUIDs) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentDataModel, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentDataModel*, "VROSC", "InstrumentDataModel");
