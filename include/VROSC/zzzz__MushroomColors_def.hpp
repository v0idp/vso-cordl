#pragma once
// IWYU pragma private; include "VROSC/MushroomColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MushroomColors)
// Forward declare root types
namespace VROSC {
class MushroomColors;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MushroomColors);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MushroomColors
class CORDL_TYPE MushroomColors : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Clear, addr 0x17b0714, size 0xb8, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::VROSC::MushroomColors* New_ctor() ;

/// @brief Method OnDisable, addr 0x17b07cc, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17b0710, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x17b07d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MushroomColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MushroomColors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MushroomColors(MushroomColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MushroomColors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MushroomColors(MushroomColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MushroomColors, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MushroomColors);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MushroomColors*, "VROSC", "MushroomColors");
