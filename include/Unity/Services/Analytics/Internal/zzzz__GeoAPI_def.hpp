#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/GeoAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IGeoAPI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeoAPI)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class GeoAPI;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::GeoAPI);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IGeoAPI
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.GeoAPI
class CORDL_TYPE GeoAPI : public ::System::Object {
public:
// Declarations
/// @brief Field m_PrivacyEndpoint, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrivacyEndpoint, put=__cordl_internal_set_m_PrivacyEndpoint)) ::StringW  m_PrivacyEndpoint;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IGeoAPI"
constexpr operator  ::Unity::Services::Analytics::Internal::IGeoAPI*() noexcept;

static inline ::Unity::Services::Analytics::Internal::GeoAPI* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_m_PrivacyEndpoint() const;

constexpr ::StringW& __cordl_internal_get_m_PrivacyEndpoint() ;

constexpr void __cordl_internal_set_m_PrivacyEndpoint(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e919ac, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IGeoAPI"
constexpr ::Unity::Services::Analytics::Internal::IGeoAPI* i___Unity__Services__Analytics__Internal__IGeoAPI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeoAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeoAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeoAPI(GeoAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeoAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeoAPI(GeoAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11884};

/// @brief Field m_PrivacyEndpoint, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_PrivacyEndpoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::GeoAPI, ___m_PrivacyEndpoint) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::GeoAPI, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::GeoAPI);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::GeoAPI*, "Unity.Services.Analytics.Internal", "GeoAPI");
