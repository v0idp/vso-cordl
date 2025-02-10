#pragma once
// IWYU pragma private; include "VROSC/BaseDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataController)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace VROSC {
class BaseDataController___c__DisplayClass14_0;
}
namespace VROSC {
class BaseDataModel;
}
namespace VROSC {
struct ChangeFlags;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class BaseDataController;
}
namespace VROSC {
class BaseDataController___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BaseDataController);
MARK_REF_PTR_T(::VROSC::BaseDataController___c__DisplayClass14_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BaseDataController/<>c__DisplayClass14_0
class CORDL_TYPE BaseDataController___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::BaseDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::BaseDataController___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <LoadLocalData>b__0, addr 0x183cd00, size 0x4c, virtual false, abstract: false, final false
inline void _LoadLocalData_b__0(::StringW  data) ;

constexpr ::VROSC::BaseDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::BaseDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::BaseDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x183c93c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataController___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataController___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataController___c__DisplayClass14_0(BaseDataController___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataController___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataController___c__DisplayClass14_0(BaseDataController___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{378};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::BaseDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BaseDataController___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseDataController___c__DisplayClass14_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BaseDataController___c__DisplayClass14_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BaseDataController
class CORDL_TYPE BaseDataController : public ::System::Object {
public:
// Declarations
using __c__DisplayClass14_0 = ::VROSC::BaseDataController___c__DisplayClass14_0;

 __declspec(property(get=get_HasChanged)) bool  HasChanged;

 __declspec(property(get=get_IsLoaded, put=set_IsLoaded)) bool  IsLoaded;

 __declspec(property(get=get_IsSaved, put=set_IsSaved)) bool  IsSaved;

 __declspec(property(get=get_ModelType)) ::System::Type*  ModelType;

/// @brief Field OnProgressStepFinished, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProgressStepFinished, put=__cordl_internal_set_OnProgressStepFinished)) ::System::Action*  OnProgressStepFinished;

/// @brief Field <IsLoaded>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLoaded_k__BackingField, put=__cordl_internal_set__IsLoaded_k__BackingField)) bool  _IsLoaded_k__BackingField;

/// @brief Field <IsSaved>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSaved_k__BackingField, put=__cordl_internal_set__IsSaved_k__BackingField)) bool  _IsSaved_k__BackingField;

/// @brief Field _dataModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataModel, put=__cordl_internal_set__dataModel)) ::VROSC::BaseDataModel*  _dataModel;

/// @brief Method Changed, addr 0x183cbdc, size 0x24, virtual false, abstract: false, final false
inline void Changed() ;

/// @brief Method GetLoadSteps, addr 0x183cc50, size 0x8, virtual true, abstract: false, final false
inline int32_t GetLoadSteps() ;

/// @brief Method GetModelJson, addr 0x183c9f0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetModelJson() ;

/// @brief Method GetSaveSteps, addr 0x183cc58, size 0x8, virtual true, abstract: false, final false
inline int32_t GetSaveSteps() ;

/// @brief Method LoadCloudData, addr 0x183ca10, size 0x38, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadCloudData, addr 0x183cb6c, size 0x38, virtual true, abstract: false, final false
inline void LoadCloudData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadData, addr 0x183cc60, size 0x4c, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadLocalData, addr 0x183c834, size 0x108, virtual true, abstract: false, final false
inline void LoadLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadLocalData, addr 0x183ca80, size 0x38, virtual true, abstract: false, final false
inline void LoadLocalData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::BaseDataController* New_ctor() ;

/// @brief Method SaveCloudData, addr 0x183ca48, size 0x38, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveCloudData, addr 0x183cba4, size 0x38, virtual true, abstract: false, final false
inline void SaveCloudData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveData, addr 0x183ccac, size 0x4c, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveLocalData, addr 0x183c944, size 0xac, virtual true, abstract: false, final false
inline void SaveLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveLocalData, addr 0x183cab8, size 0xb4, virtual true, abstract: false, final false
inline void SaveLocalData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SetChangeFlags, addr 0x183cc00, size 0x24, virtual false, abstract: false, final false
inline void SetChangeFlags(::VROSC::ChangeFlags  changeFlags) ;

/// @brief Method UpdateSaveVersion, addr 0x183cc24, size 0x2c, virtual false, abstract: false, final false
inline void UpdateSaveVersion() ;

constexpr ::System::Action* const& __cordl_internal_get_OnProgressStepFinished() const;

constexpr ::System::Action*& __cordl_internal_get_OnProgressStepFinished() ;

constexpr bool const& __cordl_internal_get__IsLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLoaded_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSaved_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSaved_k__BackingField() ;

constexpr ::VROSC::BaseDataModel* const& __cordl_internal_get__dataModel() const;

constexpr ::VROSC::BaseDataModel*& __cordl_internal_get__dataModel() ;

constexpr void __cordl_internal_set_OnProgressStepFinished(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSaved_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dataModel(::VROSC::BaseDataModel*  value) ;

/// @brief Method .ctor, addr 0x183ccf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasChanged, addr 0x183c810, size 0x24, virtual false, abstract: false, final false
inline bool get_HasChanged() ;

/// @brief Method get_IsLoaded, addr 0x183c7e8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLoaded() ;

/// @brief Method get_IsSaved, addr 0x183c7fc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSaved() ;

/// @brief Method get_ModelType, addr 0x183c7cc, size 0x1c, virtual false, abstract: false, final false
inline ::System::Type* get_ModelType() ;

/// @brief Method set_IsLoaded, addr 0x183c7f0, size 0xc, virtual false, abstract: false, final false
inline void set_IsLoaded(bool  value) ;

/// @brief Method set_IsSaved, addr 0x183c804, size 0xc, virtual false, abstract: false, final false
inline void set_IsSaved(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataController(BaseDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataController(BaseDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{379};

/// @brief Field _dataModel, offset: 0x10, size: 0x8, def value: None
 ::VROSC::BaseDataModel*  ____dataModel;

/// @brief Field <IsLoaded>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsLoaded_k__BackingField;

/// @brief Field <IsSaved>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____IsSaved_k__BackingField;

/// @brief Field OnProgressStepFinished, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnProgressStepFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BaseDataController, ____dataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseDataController, ____IsLoaded_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseDataController, ____IsSaved_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseDataController, ___OnProgressStepFinished) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BaseDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BaseDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseDataController*, "VROSC", "BaseDataController");
NEED_NO_BOX(::VROSC::BaseDataController___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseDataController___c__DisplayClass14_0*, "VROSC", "BaseDataController/<>c__DisplayClass14_0");
