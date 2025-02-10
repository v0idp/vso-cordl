#pragma once
// IWYU pragma private; include "VROSC/TransformDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformDataController)
namespace System {
class Action;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class TransformDataModel;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class TransformDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformDataController);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformDataController
class CORDL_TYPE TransformDataController : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_IsPinned, put=set_IsPinned)) bool  IsPinned;

/// @brief Field OnChange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnChange, put=__cordl_internal_set_OnChange)) ::System::Action*  OnChange;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Scale, put=set_Scale)) ::UnityEngine::Vector3  Scale;

/// @brief Field _dataModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataModel, put=__cordl_internal_set__dataModel)) ::VROSC::TransformDataModel*  _dataModel;

/// @brief Method Changed, addr 0x18768e4, size 0x1c, virtual false, abstract: false, final false
inline void Changed() ;

static inline ::VROSC::TransformDataController* New_ctor(::VROSC::TransformDataModel*  dataModel, ::System::Action*  onChange) ;

/// @brief Method SetToTransformMover, addr 0x1876cf4, size 0x8c, virtual false, abstract: false, final false
inline void SetToTransformMover(::VROSC::TransformMover*  transformMover) ;

constexpr ::System::Action* const& __cordl_internal_get_OnChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnChange() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get__dataModel() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get__dataModel() ;

constexpr void __cordl_internal_set_OnChange(::System::Action*  value) ;

constexpr void __cordl_internal_set__dataModel(::VROSC::TransformDataModel*  value) ;

/// @brief Method .ctor, addr 0x187350c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::TransformDataModel*  dataModel, ::System::Action*  onChange) ;

/// @brief Method get_IsOpen, addr 0x187688c, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_IsPinned, addr 0x1876900, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsPinned() ;

/// @brief Method get_Position, addr 0x1876958, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x1876a84, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale, addr 0x1876bc8, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Scale() ;

/// @brief Method set_IsOpen, addr 0x18768a8, size 0x3c, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_IsPinned, addr 0x187691c, size 0x3c, virtual false, abstract: false, final false
inline void set_IsPinned(bool  value) ;

/// @brief Method set_Position, addr 0x18769ac, size 0x3c, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

/// @brief Method set_Rotation, addr 0x1876ae0, size 0x3c, virtual false, abstract: false, final false
inline void set_Rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_Scale, addr 0x1876c1c, size 0x3c, virtual false, abstract: false, final false
inline void set_Scale(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformDataController(TransformDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformDataController(TransformDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{554};

/// @brief Field _dataModel, offset: 0x10, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ____dataModel;

/// @brief Field OnChange, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___OnChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformDataController, ____dataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformDataController, ___OnChange) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformDataController, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformDataController*, "VROSC", "TransformDataController");
