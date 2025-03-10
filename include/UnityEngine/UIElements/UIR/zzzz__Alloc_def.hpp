#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Alloc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Alloc)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Alloc);
// Dependencies 
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.Alloc
struct CORDL_TYPE Alloc {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Alloc() ;

// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: None }]
constexpr Alloc(uint32_t  start, uint32_t  size, ::System::Object*  handle, bool  shortLived) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field start, offset: 0x0, size: 0x4, def value: None
 uint32_t  start;

/// @brief Field size, offset: 0x4, size: 0x4, def value: None
 uint32_t  size;

/// @brief Field handle, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  handle;

/// @brief Field shortLived, offset: 0x10, size: 0x1, def value: None
 bool  shortLived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Alloc, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Alloc, size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Alloc, handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Alloc, shortLived) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Alloc, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Alloc, "UnityEngine.UIElements.UIR", "Alloc");
