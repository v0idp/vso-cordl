#pragma once
// IWYU pragma private; include "VROSC/SessionItemData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__PaginatedListItemData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionItemData)
namespace VROSC {
class SessionUIData;
}
// Forward declare root types
namespace VROSC {
class SessionItemData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionItemData);
// Dependencies VROSC.PaginatedListItemData
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionItemData
class CORDL_TYPE SessionItemData : public ::VROSC::PaginatedListItemData {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::SessionUIData*  Data;

/// @brief Field <Data>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::SessionUIData*  _Data_k__BackingField;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

static inline ::VROSC::SessionItemData* New_ctor(::StringW  id, ::VROSC::SessionUIData*  data) ;

/// @brief Method Set, addr 0x1759fe8, size 0x8, virtual false, abstract: false, final false
inline void Set(::VROSC::SessionUIData*  data) ;

constexpr ::VROSC::SessionUIData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::SessionUIData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::SessionUIData*  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x1759fbc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::VROSC::SessionUIData*  data) ;

/// @brief Method get_Data, addr 0x1759fb4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SessionUIData* get_Data() ;

/// @brief Method get_ID, addr 0x1759fa4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method set_Data, addr 0x1759fac, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::SessionUIData*  value) ;

/// @brief Method set_ID, addr 0x1759f9c, size 0x8, virtual false, abstract: false, final false
inline void set_ID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionItemData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionItemData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionItemData(SessionItemData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionItemData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionItemData(SessionItemData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1164};

/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SessionUIData*  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionItemData, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionItemData, ____Data_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionItemData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionItemData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionItemData*, "VROSC", "SessionItemData");
