#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IPersistence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPersistence)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IPersistence;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IPersistence);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IPersistence
class CORDL_TYPE IPersistence {
public:
// Declarations
/// @brief Method LoadValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t LoadValue(::StringW  key) ;

/// @brief Method SaveValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveValue(::StringW  key, int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPersistence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPersistence(IPersistence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IPersistence*, "Unity.Services.Analytics.Internal", "IPersistence");
