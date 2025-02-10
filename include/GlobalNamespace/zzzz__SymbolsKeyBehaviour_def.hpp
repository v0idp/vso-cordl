#pragma once
// IWYU pragma private; include "GlobalNamespace/SymbolsKeyBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SymbolsKeyBehaviour)
namespace GlobalNamespace {
class Key;
}
namespace GlobalNamespace {
class ShiftKeyBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class SymbolsKeyBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SymbolsKeyBehaviour);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SymbolsKeyBehaviour
class CORDL_TYPE SymbolsKeyBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ShiftBehaviour, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShiftBehaviour, put=__cordl_internal_set_ShiftBehaviour)) ::UnityW<::GlobalNamespace::ShiftKeyBehaviour>  ShiftBehaviour;

/// @brief Field symbolKeyController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_symbolKeyController, put=__cordl_internal_set_symbolKeyController)) ::UnityW<::GlobalNamespace::Key>  symbolKeyController;

/// @brief Method Awake, addr 0x16bae78, size 0x11c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SymbolsKeyBehaviour* New_ctor() ;

/// @brief Method OnDisable, addr 0x16bb010, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SpecialKeyPressed, addr 0x16baf94, size 0x7c, virtual false, abstract: false, final false
inline void SpecialKeyPressed(::GlobalNamespace::Key*  key) ;

constexpr ::UnityW<::GlobalNamespace::ShiftKeyBehaviour> const& __cordl_internal_get_ShiftBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::ShiftKeyBehaviour>& __cordl_internal_get_ShiftBehaviour() ;

constexpr ::UnityW<::GlobalNamespace::Key> const& __cordl_internal_get_symbolKeyController() const;

constexpr ::UnityW<::GlobalNamespace::Key>& __cordl_internal_get_symbolKeyController() ;

constexpr void __cordl_internal_set_ShiftBehaviour(::UnityW<::GlobalNamespace::ShiftKeyBehaviour>  value) ;

constexpr void __cordl_internal_set_symbolKeyController(::UnityW<::GlobalNamespace::Key>  value) ;

/// @brief Method .ctor, addr 0x16bb108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SymbolsKeyBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SymbolsKeyBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SymbolsKeyBehaviour(SymbolsKeyBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SymbolsKeyBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SymbolsKeyBehaviour(SymbolsKeyBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16};

/// @brief Field ShiftBehaviour, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ShiftKeyBehaviour>  ___ShiftBehaviour;

/// @brief Field symbolKeyController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Key>  ___symbolKeyController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SymbolsKeyBehaviour, ___ShiftBehaviour) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SymbolsKeyBehaviour, ___symbolKeyController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SymbolsKeyBehaviour, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SymbolsKeyBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SymbolsKeyBehaviour*, "", "SymbolsKeyBehaviour");
