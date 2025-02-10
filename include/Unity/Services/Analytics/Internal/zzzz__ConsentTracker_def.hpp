#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/ConsentTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__ConsentStatus_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IConsentTracker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConsentTracker)
namespace Unity::Services::Analytics::Internal {
struct ConsentStatus;
}
namespace Unity::Services::Analytics::Internal {
class GeoIPResponse;
}
namespace Unity::Services::Analytics::Internal {
class IGeoAPI;
}
namespace Unity::Services::Analytics {
class ICoreStatsHelper;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class ConsentTracker;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::ConsentTracker);
// Dependencies System.Object, Unity.Services.Analytics.Internal.ConsentStatus, Unity.Services.Analytics.Internal.IConsentTracker
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.ConsentTracker
class CORDL_TYPE ConsentTracker : public ::System::Object {
public:
// Declarations
/// @brief Field <optInPiplConsentStatus>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__optInPiplConsentStatus_k__BackingField, put=__cordl_internal_set__optInPiplConsentStatus_k__BackingField)) ::Unity::Services::Analytics::Internal::ConsentStatus  _optInPiplConsentStatus_k__BackingField;

/// @brief Field <optOutConsentStatus>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__optOutConsentStatus_k__BackingField, put=__cordl_internal_set__optOutConsentStatus_k__BackingField)) ::Unity::Services::Analytics::Internal::ConsentStatus  _optOutConsentStatus_k__BackingField;

/// @brief Field m_CoreStatsHelper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CoreStatsHelper, put=__cordl_internal_set_m_CoreStatsHelper)) ::Unity::Services::Analytics::ICoreStatsHelper*  m_CoreStatsHelper;

/// @brief Field m_GeoAPI, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GeoAPI, put=__cordl_internal_set_m_GeoAPI)) ::Unity::Services::Analytics::Internal::IGeoAPI*  m_GeoAPI;

 __declspec(property(get=get_optInPiplConsentStatus, put=set_optInPiplConsentStatus)) ::Unity::Services::Analytics::Internal::ConsentStatus  optInPiplConsentStatus;

