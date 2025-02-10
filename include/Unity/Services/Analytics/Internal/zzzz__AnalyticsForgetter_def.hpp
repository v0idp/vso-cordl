#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsForgetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IAnalyticsForgetter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsForgetter)
namespace System {
class Action;
}
namespace Unity::Services::Analytics::Internal {
struct AnalyticsForgetter_DataDeletionStatus;
}
namespace Unity::Services::Analytics::Internal {
class IPersistence;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequestHelper;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequest;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
struct AnalyticsForgetter_DataDeletionStatus;
}
namespace Unity::Services::Analytics::Internal {
class AnalyticsForgetter;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus);
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::AnalyticsForgetter);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: true
// CS Name: Unity.Services.Analytics.Internal.AnalyticsForgetter/DataDeletionStatus
struct CORDL_TYPE AnalyticsForgetter_DataDeletionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnalyticsForgetter_DataDeletionStatus_Unwrapped
enum struct __AnalyticsForgetter_DataDeletionStatus_Unwrapped : int32_t {
__E_DataAllowed = static_cast<int32_t>(0x0),
__E_DeletionInProgress = static_cast<int32_t>(0x1),
__E_SuccessfullyDeleted = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsForgetter_DataDeletionStatus_Unwrapped () const noexcept {
return static_cast<__AnalyticsForgetter_DataDeletionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsForgetter_DataDeletionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsForgetter_DataDeletionStatus(int32_t  value__) noexcept;

/// @brief Field DataAllowed value: I32(0)
static ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus const DataAllowed;

/// @brief Field DeletionInProgress value: I32(1)
static ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus const DeletionInProgress;

/// @brief Field SuccessfullyDeleted value: I32(2)
static ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus const SuccessfullyDeleted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
// Dependencies System.Object, Unity.Services.Analytics.Internal.AnalyticsForgetter::DataDeletionStatus, Unity.Services.Analytics.Internal.IAnalyticsForgetter
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.AnalyticsForgetter
class CORDL_TYPE AnalyticsForgetter : public ::System::Object {
public:
// Declarations
using DataDeletionStatus = ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus;

 __declspec(property(get=get_DeletionInProgress)) bool  DeletionInProgress;

/// @brief Field m_Callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Callback, put=__cordl_internal_set_m_Callback)) ::System::Action*  m_Callback;

/// @brief Field m_CollectUrl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CollectUrl, put=__cordl_internal_set_m_CollectUrl)) ::StringW  m_CollectUrl;

/// @brief Field m_DeletionStatus, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeletionStatus, put=__cordl_internal_set_m_DeletionStatus)) ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  m_DeletionStatus;

/// @brief Field m_Event, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Event, put=__cordl_internal_set_m_Event)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_Event;

/// @brief Field m_Persistence, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Persistence, put=__cordl_internal_set_m_Persistence)) ::Unity::Services::Analytics::Internal::IPersistence*  m_Persistence;

/// @brief Field m_Request, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Request, put=__cordl_internal_set_m_Request)) ::Unity::Services::Analytics::Internal::IWebRequest*  m_Request;

/// @brief Field m_WebRequestHelper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WebRequestHelper, put=__cordl_internal_set_m_WebRequestHelper)) ::Unity::Services::Analytics::Internal::IWebRequestHelper*  m_WebRequestHelper;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IAnalyticsForgetter"
constexpr operator  ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*() noexcept;

/// @brief Method AttemptToForget, addr 0x2e8fdc0, size 0x588, virtual true, abstract: false, final true
inline void AttemptToForget(::StringW  userId, ::StringW  installationId, ::StringW  playerId, ::StringW  timestamp, ::StringW  callingMethod, ::System::Action*  successfulUploadCallback) ;

static inline ::Unity::Services::Analytics::Internal::AnalyticsForgetter* New_ctor(::StringW  collectUrl, ::Unity::Services::Analytics::Internal::IPersistence*  persistence, ::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper) ;

/// @brief Method SetForgettingStatus, addr 0x2e8fcf8, size 0xc8, virtual false, abstract: false, final false
inline void SetForgettingStatus(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  state) ;

/// @brief Method UploadComplete, addr 0x2e90348, size 0x150, virtual false, abstract: false, final false
inline void UploadComplete(int64_t  code) ;

constexpr ::System::Action* const& __cordl_internal_get_m_Callback() const;

constexpr ::System::Action*& __cordl_internal_get_m_Callback() ;

constexpr ::StringW const& __cordl_internal_get_m_CollectUrl() const;

constexpr ::StringW& __cordl_internal_get_m_CollectUrl() ;

constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus const& __cordl_internal_get_m_DeletionStatus() const;

constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus& __cordl_internal_get_m_DeletionStatus() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_m_Event() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_m_Event() ;

constexpr ::Unity::Services::Analytics::Internal::IPersistence* const& __cordl_internal_get_m_Persistence() const;

constexpr ::Unity::Services::Analytics::Internal::IPersistence*& __cordl_internal_get_m_Persistence() ;

constexpr ::Unity::Services::Analytics::Internal::IWebRequest* const& __cordl_internal_get_m_Request() const;

constexpr ::Unity::Services::Analytics::Internal::IWebRequest*& __cordl_internal_get_m_Request() ;

constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper* const& __cordl_internal_get_m_WebRequestHelper() const;

constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper*& __cordl_internal_get_m_WebRequestHelper() ;

constexpr void __cordl_internal_set_m_Callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_CollectUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_DeletionStatus(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  value) ;

constexpr void __cordl_internal_set_m_Event(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_m_Persistence(::Unity::Services::Analytics::Internal::IPersistence*  value) ;

constexpr void __cordl_internal_set_m_Request(::Unity::Services::Analytics::Internal::IWebRequest*  value) ;

constexpr void __cordl_internal_set_m_WebRequestHelper(::Unity::Services::Analytics::Internal::IWebRequestHelper*  value) ;

/// @brief Method .ctor, addr 0x2e8b1d0, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  collectUrl, ::Unity::Services::Analytics::Internal::IPersistence*  persistence, ::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper) ;

/// @brief Method get_DeletionInProgress, addr 0x2e8fce8, size 0x10, virtual true, abstract: false, final true
inline bool get_DeletionInProgress() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IAnalyticsForgetter"
constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter* i___Unity__Services__Analytics__Internal__IAnalyticsForgetter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsForgetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsForgetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsForgetter(AnalyticsForgetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsForgetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsForgetter(AnalyticsForgetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11873};

/// @brief Field m_CollectUrl, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_CollectUrl;

/// @brief Field m_Persistence, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IPersistence*  ___m_Persistence;

/// @brief Field m_WebRequestHelper, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IWebRequestHelper*  ___m_WebRequestHelper;

/// @brief Field m_Event, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___m_Event;

/// @brief Field m_Callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___m_Callback;

/// @brief Field m_DeletionStatus, offset: 0x38, size: 0x4, def value: None
 ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  ___m_DeletionStatus;

/// @brief Field m_Request, offset: 0x40, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IWebRequest*  ___m_Request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_CollectUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_Persistence) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_WebRequestHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_Event) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_Callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_DeletionStatus) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::AnalyticsForgetter, ___m_Request) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::AnalyticsForgetter, 0x48>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus, "Unity.Services.Analytics.Internal", "AnalyticsForgetter/DataDeletionStatus");
NEED_NO_BOX(::Unity::Services::Analytics::Internal::AnalyticsForgetter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::AnalyticsForgetter*, "Unity.Services.Analytics.Internal", "AnalyticsForgetter");
