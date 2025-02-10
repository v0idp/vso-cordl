#pragma once
// IWYU pragma private; include "VROSC/UserProfileDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserProfileDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UserProfileDataController___c__DisplayClass29_0;
}
namespace VROSC {
class UserProfileDataModel;
}
// Forward declare root types
namespace VROSC {
class UserProfileDataController;
}
namespace VROSC {
class UserProfileDataController___c__DisplayClass29_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserProfileDataController);
MARK_REF_PTR_T(::VROSC::UserProfileDataController___c__DisplayClass29_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserProfileDataController/<>c__DisplayClass29_0
class CORDL_TYPE UserProfileDataController___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserProfileDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserProfileDataController___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x187ca64, size 0x61c, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

constexpr ::VROSC::UserProfileDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserProfileDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserProfileDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x187ca5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfileDataController___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataController___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfileDataController___c__DisplayClass29_0(UserProfileDataController___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataController___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfileDataController___c__DisplayClass29_0(UserProfileDataController___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{568};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserProfileDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserProfileDataController___c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfileDataController___c__DisplayClass29_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserProfileDataController___c__DisplayClass29_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserProfileDataController
class CORDL_TYPE UserProfileDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using __c__DisplayClass29_0 = ::VROSC::UserProfileDataController___c__DisplayClass29_0;

 __declspec(property(get=get_AcceptedEULAVersion, put=set_AcceptedEULAVersion)) ::StringW  AcceptedEULAVersion;

 __declspec(property(get=get_CreationDate, put=set_CreationDate)) ::StringW  CreationDate;

 __declspec(property(get=get_DataModel)) ::VROSC::UserProfileDataModel*  DataModel;

 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

 __declspec(property(get=get_LastLogin, put=set_LastLogin)) ::StringW  LastLogin;

 __declspec(property(put=set_OculusId)) ::StringW  OculusId;

 __declspec(property(put=set_OculusUsername)) ::StringW  OculusUsername;

 __declspec(property(get=get_SteamId, put=set_SteamId)) ::StringW  SteamId;

 __declspec(property(get=get_SteamUsername, put=set_SteamUsername)) ::StringW  SteamUsername;

 __declspec(property(get=get_Username, put=set_Username)) ::StringW  Username;

/// @brief Method LoadCloudData, addr 0x187c940, size 0x11c, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::UserProfileDataController* New_ctor() ;

/// @brief Method SaveCloudData, addr 0x187c600, size 0x340, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method .ctor, addr 0x187c218, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AcceptedEULAVersion, addr 0x187c5b0, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_AcceptedEULAVersion() ;

/// @brief Method get_CreationDate, addr 0x187c560, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_CreationDate() ;

/// @brief Method get_DataModel, addr 0x187c1a0, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::UserProfileDataModel* get_DataModel() ;

/// @brief Method get_Email, addr 0x187c368, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// @brief Method get_LastLogin, addr 0x187c510, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_LastLogin() ;

/// @brief Method get_SteamId, addr 0x187c448, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_SteamId() ;

/// @brief Method get_SteamUsername, addr 0x187c498, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_SteamUsername() ;

/// @brief Method get_Username, addr 0x187c318, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_Username() ;

/// @brief Method set_AcceptedEULAVersion, addr 0x187c5cc, size 0x34, virtual false, abstract: false, final false
inline void set_AcceptedEULAVersion(::StringW  value) ;

/// @brief Method set_CreationDate, addr 0x187c57c, size 0x34, virtual false, abstract: false, final false
inline void set_CreationDate(::StringW  value) ;

/// @brief Method set_Email, addr 0x187c384, size 0x34, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// @brief Method set_LastLogin, addr 0x187c52c, size 0x34, virtual false, abstract: false, final false
inline void set_LastLogin(::StringW  value) ;

/// @brief Method set_OculusId, addr 0x187c3b8, size 0x34, virtual false, abstract: false, final false
inline void set_OculusId(::StringW  value) ;

/// @brief Method set_OculusUsername, addr 0x187c3ec, size 0x5c, virtual false, abstract: false, final false
inline void set_OculusUsername(::StringW  value) ;

/// @brief Method set_SteamId, addr 0x187c464, size 0x34, virtual false, abstract: false, final false
inline void set_SteamId(::StringW  value) ;

/// @brief Method set_SteamUsername, addr 0x187c4b4, size 0x5c, virtual false, abstract: false, final false
inline void set_SteamUsername(::StringW  value) ;

/// @brief Method set_Username, addr 0x187c334, size 0x34, virtual false, abstract: false, final false
inline void set_Username(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfileDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfileDataController(UserProfileDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfileDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfileDataController(UserProfileDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UserProfileDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserProfileDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserProfileDataController*, "VROSC", "UserProfileDataController");
NEED_NO_BOX(::VROSC::UserProfileDataController___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserProfileDataController___c__DisplayClass29_0*, "VROSC", "UserProfileDataController/<>c__DisplayClass29_0");
