#pragma once
// IWYU pragma private; include "RSG/RejectHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RejectHandler)
namespace RSG {
class IRejectable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace RSG {
struct RejectHandler;
}
// Write type traits
MARK_VAL_T(::RSG::RejectHandler);
// Dependencies 
namespace RSG {
// Is value type: true
// CS Name: RSG.RejectHandler
struct CORDL_TYPE RejectHandler {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RejectHandler() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<::System::Exception*>*", modifiers: "", def_value: None }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: None }]
constexpr RejectHandler(::System::Action_1<::System::Exception*>*  callback, ::RSG::IRejectable*  rejectable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field callback, offset: 0x0, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  callback;

/// @brief Field rejectable, offset: 0x8, size: 0x8, def value: None
 ::RSG::IRejectable*  rejectable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::RSG::RejectHandler, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RSG::RejectHandler, rejectable) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::RejectHandler, 0x10>, "Size mismatch!");

} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE(::RSG::RejectHandler, "RSG", "RejectHandler");
