#pragma once
// IWYU pragma private; include "VROSC/UserProfileDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserProfileDataModel)
// Forward declare root types
namespace VROSC {
class UserProfileDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserProfileDataModel);
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserProfileDataModel
class CORDL_TYPE UserProfileDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field AcceptedEULAVersion, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_AcceptedEULAVersion, put=__cordl_internal_set_AcceptedEULAVersion)) ::StringW  AcceptedEULAVersion;

/// @brief Field CreationDate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreationDate, put=__cordl_internal_set_CreationDate)) ::StringW  CreationDate;

/// @brief Field Email, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field LastLogin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastLogin, put=__cordl_internal_set_LastLogin)) ::StringW  LastLogin;

/// @brief Field OculusId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OculusId, put=__cordl_internal_set_OculusId)) ::StringW  OculusId;

/// @brief Field OculusUsername, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OculusUsername, put=__cordl_internal_set_OculusUsername)) ::StringW  OculusUsername;

/// @brief Field SteamId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamId, put=__cordl_internal_set_SteamId)) ::StringW  SteamId;

/// @brief Field SteamUsername, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamUsername, put=__cordl_internal_set_SteamUsername)) ::StringW  SteamUsername;

/// @brief Field Username, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::UserProfileDataModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AcceptedEULAVersion() const;

constexpr ::StringW& __cordl_internal_get_AcceptedEULAVersion() ;

constexpr ::StringW const& __cordl_internal_get_CreationDate() const;

constexpr ::StringW& __cordl_internal_get_CreationDate() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_LastLogin() const;

constexpr ::StringW& __cordl_internal_get_LastLogin() ;

constexpr ::StringW const& __cordl_internal_get_OculusId() const;

constexpr ::StringW& __cordl_internal_get_OculusId() ;

constexpr ::StringW const& __cordl_internal_get_OculusUsername() const;

constexpr ::StringW& __cordl_internal_get_OculusUsername() ;

constexpr ::StringW const& __cordl_internal_get_SteamId() const;

constexpr ::StringW& __cordl_internal_get_SteamId() ;

constexpr ::StringW const& __cordl_internal_get_SteamUsername() const;

constexpr ::StringW& __cordl_internal_get_SteamUsername() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_AcceptedEULAVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CreationDate(::StringW  value) ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_LastLogin(::StringW  value) ;

constexpr void __cordl_internal_set_OculusId(::StringW  value) ;

constexpr void __cordl_internal_set_OculusUsername(::StringW  value) ;

constexpr void __cordl_internal_set_SteamId(::StringW  value) ;

constexpr void __cordl_internal_set_SteamUsername(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0x187c278, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x187d080, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x187d0c0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfileDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfileDataModel(UserProfileDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfileDataModel(UserProfileDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{570};

/// @brief Field Username, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field Email, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field OculusId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OculusId;

/// @brief Field OculusUsername, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___OculusUsername;

/// @brief Field SteamId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SteamId;

/// @brief Field SteamUsername, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SteamUsername;

/// @brief Field LastLogin, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___LastLogin;

/// @brief Field CreationDate, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___CreationDate;

/// @brief Field AcceptedEULAVersion, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___AcceptedEULAVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserProfileDataModel, ___Username) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___Email) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___OculusId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___OculusUsername) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___SteamId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___SteamUsername) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___LastLogin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___CreationDate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataModel, ___AcceptedEULAVersion) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserProfileDataModel, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserProfileDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserProfileDataModel*, "VROSC", "UserProfileDataModel");
