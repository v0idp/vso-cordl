#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/Dispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDispatcher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dispatcher)
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequestHelper;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequest;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class Dispatcher;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::Dispatcher);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IDispatcher
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.Dispatcher
class CORDL_TYPE Dispatcher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConsecutiveFailedUploadCount, put=set_ConsecutiveFailedUploadCount)) int32_t  ConsecutiveFailedUploadCount;

 __declspec(property(get=get_FlushInProgress, put=set_FlushInProgress)) bool  FlushInProgress;

/// @brief Field <ConsecutiveFailedUploadCount>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ConsecutiveFailedUploadCount_k__BackingField, put=__cordl_internal_set__ConsecutiveFailedUploadCount_k__BackingField)) int32_t  _ConsecutiveFailedUploadCount_k__BackingField;

/// @brief Field <FlushInProgress>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__FlushInProgress_k__BackingField, put=__cordl_internal_set__FlushInProgress_k__BackingField)) bool  _FlushInProgress_k__BackingField;

/// @brief Field m_CollectUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CollectUrl, put=__cordl_internal_set_m_CollectUrl)) ::StringW  m_CollectUrl;

/// @brief Field m_DataBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataBuffer, put=__cordl_internal_set_m_DataBuffer)) ::Unity::Services::Analytics::Internal::IBuffer*  m_DataBuffer;

/// @brief Field m_FlushBufferIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FlushBufferIndex, put=__cordl_internal_set_m_FlushBufferIndex)) int32_t  m_FlushBufferIndex;

/// @brief Field m_FlushRequest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FlushRequest, put=__cordl_internal_set_m_FlushRequest)) ::Unity::Services::Analytics::Internal::IWebRequest*  m_FlushRequest;

/// @brief Field m_WebRequestHelper, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WebRequestHelper, put=__cordl_internal_set_m_WebRequestHelper)) ::Unity::Services::Analytics::Internal::IWebRequestHelper*  m_WebRequestHelper;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IDispatcher"
constexpr operator  ::Unity::Services::Analytics::Internal::IDispatcher*() noexcept;

/// @brief Method Flush, addr 0x2e92708, size 0x84, virtual true, abstract: false, final true
inline void Flush() ;

/// @brief Method FlushBufferToService, addr 0x2e9278c, size 0x3d8, virtual false, abstract: false, final false
inline void FlushBufferToService() ;

static inline ::Unity::Services::Analytics::Internal::Dispatcher* New_ctor(::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper, ::StringW  collectUrl) ;

/// @brief Method SetBuffer, addr 0x2e92700, size 0x8, virtual true, abstract: false, final true
inline void SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer) ;

/// @brief Method UploadCompleted, addr 0x2e92b64, size 0x2a8, virtual false, abstract: false, final false
inline void UploadCompleted(int64_t  responseCode) ;

constexpr int32_t const& __cordl_internal_get__ConsecutiveFailedUploadCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ConsecutiveFailedUploadCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FlushInProgress_k__BackingField() const;

constexpr bool& __cordl_internal_get__FlushInProgress_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_CollectUrl() const;

constexpr ::StringW& __cordl_internal_get_m_CollectUrl() ;

constexpr ::Unity::Services::Analytics::Internal::IBuffer* const& __cordl_internal_get_m_DataBuffer() const;

constexpr ::Unity::Services::Analytics::Internal::IBuffer*& __cordl_internal_get_m_DataBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_FlushBufferIndex() const;

constexpr int32_t& __cordl_internal_get_m_FlushBufferIndex() ;

constexpr ::Unity::Services::Analytics::Internal::IWebRequest* const& __cordl_internal_get_m_FlushRequest() const;

constexpr ::Unity::Services::Analytics::Internal::IWebRequest*& __cordl_internal_get_m_FlushRequest() ;

constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper* const& __cordl_internal_get_m_WebRequestHelper() const;

constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper*& __cordl_internal_get_m_WebRequestHelper() ;

constexpr void __cordl_internal_set__ConsecutiveFailedUploadCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FlushInProgress_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_CollectUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_DataBuffer(::Unity::Services::Analytics::Internal::IBuffer*  value) ;

constexpr void __cordl_internal_set_m_FlushBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_FlushRequest(::Unity::Services::Analytics::Internal::IWebRequest*  value) ;

constexpr void __cordl_internal_set_m_WebRequestHelper(::Unity::Services::Analytics::Internal::IWebRequestHelper*  value) ;

/// @brief Method .ctor, addr 0x2e8b194, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper, ::StringW  collectUrl) ;

/// @brief Method get_ConsecutiveFailedUploadCount, addr 0x2e926dc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_ConsecutiveFailedUploadCount() ;

/// @brief Method get_FlushInProgress, addr 0x2e926ec, size 0x8, virtual false, abstract: false, final false
inline bool get_FlushInProgress() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IDispatcher"
constexpr ::Unity::Services::Analytics::Internal::IDispatcher* i___Unity__Services__Analytics__Internal__IDispatcher() noexcept;

/// @brief Method set_ConsecutiveFailedUploadCount, addr 0x2e926e4, size 0x8, virtual false, abstract: false, final false
inline void set_ConsecutiveFailedUploadCount(int32_t  value) ;

/// @brief Method set_FlushInProgress, addr 0x2e926f4, size 0xc, virtual false, abstract: false, final false
inline void set_FlushInProgress(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dispatcher(Dispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dispatcher(Dispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11891};

/// @brief Field m_WebRequestHelper, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IWebRequestHelper*  ___m_WebRequestHelper;

/// @brief Field m_CollectUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_CollectUrl;

/// @brief Field m_DataBuffer, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IBuffer*  ___m_DataBuffer;

/// @brief Field m_FlushRequest, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IWebRequest*  ___m_FlushRequest;

/// @brief Field <ConsecutiveFailedUploadCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____ConsecutiveFailedUploadCount_k__BackingField;

/// @brief Field <FlushInProgress>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____FlushInProgress_k__BackingField;

/// @brief Field m_FlushBufferIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_FlushBufferIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ___m_WebRequestHelper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ___m_CollectUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ___m_DataBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ___m_FlushRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ____ConsecutiveFailedUploadCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ____FlushInProgress_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::Dispatcher, ___m_FlushBufferIndex) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::Dispatcher, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::Dispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::Dispatcher*, "Unity.Services.Analytics.Internal", "Dispatcher");