 __declspec(property(get=get_optOutConsentStatus, put=set_optOutConsentStatus)) ::Unity::Services::Analytics::Internal::ConsentStatus  optOutConsentStatus;

/// @brief Field response, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_response, put=__cordl_internal_set_response)) ::Unity::Services::Analytics::Internal::GeoIPResponse*  response;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IConsentTracker"
constexpr operator  ::Unity::Services::Analytics::Internal::IConsentTracker*() noexcept;

/// @brief Method FinishOptOutProcess, addr 0x2e91d5c, size 0xb4, virtual true, abstract: false, final true
inline void FinishOptOutProcess() ;

/// @brief Method IsConsentGiven, addr 0x2e91bd0, size 0x28, virtual true, abstract: false, final true
inline bool IsConsentGiven() ;

/// @brief Method IsConsentGiven, addr 0x2e91c5c, size 0x78, virtual true, abstract: false, final true
inline bool IsConsentGiven(::StringW  identifier) ;

/// @brief Method IsGeoIpChecked, addr 0x2e91bc0, size 0x10, virtual true, abstract: false, final true
inline bool IsGeoIpChecked() ;

/// @brief Method IsOptingOutInProgress, addr 0x2e91cd4, size 0x88, virtual true, abstract: false, final true
inline bool IsOptingOutInProgress() ;

static inline ::Unity::Services::Analytics::Internal::ConsentTracker* New_ctor(::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper) ;

static inline ::Unity::Services::Analytics::Internal::ConsentTracker* New_ctor(::Unity::Services::Analytics::Internal::IGeoAPI*  geoApi, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper) ;

/// @brief Method ReadOptInPiplConsentStatus, addr 0x2e91b00, size 0x60, virtual false, abstract: false, final false
inline void ReadOptInPiplConsentStatus() ;

/// @brief Method ReadOptOutConsentStatus, addr 0x2e91b60, size 0x60, virtual false, abstract: false, final false
inline void ReadOptOutConsentStatus() ;

/// @brief Method ValidateConsentWasChecked, addr 0x2e91bf8, size 0x64, virtual false, abstract: false, final false
inline void ValidateConsentWasChecked() ;

constexpr ::Unity::Services::Analytics::Internal::ConsentStatus const& __cordl_internal_get__optInPiplConsentStatus_k__BackingField() const;

constexpr ::Unity::Services::Analytics::Internal::ConsentStatus& __cordl_internal_get__optInPiplConsentStatus_k__BackingField() ;

constexpr ::Unity::Services::Analytics::Internal::ConsentStatus const& __cordl_internal_get__optOutConsentStatus_k__BackingField() const;

constexpr ::Unity::Services::Analytics::Internal::ConsentStatus& __cordl_internal_get__optOutConsentStatus_k__BackingField() ;

constexpr ::Unity::Services::Analytics::ICoreStatsHelper* const& __cordl_internal_get_m_CoreStatsHelper() const;

constexpr ::Unity::Services::Analytics::ICoreStatsHelper*& __cordl_internal_get_m_CoreStatsHelper() ;

constexpr ::Unity::Services::Analytics::Internal::IGeoAPI* const& __cordl_internal_get_m_GeoAPI() const;

constexpr ::Unity::Services::Analytics::Internal::IGeoAPI*& __cordl_internal_get_m_GeoAPI() ;

constexpr ::Unity::Services::Analytics::Internal::GeoIPResponse* const& __cordl_internal_get_response() const;

constexpr ::Unity::Services::Analytics::Internal::GeoIPResponse*& __cordl_internal_get_response() ;

constexpr void __cordl_internal_set__optInPiplConsentStatus_k__BackingField(::Unity::Services::Analytics::Internal::ConsentStatus  value) ;

constexpr void __cordl_internal_set__optOutConsentStatus_k__BackingField(::Unity::Services::Analytics::Internal::ConsentStatus  value) ;

constexpr void __cordl_internal_set_m_CoreStatsHelper(::Unity::Services::Analytics::ICoreStatsHelper*  value) ;

constexpr void __cordl_internal_set_m_GeoAPI(::Unity::Services::Analytics::Internal::IGeoAPI*  value) ;

constexpr void __cordl_internal_set_response(::Unity::Services::Analytics::Internal::GeoIPResponse*  value) ;

/// @brief Method .ctor, addr 0x2e8a7f4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper) ;

/// @brief Method .ctor, addr 0x2e919fc, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::Internal::IGeoAPI*  geoApi, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper) ;

/// @brief Method get_optInPiplConsentStatus, addr 0x2e9198c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Analytics::Internal::ConsentStatus get_optInPiplConsentStatus() ;

/// @brief Method get_optOutConsentStatus, addr 0x2e9199c, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Analytics::Internal::ConsentStatus get_optOutConsentStatus() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IConsentTracker"
constexpr ::Unity::Services::Analytics::Internal::IConsentTracker* i___Unity__Services__Analytics__Internal__IConsentTracker() noexcept;

/// @brief Method set_optInPiplConsentStatus, addr 0x2e91994, size 0x8, virtual false, abstract: false, final false
inline void set_optInPiplConsentStatus(::Unity::Services::Analytics::Internal::ConsentStatus  value) ;

/// @brief Method set_optOutConsentStatus, addr 0x2e919a4, size 0x8, virtual false, abstract: false, final false
inline void set_optOutConsentStatus(::Unity::Services::Analytics::Internal::ConsentStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsentTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsentTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsentTracker(ConsentTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsentTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsentTracker(ConsentTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11882};

/// @brief Field m_GeoAPI, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IGeoAPI*  ___m_GeoAPI;

/// @brief Field m_CoreStatsHelper, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Analytics::ICoreStatsHelper*  ___m_CoreStatsHelper;

/// @brief Field <optInPiplConsentStatus>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Unity::Services::Analytics::Internal::ConsentStatus  ____optInPiplConsentStatus_k__BackingField;

/// @brief Field <optOutConsentStatus>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::Unity::Services::Analytics::Internal::ConsentStatus  ____optOutConsentStatus_k__BackingField;

/// @brief Field response, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::GeoIPResponse*  ___response;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentTracker, ___m_GeoAPI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentTracker, ___m_CoreStatsHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentTracker, ____optInPiplConsentStatus_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentTracker, ____optOutConsentStatus_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::ConsentTracker, ___response) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::ConsentTracker, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::ConsentTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::ConsentTracker*, "Unity.Services.Analytics.Internal", "ConsentTracker");
