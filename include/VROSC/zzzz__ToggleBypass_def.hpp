#pragma once
// IWYU pragma private; include "VROSC/ToggleBypass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(ToggleBypass)
namespace VROSC {
class SignalNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ToggleBypass;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToggleBypass);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToggleBypass
class CORDL_TYPE ToggleBypass : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _nodesToToggle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodesToToggle, put=__cordl_internal_set__nodesToToggle)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _nodesToToggle;

static inline ::VROSC::ToggleBypass* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720b48, size 0xcc, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__nodesToToggle() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__nodesToToggle() ;

constexpr void __cordl_internal_set__nodesToToggle(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

/// @brief Method .ctor, addr 0x1720c14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleBypass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleBypass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleBypass(ToggleBypass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleBypass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleBypass(ToggleBypass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{974};

/// @brief Field _nodesToToggle, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____nodesToToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToggleBypass, ____nodesToToggle) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToggleBypass, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToggleBypass);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToggleBypass*, "VROSC", "ToggleBypass");
