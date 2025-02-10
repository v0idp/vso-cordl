#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/DiskCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDiskCache_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiskCache)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace Unity::Services::Analytics::Internal {
class IFileSystemCalls;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class DiskCache;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::DiskCache);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IDiskCache
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.DiskCache
class CORDL_TYPE DiskCache : public ::System::Object {
public:
// Declarations
/// @brief Field k_CacheFileMaximumSize, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_CacheFileMaximumSize, put=__cordl_internal_set_k_CacheFileMaximumSize)) int64_t  k_CacheFileMaximumSize;

/// @brief Field k_CacheFilePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_CacheFilePath, put=__cordl_internal_set_k_CacheFilePath)) ::StringW  k_CacheFilePath;

/// @brief Field k_SystemCalls, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_SystemCalls, put=__cordl_internal_set_k_SystemCalls)) ::Unity::Services::Analytics::Internal::IFileSystemCalls*  k_SystemCalls;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IDiskCache"
constexpr operator  ::Unity::Services::Analytics::Internal::IDiskCache*() noexcept;

/// @brief Method Clear, addr 0x2e92544, size 0x198, virtual true, abstract: false, final true
inline void Clear() ;

static inline ::Unity::Services::Analytics::Internal::DiskCache* New_ctor(::Unity::Services::Analytics::Internal::IFileSystemCalls*  systemCalls) ;

/// @brief Method Write, addr 0x2e91f9c, size 0x5a8, virtual true, abstract: false, final true
inline void Write(::System::Collections::Generic::List_1<int32_t>*  eventEndIndices, ::System::IO::Stream*  payload) ;

constexpr int64_t const& __cordl_internal_get_k_CacheFileMaximumSize() const;

constexpr int64_t& __cordl_internal_get_k_CacheFileMaximumSize() ;

constexpr ::StringW const& __cordl_internal_get_k_CacheFilePath() const;

constexpr ::StringW& __cordl_internal_get_k_CacheFilePath() ;

constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls* const& __cordl_internal_get_k_SystemCalls() const;

constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls*& __cordl_internal_get_k_SystemCalls() ;

constexpr void __cordl_internal_set_k_CacheFileMaximumSize(int64_t  value) ;

constexpr void __cordl_internal_set_k_CacheFilePath(::StringW  value) ;

constexpr void __cordl_internal_set_k_SystemCalls(::Unity::Services::Analytics::Internal::IFileSystemCalls*  value) ;

/// @brief Method .ctor, addr 0x2e8a86c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::Internal::IFileSystemCalls*  systemCalls) ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IDiskCache"
constexpr ::Unity::Services::Analytics::Internal::IDiskCache* i___Unity__Services__Analytics__Internal__IDiskCache() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiskCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiskCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiskCache(DiskCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiskCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiskCache(DiskCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11889};

/// @brief Field k_CacheFilePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___k_CacheFilePath;

/// @brief Field k_SystemCalls, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IFileSystemCalls*  ___k_SystemCalls;

/// @brief Field k_CacheFileMaximumSize, offset: 0x20, size: 0x8, def value: None
 int64_t  ___k_CacheFileMaximumSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::DiskCache, ___k_CacheFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::DiskCache, ___k_SystemCalls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::DiskCache, ___k_CacheFileMaximumSize) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::DiskCache, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::DiskCache);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::DiskCache*, "Unity.Services.Analytics.Internal", "DiskCache");
