#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ExternalIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExternalIdentity)
// Forward declare root types
namespace Unity::Services::Authentication {
class ExternalIdentity;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::ExternalIdentity);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.ExternalIdentity
class CORDL_TYPE ExternalIdentity : public ::System::Object {
public:
// Declarations
/// @brief Field ExternalId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExternalId, put=__cordl_internal_set_ExternalId)) ::StringW  ExternalId;

/// @brief Field ProviderId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderId, put=__cordl_internal_set_ProviderId)) ::StringW  ProviderId;

static inline ::Unity::Services::Authentication::ExternalIdentity* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ExternalId() const;

constexpr ::StringW& __cordl_internal_get_ExternalId() ;

constexpr ::StringW const& __cordl_internal_get_ProviderId() const;

constexpr ::StringW& __cordl_internal_get_ProviderId() ;

constexpr void __cordl_internal_set_ExternalId(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderId(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e98580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalIdentity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalIdentity(ExternalIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalIdentity(ExternalIdentity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11557};

/// @brief Field ProviderId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ProviderId;

/// @brief Field ExternalId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ExternalId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::ExternalIdentity, ___ProviderId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::ExternalIdentity, ___ExternalId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::ExternalIdentity, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::ExternalIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::ExternalIdentity*, "Unity.Services.Authentication", "ExternalIdentity");
