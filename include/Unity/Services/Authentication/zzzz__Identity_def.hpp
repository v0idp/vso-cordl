#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Identity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Identity)
namespace Unity::Services::Authentication {
class ExternalIdentity;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class Identity;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Identity);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.Identity
class CORDL_TYPE Identity : public ::System::Object {
public:
// Declarations
/// @brief Field TypeId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeId, put=__cordl_internal_set_TypeId)) ::StringW  TypeId;

/// @brief Field UserId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::Unity::Services::Authentication::Identity* New_ctor(::Unity::Services::Authentication::ExternalIdentity*  externalIdentity) ;

constexpr ::StringW const& __cordl_internal_get_TypeId() const;

constexpr ::StringW& __cordl_internal_get_TypeId() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_TypeId(::StringW  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e98118, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::ExternalIdentity*  externalIdentity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Identity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Identity(Identity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Identity(Identity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11539};

/// @brief Field TypeId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TypeId;

/// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Identity, ___TypeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Identity, ___UserId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Identity, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::Identity);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Identity*, "Unity.Services.Authentication", "Identity");
