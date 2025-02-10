#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreeComponentHashException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__HashException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreeComponentHashException)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTreeComponentHashException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTreeComponentHashException);
// Dependencies Unity.Services.Core.Internal.HashException
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.DependencyTreeComponentHashException
class CORDL_TYPE DependencyTreeComponentHashException : public ::Unity::Services::Core::Internal::HashException {
public:
// Declarations
static inline ::Unity::Services::Core::Internal::DependencyTreeComponentHashException* New_ctor(int32_t  hash, ::StringW  message) ;

/// @brief Method .ctor, addr 0x2ea1e5c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DependencyTreeComponentHashException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreeComponentHashException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DependencyTreeComponentHashException(DependencyTreeComponentHashException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreeComponentHashException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DependencyTreeComponentHashException(DependencyTreeComponentHashException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeComponentHashException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTreeComponentHashException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeComponentHashException*, "Unity.Services.Core.Internal", "DependencyTreeComponentHashException");
