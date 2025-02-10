#pragma once
// IWYU pragma private; include "VROSC/ToolController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ToolController)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class ToolDataController;
}
namespace VROSC {
class ToolSettings;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class ToolController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToolController);
// Dependencies VROSC.IAnchoredObject, VROSC.WidgetController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToolController
class CORDL_TYPE ToolController : public ::VROSC::WidgetController {
public:
// Declarations
 __declspec(property(get=get_ToolSettings)) ::UnityW<::VROSC::ToolSettings>  ToolSettings;

/// @brief Field _allowInRemoteMode, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowInRemoteMode, put=__cordl_internal_set__allowInRemoteMode)) bool  _allowInRemoteMode;

/// @brief Field _dataController, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::ToolDataController*  _dataController;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x179ba6c, size 0x1c, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method GetTransformMover, addr 0x179baa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> GetTransformMover() ;

static inline ::VROSC::ToolController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x179adf8, size 0xfc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x179ba88, size 0x1c, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method Setup, addr 0x179a044, size 0xf0, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method SynthesizerSourceChanged, addr 0x179bc24, size 0x24, virtual true, abstract: false, final false
inline void SynthesizerSourceChanged(bool  useExternal) ;

/// @brief Method Toggle, addr 0x179a138, size 0x60, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method TransformChanged, addr 0x179baac, size 0x178, virtual true, abstract: false, final false
inline void TransformChanged(::VROSC::TransformMover*  mover) ;

/// @brief Method UserDataLoaded, addr 0x179b638, size 0x2dc, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method <UserDataLoaded>b__9_0, addr 0x179bc48, size 0x158, virtual false, abstract: false, final false
inline void _UserDataLoaded_b__9_0(bool  success, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method <UserDataLoaded>b__9_1, addr 0x179bda0, size 0xc8, virtual false, abstract: false, final false
inline void _UserDataLoaded_b__9_1(::VROSC::Error  error) ;

constexpr bool const& __cordl_internal_get__allowInRemoteMode() const;

constexpr bool& __cordl_internal_get__allowInRemoteMode() ;

constexpr ::VROSC::ToolDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::ToolDataController*& __cordl_internal_get__dataController() ;

constexpr void __cordl_internal_set__allowInRemoteMode(bool  value) ;

constexpr void __cordl_internal_set__dataController(::VROSC::ToolDataController*  value) ;

/// @brief Method .ctor, addr 0x179b9e4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ToolSettings, addr 0x179b9f4, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ToolSettings> get_ToolSettings() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToolController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToolController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToolController(ToolController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToolController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToolController(ToolController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1359};

/// @brief Field _allowInRemoteMode, offset: 0x70, size: 0x1, def value: None
 bool  ____allowInRemoteMode;

/// @brief Field _dataController, offset: 0x78, size: 0x8, def value: None
 ::VROSC::ToolDataController*  ____dataController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToolController, ____allowInRemoteMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToolController, ____dataController) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToolController, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToolController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToolController*, "VROSC", "ToolController");
