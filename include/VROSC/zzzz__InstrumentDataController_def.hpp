#pragma once
// IWYU pragma private; include "VROSC/InstrumentDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentDataController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class InstrumentDataModel;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class InstrumentDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentDataController);
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentDataController
class CORDL_TYPE InstrumentDataController : public ::VROSC::BaseDataController {
public:
// Declarations
 __declspec(property(get=get_FrameIsActive, put=set_FrameIsActive)) bool  FrameIsActive;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_InstrumentDataModel)) ::VROSC::InstrumentDataModel*  InstrumentDataModel;

 __declspec(property(get=get_Quantize, put=set_Quantize)) bool  Quantize;

 __declspec(property(get=get_QuantizeBeatDivision, put=set_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

 __declspec(property(get=get_QuantizeTolerance, put=set_QuantizeTolerance)) float_t  QuantizeTolerance;

 __declspec(property(get=get_SelectedChannel, put=set_SelectedChannel)) int32_t  SelectedChannel;

 __declspec(property(get=get_SpatialAnchors)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchors;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Method AddSpatialAnchor, addr 0x183d27c, size 0xe8, virtual false, abstract: false, final false
inline void AddSpatialAnchor(::StringW  uuid) ;

/// @brief Method ApplyDefaults, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

static inline ::VROSC::InstrumentDataController* New_ctor() ;

/// @brief Method RemoveSpatialAnchor, addr 0x183d364, size 0xa4, virtual false, abstract: false, final false
inline void RemoveSpatialAnchor(::StringW  uuid) ;

/// @brief Method .ctor, addr 0x183d518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FrameIsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_FrameIsActive() ;

/// @brief Method get_HasBeenOpened, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_InstrumentDataModel, addr 0x183d184, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::InstrumentDataModel* get_InstrumentDataModel() ;

/// @brief Method get_Quantize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Quantize() ;

/// @brief Method get_QuantizeBeatDivision, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_QuantizeBeatDivision() ;

/// @brief Method get_QuantizeTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_QuantizeTolerance() ;

/// @brief Method get_SelectedChannel, addr 0x183d408, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_SelectedChannel() ;

/// @brief Method get_SpatialAnchors, addr 0x183d1fc, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_SpatialAnchors() ;

/// @brief Method get_TransformData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_Volume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_FrameIsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_FrameIsActive(bool  value) ;

/// @brief Method set_HasBeenOpened, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_Quantize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Quantize(bool  value) ;

/// @brief Method set_QuantizeBeatDivision, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_QuantizeBeatDivision(int32_t  value) ;

/// @brief Method set_QuantizeTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_QuantizeTolerance(float_t  value) ;

/// @brief Method set_SelectedChannel, addr 0x183d424, size 0xf4, virtual false, abstract: false, final false
inline void set_SelectedChannel(int32_t  value) ;

/// @brief Method set_Volume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentDataController(InstrumentDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentDataController(InstrumentDataController const& ) = delete;

/// @brief Field MaxChannel offset 0xffffffff size 0x4
static constexpr int32_t  MaxChannel{static_cast<int32_t>(0x10)};

/// @brief Field MinChannel offset 0xffffffff size 0x4
static constexpr int32_t  MinChannel{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentDataController*, "VROSC", "InstrumentDataController");
