#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ProfileEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileEventArgs)
// Forward declare root types
namespace Unity::Services::Authentication {
class ProfileEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::ProfileEventArgs);
// Dependencies System.EventArgs
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.ProfileEventArgs
class CORDL_TYPE ProfileEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field <Profile>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Profile_k__BackingField, put=__cordl_internal_set__Profile_k__BackingField)) ::StringW  _Profile_k__BackingField;

static inline ::Unity::Services::Authentication::ProfileEventArgs* New_ctor(::StringW  profile) ;

constexpr ::StringW const& __cordl_internal_get__Profile_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Profile_k__BackingField() ;

constexpr void __cordl_internal_set__Profile_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e97f24, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::StringW  profile) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProfileEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProfileEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProfileEventArgs(ProfileEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProfileEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProfileEventArgs(ProfileEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11537};

/// @brief Field <Profile>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Profile_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::ProfileEventArgs, ____Profile_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::ProfileEventArgs, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::ProfileEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::ProfileEventArgs*, "Unity.Services.Authentication", "ProfileEventArgs");
