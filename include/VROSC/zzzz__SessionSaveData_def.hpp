#pragma once
// IWYU pragma private; include "VROSC/SessionSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionSaveData)
// Forward declare root types
namespace VROSC {
class SessionSaveData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SessionSaveData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionSaveData
class CORDL_TYPE SessionSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field Description, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field HasPositionalData, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasPositionalData, put=__cordl_internal_set_HasPositionalData)) bool  HasPositionalData;

/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field IsCloud, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsCloud, put=__cordl_internal_set_IsCloud)) bool  IsCloud;

/// @brief Field IsNewSave, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsNewSave, put=__cordl_internal_set_IsNewSave)) bool  IsNewSave;

/// @brief Field IsSavedAsDefault, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsSavedAsDefault, put=__cordl_internal_set_IsSavedAsDefault)) bool  IsSavedAsDefault;

/// @brief Field IsShared, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsShared, put=__cordl_internal_set_IsShared)) bool  IsShared;

/// @brief Field Tags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::ArrayW<::StringW,::Array<::StringW>*>  Tags;

static inline ::VROSC::SessionSaveData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr bool const& __cordl_internal_get_HasPositionalData() const;

constexpr bool& __cordl_internal_get_HasPositionalData() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_IsCloud() const;

constexpr bool& __cordl_internal_get_IsCloud() ;

constexpr bool const& __cordl_internal_get_IsNewSave() const;

constexpr bool& __cordl_internal_get_IsNewSave() ;

constexpr bool const& __cordl_internal_get_IsSavedAsDefault() const;

constexpr bool& __cordl_internal_get_IsSavedAsDefault() ;

constexpr bool const& __cordl_internal_get_IsShared() const;

constexpr bool& __cordl_internal_get_IsShared() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_Tags() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_HasPositionalData(bool  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_IsCloud(bool  value) ;

constexpr void __cordl_internal_set_IsNewSave(bool  value) ;

constexpr void __cordl_internal_set_IsSavedAsDefault(bool  value) ;

constexpr void __cordl_internal_set_IsShared(bool  value) ;

constexpr void __cordl_internal_set_Tags(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x175cd90, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSaveData(SessionSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSaveData(SessionSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1168};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Description, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field Tags, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___Tags;

/// @brief Field IsCloud, offset: 0x30, size: 0x1, def value: None
 bool  ___IsCloud;

/// @brief Field IsShared, offset: 0x31, size: 0x1, def value: None
 bool  ___IsShared;

/// @brief Field IsNewSave, offset: 0x32, size: 0x1, def value: None
 bool  ___IsNewSave;

/// @brief Field HasPositionalData, offset: 0x33, size: 0x1, def value: None
 bool  ___HasPositionalData;

/// @brief Field IsSavedAsDefault, offset: 0x34, size: 0x1, def value: None
 bool  ___IsSavedAsDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionSaveData, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___Description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___Tags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___IsCloud) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___IsShared) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___IsNewSave) == 0x32, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___HasPositionalData) == 0x33, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionSaveData, ___IsSavedAsDefault) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionSaveData, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SessionSaveData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionSaveData*, "VROSC", "SessionSaveData");
