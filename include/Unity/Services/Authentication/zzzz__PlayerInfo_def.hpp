#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/PlayerInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Services::Authentication {
class ExternalIdentity;
}
namespace Unity::Services::Authentication {
class Identity;
}
namespace Unity::Services::Authentication {
class User;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class PlayerInfo;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::PlayerInfo);
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.PlayerInfo
class CORDL_TYPE PlayerInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Identities)) ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*  Identities;

 __declspec(property(put=set_LastPasswordUpdate)) ::System::Nullable_1<::System::DateTime>  LastPasswordUpdate;

 __declspec(property(put=set_Username)) ::StringW  Username;

/// @brief Field <CreatedAt>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__CreatedAt_k__BackingField, put=__cordl_internal_set__CreatedAt_k__BackingField)) ::System::Nullable_1<::System::DateTime>  _CreatedAt_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::StringW  _Id_k__BackingField;

/// @brief Field <Identities>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Identities_k__BackingField, put=__cordl_internal_set__Identities_k__BackingField)) ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*  _Identities_k__BackingField;

/// @brief Field <LastPasswordUpdate>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__LastPasswordUpdate_k__BackingField, put=__cordl_internal_set__LastPasswordUpdate_k__BackingField)) ::System::Nullable_1<::System::DateTime>  _LastPasswordUpdate_k__BackingField;

/// @brief Field <Username>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Username_k__BackingField, put=__cordl_internal_set__Username_k__BackingField)) ::StringW  _Username_k__BackingField;

static inline ::Unity::Services::Authentication::PlayerInfo* New_ctor(::StringW  playerId) ;

static inline ::Unity::Services::Authentication::PlayerInfo* New_ctor(::StringW  playerId, ::StringW  createdAt, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  externalIdentities, ::StringW  username, ::StringW  lastPasswordUpdate) ;

static inline ::Unity::Services::Authentication::PlayerInfo* New_ctor(::Unity::Services::Authentication::User*  user) ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__CreatedAt_k__BackingField() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__CreatedAt_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>* const& __cordl_internal_get__Identities_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*& __cordl_internal_get__Identities_k__BackingField() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__LastPasswordUpdate_k__BackingField() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__LastPasswordUpdate_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Username_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Username_k__BackingField() ;

constexpr void __cordl_internal_set__CreatedAt_k__BackingField(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Identities_k__BackingField(::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*  value) ;

constexpr void __cordl_internal_set__LastPasswordUpdate_k__BackingField(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set__Username_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e948dc, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  playerId) ;

/// @brief Method .ctor, addr 0x2e98160, size 0x3a0, virtual false, abstract: false, final false
inline void _ctor(::StringW  playerId, ::StringW  createdAt, ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  externalIdentities, ::StringW  username, ::StringW  lastPasswordUpdate) ;

/// @brief Method .ctor, addr 0x2e94964, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::User*  user) ;

/// @brief Method get_Identities, addr 0x2e98148, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>* get_Identities() ;

/// @brief Method set_LastPasswordUpdate, addr 0x2e98158, size 0x8, virtual false, abstract: false, final false
inline void set_LastPasswordUpdate(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method set_Username, addr 0x2e98150, size 0x8, virtual false, abstract: false, final false
inline void set_Username(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerInfo(PlayerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerInfo(PlayerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11540};

/// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Id_k__BackingField;

/// @brief Field <CreatedAt>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ____CreatedAt_k__BackingField;

/// @brief Field <Identities>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Services::Authentication::Identity*>*  ____Identities_k__BackingField;

/// @brief Field <Username>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Username_k__BackingField;

/// @brief Field <LastPasswordUpdate>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ____LastPasswordUpdate_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::PlayerInfo, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::PlayerInfo, ____CreatedAt_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::PlayerInfo, ____Identities_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::PlayerInfo, ____Username_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::PlayerInfo, ____LastPasswordUpdate_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::PlayerInfo, 0x48>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::PlayerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::PlayerInfo*, "Unity.Services.Authentication", "PlayerInfo");
