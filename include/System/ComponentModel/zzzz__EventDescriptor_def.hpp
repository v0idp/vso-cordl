#pragma once
// IWYU pragma private; include "System/ComponentModel/EventDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
CORDL_MODULE_EXPORT(EventDescriptor)
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventDescriptor);
// Dependencies System.ComponentModel.MemberDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.EventDescriptor
class CORDL_TYPE EventDescriptor : public ::System::ComponentModel::MemberDescriptor {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDescriptor(EventDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDescriptor(EventDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventDescriptor, 0x60>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptor*, "System.ComponentModel", "EventDescriptor");
