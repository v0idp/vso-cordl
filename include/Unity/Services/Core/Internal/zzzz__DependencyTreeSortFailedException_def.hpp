#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreeSortFailedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreeSortFailedException)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class DependencyTreeSortFailedException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::DependencyTreeSortFailedException);
// Dependencies System.Exception
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.DependencyTreeSortFailedException
class CORDL_TYPE DependencyTreeSortFailedException : public ::System::Exception {
public:
// Declarations
/// @brief Method CreateExceptionMessage, addr 0x2e9f994, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW CreateExceptionMessage(::Unity::Services::Core::Internal::DependencyTree*  tree, ::System::Collections::Generic::ICollection_1<int32_t>*  target, ::System::Exception*  inner) ;

static inline ::Unity::Services::Core::Internal::DependencyTreeSortFailedException* New_ctor(::Unity::Services::Core::Internal::DependencyTree*  tree, ::System::Collections::Generic::ICollection_1<int32_t>*  target, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x2e9f900, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::DependencyTree*  tree, ::System::Collections::Generic::ICollection_1<int32_t>*  target, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DependencyTreeSortFailedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreeSortFailedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DependencyTreeSortFailedException(DependencyTreeSortFailedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DependencyTreeSortFailedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DependencyTreeSortFailedException(DependencyTreeSortFailedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeSortFailedException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::DependencyTreeSortFailedException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeSortFailedException*, "Unity.Services.Core.Internal", "DependencyTreeSortFailedException");
