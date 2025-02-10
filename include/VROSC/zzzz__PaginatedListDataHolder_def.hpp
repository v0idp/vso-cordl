#pragma once
// IWYU pragma private; include "VROSC/PaginatedListDataHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PaginatedListDataHolder)
namespace VROSC {
class PaginatedListItemData;
}
// Forward declare root types
namespace VROSC {
class PaginatedListDataHolder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PaginatedListDataHolder);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PaginatedListDataHolder
class CORDL_TYPE PaginatedListDataHolder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::PaginatedListItemData*  Data;

/// @brief Field <Data>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::PaginatedListItemData*  _Data_k__BackingField;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

static inline ::VROSC::PaginatedListDataHolder* New_ctor(::StringW  id, ::VROSC::PaginatedListItemData*  data) ;

constexpr ::VROSC::PaginatedListItemData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::PaginatedListItemData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::PaginatedListItemData*  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x174b010, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::VROSC::PaginatedListItemData*  data) ;

/// @brief Method get_Data, addr 0x174b008, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::PaginatedListItemData* get_Data() ;

/// @brief Method get_ID, addr 0x174aff8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method set_Data, addr 0x174b000, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::PaginatedListItemData*  value) ;

/// @brief Method set_ID, addr 0x174aff0, size 0x8, virtual false, abstract: false, final false
inline void set_ID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaginatedListDataHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListDataHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaginatedListDataHolder(PaginatedListDataHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListDataHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaginatedListDataHolder(PaginatedListDataHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1138};

/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::PaginatedListItemData*  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PaginatedListDataHolder, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListDataHolder, ____Data_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PaginatedListDataHolder, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PaginatedListDataHolder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PaginatedListDataHolder*, "VROSC", "PaginatedListDataHolder");
