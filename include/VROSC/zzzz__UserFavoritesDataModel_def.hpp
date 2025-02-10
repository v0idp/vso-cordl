#pragma once
// IWYU pragma private; include "VROSC/UserFavoritesDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserFavoritesDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Session;
}
namespace VROSC {
class UserFavoritesDataModel_Favorite;
}
// Forward declare root types
namespace VROSC {
class UserFavoritesDataModel;
}
namespace VROSC {
class UserFavoritesDataModel_Favorite;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserFavoritesDataModel);
MARK_REF_PTR_T(::VROSC::UserFavoritesDataModel_Favorite);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataModel/Favorite
class CORDL_TYPE UserFavoritesDataModel_Favorite : public ::System::Object {
public:
// Declarations
/// @brief Field Date, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Date, put=__cordl_internal_set_Date)) ::StringW  Date;

/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Session, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Session, put=__cordl_internal_set_Session)) ::VROSC::Session*  Session;

/// @brief Field SessionFavoriteId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionFavoriteId, put=__cordl_internal_set_SessionFavoriteId)) ::StringW  SessionFavoriteId;

/// @brief Field SessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

static inline ::VROSC::UserFavoritesDataModel_Favorite* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Date() const;

constexpr ::StringW& __cordl_internal_get_Date() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::VROSC::Session* const& __cordl_internal_get_Session() const;

constexpr ::VROSC::Session*& __cordl_internal_get_Session() ;

constexpr ::StringW const& __cordl_internal_get_SessionFavoriteId() const;

constexpr ::StringW& __cordl_internal_get_SessionFavoriteId() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr void __cordl_internal_set_Date(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Session(::VROSC::Session*  value) ;

constexpr void __cordl_internal_set_SessionFavoriteId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1877080, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataModel_Favorite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataModel_Favorite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataModel_Favorite(UserFavoritesDataModel_Favorite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataModel_Favorite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataModel_Favorite(UserFavoritesDataModel_Favorite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{561};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field SessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field SessionFavoriteId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SessionFavoriteId;

/// @brief Field Date, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Date;

/// @brief Field Session, offset: 0x30, size: 0x8, def value: None
 ::VROSC::Session*  ___Session;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataModel_Favorite, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataModel_Favorite, ___SessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataModel_Favorite, ___SessionFavoriteId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataModel_Favorite, ___Date) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserFavoritesDataModel_Favorite, ___Session) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataModel_Favorite, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserFavoritesDataModel
class CORDL_TYPE UserFavoritesDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
using Favorite = ::VROSC::UserFavoritesDataModel_Favorite;

/// @brief Field Favorites, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Favorites, put=__cordl_internal_set_Favorites)) ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*  Favorites;

 __declspec(property(get=get_Key)) ::StringW  Key;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::UserFavoritesDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>* const& __cordl_internal_get_Favorites() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*& __cordl_internal_get_Favorites() ;

constexpr void __cordl_internal_set_Favorites(::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*  value) ;

/// @brief Method .ctor, addr 0x1876e58, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x187922c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x187926c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserFavoritesDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserFavoritesDataModel(UserFavoritesDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserFavoritesDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserFavoritesDataModel(UserFavoritesDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{562};

/// @brief Field Favorites, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::UserFavoritesDataModel_Favorite*>*  ___Favorites;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserFavoritesDataModel, ___Favorites) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserFavoritesDataModel, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserFavoritesDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataModel*, "VROSC", "UserFavoritesDataModel");
NEED_NO_BOX(::VROSC::UserFavoritesDataModel_Favorite);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserFavoritesDataModel_Favorite*, "VROSC", "UserFavoritesDataModel/Favorite");
