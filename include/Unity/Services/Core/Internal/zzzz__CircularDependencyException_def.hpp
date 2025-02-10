#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CircularDependencyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__ServicesInitializationException_def.hpp"
CORDL_MODULE_EXPORT(CircularDependencyException)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CircularDependencyException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CircularDependencyException);
// Dependencies Unity.Services.Core.ServicesInitializationException
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CircularDependencyException
class CORDL_TYPE CircularDependencyException : public ::Unity::Services::Core::ServicesInitializationException {
public:
// Declarations
static inline ::Unity::Services::Core::Internal::CircularDependencyException* New_ctor() ;

/// @brief Method .ctor, addr 0x2e9dccc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircularDependencyException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircularDependencyException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CircularDependencyException(CircularDependencyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircularDependencyException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircularDependencyException(CircularDependencyException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CircularDependencyException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CircularDependencyException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CircularDependencyException*, "Unity.Services.Core.Internal", "CircularDependencyException");
