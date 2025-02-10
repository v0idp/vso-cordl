#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/User.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(User)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Services::Authentication {
class ExternalIdentity;
}
namespace Unity::Services::Authentication {
class UsernameInfo;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class User;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::User);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.User
class CORDL_TYPE User : public ::System::Object {
public:
// Declarations
/// @brief Field CreatedAt, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreatedAt, put=__cordl_internal_set_CreatedAt)) ::StringW  CreatedAt;

/// @brief Field ExternalIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalIds, put=__cordl_internal_set_ExternalIds)) ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  ExternalIds;

/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Username, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

/// @brief Field UsernameInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UsernameInfo, put=__cordl_internal_set_UsernameInfo)) ::Unity::Services::Authentication::UsernameInfo*  UsernameInfo;

static inline ::Unity::Services::Authentication::User* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CreatedAt() const;

constexpr ::StringW& __cordl_internal_get_CreatedAt() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>* const& __cordl_internal_get_ExternalIds() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*& __cordl_internal_get_ExternalIds() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr ::Unity::Services::Authentication::UsernameInfo* const& __cordl_internal_get_UsernameInfo() const;

constexpr ::Unity::Services::Authentication::UsernameInfo*& __cordl_internal_get_UsernameInfo() ;

constexpr void __cordl_internal_set_CreatedAt(::StringW  value) ;

constexpr void __cordl_internal_set_ExternalIds(::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

constexpr void __cordl_internal_set_UsernameInfo(::Unity::Services::Authentication::UsernameInfo*  value) ;

/// @brief Method .ctor, addr 0x2e985a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr User() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
User(User && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
User(User const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11562};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field CreatedAt, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CreatedAt;

/// @brief Field ExternalIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Services::Authentication::ExternalIdentity*>*  ___ExternalIds;

/// @brief Field Username, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field UsernameInfo, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Authentication::UsernameInfo*  ___UsernameInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::User, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::User, ___CreatedAt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::User, ___ExternalIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::User, ___Username) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::User, ___UsernameInfo) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::User, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::User);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::User*, "Unity.Services.Authentication", "User");
