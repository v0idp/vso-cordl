#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IDiskCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDiskCache)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IDiskCache;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IDiskCache);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IDiskCache
class CORDL_TYPE IDiskCache {
public:
// Declarations
/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Write(::System::Collections::Generic::List_1<int32_t>*  eventEndIndices, ::System::IO::Stream*  payload) ;

// Ctor Parameters [CppParam { name: "", ty: "IDiskCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDiskCache(IDiskCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IDiskCache);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IDiskCache*, "Unity.Services.Analytics.Internal", "IDiskCache");
