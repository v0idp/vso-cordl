#pragma once
// IWYU pragma private; include "VROSC/SetupPlatformSelectorState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupPlatformSelectorState)
namespace System {
class Object;
}
namespace VROSC {
class PlatformSelector;
}
// Forward declare root types
namespace VROSC {
class SetupPlatformSelectorState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupPlatformSelectorState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupPlatformSelectorState
class CORDL_TYPE SetupPlatformSelectorState : public ::System::Object {
public:
// Declarations
/// @brief Field _platformSelector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformSelector, put=__cordl_internal_set__platformSelector)) ::UnityW<::VROSC::PlatformSelector>  _platformSelector;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupPlatformSelectorState* New_ctor(::VROSC::PlatformSelector*  platformSelector) ;

/// @brief Method OnEnter, addr 0x16fa398, size 0x18, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa3b0, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa3b4, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa3b8, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::PlatformSelector> const& __cordl_internal_get__platformSelector() const;

constexpr ::UnityW<::VROSC::PlatformSelector>& __cordl_internal_get__platformSelector() ;

constexpr void __cordl_internal_set__platformSelector(::UnityW<::VROSC::PlatformSelector>  value) ;

/// @brief Method .ctor, addr 0x16fa370, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::PlatformSelector*  platformSelector) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupPlatformSelectorState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupPlatformSelectorState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupPlatformSelectorState(SetupPlatformSelectorState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupPlatformSelectorState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupPlatformSelectorState(SetupPlatformSelectorState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{818};

/// @brief Field _platformSelector, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::PlatformSelector>  ____platformSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupPlatformSelectorState, ____platformSelector) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupPlatformSelectorState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupPlatformSelectorState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupPlatformSelectorState*, "VROSC", "SetupPlatformSelectorState");
