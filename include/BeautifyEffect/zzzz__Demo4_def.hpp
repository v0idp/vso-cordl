#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Demo4)
// Forward declare root types
namespace BeautifyEffect {
class Demo4;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::Demo4);
// Dependencies UnityEngine.MonoBehaviour
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.Demo4
class CORDL_TYPE Demo4 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::BeautifyEffect::Demo4* New_ctor() ;

/// @brief Method Update, addr 0x180ee90, size 0x108, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x180efb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Demo4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Demo4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Demo4(Demo4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Demo4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Demo4(Demo4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeautifyEffect::Demo4, 0x20>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::Demo4);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Demo4*, "BeautifyEffect", "Demo4");
