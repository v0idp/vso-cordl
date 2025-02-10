#pragma once
// IWYU pragma private; include "Unity/Services/Core/Device/UnityAnalyticsIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Device/zzzz__IUserIdentifierProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityAnalyticsIdentifier)
// Forward declare root types
namespace Unity::Services::Core::Device {
class UnityAnalyticsIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::UnityAnalyticsIdentifier);
// Dependencies System.Object, Unity.Services.Core.Device.IUserIdentifierProvider
namespace Unity::Services::Core::Device {
// Is value type: false
// CS Name: Unity.Services.Core.Device.UnityAnalyticsIdentifier
class CORDL_TYPE UnityAnalyticsIdentifier : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Convert operator to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr operator  ::Unity::Services::Core::Device::IUserIdentifierProvider*() noexcept;

static inline ::Unity::Services::Core::Device::UnityAnalyticsIdentifier* New_ctor() ;

/// @brief Method .ctor, addr 0x2e9c678, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UserId, addr 0x2e9d6c0, size 0x44, virtual true, abstract: false, final true
inline ::StringW get_UserId() ;

/// @brief Convert to "::Unity::Services::Core::Device::IUserIdentifierProvider"
constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider* i___Unity__Services__Core__Device__IUserIdentifierProvider() noexcept;

/// @brief Method set_UserId, addr 0x2e9d704, size 0xcc, virtual true, abstract: false, final true
inline void set_UserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAnalyticsIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAnalyticsIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAnalyticsIdentifier(UnityAnalyticsIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAnalyticsIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAnalyticsIdentifier(UnityAnalyticsIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Device::UnityAnalyticsIdentifier, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Device
NEED_NO_BOX(::Unity::Services::Core::Device::UnityAnalyticsIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::UnityAnalyticsIdentifier*, "Unity.Services.Core.Device", "UnityAnalyticsIdentifier");
