#pragma once
// IWYU pragma private; include "VROSC/LoopStationLaunchpadData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopStationLaunchpadData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class LoopStationLaunchpadData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationLaunchpadData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLaunchpadData
class CORDL_TYPE LoopStationLaunchpadData : public ::System::Object {
public:
// Declarations
/// @brief Field IsGroup, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsGroup, put=__cordl_internal_set_IsGroup)) bool  IsGroup;

/// @brief Field SpatialAnchorsUUIDs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpatialAnchorsUUIDs, put=__cordl_internal_set_SpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchorsUUIDs;

/// @brief Field TargetID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetID, put=__cordl_internal_set_TargetID)) ::StringW  TargetID;

 __declspec(property(get=get_TransformController)) ::VROSC::TransformDataController*  TransformController;

/// @brief Field TransformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

/// @brief Field ID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) ::StringW  _cordl_ID;

/// @brief Field _transformController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformController, put=__cordl_internal_set__transformController)) ::VROSC::TransformDataController*  _transformController;

static inline ::VROSC::LoopStationLaunchpadData* New_ctor(::StringW  iD, ::StringW  targetID, bool  isGroup) ;

constexpr bool const& __cordl_internal_get_IsGroup() const;

constexpr bool& __cordl_internal_get_IsGroup() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_SpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SpatialAnchorsUUIDs() ;

constexpr ::StringW const& __cordl_internal_get_TargetID() const;

constexpr ::StringW& __cordl_internal_get_TargetID() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

constexpr ::StringW& __cordl_internal_get__cordl_ID() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformController() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformController() ;

constexpr void __cordl_internal_set_IsGroup(bool  value) ;

constexpr void __cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TargetID(::StringW  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

constexpr void __cordl_internal_set__cordl_ID(::StringW  value) ;

constexpr void __cordl_internal_set__transformController(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x18733d4, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::StringW  iD, ::StringW  targetID, bool  isGroup) ;

/// @brief Method get_TransformController, addr 0x1873538, size 0x6c, virtual false, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLaunchpadData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLaunchpadData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLaunchpadData(LoopStationLaunchpadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLaunchpadData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLaunchpadData(LoopStationLaunchpadData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{534};

/// @brief Field IsGroup, offset: 0x10, size: 0x1, def value: None
 bool  ___IsGroup;

/// @brief Field ID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____cordl_ID;

/// @brief Field TargetID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TargetID;

/// @brief Field TransformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field _transformController, offset: 0x30, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformController;

/// @brief Field SpatialAnchorsUUIDs, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___SpatialAnchorsUUIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ___IsGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ____cordl_ID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ___TargetID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ___TransformData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ____transformController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLaunchpadData, ___SpatialAnchorsUUIDs) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLaunchpadData, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationLaunchpadData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLaunchpadData*, "VROSC", "LoopStationLaunchpadData");
