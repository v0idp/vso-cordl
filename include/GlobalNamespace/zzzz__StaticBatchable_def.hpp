#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatchable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticBatchable)
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBatchable);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticBatchable
class CORDL_TYPE StaticBatchable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method BeforeBatching, addr 0x16c54f0, size 0x4, virtual true, abstract: false, final false
inline void BeforeBatching() ;

static inline ::GlobalNamespace::StaticBatchable* New_ctor() ;

/// @brief Method .ctor, addr 0x16c54f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticBatchable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticBatchable(StaticBatchable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticBatchable(StaticBatchable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{68};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatchable, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBatchable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatchable*, "", "StaticBatchable");
