#pragma once
// IWYU pragma private; include "VROSC/BrowserDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ToolDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BrowserDataController)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class BrowserDataController___c__DisplayClass13_0;
}
namespace VROSC {
class BrowserDataModel;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class BrowserDataController;
}
namespace VROSC {
class BrowserDataController___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BrowserDataController);
MARK_REF_PTR_T(::VROSC::BrowserDataController___c__DisplayClass13_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BrowserDataController/<>c__DisplayClass13_0
class CORDL_TYPE BrowserDataController___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::BrowserDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::BrowserDataController___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x1869aa8, size 0xd4, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::BrowserDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::BrowserDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::BrowserDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1869aa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserDataController___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataController___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserDataController___c__DisplayClass13_0(BrowserDataController___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataController___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserDataController___c__DisplayClass13_0(BrowserDataController___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{512};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::BrowserDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserDataController___c__DisplayClass13_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserDataController___c__DisplayClass13_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserDataController___c__DisplayClass13_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.ToolDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BrowserDataController
class CORDL_TYPE BrowserDataController : public ::VROSC::ToolDataController {
public:
// Declarations
using __c__DisplayClass13_0 = ::VROSC::BrowserDataController___c__DisplayClass13_0;

 __declspec(property(get=get_DataModel)) ::VROSC::BrowserDataModel*  DataModel;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

/// @brief Field _transformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method ApplyDefaults, addr 0x18698d4, size 0xb0, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method LoadData, addr 0x1869984, size 0x11c, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::BrowserDataController* New_ctor() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x18696b4, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataModel, addr 0x1869634, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::BrowserDataModel* get_DataModel() ;

/// @brief Method get_HasBeenOpened, addr 0x1869880, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_IsOpen, addr 0x186981c, size 0x24, virtual true, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_TransformData, addr 0x18696ac, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method set_HasBeenOpened, addr 0x186989c, size 0x38, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_IsOpen, addr 0x1869840, size 0x40, virtual true, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserDataController(BrowserDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserDataController(BrowserDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{513};

/// @brief Field _transformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserDataController, ____transformData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserDataController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BrowserDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserDataController*, "VROSC", "BrowserDataController");
NEED_NO_BOX(::VROSC::BrowserDataController___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserDataController___c__DisplayClass13_0*, "VROSC", "BrowserDataController/<>c__DisplayClass13_0");
