#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreeInitializeOrderSorter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DependencyTreeInitializeOrderSorter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace Unity::Services::Core::Internal {
struct DependencyTreeInitializeOrderSorter_ExplorationMark;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
struct DependencyTreeInitializeOrderSorter_ExplorationMark;
}
namespace Unity::Services::Core::Internal {
struct DependencyTreeInitializeOrderSorter;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark);
MARK_VAL_T(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter);
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark
struct CORDL_TYPE DependencyTreeInitializeOrderSorter_ExplorationMark {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DependencyTreeInitializeOrderSorter_ExplorationMark_Unwrapped
enum struct __DependencyTreeInitializeOrderSorter_ExplorationMark_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Viewed = static_cast<int32_t>(0x1),
__E_Sorted = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DependencyTreeInitializeOrderSorter_ExplorationMark_Unwrapped () const noexcept {
return static_cast<__DependencyTreeInitializeOrderSorter_ExplorationMark_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DependencyTreeInitializeOrderSorter_ExplorationMark() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DependencyTreeInitializeOrderSorter_ExplorationMark(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark const None;

/// @brief Field Sorted value: I32(2)
static ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark const Sorted;

/// @brief Field Viewed value: I32(1)
static ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark const Viewed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11990};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct CORDL_TYPE DependencyTreeInitializeOrderSorter {
public:
// Declarations
using ExplorationMark = ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark;

/// @brief Method GetDependencyTypeHashesFor, addr 0x2ea199c, size 0xec, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* GetDependencyTypeHashesFor(int32_t  packageTypeHash) ;

/// @brief Method GetPackageTypeHashFor, addr 0x2ea1d70, size 0xec, virtual false, abstract: false, final false
inline int32_t GetPackageTypeHashFor(int32_t  componentTypeHash) ;

/// @brief Method GetPackageTypeHashes, addr 0x2ea1440, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>* GetPackageTypeHashes() ;

/// @brief Method MarkPackage, addr 0x2ea1934, size 0x68, virtual false, abstract: false, final false
inline void MarkPackage(int32_t  packageTypeHash, ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark  mark) ;

/// @brief Method RemoveUnprovidedOptionalDependencies, addr 0x2ea1780, size 0x1b4, virtual false, abstract: false, final false
inline void RemoveUnprovidedOptionalDependencies(::System::Collections::Generic::IList_1<int32_t>*  dependencyTypeHashes) ;

/// @brief Method RemoveUnprovidedOptionalDependenciesFromTree, addr 0x2ea12e8, size 0x158, virtual false, abstract: false, final false
inline void RemoveUnprovidedOptionalDependenciesFromTree() ;

/// @brief Method SortRegisteredPackagesIntoTarget, addr 0x2ea0e24, size 0x4c4, virtual false, abstract: false, final false
inline void SortRegisteredPackagesIntoTarget() ;

/// @brief Method SortTreeThrough, addr 0x2ea1a88, size 0x2e4, virtual false, abstract: false, final false
inline void SortTreeThrough(::System::Collections::Generic::IEnumerable_1<int32_t>*  dependencyTypeHashes) ;

/// @brief Method SortTreeThrough, addr 0x2ea1498, size 0x2e8, virtual false, abstract: false, final false
inline void SortTreeThrough(int32_t  packageTypeHash) ;

/// @brief Method .ctor, addr 0x2ea0e18, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::DependencyTree*  tree, ::System::Collections::Generic::ICollection_1<int32_t>*  target) ;

// Ctor Parameters []
// @brief default ctor
constexpr DependencyTreeInitializeOrderSorter() ;

// Ctor Parameters [CppParam { name: "Tree", ty: "::Unity::Services::Core::Internal::DependencyTree*", modifiers: "", def_value: None }, CppParam { name: "Target", ty: "::System::Collections::Generic::ICollection_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_PackageTypeHashExplorationHistory", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark>*", modifiers: "", def_value: None }]
constexpr DependencyTreeInitializeOrderSorter(::Unity::Services::Core::Internal::DependencyTree*  Tree, ::System::Collections::Generic::ICollection_1<int32_t>*  Target, ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark>*  m_PackageTypeHashExplorationHistory) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Tree, offset: 0x0, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::DependencyTree*  Tree;

/// @brief Field Target, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<int32_t>*  Target;

/// @brief Field m_PackageTypeHashExplorationHistory, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark>*  m_PackageTypeHashExplorationHistory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter, Tree) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter, Target) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter, m_PackageTypeHashExplorationHistory) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter_ExplorationMark, "Unity.Services.Core.Internal", "DependencyTreeInitializeOrderSorter/ExplorationMark");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter, "Unity.Services.Core.Internal", "DependencyTreeInitializeOrderSorter");
