#pragma once
// IWYU pragma private; include "VROSC/SetupRemoteConfigManagerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupRemoteConfigManagerState)
namespace System {
class Object;
}
namespace VROSC {
class RemoteConfigManager;
}
// Forward declare root types
namespace VROSC {
class SetupRemoteConfigManagerState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupRemoteConfigManagerState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupRemoteConfigManagerState
class CORDL_TYPE SetupRemoteConfigManagerState : public ::System::Object {
public:
// Declarations
/// @brief Field _remoteConfigManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteConfigManager, put=__cordl_internal_set__remoteConfigManager)) ::VROSC::RemoteConfigManager*  _remoteConfigManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupRemoteConfigManagerState* New_ctor(::VROSC::RemoteConfigManager*  remoteConfigManager) ;

/// @brief Method OnEnter, addr 0x16fa3e4, size 0x18, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa3fc, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa400, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa404, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::VROSC::RemoteConfigManager* const& __cordl_internal_get__remoteConfigManager() const;

constexpr ::VROSC::RemoteConfigManager*& __cordl_internal_get__remoteConfigManager() ;

constexpr void __cordl_internal_set__remoteConfigManager(::VROSC::RemoteConfigManager*  value) ;

/// @brief Method .ctor, addr 0x16fa3bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::RemoteConfigManager*  remoteConfigManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupRemoteConfigManagerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupRemoteConfigManagerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupRemoteConfigManagerState(SetupRemoteConfigManagerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupRemoteConfigManagerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupRemoteConfigManagerState(SetupRemoteConfigManagerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{819};

/// @brief Field _remoteConfigManager, offset: 0x10, size: 0x8, def value: None
 ::VROSC::RemoteConfigManager*  ____remoteConfigManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupRemoteConfigManagerState, ____remoteConfigManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupRemoteConfigManagerState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupRemoteConfigManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupRemoteConfigManagerState*, "VROSC", "SetupRemoteConfigManagerState");
