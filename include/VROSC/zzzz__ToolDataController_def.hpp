#pragma once
// IWYU pragma private; include "VROSC/ToolDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ToolDataController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class ToolDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToolDataController);
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToolDataController
class CORDL_TYPE ToolDataController : public ::VROSC::BaseDataController {
public:
// Declarations
 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_SpatialAnchors)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchors;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

/// @brief Method AddSpatialAnchor, addr 0x1876700, size 0xe8, virtual false, abstract: false, final false
inline void AddSpatialAnchor(::StringW  uuid) ;

/// @brief Method ApplyDefaults, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

static inline ::VROSC::ToolDataController* New_ctor() ;

/// @brief Method RemoveSpatialAnchor, addr 0x18767e8, size 0xa4, virtual false, abstract: false, final false
inline void RemoveSpatialAnchor(::StringW  uuid) ;

/// @brief Method .ctor, addr 0x1873a2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasBeenOpened, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_IsOpen, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_SpatialAnchors, addr 0x1876680, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_SpatialAnchors() ;

/// @brief Method get_TransformData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method set_HasBeenOpened, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_IsOpen, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToolDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToolDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToolDataController(ToolDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToolDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToolDataController(ToolDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{552};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ToolDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToolDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToolDataController*, "VROSC", "ToolDataController");
