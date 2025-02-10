#pragma once
// IWYU pragma private; include "VROSC/BypassOnExternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BypassOnExternal)
namespace VROSC {
class SignalNode;
}
// Forward declare root types
namespace VROSC {
class BypassOnExternal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BypassOnExternal);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BypassOnExternal
class CORDL_TYPE BypassOnExternal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _nodeToBypass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodeToBypass, put=__cordl_internal_set__nodeToBypass)) ::UnityW<::VROSC::SignalNode>  _nodeToBypass;

/// @brief Method Awake, addr 0x17221e4, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::BypassOnExternal* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17223cc, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x17222dc, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UseExternalChanged, addr 0x1722348, size 0x84, virtual false, abstract: false, final false
inline void UseExternalChanged(bool  useExternal) ;

constexpr ::UnityW<::VROSC::SignalNode> const& __cordl_internal_get__nodeToBypass() const;

constexpr ::UnityW<::VROSC::SignalNode>& __cordl_internal_get__nodeToBypass() ;

constexpr void __cordl_internal_set__nodeToBypass(::UnityW<::VROSC::SignalNode>  value) ;

/// @brief Method .ctor, addr 0x17224c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BypassOnExternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BypassOnExternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BypassOnExternal(BypassOnExternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BypassOnExternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BypassOnExternal(BypassOnExternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{998};

/// @brief Field _nodeToBypass, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SignalNode>  ____nodeToBypass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BypassOnExternal, ____nodeToBypass) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BypassOnExternal, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BypassOnExternal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BypassOnExternal*, "VROSC", "BypassOnExternal");
