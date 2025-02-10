#pragma once
// IWYU pragma private; include "RSG/ProgressHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProgressHandler)
namespace RSG {
class IRejectable;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace RSG {
struct ProgressHandler;
}
// Write type traits
MARK_VAL_T(::RSG::ProgressHandler);
// Dependencies 
namespace RSG {
// Is value type: true
// CS Name: RSG.ProgressHandler
struct CORDL_TYPE ProgressHandler {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProgressHandler() ;

// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: None }]
constexpr ProgressHandler(::System::Action_1<float_t>*  callback, ::RSG::IRejectable*  rejectable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field callback, offset: 0x0, size: 0x8, def value: None
 ::System::Action_1<float_t>*  callback;

/// @brief Field rejectable, offset: 0x8, size: 0x8, def value: None
 ::RSG::IRejectable*  rejectable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::RSG::ProgressHandler, callback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RSG::ProgressHandler, rejectable) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::ProgressHandler, 0x10>, "Size mismatch!");

} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE(::RSG::ProgressHandler, "RSG", "ProgressHandler");
