#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ProfileComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IProfile_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileComponent)
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::Services::Authentication {
class ProfileEventArgs;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class ProfileComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::ProfileComponent);
// Dependencies System.Object, Unity.Services.Authentication.IProfile
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.ProfileComponent
class CORDL_TYPE ProfileComponent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

/// @brief Field ProfileChange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileChange, put=__cordl_internal_set_ProfileChange)) ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*  ProfileChange;

/// @brief Field _current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) ::StringW  _current;

/// @brief Convert operator to "::Unity::Services::Authentication::IProfile"
constexpr operator  ::Unity::Services::Authentication::IProfile*() noexcept;

static inline ::Unity::Services::Authentication::ProfileComponent* New_ctor(::StringW  profile) ;

/// @brief Method SetProfile, addr 0x2e97ea4, size 0x80, virtual false, abstract: false, final false
inline void SetProfile(::StringW  profile) ;

constexpr ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>* const& __cordl_internal_get_ProfileChange() const;

constexpr ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*& __cordl_internal_get_ProfileChange() ;

constexpr ::StringW const& __cordl_internal_get__current() const;

constexpr ::StringW& __cordl_internal_get__current() ;

constexpr void __cordl_internal_set_ProfileChange(::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*  value) ;

constexpr void __cordl_internal_set__current(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e96464, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  profile) ;

/// @brief Method get_Current, addr 0x2e97e9c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Current() ;

/// @brief Convert to "::Unity::Services::Authentication::IProfile"
constexpr ::Unity::Services::Authentication::IProfile* i___Unity__Services__Authentication__IProfile() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProfileComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProfileComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProfileComponent(ProfileComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProfileComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProfileComponent(ProfileComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11536};

/// @brief Field ProfileChange, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Unity::Services::Authentication::ProfileEventArgs*>*  ___ProfileChange;

/// @brief Field _current, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::ProfileComponent, ___ProfileChange) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::ProfileComponent, ____current) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::ProfileComponent, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::ProfileComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::ProfileComponent*, "Unity.Services.Authentication", "ProfileComponent");
