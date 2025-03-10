#pragma once
// IWYU pragma private; include "System/ComponentModel/IContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IContainer)
namespace System::ComponentModel {
class ComponentCollection;
}
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class IContainer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IContainer);
// Dependencies System.IDisposable
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IContainer
class CORDL_TYPE IContainer {
public:
// Declarations
 __declspec(property(get=get_Components)) ::System::ComponentModel::ComponentCollection*  Components;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Remove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Remove(::System::ComponentModel::IComponent*  component) ;

/// @brief Method get_Components, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ComponentModel::ComponentCollection* get_Components() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IContainer(IContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IContainer*, "System.ComponentModel", "IContainer");
