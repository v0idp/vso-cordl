#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/UpdateNameRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateNameRequest)
// Forward declare root types
namespace Unity::Services::Authentication::Generated {
class UpdateNameRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Generated::UpdateNameRequest);
// Dependencies System.Object
namespace Unity::Services::Authentication::Generated {
// Is value type: false
// CS Name: Unity.Services.Authentication.Generated.UpdateNameRequest
class CORDL_TYPE UpdateNameRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::Unity::Services::Authentication::Generated::UpdateNameRequest* New_ctor(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e9a6a4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Name, addr 0x2e9a694, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method set_Name, addr 0x2e9a69c, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateNameRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateNameRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateNameRequest(UpdateNameRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateNameRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateNameRequest(UpdateNameRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11599};

/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Generated::UpdateNameRequest, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Generated::UpdateNameRequest, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Generated
NEED_NO_BOX(::Unity::Services::Authentication::Generated::UpdateNameRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Generated::UpdateNameRequest*, "Unity.Services.Authentication.Generated", "UpdateNameRequest");
