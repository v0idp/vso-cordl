#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AccessTokenComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IAccessToken_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessTokenComponent)
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AccessTokenComponent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AccessTokenComponent);
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object, Unity.Services.Authentication.Internal.IAccessToken, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AccessTokenComponent
class CORDL_TYPE AccessTokenComponent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AccessToken, put=set_AccessToken)) ::StringW  AccessToken;

 __declspec(property(get=get_ExpiryTime, put=set_ExpiryTime)) ::System::Nullable_1<::System::DateTime>  ExpiryTime;

/// @brief Field <AccessToken>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AccessToken_k__BackingField, put=__cordl_internal_set__AccessToken_k__BackingField)) ::StringW  _AccessToken_k__BackingField;

/// @brief Field <ExpiryTime>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__ExpiryTime_k__BackingField, put=__cordl_internal_set__ExpiryTime_k__BackingField)) ::System::Nullable_1<::System::DateTime>  _ExpiryTime_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::Internal::IAccessToken"
constexpr operator  ::Unity::Services::Authentication::Internal::IAccessToken*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method Clear, addr 0x2e93de4, size 0xc, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Unity::Services::Authentication::AccessTokenComponent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__ExpiryTime_k__BackingField() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__ExpiryTime_k__BackingField() ;

constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ExpiryTime_k__BackingField(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method .ctor, addr 0x2e96594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccessToken, addr 0x2e97be8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_AccessToken() ;

/// @brief Method get_ExpiryTime, addr 0x2e97bf8, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> get_ExpiryTime() ;

/// @brief Convert to "::Unity::Services::Authentication::Internal::IAccessToken"
constexpr ::Unity::Services::Authentication::Internal::IAccessToken* i___Unity__Services__Authentication__Internal__IAccessToken() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

/// @brief Method set_AccessToken, addr 0x2e97bf0, size 0x8, virtual false, abstract: false, final false
inline void set_AccessToken(::StringW  value) ;

/// @brief Method set_ExpiryTime, addr 0x2e97c04, size 0x8, virtual false, abstract: false, final false
inline void set_ExpiryTime(::System::Nullable_1<::System::DateTime>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessTokenComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessTokenComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessTokenComponent(AccessTokenComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessTokenComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessTokenComponent(AccessTokenComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11531};

/// @brief Field <AccessToken>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____AccessToken_k__BackingField;

/// @brief Field <ExpiryTime>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ____ExpiryTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AccessTokenComponent, ____AccessToken_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AccessTokenComponent, ____ExpiryTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AccessTokenComponent, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AccessTokenComponent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AccessTokenComponent*, "Unity.Services.Authentication", "AccessTokenComponent");
