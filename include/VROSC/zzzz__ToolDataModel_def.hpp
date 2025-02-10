#pragma once
// IWYU pragma private; include "VROSC/ToolDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ToolDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class ToolDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToolDataModel);
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToolDataModel
class CORDL_TYPE ToolDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field HasBeenOpened, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasBeenOpened, put=__cordl_internal_set_HasBeenOpened)) bool  HasBeenOpened;

/// @brief Field SpatialAnchorsUUIDs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpatialAnchorsUUIDs, put=__cordl_internal_set_SpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchorsUUIDs;

/// @brief Field TransformData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

static inline ::VROSC::ToolDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_HasBeenOpened() const;

constexpr bool& __cordl_internal_get_HasBeenOpened() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_SpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SpatialAnchorsUUIDs() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr void __cordl_internal_set_HasBeenOpened(bool  value) ;

constexpr void __cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

/// @brief Method .ctor, addr 0x18737f8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToolDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToolDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToolDataModel(ToolDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToolDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToolDataModel(ToolDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{553};

/// @brief Field TransformData, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field HasBeenOpened, offset: 0x20, size: 0x1, def value: None
 bool  ___HasBeenOpened;

/// @brief Field SpatialAnchorsUUIDs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___SpatialAnchorsUUIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToolDataModel, ___TransformData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToolDataModel, ___HasBeenOpened) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToolDataModel, ___SpatialAnchorsUUIDs) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToolDataModel, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToolDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToolDataModel*, "VROSC", "ToolDataModel");
