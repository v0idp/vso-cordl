#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreePackageHashException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__HashException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreePackageHashException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTreePackageHashException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTreePackageHashException);
// Dependencies Unity.Services.Core.Internal.HashException
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.DependencyTreePackageHashException
class CORDL_TYPE DependencyTreePackageHashException : public ::Unity::Services::Core::Internal::HashException {
public:
// Declarations
static inline ::Unity::Services::Core::Internal::DependencyTreePackageHashException* New_ctor(int32_t  hash, ::StringW  message) ;

static inline ::Unity::Services::Core::Internal::DependencyTreePackageHashException* New_ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x2ea1e60, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash, ::StringW  message) ;

/// @brief Method .ctor, addr 0x2ea1d6c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DependencyTreePackageHashException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreePackageHashException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DependencyTreePackageHashException(DependencyTreePackageHashException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreePackageHashException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DependencyTreePackageHashException(DependencyTreePackageHashException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreePackageHashException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTreePackageHashException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreePackageHashException*, "Unity.Services.Core.Internal", "DependencyTreePackageHashException");
