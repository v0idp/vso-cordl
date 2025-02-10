#pragma once
// IWYU pragma private; include "DG/Tweening/Color2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Color2)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace DG::Tweening {
struct Color2;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Color2);
// Dependencies UnityEngine.Color
namespace DG::Tweening {
// Is value type: true
// CS Name: DG.Tweening.Color2
struct CORDL_TYPE Color2 {
public:
// Declarations
/// @brief Method .ctor, addr 0x18c18bc, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  ca, ::UnityEngine::Color  cb) ;

/// @brief Method op_Addition, addr 0x18c18d0, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Color2 op_Addition(::DG::Tweening::Color2  c1, ::DG::Tweening::Color2  c2) ;

/// @brief Method op_Multiply, addr 0x18c1900, size 0x14, virtual false, abstract: false, final false
static inline ::DG::Tweening::Color2 op_Multiply(::DG::Tweening::Color2  c1, float_t  f) ;

/// @brief Method op_Subtraction, addr 0x18c18e8, size 0x18, virtual false, abstract: false, final false
static inline ::DG::Tweening::Color2 op_Subtraction(::DG::Tweening::Color2  c1, ::DG::Tweening::Color2  c2) ;

// Ctor Parameters []
// @brief default ctor
constexpr Color2() ;

// Ctor Parameters [CppParam { name: "ca", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "cb", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr Color2(::UnityEngine::Color  ca, ::UnityEngine::Color  cb) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ca, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  ca;

/// @brief Field cb, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  cb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Color2, ca) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Color2, cb) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Color2, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Color2, "DG.Tweening", "Color2");
