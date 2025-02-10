#pragma once
// IWYU pragma private; include "VROSC/PassthroughEnabler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PassthroughEnabler)
namespace GlobalNamespace {
class Environment;
}
// Forward declare root types
namespace VROSC {
class PassthroughEnabler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PassthroughEnabler);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PassthroughEnabler
class CORDL_TYPE PassthroughEnabler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _environment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__environment, put=__cordl_internal_set__environment)) ::UnityW<::GlobalNamespace::Environment>  _environment;

/// @brief Method Awake, addr 0x16f021c, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method NewEnvironmentSelected, addr 0x16f0438, size 0xcc, virtual false, abstract: false, final false
inline void NewEnvironmentSelected(::GlobalNamespace::Environment*  environment) ;

static inline ::VROSC::PassthroughEnabler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16f0340, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::GlobalNamespace::Environment> const& __cordl_internal_get__environment() const;

constexpr ::UnityW<::GlobalNamespace::Environment>& __cordl_internal_get__environment() ;

constexpr void __cordl_internal_set__environment(::UnityW<::GlobalNamespace::Environment>  value) ;

/// @brief Method .ctor, addr 0x16f065c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PassthroughEnabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PassthroughEnabler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PassthroughEnabler(PassthroughEnabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PassthroughEnabler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PassthroughEnabler(PassthroughEnabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{770};

/// @brief Field _environment, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Environment>  ____environment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PassthroughEnabler, ____environment) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PassthroughEnabler, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PassthroughEnabler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PassthroughEnabler*, "VROSC", "PassthroughEnabler");
