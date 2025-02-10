#pragma once
// IWYU pragma private; include "System/ComponentModel/IBindingList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
CORDL_MODULE_EXPORT(IBindingList)
// Forward declare root types
namespace System::ComponentModel {
class IBindingList;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IBindingList);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IBindingList
class CORDL_TYPE IBindingList {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IBindingList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBindingList(IBindingList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7622};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IBindingList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingList*, "System.ComponentModel", "IBindingList");
