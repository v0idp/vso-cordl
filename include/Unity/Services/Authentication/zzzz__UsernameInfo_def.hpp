#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/UsernameInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UsernameInfo)
// Forward declare root types
namespace Unity::Services::Authentication {
class UsernameInfo;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::UsernameInfo);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.UsernameInfo
class CORDL_TYPE UsernameInfo : public ::System::Object {
public:
// Declarations
/// @brief Field PasswordUpdatedAt, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PasswordUpdatedAt, put=__cordl_internal_set_PasswordUpdatedAt)) ::StringW  PasswordUpdatedAt;

/// @brief Field Username, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::Unity::Services::Authentication::UsernameInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PasswordUpdatedAt() const;

constexpr ::StringW& __cordl_internal_get_PasswordUpdatedAt() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_PasswordUpdatedAt(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e985b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UsernameInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UsernameInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UsernameInfo(UsernameInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsernameInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsernameInfo(UsernameInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11563};

/// @brief Field Username, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field PasswordUpdatedAt, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PasswordUpdatedAt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::UsernameInfo, ___Username) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::UsernameInfo, ___PasswordUpdatedAt) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::UsernameInfo, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::UsernameInfo);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::UsernameInfo*, "Unity.Services.Authentication", "UsernameInfo");
